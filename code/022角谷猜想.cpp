#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	long long N;
	scanf("%lld", &N);
	while (N != 1)
	{
		if (N % 2 == 0)
		{
			printf("%lld/2=%lld\n", N, N / 2);
			N /= 2;
		}
		else
		{
			printf("%lld*3+1=%lld\n", N, N * 3 + 1);
			N = N * 3 + 1;

		}
	}
	printf("End");
	return 0;
}