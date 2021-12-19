#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t; 
	cin.ignore();
	while(t--){
		char a;
		cin >> a;
		if(a>='a' && a<='z') cout << char(a-32);
		else cout << char(a+32);
		cout <<endl;
	}
}
