#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long mina = 0, minb = 0, maxa = 0, maxb = 0;
		string a,b;
		scanf("\n");
		cin >> a >> b;
		for(int i=0; i<a.length(); i++){
			if(a[i]=='5' || a[i]=='6'){
				maxa = maxa*10 + 6;
				mina = mina*10 + 5;
			}
			else{
				maxa = maxa*10 + (a[i]-'0');
				mina = mina*10 + (a[i]-'0');
			}
		}
		for(int i=0; i<b.length(); i++){
			if(b[i]=='5' || b[i]=='6'){
				maxb = maxb*10 + 6;
				minb = minb*10 + 5;
			}
			else{
				maxb = maxb*10 + (b[i]-'0');
				minb = minb*10 + (b[i]-'0');
			}
		}
		cout << mina+minb << " " << maxa+maxb << endl;
	}
}
