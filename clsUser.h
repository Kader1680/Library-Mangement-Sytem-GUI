#include <iostream>
#include <string>

class clsUser {
    private:
        std::string name;
        int id;
        double fineBalance;
    
    public:
        // Default constructor
        clsUser() : id(0), fineBalance(0.0) {}
    
        // Setters
        void setName() {
            std::cout << "Enter user name: ";
            std::cin >> this->name;
        }
    
        void setId() {
            std::cout << "Enter user ID: ";
            std::cin >> this->id;
        }
    
        void setFineBalance() {
            std::cout << "Enter fine balance: ";
            std::cin >> this->fineBalance;
        }
    
        // Getters
        std::string getName() {
            return name;
        }
    
        int getId() {
            return id;
        }
    
        double getFineBalance() {
            return fineBalance;
        }
    };
    