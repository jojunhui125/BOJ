#include<bits/stdc++.h>
using namespace std;


int main(void)
{
	int x,y,w,h;
	cin>>x>>y>>w>>h;
	
	int tmp=min(x,y);
	int tmp2=min(w-x,h-y);
	
	printf("%d",min(tmp,tmp2));
	return 0;
	
}

