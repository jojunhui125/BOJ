#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS 


int main() 
{

	int n, m;
	scanf("%d %d", &n, &m);
	int a[100] = { 0 };
	int sum = 0, max = 0;

	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				sum = a[i] + a[j] + a[k];
				if (sum > max && sum <= m)
				{
					max = sum;
				}
				
			}
		}
	}

	printf("%d", max);
	return 0;
}
