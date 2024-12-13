#include <iostream>
#include <string>
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
            std::cout<<"Add Book Title";
            std::cin>>this->title;

    }   
    std::string getTitle(){
            return title;
    }
    void setAuth(){
            std::cout<<"Who Is Auther Book ";

            std::cin>>this->auth;
    }   
    std::string getAuth(){
            return auth;
    }
    void setPrice(){
            std::cout<<"Set Price : ";

            std::cin>>this->price;
    }   
    double getPrice(){
            return price;
    }
    void setQuantity(){
            std::cout<<"Set Quantity : ";

            std::cin>>this->quantity;
    }   
    std::string getQuantity(){
            return title;
    }
    void displayDetails(){
        std::cout << " ---------------------------------------- " << std::endl;
        std::cout << " ---------------------------------------- " << std::endl;
        std::cout << " ------------ Book Details -------------- " << std::endl;
        std::cout << "Book Title : " << title << std::endl;
        std::cout << "Book Auther : " << auth << std::endl;
        std::cout << "Book Price : " << price << std::endl;
        std::cout << "Book Quantity : " << quantity << std::endl;
        std::cout << " ---------------------------------------- " << title << std::endl;
        std::cout << " ---------------------------------------- " << title << std::endl;

    }
    // double updatePrice(double price){

    // }
};



int main()
{


        std::cout << " -------------------------------------------------------------" << std::endl;
        std::cout << " -------------------------------------------------------------" << std::endl;
        std::cout << " ------------ Welcome To Book Management system --------------" << std::endl;
        std::cout << " ------------     Choose One of this number   --------------" << std::endl;
        std::cout << "Create User : "  << std::endl;
        std::cout << "Add Book : "     << std::endl;
        std::cout << "View Library : "     << std::endl;
        std::cout << "Book Quantity : "  << std::endl;
        std::cout << " -------------------------------------------------------------" << std::endl;
        std::cout << " -------------------------------------------------------------" << std::endl;
        std::cout << " -------------------------------------------------------------" << std::endl;

        
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


    return 0;
}
