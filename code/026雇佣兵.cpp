#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
#define EPS 1e-8
int main()
{
	int M, N, X;
	scanf("%d %d %d", &M, &N, &X);
	//M �������ֵ
	//N ս����
	//X ����
	while (X > 0)
	{
		int t = M / N;//һ��ս�������ܼӶ���ս������
		if (M % N != 0)
		{
			++t;//�����ӵ�MҪ����ˮ��
		}
		X -= t;
		if (X < 0)
		{
			break;
		}
		else
		{
		
			t = M / N;//t��Ҫ����һ�� ��Ϊ ��֮ǰ�п��ܸĶ�t
			N += t;
		}
	}
	printf("%d", N);
	return 0;
}