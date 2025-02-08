#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

class clsHome {
private:
    int login;
    int registere;
    int viewBook;
    int addBook;
    int editBook;


public:
    
    clsHome() : login(0), registere(0), viewBook(0), addBook(0), editBook(0) {};

 
    clsHome(int l, int r, int vB, int aB, int eB)  : login(l), registere(r), viewBook(vB), addBook(aB) , editBook(eB){}

    

    
   
};

#endif // USER_H
