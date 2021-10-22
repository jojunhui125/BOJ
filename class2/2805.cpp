#include <iostream>
#include <algorithm>
using namespace std;

long long n,h;
long long num[1000001];

long long cntree(int tmp)
{
	long long cnt=0;
	for(long long i=0;i<n;i++)
	{
		if((num[i]-tmp)>0)
		{
			cnt+=(num[i]-tmp);
		}
	}
	return cnt;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin>>n>>h;
	
	long long maxi=0,sum=0;
	for(long long i=0;i<n;i++)
	{
		cin>>num[i];
		if(num[i]>maxi)
		{
			maxi=num[i];
		}
	}
	
	long first=1,last=maxi,mid;
	
	while(first<=last)
	{
		mid=(first+last)/2;
		
		if(cntree(mid)<h)
		{
			last=mid-1;
		}
		else if(cntree(mid)>=h)
		{
			if(sum<mid)
			{
				sum=mid;
			}
			first=mid+1;
		}
		
	}
	
	cout<<sum;
	
	return 0;
}
