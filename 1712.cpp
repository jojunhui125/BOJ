#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	int a,b,c;
	cin>>a>>b>>c;
	if(b>=c)
	{
		cout<<-1;
		return 0;
	}
	
	//a는 고정비용, b는 가변비용 c는 노트북 가격
	cout<<a/(c-b)+1;
}
