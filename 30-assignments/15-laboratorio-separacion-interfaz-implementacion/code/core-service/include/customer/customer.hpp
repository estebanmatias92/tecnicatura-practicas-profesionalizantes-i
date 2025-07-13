/**
 * @file customer.hpp
 * @brief This file contains the declarations for the customer management module.
 * It defines data structures for customers and a list of customers,
 * along with prototypes for functions to manage customer data and file operations.
 */

#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <string> // For std::string

/**
 * @brief Maximum number of customers that can be stored in the array.
 */
#define MAX_CUSTOMERS 100

/**
 * @brief The name of the CSV file used for storing customer data.
 * Declared as extern to avoid multiple definition errors when included in multiple .cpp files.
 */
extern const char* CUSTOMERS_FILE_NAME; // Declared as extern

// --- Type Definitions ---

/**
 * @brief Structure representing a single customer.
 */
typedef struct {
    int customerCode; /**< Unique code for the customer (index + 100). */
    std::string dni;  /**< Customer's DNI (identification number). */
    std::string lastName; /**< Customer's last name. */
    std::string firstName; /**< Customer's first name. */
} tCustomer;

/**
 * @brief Structure managing a list of customers.
 * It contains an array of tCustomer and the current count of customers.
 */
typedef struct {
    tCustomer customers[MAX_CUSTOMERS]; /**< Array to store customer objects. */
    int count; /**< Current number of customers in the list. */
} tCustomerList;


// --- Function Prototypes ---

/**
 * @brief Loads customer data from the CSV file into the customer list.
 * If the file does not exist or cannot be opened, a warning is displayed,
 * and a new file will be created upon saving.
 * @param list A pointer to the tCustomerList structure to populate.
 */
void loadCustomersFromFile(tCustomerList* list);

/**
 * @brief Saves all current customer data from the list to the CSV file.
 * This operation overwrites the existing file.
 * @param list A pointer to the constant tCustomerList structure to save.
 */
void saveCustomersToFile(const tCustomerList* list);

/**
 * @brief Generates a unique customer code based on the current index.
 * The code is calculated as (index + 100).
 * @param index The current index in the customer array.
 * @return The generated customer code.
 */
int generateCustomerCode(int index);

/**
 * @brief Adds a new customer to the list.
 * Prompts the user for DNI, last name, and first name.
 * Assigns a new unique customer code.
 * @param list A pointer to the tCustomerList structure where the customer will be added.
 */
void addCustomer(tCustomerList* list);

/**
 * @brief Removes a customer from the list based on their customer code.
 * If the customer is found, their data is removed, and subsequent elements are shifted.
 * @param list A pointer to the tCustomerList structure from which the customer will be removed.
 * @param code The customer code of the customer to be removed.
 */
void removeCustomer(tCustomerList* list, int code);

/**
 * @brief Modifies the data of an existing customer.
 * Prompts the user to enter new DNI, last name, and first name.
 * Existing values are kept if the user presses Enter without input.
 * @param list A pointer to the tCustomerList structure where the customer will be modified.
 * @param code The customer code of the customer to be modified.
 */
void modifyCustomer(tCustomerList* list, int code);

/**
 * @brief Lists all customers currently in the list in a formatted table.
 * Displays a message if there are no customers to show.
 * @param list A pointer to the constant tCustomerList structure to display.
 */
void listAllCustomers(const tCustomerList* list);

/**
 * @brief Searches for a customer by their code and displays their details if found.
 * Prints a "NOT found" message if the customer code does not exist.
 * @param list A pointer to the constant tCustomerList structure to search within.
 * @param code The customer code of the customer to search for.
 */
void searchCustomerByCode(const tCustomerList* list, int code);

/**
 * @brief Displays the main menu options for the customer management system.
 */
void displayMenu();

#endif // CUSTOMER_HPP
