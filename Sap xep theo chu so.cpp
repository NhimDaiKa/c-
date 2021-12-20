#include<bits/stdc++.h>

using namespace std;

int cmp(string a,string b){
	if(a+b < b+a) return 0;
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		scanf("\n");
		string a[100000];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a,a+n,cmp);
		for(int i=0; i<n; i++) cout << a[i];
		cout << endl;
	}
}
