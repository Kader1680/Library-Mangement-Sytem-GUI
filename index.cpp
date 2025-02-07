#include <iostream>
#include "./clsBook.h"

int main(int argc, const char** argv) {
    


    clsBook book;
    book.setTitle();
    book.setAuther();
    book.setCategory();

    std::cout<<"Title of Book is : "<<book.getTitle();
    std::cout<<std::endl;
    std::cout<<"Auther of Book is : "<<book.getAuther();
    std::cout<<std::endl;
    
    std::cout<<"Category of Book is : "<<book.getCategory();


   


    
    return 0;
}