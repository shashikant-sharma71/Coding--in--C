#include <stdio.h>
void printarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

void selection_sort(int *arr, int n)
{
int min_index,temp  ;
              for(int i=0;i<n-1;i++){
              min_index=i;

              for( int j=i+1;j<n;j++)
              if(arr[j]< arr[min_index])
                  min_index=j;

 
              // swaping 

              temp=arr[i];
              arr[i]=arr[min_index];
              arr[min_index]=temp;
              }
}
int main()
{
    int arr[] ={2, 4, 6,  3,};
    int n = sizeof(arr) / sizeof(arr[0]);
    printarray(arr,n);
    selection_sort(arr, n);
    printarray(arr, n);
}