#include<stdio.h>
int main()

{
    int a, b;
    scanf("%d %d",&a, &b);

    int c = a+b;
    int d = a-b;
    int e = a*b;
    float f = a*1.0/b;

    printf("%d + %d = %d\n",a,b, c);
    printf("%d - %d = %d\n",a,b, d);
    printf("%d * %d = %d\n",a,b, e);
    printf("%d / %d = %0.2f\n",a,b, f);
    return 0;


}