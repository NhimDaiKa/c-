#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>
//#define mod 1000000007
#define PI 3.141592653589793238
#define a() a

using namespace std;
long long mod=1e9+7;

long long mu(long long h, long long g){
	if(g == 0) {
        return 1;
    } else { 
    	
        if(g % 2 == 0){
		long long p=mu(h, g/2)%mod;
            return (p%mod * p%mod) % mod;
        }
        else{
		long long p=mu(h,g/2)%mod;
            return (p%mod *p%mod* h%mod) % mod;
        }
    }
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		long long h=1;
		for(int i=0;i<n;i++){
			cin>>a[i];
			h=(h%mod * a[i]%mod) % mod;
		}
		long long g=a[0];
		for(int i=1;i<n;i++){
			g=__gcd( g%mod, a[i]%mod) % mod;
		}
		cout<<mu(h,g)<<endl;
	}
} 
