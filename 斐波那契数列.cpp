#include <stdio.h>
int main()
{
	long int f1,f2,f;
 int i;
 f1=1,f2=1;
printf("%10d%10d",f1,f2);
for(i=3;i<=40;i++)
{
	f=f1+f2;
	printf("%10d",f);
	if(i%4==0)
	printf("%\n");
	f1=f2;
	f2=f;
}
}
