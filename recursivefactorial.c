 # include <stdio.h>
 int fact(int n){

     if (n==0){
         return 1;
     }
     else
     {
         return n * fact(n-1);
     }
     
 }
 int main(){
     printf("The factorial of  %d is %d ",4,fact(4));

     return 0 ;
 }
 