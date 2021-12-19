#include <iostream>
#include <algorithm>
#include <numeric>
#include <bits/stdc++.h>
using namespace std;

long long sang[100000];
void sangnt(){
	sang[0]=1;
	sang[1]=1;
	for (int i=2; i<=1000; i++)	{
		if (sang[i]==0)
			for (int j=2*i; j<=100000; j+=i){
				if(sang[j]==0) sang[j]=i;	
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
		cout << "1 ";
		for (int i=2; i<=n; i++){
			if (sang[i]==0) cout << i << " ";
			else cout << sang[i] << " ";	
		}
		cout << endl;
	}
    return 0;
}
