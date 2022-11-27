#include<stdio.h>
int main()
{
    int n,i,y;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Table of %d is \n",n);
    for(i=1;i<=10;i++)
    {
        y=n*i;
        printf("%d x %d = %d\n",n,i,y);
    }
    return 0;
}
