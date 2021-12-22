#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int D,H,W;
	cin>>D>>H>>W;
	double c,t1,t2;
	c=sqrt(H*H+W*W);
	t1=H*D/c;
	t2=W*D/c;
	
	cout<<(int)t1<<" "<<(int)t2;
	return 0;

	
}
