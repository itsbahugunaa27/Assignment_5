#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Even natural numbers are\n");
    for(i=2;i<=n;i=i+2)
    {
    printf("%d\n",i);
    }
    return 0;
}
