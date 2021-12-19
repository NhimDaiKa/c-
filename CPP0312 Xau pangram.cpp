#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

long long fibo[2000006];
void fb(){
	fibo[0]=0;
	fibo[1]=1;
	for (int i=2; i<=2e6; i++)
		fibo[i] = ( fibo[i-1]%mod + fibo[i-2]%mod )%mod;	
}

int main(){
    int t;
    cin >> t;
    fb();
    while(t--){
    	int n;
    	cin >> n;
    	cout << fibo[n] << endl;
    }
}
