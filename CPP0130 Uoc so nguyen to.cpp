#include <iostream>
#include <algorithm>
#include <numeric>
#include <bits/stdc++.h>
using namespace std;

int snt(long long n){
	if(n<2) return 0;
	for (long long i=2; i<=sqrt(n); i++)
		if(n%i==0) return 0;
	return 1;	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		for(n; n>0; ){
			if (snt(n)==1){
				cout << n << endl;	
				break;
			}		
			for (int i=2; i<=n/2; i++){
				if(n%i==0){
					cout << i << " ";	
					n/=i;
					break;
				}
			}
		}
	}
    return 0;
}
