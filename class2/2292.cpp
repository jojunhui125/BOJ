#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	
	if(n==1)
	{
		printf("1");
	}
	else
	{
		n--;
		int i=1;
		while(n>0)
		{
			n-=6*i;
			i++;
		}
		printf("%d",i);
	}

}

