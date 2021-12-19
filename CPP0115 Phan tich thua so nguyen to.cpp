#include <iostream>
#include <algorithm>
#include <numeric>
#include <bits/stdc++.h>
using namespace std;

long long sang[100000];
void sangnt(){
	sang[0]=1;
	sang[1]=1;
	for (int i=2; i<=1000; i++)	{
		if (sang[i]==0)
			for (int j=2*i; j<=100000; j+=i){
				sang[j]=1;	
			}
	}
}

int main(){
	int t;
	cin >> t;
	sangnt();
	while(t--){
		int n;
		cin >> n;
		int k=0;
		int a[1000],b[1000]={};
		while(n>1){
			if(sang[n]==0){
				if (n==a[k]) b[k]++;
				else{
					k++;
					a[k]=n;
					b[k]++;
				}
				break;
			}
			for (int i=2; i<=n/2; i++){
				if(n%i==0){
					if(i==a[k]) b[k]++;
					else{
						k++;
						a[k]=i;
						b[k]++;	
					}
					n/=i;
					break;	
				}
			}	
		}
		for (int i=1; i<=k; i++)
			cout << a[i] << " " << b[i] << " ";
		cout << endl;
	}
    return 0;
}
