#include <iostream>
#include <string>
#include "includes/Bookcls.h"
#include "includes/Personcls.h"



int main()
{


    std::cout << " -------------------------------------------------------------" << std::endl;
    std::cout << " -------------------------------------------------------------" << std::endl;
    std::cout << " ------------ Welcome To Book Management system --------------" << std::endl;
    std::cout << " ------------     Choose One of this number   --------------" << std::endl;
    std::cout << "Create User [1]"<< std::endl;
    std::cout << "Add Book : [2]"<< std::endl;
    std::cout << "View Library : [3]"<< std::endl;
    std::cout << "Book Quantity : [4]"<< std::endl;
    std::cout << " -------------------------------------------------------------" << std::endl;
    std::cout << " -------------------------------------------------------------" << std::endl;
    std::cout << " -------------------------------------------------------------" << std::endl;
    
    int choise;
    std::cout << "Enter your choice: ";
    std::cin >> choise;
    switch (choise) {
    case 1: {
        Personcls user;
        user.setFirtName();
        user.setlastName();
        user.setGmail();
        user.setPassword();
        
        user.messageWelcome();
        break;
    }
    case 2:{
         Bookcls book;
        book.setTitle();
        book.setAuth();
        book.setPrice();
        book.setQuantity();
        book.getTitle();
        book.getAuth();
        book.getPrice();
        book.getQuantity();
        book.displayDetails();
    }
    default:
        std::cout << "Invalid choice. Please try again." << std::endl;
        break;
    }
    
   


    return 0;
}
