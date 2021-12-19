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
			for(int j=i*2; j<=2e6; j+=i)
				sang[j]=1;
		}	
	}
}

int main(){
	int t;
	cin >> t;
	sangnt();
	while(t--){
		long long l,r;
		cin >> l >> r;
		long m = ceil(sqrt(l));
		long n = sqrt(r);
		int count = 0;
		for(long i=m; i<=n; i++)
			if(sang[i]==0) count++;
		cout << count << endl;
	}
	return 0;
}
