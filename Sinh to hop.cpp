#include<bits/stdc++.h>

using namespace std;

int a[20];

int main(){
	int n,k;
	cin >> n >> k;
	for(int i=1; i<=k; i++) a[i] = i;
	while(1){
		for(int j=1; j <= k; j++) cout << a[j] << " ";
		cout << endl;
		int i = k;
		while(a[i] == n-k+i && i>0) i--;
		if (i==0) return 0;
		else {
			a[i]++;
			for(int j=i+1; j<=k; j++) a[j] = a[j-1] +1;
		}
	}
}
