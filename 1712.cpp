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
	
	//a�� �������, b�� ������� c�� ��Ʈ�� ����
	cout<<a/(c-b)+1;
}
