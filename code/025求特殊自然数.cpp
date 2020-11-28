#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int m = 49;


	while(1) {
		int n = m;
		int p70 = n % 7;
		n /= 7;
		int p71 = n % 7;
		n /= 7;
		int p72 = n % 7;
		if (p70 * 81 + p71 * 9 + p72 == m) {
			cout << m << endl;
			cout << p72 << p71 << p70 << endl;
			cout << p70 << p71 << p72 << endl;
			break;
		}
		m++;
	}
	
	return 0;
}