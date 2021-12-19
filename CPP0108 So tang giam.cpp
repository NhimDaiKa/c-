#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int snt(long long n){
	if(n<2)	return 0;
	for (int i=2; i<=sqrt(n); i++)
		if(n%i==0) return 0;
	return 1;
}

int tang(long long n){
	while(n>=10){
		if(n%10 <= (n/10)%10) return 0;
		n/=10;
	}	
	return 1;
}

int giam(long long n){
	while(n>=10){
		if(n%10 >= (n/10)%10) return 0;
		n/=10;
	}	
	return 1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
		int n;
		cin >> n;
		int count = 0;
		long long a = pow(10, n-1)+1;
		long long b = pow(10, n);
			for(a; a<b; a+=2){
				if(tang(a)==1 || giam(a)==1){
					if(snt(a)==1) count++;
				}	
			}
		cout << count << endl;
	}
}
