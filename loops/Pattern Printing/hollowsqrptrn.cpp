#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
 
     //--->Hallow square pattern

     for(int i = 0; i < n; i++){    //-> outer loop

     for(int j = 0; j < n; j++){    //-> inner loop

     if(i ==0 || i == n-1 || j ==0 || j == n-1){

        cout << "*";
     }
     else{
        cout << " ";
     }
     }
   cout << endl;



     
     }
     }
