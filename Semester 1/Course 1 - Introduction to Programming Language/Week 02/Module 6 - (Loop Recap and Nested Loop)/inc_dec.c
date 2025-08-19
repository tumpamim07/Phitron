#include<stdio.h>
int main()
{
    int i=10;
    // int x=++i;            // Pre-increment: increment i first (i=11), then assign to x (x=11)
    // int x=i++;            // Post-increment: assign i to x first (x=10), then increment i (i=11)
    // int x =i--;           // Post-decrement: assign i to x first (x=10), then decrement i (i=9)
    int x=--i;               // Pre-decrement: decrement i first (i=9), then assign to x (x=9)
    printf("x=%d, i=%d", i,x);
    return 0;
}