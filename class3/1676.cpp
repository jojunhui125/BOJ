#include <iostream>
#include <algorithm>
using namespace std;


int num[501];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,sum=0,cnt=0;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		cnt=0;
		int tmp=i;
		while(1)
		{
			if(tmp%5==0)
			{
				cnt++;
				tmp/=5;
			}
			else
			{
				break;
			}
		}
		num[i]=cnt;
	}
	
	for(int i=1;i<=n;i++)
	{
		sum+=num[i];
	}


	
	cout<<sum;

}
