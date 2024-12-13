#include <iostream>

class Bookcls{
private:
    int id;
    std::string title;     
    std::string auth;
    double price;
    int quantity;
public:
    Bookcls();
    void setTitle(std::string title){
            std::cin>>this->title;
    }   
    std::string getTitle(){
            return title;
    }
    void setAuth(std::string auth){
            std::cin>>this->auth;
    }   
    std::string getAuth(){
            return auth;
    }
    void setPrice(double price){
            std::cin>>this->price;
    }   
    double getPrice(){
            return price;
    }
    void setQuantity(int quantity){
            std::cin>>this->quantity;
    }   
    std::string getQuantity(){
            return title;
    }
    void displayDetails(){
        std::cout << "Book Title : " << title << std::endl;
        std::cout << "Book Auther : " << auth << std::endl;
        std::cout << "Book Price : " << price << std::endl;
        std::cout << "Book Quantity : " << quantity << std::endl;
    }
    // double updatePrice(double price){

    // }
};
