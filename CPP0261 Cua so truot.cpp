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
		int n;
		cin >> n;
		int a[n+5][n+5];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> a[i][j];
		int m;
		cin >> m;
		int b[m+5][m+5];
		for (int i = 0; i < m; i++)
			for(int j = 0; j < m; j++)
				cin >> b[i][j];
		int k = (n*n) / (m*m);
		int row = 0, col = 0;
		while(k--){
			for(int i = 0; i < m; i++){
				for (int j = 0; j < m; j++){
					a[i+row][j+col] = a[i+row][j+col] * b[i][j];	
				}
			}
			col += m;
			if (col == n){
				col = 0;
				row += m;
			}	
		}
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++)
				cout << a[i][j] << " ";
			cout << endl;	
		}	
}
