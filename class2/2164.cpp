#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main(void)
{
	int n,tmp;
	scanf("%d",&n);
	queue<int> q;
	
	for(int i=1;i<=n;i++)
	{
		q.push(i);
	}
	
	while(q.size()>1)   //  342->42->front=4->2->24->4 // 24->4->
	{
		q.pop();
		q.push(q.front());
		q.pop();
	}
	cout<<q.front()<<endl;
	
}
