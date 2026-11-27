//wap in c to find the smallest number in a an array input will be user input//
#include <stdio.h>

int main()
{
    int n, i, arr[100], min;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    min = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Smallest number = %d", min);

    return 0;
}
