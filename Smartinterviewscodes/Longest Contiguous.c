//Longest Contiguous 1's 
#include <stdio.h>

int main() 
{
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    int count =0,maxLen=0;
    
    for(int i=0;i<N;i++)
    {
        if(A[i]==1){
            count++;
            if(count>maxLen)
            maxLen=count;
        }
        else
        {
            count=0;
        }
        
    }
    printf("%d\n",maxLen);
    return 0;

}