#include <stdio.h>
void printarray(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
}

void merge(int* arr, int mid,  int low,int high)
{
   int i,j,k,b[100];
   i=low;
   j=mid+1;
   k=low ;

   while (i<=mid &&j<=high)
   {
    if(arr[i]<arr[j]){
        b[k]=arr[i];
        i++;
        k++;

    }
   else {
        b[k]=arr[j];
       k++;
       j++;


    }
    
    
   }
   while(i<=mid){
    b[k]=arr[i];
    k++;
    j++;

   }
   while(j<=high)
   {
       b[k]=arr[j];
       k++;
       j++;
   }
   for (int i = low; i <=high; i++)
    {
        arr[i]=b[i];
    }
}
void merge_sort(int*arr,int low ,int high ){
    int mid ;
    if(low<high){
        mid=(low+high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        merge(arr,mid,low,high);

    }
}
int main(){
    int arr[]={2,3,9,6,5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    printarray(arr,n);
    merge_sort(arr,0,n-1);
     printarray(arr,n);
    
    return 0;
}