#include <stdio.h>

void meow(int n);
int main(void)
{
    for (int r = 0; r <= 3; r++)
    {
        meow(3000);
    }
}

void meow(int n){
    for( int i=0;i<n;i++){
        printf("Meow\n");
    }
}
