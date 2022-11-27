#include<stdio.h>
int main()
{
  int n,i;
  printf("Enter the number\n");
  scanf("%d",&n);
  printf("First %d Even naturals numbers in reverse order are\n",n);
  while(n)
  {
    printf("%d\n",2*n);
	n--; 
  }
  return 0;
}
