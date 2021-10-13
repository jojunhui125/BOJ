#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

int main(void)
{
	stack<int> s;
	string result;
	int n;
	cin>>n;
	int i=1;
	
	while(n--)
	{
		int num;
		cin>>num;
		if(i<=num)
		{
			while(i<=num)
			{	
				s.push(i);
				i++;
				result+='+';
			}
			s.pop();
			result+='-';
		}
		else
		{
			if(s.top()<num)
			{
				cout<<"NO"<<'\n';
				return 0;
			}
			else
			{
				s.pop();
				result+='-';
			}
		}
			
	}
	
	for(int j=0;j<result.size();j++)
	{
		cout<<result[j]<<"\n";
	}
	
	return 0;
}

