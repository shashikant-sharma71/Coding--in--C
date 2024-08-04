#include<stdio.h.>
int main(){
    int arr[100],n;
    printf("Enter size of array  : ");
scanf("%d",&n);
      for(int i=0;i<n;i++){
        printf("Enter The arrays %d :",i);
        scanf("%d",&arr[i]);

      } 
      
      
      
      printf("You Have Entered Array :\n");
      for(int i=0;i<n;i++){
       
       printf("%d,",arr[i]);

      }
      
      printf("\n");


       printf("Reversed arrays : \n");
      for(int i=n-1;i>=0;i--){
       
        printf("%d,",arr[i]);     
        
         }

    
}
