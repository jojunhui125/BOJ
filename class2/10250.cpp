#include <iostream>
#include <algorithm>
using namespace std;

int arr[101][101];
int main(void)
{
	int H,W,N,T;
	
	cin>>T;
	
	for(int i=0;i<T;i++)
	{
		cin>>H>>W>>N;
		int tmp=N%H; //4
		int tmp2=N/H; //2
		if(tmp>0)
		{
			tmp2++;
		}
		else
		{
			tmp=H;
		}
		
		printf("%d\n",tmp*100+tmp2);
		
	}
}
