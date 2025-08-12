#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(1000<n)
    {
        printf("I will buy Punjabi\n");
        if(1500<=n)
        {
            printf("I will buy new shoes\nAlisa will buy new shoes");
        }
    }
    else
    {
        printf("Bad luck!\n");
    }
    return 0;
}