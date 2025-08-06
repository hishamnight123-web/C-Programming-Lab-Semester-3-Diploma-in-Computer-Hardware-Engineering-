#include <stdio.h>

// Global variable
int balance;

// Function prototypes
void displayMenu();
void deposit();
void withdraw();
void checkBalance();

int main() {
  

    // Step 1: Read initial balance
    printf("Enter initial balance (in Rs.): ");
    //TODO read the balance

    do {
       //TODO fucntion call to display menu
        
        //TODO reach the choice

        switch(choice) {
            case 1:
                //TODO fucntion call
                break;
            case 2:
                //TODO fucntion call
                break;
            case 3:
                 //TODO fucntion call
                break;
            case 4:
                printf("Exiting the ATM. Thank you!\n");
                break;
            default:
                printf("Invalid choice. Please enter 1 to 4.\n");
        }

    } while (choice != 4);

    return 0;
}

// Function to display the ATM menu
void displayMenu() {
    printf("\n--- ATM Menu ---\n");
    printf("1. Deposit Amount\n");
    printf("2. Withdraw Amount\n");
    printf("3. Check Balance\n");
    printf("4. Exit\n");
    printf("Enter your choice (1-4): ");
}

// Function to deposit money
void deposit() {
   
    printf("Enter amount to deposit: Rs. ");
    
    //TODO 
    
 
    if (amount > 0) {
        
        //TODO update balance
        
        printf("Rs. %d deposited successfully.\n", amount);
    } else {
        printf("Invalid deposit amount.\n");
    }
}

// Function to withdraw money
void withdraw() {
    
    
    printf("Enter amount to withdraw (multiple of 100): Rs. ");
    
    //TODO
    
    

    //Print statements should exactly as below
    // printf("Withdrawal amount must be a multiple of 100.\n");
    //printf("Insufficient balance\n");
    // printf("Rs. %d withdrawn.\n", amount);
    
}

// Function to check balance
void checkBalance() {
    printf("Current balance: Rs. %d\n", balance);
}
