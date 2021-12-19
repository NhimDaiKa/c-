#include <iostream>
#include <algorithm>
#include <numeric>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long a,b;
		cin >> a >> b;
		long long ucln = std::__gcd(a,b);
		long long bcnn = a*b/ucln;
		cout << bcnn << " " << ucln << endl;	
	}
    return 0;
}
