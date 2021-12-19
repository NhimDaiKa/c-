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

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) { 
		string x1, x2; 
		cin >> x1 >> x2;
		long long maxStr1 = 0, minStr1 = 0;
		for (int i = 0; i < x1.length(); i++) { 
			if (x1[i] == '5'){
				maxStr1 = maxStr1*10 + x1[i] + 1 - '0';
				minStr1 = minStr1*10 + x1[i] - '0';	
			}
			else if (x1[i] == '6'){
				maxStr1 = maxStr1*10 + x1[i] - '0';
				minStr1 = minStr1*10 + x1[i] - 1 - '0';	
			}
			else {
				maxStr1 = maxStr1*10 + x1[i] - '0';
				minStr1 = minStr1*10 + x1[i] - '0';	
			}
		}
		long long maxStr2 = 0, minStr2 = 0;
		for (int i = 0; i < x2.length(); i++) { 
			if (x2[i] == '5'){
				maxStr2 = maxStr2*10 + x2[i] + 1 - '0';
				minStr2 = minStr2*10 + x2[i] - '0';
			}
			else if (x2[i] == '6'){
				maxStr2 = maxStr2*10 + x2[i] - '0';
				minStr2 = minStr2*10 + x2[i] - 1 - '0';
			}
			else {
				maxStr2 = maxStr2*10 + x2[i] - '0';
				minStr2 = minStr2*10 + x2[i] - '0';
			}
		} 
		cout << minStr1 + minStr2 << " " << maxStr1 + maxStr2 << endl;
	}
}
