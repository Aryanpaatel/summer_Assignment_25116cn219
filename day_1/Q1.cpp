//Calculate Sum of First N Natural Numbers
#include <iostream>
using namespace std;
int main(){
    int i = 1 , sum = 0 , n ;
    cout << (" enter the number : "); // giving output
    cin >> n ; // taking input form user
     for ( i = 1 ; i <=n ; i++){ // using for loop
        sum = sum + i ;
     }
     cout << (" sum of first n natural number : ") << sum << endl;
     return 0;
}