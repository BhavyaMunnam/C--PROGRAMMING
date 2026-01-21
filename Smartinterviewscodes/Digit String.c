
//Digit String
#include <stdio.h>

int main() {
  
   char s[101];
   scanf("%s",s);
   int i=0;
   while(s[i]!='\0')
   {
    if(s[i]<'0'||s[i]>'9')
    {
        printf("No");
        return 0;
    }
    i++;
   }
   printf("Yes");
    return 0;
}