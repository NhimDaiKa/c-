#include <iostream>
#include <algorithm>
#include <numeric>
#include <bits/stdc++.h>
using namespace std;

int sang[100000];
void sangnt(){
	int n = 100001;
	sang[0]=1;
	sang[1]=1;
	for (int i=2; i<=n; i++){
		if(sang[i]==0)
			for(int j=2*i; j<=n; j+=i){
				sang[j]=1;
			}	
	}
}

int main(){
	int t;
	cin >> t;
	sangnt();
	while(t--){
		int n;
		cin >> n;
		for(int i=2; i<=n/2; i++){
			if (sang[i]==0 && sang[n-i]==0){
				cout << i << " " << n-i << endl;
				break;
			}	
		}
	}
    return 0;
}
