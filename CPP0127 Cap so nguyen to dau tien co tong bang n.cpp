#include <iostream>
#include <algorithm>
#include <numeric>
#include <bits/stdc++.h>
using namespace std;

//long long sang[100000];
//void sangnt(){
//	sang[0]=1;
//	sang[1]=1;
//	for (int i=2; i<=1000; i++)	{
//		if (sang[i]==0)
//			for (int j=2*i; j<=100000; j+=i){
//				sang[j]=1;	
//			}
//	}
//}

int snt(long long n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++)
		if(n%i==0) return 0;
	return 1;	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,p=-1;
		cin >> n;
		for(int i=2; i<=n/2; i++){
			if(snt(i)==1 && snt(n-i)){
				p=i;
				cout << i << " " << n-i << endl;
				break;
			}
		}	
		if(p==-1) cout<<p<<endl;
	}
    return 0;
}
