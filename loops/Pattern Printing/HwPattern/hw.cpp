// #include <iostream>
// #include "assert.h"
// using namespace std;


// int main(){
    //Numeric Hallow Half Pyramid
// 1 
// 1 2 
// 1   3 
// 1     4
// 1 2 3 4 5  --> hallow half pyramid

// int n;
// cin>>n;
// for(int row=0;row<n;row++){
//   for(int col=0;col<=row;col++){
//     if(col==0 || col == row || row == n-1){
//           cout<<col+1;
//     }
//     else{
//         cout<<" ";
//     }

//   }
//   cout<< endl;
// }
   
   // 2-> Numeric Hollow Inverted Half Pyramid
// 1 2 3 4 5
// 2     5
// 3   5
// 4 5
// 5

// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=i+1;j<=n;j++){
//         if(j==i+1 || j == n || i == 0){
//            cout<<j;
//         }
//        else{
//           cout<<" ";
//        }

//         }
//         cout<<endl;
        
//         } 


// -->Numeric Palindrome Equilateral Pyramid
//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1

// int n;
// cin>> n;
// int k=n;

// for(int i=0;i<n;i++){
//     int c = 1;
//     for(int j=0;j<k;j++){
//     if(j<n-i-1){
//         cout<<" ";
//     }
//     else if(j<=n-1){
//         cout<<c;
//         c++;
        

//     }
//     else if(j == n){

//         c = c-2;
//         cout<<c;
//         c--;
//     }
//     else{
//         cout<<c;
//         c--;
//     }
//     }
//     k++;
//     cout<<endl;
// }

// Solid Half Diamond  -->
 // *
 // * *
 // * * *
 // * * * *
 // * * * * *
 // * * * *
 // * * *
 // * *
 // *

//  int n;
//  cin >> n;
//  for(int i=0;i<2*n-1;i++){
    // int cond=0;
    // if(i<n){  //growing phase of Diamond
    //     cond=i;
    // }
    // else{ // shrinking phase of Diamond
    // cond = n - (i%n) - 2;

    // }  
    // --> 0R using ternary operator
//     int cond = i < n ? i : n - (i%n) - 2;
//     for(int j=0; j<=cond;j++){
//         cout<<"*";
//     }
//     cout<<endl;
//  }


// Q-1 Fancy Pattern #1
//********1********
//*******2*2*******
//******3*3*3******
//*****4*4*4*4*4***
//****5*5*5*5*5*5**

// int n;
// cin>>n;
// assert(n<=9);   //important
// // if(n > 9){
// //     cout<<"Please put value <= 9.\n";
// //     return 0;
// //}
// for(int i=0;i<n;i++){
//     int start_num_index = 8 - i;
//     int num = i + 1;
//     int count_num = num;
//     for(int j=0;j<17;j++){
//         if(j==start_num_index && count_num > 0){
//             cout<<num;
//             start_num_index+=2;
//             count_num--;
//         }
//         else{
//             cout<<"*";
//         }
        
//     }
//     cout<< endl;
// }

// ->fanccy pattern#2

    // int n;
    // cin >> n;
    // int c=1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<c;
    //         c++;
    //     }
    //     cout<< endl;
    // }
    // // cout<<"c: " <<c<< endl;
    // // shrinking phase
    // int start=c - n;
    // for(int i=0;i<n;i++){
    //     int k=start;
    //     for(int j=0;j<=n-i-1;j++){
    //         cout<<k;
    //         k++;
    //     }
    //     start = start - (n-i-1);
    //     cout<<endl;
    // }

   // Fancy Pattern #3
    //   *
    //   * 1 *
    //   * 1 2 1 *
    //   * 1 2 3 2 1 *
    //   * 1 2 1 *
    //   * 1 *
    //   * 

//     int n;
//     cin >> n;

//     for(int i=0; i<n;i++){
//   int cond = i <= n/2 ? 2*i : 2*(n-i-1);
//      for(int j=0;j<=cond;j++){
//         if(j<=cond/2){

        
//         cout<<j+1;
//      }
//      else{
//         cout<<cond-j+1;
//      }
//      }
//    cout<<endl;
    
//     }

//-> Floyd's Triangle Pattern
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20 21
// 22 23 24 25 26 27 28

// int n;
// cin >> n;

// int c=1;
// for(int i=0;i<n;i++){
    
//     for(int j=0;j<=i;j++){
//       cout<<c<<" ";
//       c++;
//     }
//     cout<<endl;
// }

//--> Pascal's Triangle Pattern
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// 1 5 10 10 5 1
// 1 6 15 20 15 6 1
// int n;
// cin>> n;

//  for(int i=1; i<n; i++){
//     int C = 1;
//   for(int j=1; j<=i;j++){
//     cout<<C<<" ";
//     C = C * (i - j) / j;

//   }
//   cout<<endl;
    
//  }
///---> Butterfly Pattern
// *                 *
// * *             * *
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * *
// * * * * * * * * * *
// * * * *     * * * *
// * * *         * * *
// * *             * *
// *                 *

// int n;
// cin>> n;
// for(int i=0;i<2*n;i++){
//     int cond= i < n ? i : n + (n - i - 1);
//     int space_count = i < n? 2*(n-cond-1): i - cond - 1;
//    for(int j=0;j<2*n;j++){
//     if(j<=cond){
// cout<<"*";
//     }
//     else if(space_count > 0){
//         cout<<" ";
//         space_count--;
//     }
//     else{
//         cout<<"*";
//     }
//    }
//    cout<<endl;
// }
//}
//----> function to display area of circle
 
//  #include <iostream>
//  using namespace std;

//  float circle_area(float radius){
//     float area = 3.14 * radius * radius;
//     return area;
//  }

// int main(){
//     float radius;
//     cin>>radius;
//     float area = circle_area(radius);
//     cout<< "Area of Circle is: " << area<<endl;
// }


    //---> Given Number is Even or Odd (Normal Method & Bitwise Method)

// #include <iostream>
// using namespace std;

// bool checkEven(int n){
//     if(/*n % 2 == 0*/(n&1) == 0){
//         return true;  // its an even no.
//     }
//     else{
//         return false;  // its an odd no.
//     }
// }

// int main(){
//     int n;
//     cin>> n;
//   bool isEven = checkEven(n);

//   if(isEven){
//     cout<<n<<" is Even number.\n";
//   }
//   else{
//     cout<<n<<"is Odd number.\n";
//   }

//   }

//--->  find the factorial
// #include <iostream>
// using namespace std;

// long long int fact(long long int n){
//     long long int fact = 1;
//     for(int i=1;i<=n;i++){
//         fact = fact*i;
//     }
//     return fact;
// }

// int main(){
//     int n;
//     cin>>n;
//     int ans = fact(n);
//     cout<<"Factorial of "<<n<<" is "<<ans<<endl;

// }

//---> Check Given Number Prime or Not
// 
// #include <iostream>
// using namespace std;

// bool checkPrime(int n){
//     int i = 2;
//     for(i=2;i<n;i++){
//         if(n%i == 0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int n;
//     cin>>n;
//     bool isPrime = checkPrime(n);
//     if(isPrime){
//         cout<<"Prime\n";
//     }
//     else{
//         cout<<"Not a Prime\n";
//     }
// }

//#Print all prime from 1 to N

// #include <iostream>
// using namespace std;
// bool checkPrime(int n){
//     int i = 2;
//     for(i=2;i<n;i++){
//         if(n%i == 0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//    int n;
//    cin>>n;
   
//    for(int i=2;i<=n;i++){
//       bool isiPrime = checkPrime(i);
//       if(isiPrime){
//           cout<<i<<" ";
//       }
//    }
// }


///-> Count All Set Bits
// #include <iostream>

// using namespace std;

// int countSetBit(int n)
// {
//     int count = 0;
//     // while(n > 0){
//     //     int bit = n % 2;
//     //     if(bit == 1)
//     //     count++;
//     //     n = n/2;
//     // }

//     while(n > 0){
//         int bit = (n & 1);
//         if(bit == 1)
//         count++;
//         n = n >> 1;
//     }
//     return count;
// }

// int main(){
//     int n; cin>>n;
//     int setBitCount = countSetBit(n);
//     cout<<setBitCount<<endl;
// }

//----> Create Number using Digits
// #include <iostream>

// using namespace std;

// int createNumberUsingDigits(int numberOfDigits){
//     int num = 0;   
//     for(int i=0;i<numberOfDigits;++i){
//         cout<<"Enter Digits: " <<endl;
//         int digit;
//         cin>>digit;
//         num = num * 10 + digit;
//         cout<<"Number Created so far: " <<num<<endl;
//     }
//     return num;
// }
// int main(){
//     int numberOfDigits;
//     cin>>numberOfDigits;
//     int num = createNumberUsingDigits(numberOfDigits);
//     cout<<"Number created by digits: "<<num<<endl;
// }

// #include <iostream>

// using namespace std;

// void printAllDigits(int n){
//     while(n){
//     int onesPlaceDigit = n% 10;
//     cout<<"Digit: "<<onesPlaceDigit<< endl;
//     // n= n/10;
//     n /= 10;
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter Number to see its digits "<< endl;
//     cin>>n;
//     printAllDigits(n);
// }

#include <iostream>

using namespace std;

float KMtoMiles(float km){
    float _1kmMiles = 0.621371;
    float miles = km * _1kmMiles;
    return miles;
}
int main(){
    float km;
    cout<<"Tell me km"<<endl;
    cin>>km;
    float miles = KMtoMiles(km);
    cout<<"Miles="<<miles<<endl;

}
















