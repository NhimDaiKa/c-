#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

long long sang[2000006]={};
void sangnt(){
	sang[0]=1;
	sang[1]=1;
	for(int i=2; i<2e6; i++){
		if(sang[i]==0){
			sang[i] = i;
			for(int j=i*2; j<=2e6; j+=i)
				if(sang[j]==0) sang[j] = i;
		}	
	}
}

int main(){
	int t;
	cin >> t;
	sangnt();
	while(t--){
		long long n;
		cin >> n;
		for (int i=1; i<=n; i++)
			cout << sang[i] << " ";
		cout << endl;
	}
	return 0;
}
