#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int mini;
long long high,low,mid;
int main(void)
{
	int k,n;
	
	cin>>k>>n;
	vector<int> arr(k);
	
	for(int i=0;i<k;i++)
	{
		scanf("%d",&arr[i]);
		if(mini<arr[i])
		{
			mini=arr[i];
		}
	}
	int pos=0;
	high=mini;
	cout<<high<<endl;

	while(low<=high)
	{
		mid=(low+high)/2;
		int cnt=0;
		for(int i=0;i<k;i++)
		{
			cnt+=arr[i]/mid;
		}
		if(cnt>=n)
		{
			low=mid+1;
			if(pos<mid)
			{
				pos=mid;
			}
		}
		else
		{
			high=mid-1;
		}
		
		
		
	}
	printf("%d\n",pos);
	
}


