 # include <stdio.h>
 int sum(int n){

     if (n==0){
         return 0;
     }
     else
     {
         return n + sum(n-1);
     }
     
 }
 int main(){
     printf("Sum of %d natural no is %d ",10,sum(10));

     return 0 ;
 }
 