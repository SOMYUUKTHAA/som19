#include <stdio.h>
int main()
{
int num,i,fac=1;
printf("Enter an integer:\n");
scanf("%d",&num);
if(num<0)
printf("Factorial of a negative number not exist");
else
{
for(i=1;i<=num;++i)
{
fac*= i;          
}
printf("Factorial of %d=%d",num,fac);
}
return 0;
}
