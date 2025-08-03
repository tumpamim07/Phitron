#include<stdio.h>
int main()
{

    int N, i;
    scanf("%d", &N);
    
    if(1<=N && N<=1000)
    {
        for(i=1; i<=N; i++)
        {
            printf("I Love Practice\n");
        }
    }
    return 0;
}