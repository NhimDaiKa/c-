#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main (){
	int n;
	cin >> n;
	int a[1000];
	int b[50][50];
	for (int i=0; i<n*n; i++)
		cin >> a[i];
	int k=0;
	sort(a,a+n*n);
	for (int i=0; i<=(n-1)/2; i++){
		for (int j=i; j<n-i; j++) {
			b[i][j] = a[k];
			k++;
		}
		for (int j=i+1; j<n-i; j++) {
			b[j][n-1-i] = a[k];
			k++;
		}
		for (int j=n-2-i; j>=i; j--) {
			b[n-1-i][j] = a[k];
			k++;
		}
		for (int j=n-2-i; j>i; j--) {
			b[j][i] = a[k];
			k++;
		}	
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++)
			cout << b[i][j] <<" ";
		cout << endl;	
	}
}
