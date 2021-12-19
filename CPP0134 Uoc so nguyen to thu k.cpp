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
		int n,k,count=0,p=-1;
		cin >> n >> k;
		while(n>1){
			if(sang[n]==0){
				p=n;
				count++;
				break;
			}
			for (int i=2; i<=n/2; i++){
				if(n%i==0){
					p=i;
					count++;
					n/=i;
					break;	
				}
			}
			if(count>=k) break;	
		}
		if(count==k) cout<<p<<endl;
		else cout<<-1<<endl;
	}
    return 0;
}
