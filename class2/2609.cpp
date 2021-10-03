#include <iostream>
using namespace std;

int a,b;

int gcd(int n1,int n2)
{
	int n;
	while(n2!=0)
	{
		n=n1%n2;
		n1=n2;
		n2=n;
	}
	return n1;
}
int main(void)
{
	cin>>a>>b;
	
	cout<<gcd(a,b)<<"\n"<<(a*b)/gcd(a,b)<<endl;
	return 0;
	

}
