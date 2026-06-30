#include <stdio.h>

int main()
{
    int n, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int secondLargest = arr[0];

    
    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    
    secondLargest = -2147483648;   

    for(i = 0; i < n; i++)
    {
        if(arr[i] > secondLargest && arr[i] < largest)
        {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == -2147483648)
    {
        printf("Second largest element does not exist.\n");
    }
    else
    {
        printf("Second largest element = %d\n", secondLargest);
    }

    return 0;
}