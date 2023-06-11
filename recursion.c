#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <stdlib.h>
#define MAX 100

  int fac(int n);
  int fib(int n);

  int ex_cache[MAX];
   


int main(){


   int num;

   printf("Enter the Nth number : ");
   scanf("%d", &num);

   for (int i = 0; i < MAX; i++)
   {
      ex_cache[i] = -1;
   }
   

  // printf("\n   Nth  factorial number :  %d\n", fac(num));

   printf("\n Sum of Nth fibonacci number : %d\n", fib(num));
    
}

 int fib(int n){
        if(n<=1)
          return n;

        if(ex_cache[n] != -1){
          return ex_cache[n];
        }

        ex_cache[n] = fib(n-1) + fib(n-2);
        return ex_cache[n];
 }


int fac(int n){
        if(n==1)
          return 1;
        
        return n* fac(n-1);
}