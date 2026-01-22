//First and Last

#include <stdio.h>

int main()
 {

 
    int N;
    scanf("%d",&N);
    int A[1000];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    
    int X;
    scanf("%d",&X);
    int first=-1,last=-1;
    for(int i=0;i<N;i++)
    {
        if (A[i]==X)
        {
            if(first==-1)
            first=i;
             last=i;
        }
    }
    printf("%d %d",first ,last);
     return 0;
}