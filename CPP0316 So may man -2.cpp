#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>
#define mod 1000000007
#define PI 3.141592653589793238

using namespace std;

int tong(string n){
	long long sum=0;
	for(int i=0; i<n.length(); i++)
		sum += n[i]-'0';
	if(sum >= 10){ 
		string sum1 = to_string(sum);
		return tong(sum1);
	}
	else return sum;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
    	string n;
    	getline(cin, n);
		if(tong(n)==9) cout << 1 << endl;
		else cout << 0 << endl;	
    }
}

