#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n,m;


int main(void)
{

	cin>>n;
	vector<int> arr(n);

	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sort(arr.begin(),arr.end());	
	
	cin>>m;
	for(int i=0;i<m;i++)
	{
		int num;
		cin>>num;
		
		auto l=lower_bound(arr.begin(),arr.end(),num);
		auto r=upper_bound(arr.begin(),arr.end(),num);
		
		cout<<r-l<<' ';
		
	}
}
