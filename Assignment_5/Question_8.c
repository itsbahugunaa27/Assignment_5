#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Squares of first %d natural numbers\n",n);
    for(int i=1;i<=n;i++)
    {
        printf("Square of %d is %d\n",i,i*i);
    }
    return 0;
}
