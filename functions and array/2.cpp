#include <iostream>
using namespace std;

// Function to print the array elements
void print_array(const int[], int);

// Function to modify the array by adding 5 to each element
void set_array(int[], int);

int main() {
    int arr[] = {1, 2, 3, 4, 5};   // Initialize the array
    int size = sizeof(arr) / sizeof(int);   // Calculate the size of the array

    // Print the original array
    cout << "Original Array: ";
    print_array(arr, size);
    cout << endl;

    // Modify the array
    set_array(arr, size);

    // Print the modified array
    cout << "Modified Array: ";
    print_array(arr, size);
    cout << endl;

    return 0;
}

// Function to print the elements of the array
void print_array(const int a[], int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i] << "  ";   // Print each element separated by spaces
    }
}

// Function to modify the array by adding 5 to each element
void set_array(int a[], int size) {
    for (int i = 0; i < size; i++) {
        a[i] = a[i] + 5;   // Add 5 to each element of the array
    }
}
