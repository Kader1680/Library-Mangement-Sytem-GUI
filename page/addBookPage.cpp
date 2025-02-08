#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

class clsBook {
private:
    int identifier;
    int years;
    std::string title;
    std::string author;
    std::string category;
    bool isAvailable;

public:
    
    clsBook() : identifier(0), years(0), isAvailable(true) {}


    clsBook(int id, std::string t, std::string a, std::string c, int y, bool avail)
        : identifier(id), title(t), author(a), category(c), years(y), isAvailable(avail) {}



    void setTitle(const std::string& t) { title = t;}
    void setAuthor(const std::string& a) { author = a; }
    void setCategory(const std::string& c) { category = c; }
    void setIdentifier(int id) { identifier = id; }
    void setYears(int y) { years = y; }
    void setAvailability(bool avail) { isAvailable = avail; }


    std::string getTitle() const { return title; }
    std::string getAuthor() const { return author; }
    std::string getCategory() const { return category; }
    int getIdentifier() const { return identifier; }
    int getYears() const { return years; }
    bool getAvailability() const { return isAvailable; }

    
    void displayBookDetails() const {
        std::cout << "ID: " << identifier << "\n"
                  << "Title: " << title << "\n"
                  << "Author: " << author << "\n"
                  << "Category: " << category << "\n"
                  << "Year: " << years << "\n"
                  << "Available: " << (isAvailable ? "Yes" : "No") << std::endl;
    }
};


#endif // BOOK_H
