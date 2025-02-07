#include<iostream>

class clsBook {
private:
    int identifer, years;
    std::string title, auther, Category;
    bool isAvaible;

public:
    // Default constructor
    clsBook() : identifer(0), years(0), isAvaible(true) {}

    // Setters
    void setTitle() {
        std::cout << "Enter the title of the book: ";
        std::cin >> this->title;
    }

    void setAuther() {
        std::cout << "Enter the author of the book: ";
        std::cin >> this->auther;
    }

    void setCategory() {
        std::cout << "Enter the category of the book: ";
        std::cin >> this->Category;
    }

    void setIdentifer() {
        std::cout << "Enter the identifier of the book: ";
        std::cin >> this->identifer;
    }

    void setYears() {
        std::cout << "Enter the publication year of the book: ";
        std::cin >> this->years;
    }

    void setAvailability(bool availability) {
        this->isAvaible = availability;
    }

    // Getters
    std::string getTitle() {
        return title;
    }

    std::string getAuther() {
        return auther;
    }

    std::string getCategory() {
        return Category;
    }

    int getIdentifer() {
        return identifer;
    }

    int getYears() {
        return years;
    }

    bool getAvailability() {
        return isAvaible;
    }
};
