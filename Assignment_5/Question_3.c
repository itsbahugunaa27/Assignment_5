#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("First %d natural numbers in reverse order \n",n);
    for(i=n;i>0;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}
