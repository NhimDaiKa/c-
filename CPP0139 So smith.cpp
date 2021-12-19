#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int snt(long n){
	if(n<2) return 0;
	for (int i=2; i<=sqrt(n); i++)
		if(n%i==0) return 0;
	return 1;	
}

int tcs(long n){
	int tong=0;
	for (long i=n; i>0; i/=10)
		tong += i%10;
	return tong;
}

int tsnt(long n){
	int sum = 0;
	long i=2;
	while (n>1){
		while (n%i==0){
			sum += tcs(i);
			n /= i;
		}
		i++;
	}
	return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n;
    	cin >> n;
    	if(snt(n)==1) cout << "NO";
    	else{
	    	if (tcs(n) == tsnt(n))
	    		cout << "YES";
	    	else cout << "NO";
	    }
    	cout << endl;
    }
}
