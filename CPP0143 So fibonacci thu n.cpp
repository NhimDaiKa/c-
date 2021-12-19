#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

long long f[100];
void fibo(){
	f[1]=1;
	f[2]=1;
	for(int i=3; i<=92; i++)
		f[i]=f[i-1]+f[i-2];
}

int main(){
	int t;
	cin >> t;
	fibo();
	while(t--){
		int n;
		cin >> n;
		cout << f[n] << endl;
	}
}
