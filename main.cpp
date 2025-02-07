#include <gtk/gtk.h>
#include <iostream>

// Callback function for the button click
static void on_button_clicked(GtkButton* button, gpointer user_data) {
    std::cout << "Button clicked!" << std::endl;
}

// Callback for the application "activate" signal
static void on_app_activate(GtkApplication* app, gpointer user_data) {
    // Create a new window
    GtkWidget* window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(window), "Gt");
    gtk_window_set_default_size(GTK_WINDOW(window), 200, 100);

    // Create a button
    GtkWidget* button = gtk_button_new_with_label("Click Me");
    g_signal_connect(button, "clicked", G_CALLBACK(on_button_clicked), nullptr);

    // Add the button to the window
    gtk_window_set_child(GTK_WINDOW(window), button);

    // Present the window
    gtk_window_present(GTK_WINDOW(window));
}

int main(int argc, char** argv) {
    // Initialize GTK application
    GtkApplication* app = gtk_application_new("com.example.Gtk4Button", G_APPLICATION_DEFAULT_FLAGS);

    // Connect the "activate" signal
    g_signal_connect(app, "activate", G_CALLBACK(on_app_activate), nullptr);

    // Run the application
    int status = g_application_run(G_APPLICATION(app), argc, argv);

    g_object_unref(app);
    return status;
}
