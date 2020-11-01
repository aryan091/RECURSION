 # include <stdio.h>

int isPal(char *string ,int s,int e){

if (s==e)
{
    return 1;
}
if (s>e)
{
    return 1;
}
if (string[s] != string[e])
{
    return 0;
}

return isPal(string ,s+1,e-1);

}

 int main(){

    char str[]="AABAA";
    
    int result = isPal(str,0,4);
    if (result == 1)
    {
        printf(" String is Palindrome");
    }
    else
    {
        printf(" String is not Palindrome");
    }
    
    

     return 0 ;
 }
 