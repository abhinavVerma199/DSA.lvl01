#include <iostream>
using namespace std;

int main(){

    // 1. Find no of row -> 4 -> outer loop me kya krna h
    // 2. write down fo each row
       // row0 -> 4 star  ->
       // row1 -> 4 star  -> 
       // row2 -> 4 star  ->       inner loop me kya krna hai
       // row3 -> 4 star  ->
    

    // Every row -> 4 star print

int i;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout << "*";
        }
        cout << endl;
    }
}