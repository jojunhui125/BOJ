#include <iostream>
#include <algorithm>
using namespace std;

int arr[10001];

int main(void)
{
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int n,tmp=0;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		tmp=max(tmp,num);
		arr[num]++;
	}
	cout<<"\n"<<tmp<<"\n"<<"\n";
	
	for(int i=1;i<=tmp;i++)
	{
		for(int j=0;j<arr[i];j++)
		{
			cout<<i<<"\n";
		}
	}
	return 0;
}

