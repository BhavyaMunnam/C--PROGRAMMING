
//Matrix Row Sum
#include <stdio.h>

int main() 
{   
    int N,M;
    scanf("%d%d",&N,&M);
    for(int i=0;i<N;i++)
    {
        int sum=0;
        for(int j=0;j<M;j++)
        {
            int x;
            scanf("%d",&x);
            sum+=x;

        }
        printf("%d\n",sum);
    }
    return 0;
}