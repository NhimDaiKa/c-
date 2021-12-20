#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int a[m+5]={};
	int maxx = -999;
	int max2 = -999;
	int trungcu;
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		a[x]++;
		if(a[x] > maxx) maxx = a[x];
	}
	for(int i=1; i<=m; i++){
		if(a[i] > max2 && a[i] < maxx){
			max2 = a[i];
			trungcu = i;
		}
	}
	if(max2==-999) cout << "NONE";
	else cout << trungcu;
}
