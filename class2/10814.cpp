#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool com(pair<int,string> a, pair<int, string> b)
{
	return a.first<b.first;
}


int main(void)
{
	int n;
	cin>>n;
	pair<int,string> tmp;
	vector<pair<int,string>> arr;
	for(int i=0;i<n;i++)
	{
		cin>>tmp.first>>tmp.second;
		arr.push_back(tmp);
	}
	
	stable_sort(arr.begin(),arr.end(),com);
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i].first<<' '<< arr[i].second<<'\n';
	}
}
