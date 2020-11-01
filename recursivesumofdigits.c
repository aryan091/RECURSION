 # include <stdio.h>
 int sumofdigits(int n)
 {
     if(n<10){
         return n;
     }
     else
     {
         return sumofdigits(n/10)+n%10; 
     }
     
 }

 int main(){
     
     printf("The sum of digits of %d is %d ",9987,sumofdigits(9987));
     

    return 0 ;
 }
 