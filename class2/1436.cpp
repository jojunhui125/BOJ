#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{
	int n,cnt=0;
	cin>>n;
	int tmp=0,pos=0;
	while(cnt!=n)
	{
		pos++;
		tmp=pos;
		while(tmp!=0)
		{
			if(tmp%1000==666)
			{
				cnt++;
				break;
			}
			else
			{
				tmp/=10;
			}
		}
		
	}
	printf("%d",pos);
}


