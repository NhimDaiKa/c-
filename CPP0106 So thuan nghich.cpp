#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int check(string a){
	int len=a.length();
	for(int i=0; i<len/2; i++)
		if(a[i]!=a[len-1-i]) return 0;
	return 1;
}

int main(){
	int t;
	cin >> t; 
	cin.ignore();
	while(t--){
		string a;
		cin >> a;
		cin.ignore();
		if(check(a)==1) cout << "YES";
		else cout << "NO";
		cout <<endl;
	}
}
