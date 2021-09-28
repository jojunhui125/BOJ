#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	int a,b,c;
	while(1)
	{
		cin>>a>>b>>c;
		if(a==0 && b==0 && c==0)
		{
			exit(0);
		}
		else
		{
			int aa=a*a;
			int bb=b*b;
			int cc=c*c;
			int maxi=max({aa,bb,cc});
			if(maxi==aa+bb+cc-maxi)
			{
				printf("right\n");
			}
			else
			{
				cout<<"wrong"<<endl;
			}
		}
	}
}
