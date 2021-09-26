#include<bits/stdc++.h>
using namespace std;
int board[55][55];
int n,m;

int check(int x,int y)
{
	int cnt1 = 0;
	int cnt2 = 0;

	for (int i = x; i < x + 8; i++) 
	{
		for (int j = y; j < y + 8; j++) 
		{
			if ((i + j) % 2 == board[i][j]) cnt1++; 
			if ((i + j + 1) % 2 == board[i][j]) cnt2++;
		}
	}

	return min(cnt1, cnt2);
}

int main(void)
{
	scanf("%d %d",&n,&m);
	char c;
	int mini=21470;

	for (int i = 0; i < n; i++) 
	{ 
		for (int j = 0; j < m; j++) 
		{		
			cin >> c;
			if (c == 'B') board[i][j] = 0;
			else board[i][j] = 1;
		}
	}
	
	for (int i = 0; i <= n-8; i++) 
	{ 
		for (int j = 0; j <= m-8; j++) 
		{
			if (mini > check(i, j)) mini = check(i, j);
		}
	}
	printf("%d",mini);
	return 0;
	
}

