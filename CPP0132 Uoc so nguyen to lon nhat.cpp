#include <iostream>
#include <algorithm>
#include <numeric>
#include <bits/stdc++.h>
using namespace std;


int snt(long long n){
	if (n<2) return 0;
	for (int i=2; i<=sqrt(n); i++)
		if(n%i==0) return 0;
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		for (n; n>1; ){
			if(snt(n)==1){
				cout << n;
				break;
			}
			for (int i=2; i<=sqrt(n); i++){
				if(n%i==0){
					n/=i;
					break;
				}	
			}
		}
		cout << endl;
	}
    return 0;
}
