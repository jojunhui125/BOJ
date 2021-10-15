#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	
	int test_case;
	cin>>test_case;
	int n,m,num,count=0;
	
	for(int i=0;i<test_case;i++)
	{
		cin>>n>>m;
		count =0;
		queue<pair<int, int> > Q;
		priority_queue<int> pQ;
		for(int j=0;j<n;j++)
		{
			cin>>num;
			Q.push({j,num});
			pQ.push(num);
		}
		
		
		
		while(!Q.empty())
		{
			int index=Q.front().first;
			int value=Q.front().second;
			Q.pop();
			
			if(pQ.top()==value)
			{
				pQ.pop();
				count++;
				if(index==m)
				{
					cout<<count<<'\n';
					break;
				}
			}
			else
			{
				Q.push({index,value});
			}
		}
		
	}
}
