//Digit Cubes
#include <stdio.h>

int main() 
{

    long long N;
    scanf("%lld",&N);
    long long original = N;
     long long sum=0;
     if(N==0){
        printf("Yes");
        return 0;
     }
     while(N>0){
        int digit =N%10;
        sum+=digit*digit*digit;
        N/=10;
     }
     if(sum==original)
     printf("Yes");
     else
     printf("No");

    return 0;
}