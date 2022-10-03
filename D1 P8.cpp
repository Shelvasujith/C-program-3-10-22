#include<stdio.h>
int main()
{
	int n,m,i;
	printf("Enter m(number):");
	scanf("%d",&n);
	printf("\n Enter n(times):");
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		printf("%d X %d = %d\n",i,n,i*n);
	}
	return 0;
}
