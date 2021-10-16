#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,number;
	cin>>n;
	stack<int> S;

	for(int i=0;i<n;i++)
	{
		cin>>number;
		if(number==0)
		{
			S.pop();
		}
		else
		{
			S.push(number);
		}
	
	}
	int sum=0;
	while(!S.empty())
	{
		sum+=S.top();
		S.pop();
	}
	cout<<sum;
	return 0;
}
