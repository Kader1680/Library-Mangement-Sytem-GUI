# Library-Mangement-Sytem-GUI


Core Features:

    Book Management:
        Add new books (Title, Author, ISBN, Publisher, Year of Publication).
        Edit book details (e.g., change title or author).
        Delete books from the system.
        Search for books by title, author, or ISBN.
        View the list of all available books.

    User Management:
        Register new users (Name, ID, Contact Info).
        View a list of registered users.
        Search for a user by name or ID.

    Book Borrowing:
        Borrow books (Track borrow date, due date).
        Check if a book is available for borrowing.
        Return borrowed books and update availability.
        Track overdue books.

    Fine Management:
        Calculate fines for overdue books (based on days overdue).
        Display user’s fine balance.

    Transaction History:
        View borrowing history of each user.
        View transaction history for each book (when it was borrowed and by whom).

Optional Advanced Features:

    Book Categories:
        Organize books into categories (e.g., Fiction, Science, History).
        Allow users to search books by category.

    Book Reservation:
        Allow users to reserve books that are currently not available.
        Notify users when a reserved book becomes available.

    Admin Privileges:
        Admin can manage (add, edit, delete) users and books.
        Admin can view the list of overdue books and apply fines.

    User Authentication:
        Implement user login and authentication (username/password).
        Differentiate between admin and regular user roles.

    Reports:
        Generate reports (e.g., most borrowed books, most active users).

Data Structures:

    Books: You could use a class with attributes for title, author, ISBN, etc., and store them in an array or vector.
    Users: A user class with information like name, borrowed books, fines, etc.
    Transactions: A structure to keep track of borrow/return transactions with dates.


    

    