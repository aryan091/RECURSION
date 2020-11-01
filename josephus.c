 # include <stdio.h>
 int whoissurvivor(int n,int k)
 {
     if (n==1){
         return n;
     }
     else{
         return (whoissurvivor(n-1,k)+k-1)%n+1;   
     }
 }

 int main(){
     
     printf("%d",whoissurvivor(40,7));

    return 0 ;
 }
 