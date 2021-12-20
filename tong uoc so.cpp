#include<bits/stdc++.h>

using namespace std;

int snt(long long n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++)
		if(n%i==0) return 0;
	return 1;
}

int main(){
	int t;
	cin >> t;
	long long tong = 0;
	while(t--){
		long n;
		cin >> n;
		for(int i=2; i<=sqrt(n); i++){
			while(n%i==0){
				tong+=i;
				n/=i;
			}
			if(snt(n)==1){
				tong+=n;
				break;
			}
		}
	}
	cout << tong;
}
