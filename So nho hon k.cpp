#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n+5];
		int count = 0;
		for(int i=0; i<n; i++){
			cin >> a[i];
			if(a[i] <= k) count++;
		}
		int thay = 0;
		for(int i=0; i<count; i++){
			if(a[i]>k) thay++;
		}
		int res = thay;
		for(int i=count; i<n; i++){
			if(a[i]>k) thay++;
			if(a[i-count] > k) thay--;
			res = min(thay,res);
		}
		cout << res << endl;
	}
}
