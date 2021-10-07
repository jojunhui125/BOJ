#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
	int n,num;
	cin>>n;
	string ca;
	stack<int> st;
	
	for(int i=0;i<n;i++)
	{
		cin>>ca;
		if(ca=="push")
		{
			int num;
			cin>>num;
			st.push(num);
		}
		else if(ca=="pop")
		{
			if(st.empty())
			{
				cout<<"-1"<<endl;
			}
			else
			{
				cout<<st.top()<<endl;
				st.pop();
			}
		}
		else if(ca=="size")
		{
			cout<<st.size()<<endl;
		}
		else if(ca=="empty")
		{
			if(st.empty())
			{
				cout<<"1"<<endl;
			}
			else
			{
				cout<<"0"<<endl;
			}
		}
		else if(ca=="top")
		{
			if(st.empty())
			{
				cout<<"-1"<<endl;
			}
			else
			{
				cout<<st.top()<<endl;
			}
		}
	}
	return 0;
}
