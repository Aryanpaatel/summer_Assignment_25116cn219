//Write a program to Print multiplication table of a given number 
#include <iostream>
using namespace std;
int main () {
    int i = 1 , n;
      cout << (" enter the number : "); // giving output
      cin >> n ; // taking input
       
      for ( i = 1 ; i <=10 ; i++) {
       cout << n << " * " << i << " = " << n * i << endl;
      }
      return 0;
}