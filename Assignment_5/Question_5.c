#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("First %d Odd natural numnbers in reverse order are\n",n);
    while(n)
    {
         printf("%d\n",2*n-1);
         n--;
    }
     return 0;
}
