#include <iostream>
#include "./registerPage.h"

int main() {
    // Create a user using the parameterized constructor
    clsRegister user(1, "john_doe", "john@example.com", "password123");

    // Create a user using the setter methods
    clsRegister user2;
    user2.setUsername("jane_doe");
    user2.setEmail("jane@example.com");
    user2.setPassword("password456");
    user2.setIdentifier(2);

    // Display user details
    user.displayUserDetails();
    user2.displayUserDetails();

    return 0;
}
