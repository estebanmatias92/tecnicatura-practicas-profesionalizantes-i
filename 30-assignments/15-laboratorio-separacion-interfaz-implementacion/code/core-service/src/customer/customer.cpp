/**
 * @file customer.cpp
 * @brief This file contains the implementation of functions for the customer management module.
 * It includes logic for loading, saving, adding, removing, modifying,
 * listing, and searching customer data.
 */

#include "customer.hpp" // Include our own header file
#include <iostream>   // For input and output (cin, cout)
#include <fstream>    // For file handling (ifstream, ofstream)
#include <limits>     // For std::numeric_limits
#include <iomanip>    // For formatting output (setw, left)
#include <sstream>    // For string stream operations (parsing CSV lines)

/**
 * @brief Displays the main menu options for the customer management system.
 */
void displayMenu() {
    std::cout << "\n--- CUSTOMER MANAGEMENT MENU ---" << std::endl;
    std::cout << "1. Add New Customer" << std::endl;
    std::cout << "2. Remove Customer" << std::endl;
    std::cout << "3. Modify Customer" << std::endl;
    std::cout << "4. List All Customers" << std::endl;
    std::cout << "5. Search Customer by Code" << std::endl;
    std::cout << "0. Exit" << std::endl;
}

/**
 * @brief Loads customer data from the CSV file into the customer list.
 * If the file does not exist or cannot be opened, a warning is displayed,
 * and a new file will be created upon saving. It skips the header row.
 * @param list A pointer to the tCustomerList structure to populate.
 */
void loadCustomersFromFile(tCustomerList* list) {
    std::ifstream file(CUSTOMERS_FILE_NAME);
    if (!file.is_open()) {
        std::cerr << "Warning: Could not open customer file. A new one will be created upon saving." << std::endl;
        return;
    }

    list->count = 0;
    std::string line;
    // Skip header line if it exists
    std::getline(file, line); 

    while (std::getline(file, line) && list->count < MAX_CUSTOMERS) {
        std::stringstream ss(line);
        std::string segment;
        
        // Read customerCode
        std::getline(ss, segment, ',');
        list->customers[list->count].customerCode = std::stoi(segment);

        // Read dni
        std::getline(ss, segment, ',');
        list->customers[list->count].dni = segment;

        // Read lastName
        std::getline(ss, segment, ',');
        list->customers[list->count].lastName = segment;

        // Read firstName
        std::getline(ss, segment, ',');
        list->customers[list->count].firstName = segment;
        
        list->count++;
    }
    file.close();
    std::cout << "Customers loaded from " << CUSTOMERS_FILE_NAME << std::endl;
}

/**
 * @brief Saves all current customer data from the list to the CSV file.
 * This operation overwrites the existing file. It writes a header row first.
 * @param list A pointer to the constant tCustomerList structure to save.
 */
void saveCustomersToFile(const tCustomerList* list) {
    std::ofstream file(CUSTOMERS_FILE_NAME); // Opens in truncate mode (overwrite)
    if (!file.is_open()) {
        std::cerr << "Error: Could not open customer file for saving." << std::endl;
        return;
    }

    // Write CSV header
    file << "CustomerCode,DNI,LastName,FirstName" << std::endl;

    for (int i = 0; i < list->count; ++i) {
        file << list->customers[i].customerCode << ","
             << list->customers[i].dni << ","
             << list->customers[i].lastName << ","
             << list->customers[i].firstName << std::endl;
    }
    file.close();
    std::cout << "Customers saved to " << CUSTOMERS_FILE_NAME << std::endl;
}

/**
 * @brief Generates a unique customer code based on the current index.
 * The code is calculated as (index + 100).
 * @param index The current index in the customer array.
 * @return The generated customer code.
 */
int generateCustomerCode(int index) {
    return index + 100;
}

/**
 * @brief Adds a new customer to the list.
 * Prompts the user for DNI, last name, and first name.
 * Assigns a new unique customer code based on the current list count.
 * Saves changes to file immediately after adding.
 * @param list A pointer to the tCustomerList structure where the customer will be added.
 */
void addCustomer(tCustomerList* list) {
    if (list->count >= MAX_CUSTOMERS) {
        std::cout << "Error: Cannot add more customers. Limit reached." << std::endl;
        return;
    }

    tCustomer newCustomer;
    newCustomer.customerCode = generateCustomerCode(list->count); // Assign code based on index

    std::cout << "\n--- Add New Customer ---" << std::endl;
    std::cout << "Assigned Customer Code: " << newCustomer.customerCode << std::endl;
    std::cout << "Enter DNI: ";
    std::getline(std::cin, newCustomer.dni);
    std::cout << "Enter Last Name: ";
    std::getline(std::cin, newCustomer.lastName);
    std::cout << "Enter First Name: ";
    std::getline(std::cin, newCustomer.firstName);

    list->customers[list->count] = newCustomer;
    list->count++;
    std::cout << "Customer added successfully." << std::endl;

    saveCustomersToFile(list); // Save changes immediately
}

/**
 * @brief Removes a customer from the list based on their customer code.
 * If the customer is found, their data is removed by shifting subsequent elements,
 * and the list count is decremented. Saves changes to file immediately.
 * @param list A pointer to the tCustomerList structure from which the customer will be removed.
 * @param code The customer code of the customer to be removed.
 */
void removeCustomer(tCustomerList* list, int code) {
    int foundIndex = -1;
    for (int i = 0; i < list->count; ++i) {
        if (list->customers[i].customerCode == code) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        // Shift remaining elements to remove
        for (int i = foundIndex; i < list->count - 1; ++i) {
            list->customers[i] = list->customers[i + 1];
        }
        list->count--; // Decrement customer count
        std::cout << "Customer with code " << code << " removed successfully." << std::endl;
        saveCustomersToFile(list); // Save changes immediately
    } else {
        std::cout << "Customer with code " << code << " not found." << std::endl;
    }
}

/**
 * @brief Modifies the data of an existing customer.
 * Prompts the user to enter new DNI, last name, and first name.
 * Existing values are kept if the user presses Enter without input.
 * Saves changes to file immediately.
 * @param list A pointer to the tCustomerList structure where the customer will be modified.
 * @param code The customer code of the customer to be modified.
 */
void modifyCustomer(tCustomerList* list, int code) {
    int foundIndex = -1;
    for (int i = 0; i < list->count; ++i) {
        if (list->customers[i].customerCode == code) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        std::cout << "\n--- Modify Customer (Code: " << code << ") ---" << std::endl;
        std::cout << "Current data:" << std::endl;
        std::cout << "  DNI: " << list->customers[foundIndex].dni << std::endl;
        std::cout << "  Last Name: " << list->customers[foundIndex].lastName << std::endl;
        std::cout << "  First Name: " << list->customers[foundIndex].firstName << std::endl;

        std::cout << "\nEnter new DNI (or press Enter to keep current): ";
        std::string newDni;
        std::getline(std::cin, newDni);
        if (!newDni.empty()) {
            list->customers[foundIndex].dni = newDni;
        }

        std::cout << "Enter new Last Name (or press Enter to keep current): ";
        std::string newLastName;
        std::getline(std::cin, newLastName);
        if (!newLastName.empty()) {
            list->customers[foundIndex].lastName = newLastName;
        }

        std::cout << "Enter new First Name (or press Enter to keep current): ";
        std::string newFirstName;
        std::getline(std::cin, newFirstName);
        if (!newFirstName.empty()) {
            list->customers[foundIndex].firstName = newFirstName;
        }

        std::cout << "Customer modified successfully." << std::endl;
        saveCustomersToFile(list); // Save changes immediately
    } else {
        std::cout << "Customer with code " << code << " not found." << std::endl;
    }
}

/**
 * @brief Lists all customers currently in the list in a formatted table.
 * Displays a message if there are no customers to show.
 * @param list A pointer to the constant tCustomerList structure to display.
 */
void listAllCustomers(const tCustomerList* list) {
    if (list->count == 0) {
        std::cout << "No customers to display." << std::endl;
        return;
    }
    std::cout << "\n--- CUSTOMER LIST ---" << std::endl;
    std::cout << std::left << std::setw(10) << "Code"
              << std::setw(15) << "DNI"
              << std::setw(20) << "Last Name"
              << std::setw(20) << "First Name" << std::endl;
    std::cout << "------------------------------------------------------------------" << std::endl;
    for (int i = 0; i < list->count; ++i) {
        std::cout << std::left << std::setw(10) << list->customers[i].customerCode
                  << std::setw(15) << list->customers[i].dni
                  << std::setw(20) << list->customers[i].lastName
                  << std::setw(20) << list->customers[i].firstName << std::endl;
    }
    std::cout << "------------------------------------------------------------------" << std::endl;
}

/**
 * @brief Searches for a customer by their code and displays their details if found.
 * Prints a "NOT found" message if the customer code does not exist.
 * @param list A pointer to the constant tCustomerList structure to search within.
 * @param code The customer code of the customer to search for.
 */
void searchCustomerByCode(const tCustomerList* list, int code) {
    int foundIndex = -1;
    for (int i = 0; i < list->count; ++i) {
        if (list->customers[i].customerCode == code) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        std::cout << "\n--- Customer Found (Code: " << code << ") ---" << std::endl;
        std::cout << "  DNI: " << list->customers[foundIndex].dni << std::endl;
        std::cout << "  Last Name: " << list->customers[foundIndex].lastName << std::endl;
        std::cout << "  First Name: " << list->customers[foundIndex].firstName << std::endl;
    } else {
        std::cout << "Customer with code " << code << " NOT found." << std::endl;
    }
}
