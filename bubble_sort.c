#include <stdio.h>
void printarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}
void bubble_sort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{

    int A[] = { 2,5,4,3,6 };
    int n = sizeof(A) / sizeof(A[0]);
    printf("Before Sorting:\n");
    printarray(A,n);
    bubble_sort(A, n);
    printf("Sorted array: \n");
    printarray(A, n);
    return 0; 
}