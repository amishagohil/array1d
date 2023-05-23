#include<stdio.h>

main()
{
	int a[100];
	int n,i;
	printf("enter size =");
	scanf("%d",&n);
	printf("enter array elements =\n");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array elemants =\n");
	for(i=0;i<=n;i++)
	{
		printf("%d\t",a[i]);
	}

}
