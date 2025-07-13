/**
 * @file main.cpp
 * @brief This is the main application file for the Customer Management System.
 * It initializes the customer list, loads data from file, and presents
 * a menu-driven interface for customer operations.
 */

#include "customer/customer.hpp" // Corrected include path
#include <iostream>   // For input and output (cin, cout)
#include <limits>     // For std::numeric_limits

/**
 * @brief The main function of the Customer Management System application.
 * It initializes the customer list, loads existing data, and runs
 * the main menu loop for user interaction.
 * @return 0 if the program executes successfully.
 */
int main() {
    tCustomerList customerList;
    customerList.count = 0; // Initialize customer count

    // Load existing customers at program start
    loadCustomersFromFile(&customerList);

    int option;

    do {
        displayMenu();
        std::cout << "Enter your option: ";
        std::cin >> option;

        // Clear input buffer after reading an integer
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (option) {
            case 1: { // 1.a: Add a new customer
                addCustomer(&customerList);
                break;
            }
            case 2: { // 1.b: Remove a customer by code
                int removeCode;
                std::cout << "Enter the customer code to remove: ";
                std::cin >> removeCode;
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                removeCustomer(&customerList, removeCode);
                break;
            }
            case 3: { // 1.c: Modify a customer
                int modifyCode;
                std::cout << "Enter the customer code to modify: ";
                std::cin >> modifyCode;
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                modifyCustomer(&customerList, modifyCode);
                break;
            }
            case 4: { // 2.a: List all customers
                listAllCustomers(&customerList);
                break;
            }
            case 5: { // 2.b: Search for a customer by code and display it
                int searchCode;
                std::cout << "Enter the customer code to search: ";
                std::cin >> searchCode;
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                searchCustomerByCode(&customerList, searchCode);
                break;
            }
            case 0:
                std::cout << "Exiting program. Saving changes..." << std::endl;
                saveCustomersToFile(&customerList); // Save changes on exit
                break;
            default:
                std::cout << "Invalid option. Please try again." << std::endl;
                break;
        }
    } while (option != 0);

    return 0;
}
