#include<stdio.h>
void main()
{
int p,n;
printf("Enter the number:\n",n);
scanf("%d",&n);
p=n%2;
if(p==0)
{
printf("The next even no is %d\n",n+2);
}
else
{
printf("The next even no is %d\n",n+1);
}
getch();
}
