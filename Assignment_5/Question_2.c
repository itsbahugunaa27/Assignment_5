#include<stdio.h>
int main()
{
    int n;
    printf("Enter the integer value: \n");
    scanf("%d",&n);
    printf("First %d natural numbers are:\n",n);
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}
