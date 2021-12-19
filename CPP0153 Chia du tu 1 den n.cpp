#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
    	long long n,k;
    	cin >> n >>k;
    	long long s=0;
    	if(n<k) s = (n+1)*n/2;
    	else for(long long i=1; i<=n; i++)
    		s += i%k;
    	cout << s << endl;
    }
}
