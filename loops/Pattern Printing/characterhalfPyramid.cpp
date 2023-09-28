#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    // for(int row=0;row<n;row=row+1){
    //     //inner loop
    //     for(int col=0;col<2*row+1; col=col+1){
    //         if(col%2 == 1){
    //             //odd number
    //             cout << "*";
    //         }

    //         else{
    //             cout << row+1;
    //         }
    //     }
    //       cout << endl;
    // }


    //-->  OR
    for(int row=0; row<n; row=row+1){
        int totalCol = row+1;
        for(int col=0; col<row+1;col=col+1){

if(col == totalCol -1){
   cout << row+1; 
}
else{

           cout << row+1  <<"*"; 

}



        }
        cout << endl;

    }

}