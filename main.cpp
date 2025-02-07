#include <gtk/gtk.h>
#include <iostream>

// Callback function for the login button click
static void on_login_clicked(GtkButton* button, gpointer user_data) {
    std::cout << "Login button clicked!" << std::endl;
}

// Callback for the application "activate" signal
static void on_app_activate(GtkApplication* app, gpointer user_data) {
    // Create a new window
    GtkWidget* window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(window), "Library Management System");
    gtk_window_set_default_size(GTK_WINDOW(window), 500, 400);

    // Create a grid layout
    GtkWidget* grid = gtk_grid_new();
    gtk_grid_set_row_spacing(GTK_GRID(grid), 10);
    gtk_grid_set_column_spacing(GTK_GRID(grid), 10);
    gtk_widget_set_margin_start(grid, 20);
    gtk_widget_set_margin_top(grid, 20);

    // Email label and input
    GtkWidget* email_label = gtk_label_new("Email:");
    GtkWidget* email_entry = gtk_entry_new();
    gtk_entry_set_placeholder_text(GTK_ENTRY(email_entry), "Enter your email");

    // Username label and input
    GtkWidget* username_label = gtk_label_new("Username:");
    GtkWidget* username_entry = gtk_entry_new();
    gtk_entry_set_placeholder_text(GTK_ENTRY(username_entry), "Enter your username");

    // Password label and input
    GtkWidget* password_label = gtk_label_new("Password:");
    GtkWidget* password_entry = gtk_entry_new();
    gtk_entry_set_visibility(GTK_ENTRY(password_entry), FALSE);
    gtk_entry_set_placeholder_text(GTK_ENTRY(password_entry), "Enter your password");

    // Role selection using GtkDropDown
    GtkWidget* role_label = gtk_label_new("Select Role:");

    // Create a GtkStringList for the dropdown items
    
    const char* roles[] = {"Author", "Reader", nullptr}; // nullptr to terminate the list
    GtkStringList* role_list = gtk_string_list_new(roles);


    // Create a GtkDropDown with the string list
    GtkWidget* role_dropdown = gtk_drop_down_new(G_LIST_MODEL(role_list), NULL);

    // Login button
    GtkWidget* login_button = gtk_button_new_with_label("Login");
    g_signal_connect(login_button, "clicked", G_CALLBACK(on_login_clicked), nullptr);

    // Add widgets to the grid
    gtk_grid_attach(GTK_GRID(grid), email_label, 0, 0, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), email_entry, 1, 0, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), username_label, 0, 1, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), username_entry, 1, 1, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), password_label, 0, 2, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), password_entry, 1, 2, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), role_label, 0, 3, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), role_dropdown, 1, 3, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), login_button, 1, 4, 1, 1);

    // Add grid to the window
    gtk_window_set_child(GTK_WINDOW(window), grid);

    // Present the window
    gtk_window_present(GTK_WINDOW(window));
}

int main(int argc, char** argv) {
    // Initialize GTK application
    GtkApplication* app = gtk_application_new("com.example.Gtk4LoginForm", G_APPLICATION_DEFAULT_FLAGS);

    // Connect the "activate" signal
    g_signal_connect(app, "activate", G_CALLBACK(on_app_activate), nullptr);

    // Run the application
    int status = g_application_run(G_APPLICATION(app), argc, argv);

    g_object_unref(app);
    return status;
}
