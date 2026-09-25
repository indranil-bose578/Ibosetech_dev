
#include<stdio.h>

int main()
{
    int num,old_num;
    int product = 1;

    printf("Enter an integer number: ");
    scanf("%d", &num);
    old_num=num;
    
    while(num>0)
    {
        product = product*num % 10;
        num = num / 10;
    }

    printf("The multiplication of the digits %d is %d",old_num, product);

    return 0;
}


