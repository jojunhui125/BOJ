#include <iostream>
#include <vector>;
using namespace std;

int n,k;
int ncr(int a)
{
	if(a==1)
	{
		return 1;
	}
	else
	{
		int result=1;
		for(int i=a;i>=1;i--)
		{
			result*=i;
		}
		
		return result;
	}
}
int main(void)
{

	cin>>n>>k;
	
	int sum=ncr(n)/(ncr(k)*ncr(n-k));
	
	cout<<sum<<endl;
	
	
	return 0;
}
