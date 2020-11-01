 # include <stdio.h>
 int numberrundown(int n){

     if (n==0){
         return 1;
     }
     else
     {   printf("%d ",n);
         return n - numberrundown(n-1);
     }
     
 }
 int numberrunup(int n){

     if (n==0){
         return 1;
     }
     else
     {   
         numberrunup(n-1);
         printf("%d ",n);
     }
     
 }
 // TAIL RECUSIVE
 int numberrunuptail(int n,int k){

     if (n==0){
         return 1;
     }
     else
     {   printf("%d ",k);
         numberrunuptail(n-1,k+1);
     }
     
 }


 int main(){

     numberrundown(5);
     printf("\n");
     numberrunup(3);
     printf("\n");
     numberrunuptail(5,1);
     

     return 0 ;
 }
 