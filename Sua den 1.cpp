#include<bits/stdc++.h>

using namespace std;

int a[100005];

int main(){
	int n,k,b;
	cin >> n >> k >> b;
	while(b--){
		int hong;
		cin >> hong;
		a[hong] = 1;
	}
	int count = 0;
	int minn = 999999;
	for (int i=1; i<=n; i++){
		for(int j = i; j<i+k; j++){
			if(a[j]==1) count++;
		}
		minn = min(minn,count);
		count = 0;
	}
	cout << minn;
}
