#include <iostream>
using namespace std;

int main(){
    int rows, cols;

    // Input the number of rows and columns for the rectangle
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop for columns
        for (int j = 1; j <= cols; j++) {
            // Print asterisk (*) if it's the first or last row, or the first or last column
            if (i == 1 || i == rows || j == 1 || j == cols) {
                cout << "*";
            } else {
                // Print a space for the inner area
                cout << " ";
            }
        }
        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
