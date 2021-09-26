#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a,string b)
{
	if(a.size()==b.size())
	{
		return a<b;
	}
	else return a.size()<b.size();
}
int main(void)
{
	int n;
	cin>>n;
	
	

	vector<string> arr;
	
	string tmp;
	
	for(int i=0;i<n;i++)
	{
		string c;
		cin>>c;
		arr.push_back(c);
	}
	
	sort(arr.begin(),arr.end(),compare);
	
	for(int i=0;i<n;i++)
	{
		if(tmp==arr[i])
		{
			continue;
		}
		cout<<arr[i]<<endl;
		tmp=arr[i];
	}
	return 0;
}

