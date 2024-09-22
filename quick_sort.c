#include <stdio.h>
void printarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");`
}

int partition(int arr[], int low, int high)
{
    int temp;
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);
    // Swap arr[low]and arr[j]
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quicksort(int *arr, int low, int high)
{
    int partitionindex;
    if (low < high)
    {
        partitionindex = partition(arr, low, high);
        quicksort(arr, low, partitionindex - 1);
        quicksort(arr, partitionindex + 1, high);
    }
}

int main()
{
    int arr[] = {4, 5, 6, 3, 5, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printarray(arr, n);
    
    quicksort(arr, 0, n - 1);
    // quicksort(arr, n);
    printarray(arr, n);
    return 0;
}