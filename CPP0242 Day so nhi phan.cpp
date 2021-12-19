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
		int n;
		cin >> n; 
		int a1[n],a2[n]; 
		for(int i = 0;i < n; i++) cin>>a1[i]; 
		for(int i = 0;i < n; i++) cin>>a2[i]; 
		int max = 1, k = 0; 
		for(int i = 0; i < n; i++){ 
			int count1 = 0, count2 = 0;
			for(int j=i;j<n;j++){ 
				count1 += a1[j]; 
				count2 += a2[j]; 
				if(count1 == count2) k = j - i + 1; 
			}
			if(k > max) max = k; 
		} 
		cout << max; 
		cout << endl;
    }
}

