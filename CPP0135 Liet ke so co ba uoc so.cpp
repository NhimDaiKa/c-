#include <iostream>
#include <algorithm>
#include <numeric>
#include <bits/stdc++.h>
using namespace std;

long long sang[100000];
void sangnt(){
	sang[0]=1;
	sang[1]=1;
	for (int i=2; i<=1000; i++){
		if(sang[i]==0)
			for(int j=2*i; j<=1000; j+=i)
				sang[j] = 1;	
	}
}

int main(){
	int t;
	cin >> t;
	sangnt();
	while(t--){
		long long n;
		cin >> n;
		for(int i=2; i<=sqrt(n); i++){
			if (sang[i]==0) cout << i*i << " ";	
		}
		cout << endl;
	}
    return 0;
}
