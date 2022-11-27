#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Cube of first %d naturals numbers are\n",n);
    for(i=1;i<=n;i++)
    {
        printf("Cube of %d is %d\n",i,i*i*i);
    }
    return 0;
}
