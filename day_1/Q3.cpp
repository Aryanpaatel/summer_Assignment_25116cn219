// Write a program to Find factorial of a number
#include <iostream>
using namespace std;
int main (){
int i = 1 , n ;
int fact = 1 ;
cout << ("enter the number : ");// giving output
cin >>  n; // taking input
for ( i= 1 ; i <= n ; i++ ) {
    fact *= i  ; // using condition 
}  
 cout << n << " ! = " << fact << endl;
 return 0;
}