#include <iostream>

class Bookcls{
private:
    int id;
    std::string title;     
    std::string auth;
    double price;
    int quantity;
public:
    Bookcls() : id(0), title(""), auth(""), price(0.0), quantity(0) {}
    void setTitle(){
            std::cout<<"Put Title";
            std::cin>>this->title;
            
    }   
    std::string getTitle(){
            return title;
    }
    void setAuth(){
            std::cout<<"Put Auth";            
            std::cin>>this->auth;
    }   
    std::string getAuth(){
            return auth;
    }
    void setPrice(){
            std::cout<<"Put Price";
            std::cin>>this->price;
    }   
    double getPrice(){
            return price;
    }
    void setQuantity(){
            std::cout<<"Put Quantity";
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
