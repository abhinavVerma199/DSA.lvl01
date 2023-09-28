#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    for(int row=0; row<n; row=row+1){
        //space
        for(int col=0; col<n-row-1; col=col+1){
            cout <<" ";
        }
        //stars
        int totalCol = n-row;
        for(int col=0; col<row+1; col=col+1){
  // if first or last col

            if(col == 0 || col == totalCol - 1){
                cout  << "* ";
            }
            else{
                //for every col between first and lastg
                //column, print spaces
                cout << " ";
            }

            cout << "* ";
        }

        cout << endl;
    } 
}