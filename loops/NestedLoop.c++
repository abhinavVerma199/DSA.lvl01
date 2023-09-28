#include <iostream>
using namespace std;

int main(){
    
    for(int i=0;i<3;i=i+1){

    
    cout << "outer loop" << i << endl;

    for(int j=0;j<3; j=j+1){

        cout << "inner loop" << j << endl;
        
    }
    }

}