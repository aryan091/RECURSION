 # include <stdio.h>
  int maximum(int A , int B, int C){
      if (A >= B && A >= C) 
        return A; 
  
    if (B >= A && B >= C) 
        return B;
  
    if (C >= A && C >= B) 
        return C;
  
    return 0; 
 }
 int maxropecuts(int n , int a , int b, int c)
 {  
     if (n==0)
 {
    return 0;
 }
 if (n<0)
 {
    return -1;
 }

     int res = maximum(maxropecuts(n-a,a,b,c),maxropecuts(n-b,a,b,c),maxropecuts(n-c,a,b,c));
     if (res == -1)
     {
         return -1;
     }
     return (res+1);
     
 }

 int main(){
     
     printf(" The maximum cuts of ropes is %d ",maxropecuts(5,2,1,5));

    return 0 ;
 }
 