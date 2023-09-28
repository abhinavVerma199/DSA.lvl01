#include <iostream>
using namespace std;

int main(){
    
int rows;

    // Input the number of rows for the inverted half pyramid
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Outer loop for rows
    for (int i = rows; i >= 1; i--) {
        // Inner loop for printing asterisks
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
