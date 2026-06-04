#include <stdio.h>
#include <conio.h>

void main() {
    int i, n, m, digit, sum;
    
    printf("Enter the value of m: ");
    scanf("%d", &m);
    
    
    for(i = 1; i <= m; i++) {
        n = i;
        sum = 0;
    
        while(n != 0) {
            digit = n % 10;
            sum = sum + (digit * digit * digit);
            n = n / 10;
        }
        
          if(i == sum) {
            printf("%d ", i);
        }
    }
    getch();
}

