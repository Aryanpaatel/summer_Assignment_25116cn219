
#include <iostream>
using namespace std;
int main(){
    int i = 1 , sum = 0 , n ;
    cout << (" enter the number : "); 
    cin >> n ; 
     for ( i = 1 ; i <=n ; i++){ 
        sum = sum + i ;
     }
     cout << (" sum of first n natural number : ") << sum << endl;
     return 0;
}
