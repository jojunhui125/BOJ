#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(void)
{
	int n,m;
	cin>>n>>m;
	vector<int> prime(m+1,0);
	
	for(int i=2;i<=m;i++)
	{
		prime[i]=i;
	}
	
	for(int i=2;i*i<=m;i++)
	{
		if(prime[i]==0)
		{
			continue;
		}
		for(int j=2*i;j<=m;j+=i)
		{
			if(prime[j]==0)
			{
				continue;
			}
			else
			{
				prime[j]=0;
			}
		}
	}
	
	for(int i=n;i<=m;i++)
	{
		if(prime[i]!=0)
		{
			cout<<prime[i]<<'\n';
		}
	}
	

	
	return 0;
}
