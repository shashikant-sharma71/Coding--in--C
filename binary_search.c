#include<Stdio.h>
int binary_search(int arr[],int n,int target)
{
    int low, high,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==target){
            return mid;
        }
        else{
            high=mid-1;

        }
        return -1;

    }
}
//Driver code 
int main(){
    int arr[]={2,3,5,6,7,8,9};
    int n= sizeof(arr)/sizeof(int);
    int target=7;
    int searchindex=binary_search(arr,n,target);
printf("Element found at index %d",searchindex);
 
}