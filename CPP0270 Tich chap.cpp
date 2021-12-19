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
#define a() a

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
    	int x[500][500], h[5][5];
		int n, m;
		cin >> n >> m;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> x[i][j];
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
				cin >> h[i][j];
		long long sum = 0;
		for (int i = 0; i <= n-3; i++){
			for (int j = 0; j <= m-3; j++){
				sum += h[0][0]*x[i][j] + h[0][1]*x[i][j+1] + h[0][2]*x[i][j+2];
				sum += h[1][0]*x[i+1][j] + h[1][1]*x[i+1][j+1] + h[1][2]*x[i+1][j+2];
				sum += h[2][0]*x[i+2][j] + h[2][1]*x[i+2][j+1] + h[2][2]*x[i+2][j+2];
			}	
		}
		cout << sum << endl;
    }
}
