#include <iostream>
#include <string>
using namespace std;

const int MOD=1234567891;
const int Mul=31;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	
	string s;
	cin>>s;
	
	long long sum=0;
	long long r=1;
	
	for(long long i=0;i<s.length();i++)
	{
		sum=(sum+(s[i]-'a'+1)*r)%MOD;
		r=(r*Mul)%MOD;
	}
	
	cout<<sum<<endl;
	return 0;
}
