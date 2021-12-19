#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, p;
		cin >> n >> p;
		long long dem = 0;
		for(long long i = p;i <= n;i +=p){
			long long a = i;
			while(a % p == 0){
				dem++;
				a /= p;
			}
		}
		cout << dem << endl;
    }
}
