#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int main(void)
{
	string s;

	while(1)
	{
		cin>>s;
		if(s=="0")
		{
			break;
		}
		int flag=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]!=s[s.size()-1-i])
			{
				printf("no\n");
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			cout<<"yes"<<endl;
		}
	}
	
	return 0;
}
