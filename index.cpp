#include <iostream>
#include "./clsBook.h"
// #include <mysql_driver.h>
// #include <mysql_connection.h>
// #include <cppconn/prepared_statement.h>



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


   

    // Create a connection to the MySQL database
    // sql::mysql::MySQL_Driver *driver;
    // sql::Connection *con;

    // driver = sql::mysql::get_mysql_driver_instance();
    
    // // Change the database connection details as per your configuration
    // con = driver->connect("tcp://127.0.0.1:3306", "root", "");  // Connection string, username, and password
    // con->setSchema("bookcpp");  // Specify your database name

    // // Example query execution
    // sql::Statement *stmt;
    // sql::ResultSet *res;

    // stmt = con->createStatement();
    // res = stmt->executeQuery("SELECT * FROM your_table_name");

    // while (res->next()) {
    //     std::cout << "Column value: " << res->getString("your_column_name") << std::endl;
    // }

    // // Clean up
    // delete res;
    // delete stmt;
    // delete con;


    
}