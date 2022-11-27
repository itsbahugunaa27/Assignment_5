#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Odd natural numbers are\n",n);
    for(i=1;i<=n;i=i+2)
    {
        printf("%d\n",i);
    }
    return 0;
}
