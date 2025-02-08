#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
#include "./registerPage.cpp" 

class clsLogin {
private:
 
    std::string username;
    std::string password;

public:
    
    clsLogin() : username(""), password("") {}

 
    clsLogin(std::string u,  std::string p)
        : username(u), password(p) {}

    
    void setUsername(const std::string& u) { username = u; }
    void setPassword(const std::string& p) { password = p; }

    
    std::string getUsername() const { return username; }
    std::string getPassword() const { return password; }

    // check the authentication 
    void checkAuthentication(clsRegister user) {
        if (user.getUsername == username && user.getPassword == password) {
        {
            std::cout<< "Login successful!" << std::endl;
        }
        std::cout<< "Faild Login" << std::endl;


        
        
    }
};

#endif // USER_H
