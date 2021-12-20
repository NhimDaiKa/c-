#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n+5][3];
	for(int i=0; i<n; i++){
		cin >> a[i][0] >> a[i][1];
	}
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i][0]>a[j][0]){
				swap(a[i][0],a[j][0]);
				swap(a[i][1],a[j][1]);
			}
		}
	}
	int dem=a[0][0]+a[0][1];
	for(int i=1; i<n; i++){
		if(dem < a[i][0]) dem=a[i][0];
		dem += a[i][1];
	}
	cout << dem;
}
