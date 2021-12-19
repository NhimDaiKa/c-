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
	for (int i=1; i<=k; i++){
		if(a[i]==1) count++;
	}
	int minn = count;
	for(int i=k+1; i<=n; i++){
		if(a[i]==1) count++;
		if(a[i-k]==1) count--;
		minn = min(count,minn);
	}
	cout << minn;
}
