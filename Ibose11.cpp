//wap in c to find the largest number in a an array input will be user input//
#include <stdio.h>

int main()
{
    int n, i, arr[100], max;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Largest number = %d", max);

    return 0;
}
