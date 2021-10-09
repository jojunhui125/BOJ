#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main(void)
{
	int n,k;
	queue<int> Q;
	queue<int> pQ;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		Q.push(i);
	}
	while(!Q.empty())
	{
		for(int i=1;i<k;i++)
		{
			Q.push(Q.front());
			Q.pop();
		}
		pQ.push(Q.front());
		Q.pop();
	}
	
	cout<<'<';
	while(pQ.size()>1)
	{
		cout<<pQ.front()<<','<<' ';
		pQ.pop();
	}
	cout<<pQ.front()<<'>';
}
