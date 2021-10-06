#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<int,int> a, pair<int,int> b)
{
	if(a.first==b.first)
	{
		return a.second<b.second;
	}
	return a.first<b.first;
}

int main(void)
{
	int n;
	cin>>n;
	pair<int, int> tmp;
	vector<pair<int, int> > arr;
	
	for(int i=0;i<n;i++)
	{
		cin>>tmp.first>>tmp.second;
		arr.push_back(tmp);
	}
	stable_sort(arr.begin(),arr.end(),compare);
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i].first<<' '<<arr[i].second<<'\n';
	}
}
