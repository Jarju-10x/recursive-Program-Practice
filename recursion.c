#include <stdio.h>

   
    int fib(int n){
        if(n==1)
          return 1;
        
        return n +  fib(n-1);
    }

int main(){


   int num;

   printf("Enter the Nth number : ");
   scanf("%d", &num);

   printf("\n Sum of Nth fibonacci number : %d\n", fib(num));
    
}