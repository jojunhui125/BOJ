#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
	queue<int> Q;
	int n,num;
	cin>>n;
	string tex;
	
	for(int i=0;i<n;i++)
	{
		cin>>tex;
		if(tex=="push")
		{
			int num;
			cin>>num;
			Q.push(num);
		}
		else if(tex=="pop")
		{
			if(Q.empty())
			{
				cout<<"-1"<<endl;
			}
			else
			{
				cout<<Q.front()<<endl;
				Q.pop();
				
			}
		}
		else if(tex=="size")
		{
			cout<<Q.size()<<endl;
		}
		else if(tex=="empty")
		{
			if(Q.empty())
			{
				cout<<"1"<<endl;
			}
			else
			{
				cout<<"0"<<endl;
			}
		}
		else if(tex=="front")
		{
			if(Q.empty())
			{
				cout<<"-1"<<endl;
			}
			else
			{
				cout<<Q.front()<<endl;
			}
		}
		else if(tex=="back")
		{
			if(Q.empty())
			{
				cout<<"-1"<<endl;
			}
			else
			{
				cout<<Q.back()<<endl;
			}
		}
	}
	return 0;
}
