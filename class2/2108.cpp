#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int arr[50001];
int cnt[8001];

int main(void)
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	
	int n,num;
	cin>>n;
	int sum=0;
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
		cnt[arr[i]+4000]++;
	}
	sort(arr,arr+n);
	
	int maxi=0,flag=0;
	
	for(int i=0;i<8001;i++)
	{
		if(cnt[i]>maxi)
		{
			maxi=cnt[i];
			flag=i;
		}
	}
	
	for(int i=flag+1;i<8001;i++)
	{
		if(cnt[i]==maxi)
		{
			flag=i;
			break;
		}
	}
	
	cout<<round((double)sum/n)<<'\n';
	cout<<arr[(n-1)/2]<<'\n';
	cout<<flag-4000<<'\n';
	cout<<arr[n-1]-arr[0]<<'\n';


}
