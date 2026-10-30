// 1+2+4+7+11+..upto n terms, W.c.p to calculate sum of the given numbers
#include <stdio.h>

int main() {
    int n,sum=0,term=2,i=1;

   
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    
    while (i <= n) {
        sum+=term;
        term+=1; 
        i++;
    }


    printf("The sum of the series is: %d", sum);

    return 0;
}

