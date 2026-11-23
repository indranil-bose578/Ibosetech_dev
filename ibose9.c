// WAP to print the following pattern in c
 	  4
 	 434
 	43234
   4321234
    43234
     434
      4
      
#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 7; i++) {
        for (j = 1; j <= (i <= 4 ? 4-i : i-4); j++)
            printf(" ");

        for (j = 4; j >= (i <= 4 ? 5-i : i-3); j--)
            printf("%d", j);

        for (j = (i <= 4 ? 6-i : i-2); j <= 4; j++)
            printf("%d", j);

        printf("\n");
    }

    return 0;
}
