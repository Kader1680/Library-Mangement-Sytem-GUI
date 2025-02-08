#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

class clsRegister {
private:
    int identifier;
    std::string username;
    std::string email;
    std::string password;

public:
    
    clsRegister() : identifier(0), username(""), email(""), password("") {}

 
    clsRegister(int id, std::string u, std::string em, std::string p)
        : identifier(id), username(u), email(em), password(p) {}

    
    void setUsername(const std::string& u) { username = u; }
    void setEmail(const std::string& em) { email = em; }
    void setPassword(const std::string& p) { password = p; }
    void setIdentifier(int id) { identifier = id; }

    
    int getIdentifier() const { return identifier; }
    std::string getUsername() const { return username; }
    std::string getEmail() const { return email; }
    std::string getPassword() const { return password; }

    // Method to display user details (for testing purposes)
    void displayUserDetails() const {
        std::cout << "ID: " << identifier << "\n"
                  << "Username: " << username << "\n"
                  << "Email: " << email << "\n"
                  << "Password: " << password << std::endl;
    }
};

#endif // USER_H
