#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int testcase;
	int x1,y1,r1,x2,y2,r2;
	int d,cycle1,cycle2;
	cin>>testcase;
	
	for(int i=0;i<testcase;i++)
	{
		cin>>x1>>y1>>r1;
		cin>>x2>>y2>>r2;
		d=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
		cycle1=(r1-r2)*(r1-r2);
		cycle2=(r1+r2)*(r1+r2);
		
		if(d==0)
		{
			if(cycle1==0)
			{
				cout<<"-1"<<'\n';
			}
			else
			{
				cout<<"0"<<'\n';
			}
		}
		else if(d==cycle1 || d==cycle2)
		{
			cout<<"1"<<'\n';
		}
		else if(cycle1<d && cycle2>d)
		{
			cout<<"2"<<'\n';
		}
		else
		{
			cout<<"0"<<'\n';
		}
	}
	
	return 0;
	
}
