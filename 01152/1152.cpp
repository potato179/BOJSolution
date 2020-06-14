#include<stdio.h>
#include<string.h>
int main()
{
	char w[1000001];
	gets(w);
	int l = strlen(w);
	if(l==0)
	{
		printf("0");
		return 0;
	}
	if(l==1)
	{
		if(w[0]==' ')
		{
			printf("0");
			return 0;
		}
	}
	int num=0;
	for(int i=1; i<l-1; i++)
	{
		if(w[i]==' ')
		{
			num++;
		}
	}
	printf("%d",num+1);
}
