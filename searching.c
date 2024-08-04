// C program to implement linear
// search in unsorted array
#include <stdio.h>

// Function to implement search operation
int findElement(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i;

    // If the key is not found
    return -1;
}

// Driver's Code
int main()
{
     int arr[100],n;
    printf("Enter size of array  : ");
scanf("%d",&n);
      for(int i=0;i<n;i++){
        printf("Enter The arrays %d :",i);
        scanf("%d",&arr[i]);
      }

    // int arr[] = { 12, 34, 10, 6, 40 };
     n = sizeof(arr) / sizeof(arr[0]);

    // Using a last element as search element
    int key;
    printf("Enter Target element ");
    scanf("%d",&key);

    // Function call
    int position = findElement(arr, n, key);

    if (position == -1)
        printf("Element not found");
    else
    printf("\n");
        printf("Element Found at Position: %d",
               position + 1);
               printf("\n");

    return 0;
}
