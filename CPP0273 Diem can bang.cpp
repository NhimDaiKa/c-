#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

int main(){ 
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        long long a[n+5];
        int sum = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        int trai = 0;
        int check = 0;
        for (int i = 1; i<n-1; i++){
            trai += a[i-1];
			int phai = sum - trai - a[i];
			if(phai == trai){
				cout << i+1 << endl;
				check = 1;
				break;
			}
        }
        if(check == 0) cout << -1 << endl;
    }
}

