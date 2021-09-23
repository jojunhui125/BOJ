#include <stdio.h>

int arr[10];
int main(void)
{
	int cnt=0,pos=0,res=8;
	for(int i=1;i<=8;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]==i)
		{
			cnt++;
		}
	}
	if(cnt==8)
	{
		printf("ascending\n");
		return 0;
	}
	
	cnt=0;
	
	while(pos<8)
	{
		pos++;
		if(arr[pos]==res)
		{
			cnt--;
			res--;
		}
	}
	
	if(cnt==-8)
	{
		printf("descending\n");
		return 0;
	}
	else
	{
		printf("mixed\n");
	}
	
	return 0;
}
