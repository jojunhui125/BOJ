#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int arr[501][501];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,m,b,mini=501,maxi=0,tmp;
	cin>>n>>m>>b;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
			if(arr[i][j]<mini)
			{
				mini=arr[i][j];
			}
			if(arr[i][j]>maxi)
			{
				maxi=arr[i][j];
			}
		}
	}
	
	int pos=INT_MAX,result;
	for(int i=mini;i<=maxi;i++)
	{
		int build=0;
		int remove=0;
		
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<m;k++)
			{
				int tmp=i-arr[j][k];
				
				if(tmp<0)
				{
					remove+=-tmp;
				}
				else if(tmp>0)
				{
					build+=tmp;
				}
			}
		}
		
		if(remove+b >= build)
		{
			int tmp_time=build+(2*remove);
			
			if(tmp_time<=pos)
			{
				pos=tmp_time;
				result=i;
			}
		}
		
	}
	
	cout<<pos<<' '<<result;

	
	
	return 0;
}
