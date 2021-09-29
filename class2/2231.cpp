#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n,tmp,res=0,pos=0;
	int flag=1;
	cin>>n;
	while(res<n)
	{
		res++;
		pos=res;
		tmp=res;
		
		while(tmp!=0)
		{
			pos+=tmp%10;
			tmp/=10;
			
		}
		
		if(pos==n)
		{
			flag=0;

			break;
		}
	}
	
	if(flag==0)
	{
		printf("%d",res);
	}
	else
	{
		printf("0\n");
	}

	return 0;
}


