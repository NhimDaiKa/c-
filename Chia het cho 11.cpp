#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string a;
		scanf("\n");
		cin >> a;
		int check = 0;
		for(int i=0; i<a.length(); i++){
			if(i%2==0){
				check += a[i]-'0';
			}
			else check -= a[i]-'0';
		}
		if(check%11==0) cout << 1 << endl;
		else cout << 0 << endl;
	}
}
