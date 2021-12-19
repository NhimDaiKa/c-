#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int check(char a[]){
	for(int i=0; i<strlen(a); i++){
		if(a[i]!='0' && a[i]!='6' && a[i]!='8')
			return 0;	
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		char a[20];
		cin >> a;
		if(check(a)==1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
    return 0;
}
