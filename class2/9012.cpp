#include <iostream>
using namespace std;

int main(void)
{
	int test,cnt=0,flag=0;
	cin>>test;
	string arr;
	
	for(int i=0;i<test;i++)
	{
		cnt=0;
		flag=0;
		cin>>arr;
		for(int j=0;j<arr.size();j++)
		{
			if(arr[j]=='(')
			{
				cnt++;
			}
			else if(arr[j]==')')
			{
				cnt--;
			}
			if(cnt<0)
			{
				printf("NO\n");
				flag=1;
				break;
				
			}
		}
		if(cnt==0)
		{
			printf("YES\n");
		}
		else
		{
			if(flag==0) printf("NO\n");
		}
	}
}
