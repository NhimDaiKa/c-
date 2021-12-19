#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

long long sang[100000];
void sangnt(){
	sang[0]=1;
	sang[1]=1;
	for (int i=2; i<=100000; i++)	{
		if (sang[i]==0)
			for (long long j=2*i; j<=100000; j+=i){
				sang[j]=1;	
			}
	}
}

//int snt(long long n){
//	if(n<2) return 0;
//	for(int i=2; i<=sqrt(n); i++)
//		if(n%i==0) return 0;
//	return 1;	
//}

int main(){
	int t;
	cin >> t;
	sangnt();
	while(t--){
		int n;
		cin >> n;
		int count=0;
		if(sang[n]==0) count = n-1;
		else{
			for(int i=1; i<n; i++){
				if(__gcd(i,n)==1) count++;	
			}
		}
		if(sang[count]==0) cout << "1" << endl;
		else cout << "0" << endl;
	}
    return 0;
}
