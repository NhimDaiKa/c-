#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int check(int n){
	int count = 0;
	for(int i=2; i<=n; i++){
		int dem=0;
		while(n%i==0){
			n/=i;
			dem++;
			if(dem>1) return 0;
		}
		if(dem==1) count++;
	}
	if(count==3) return 1;
	else return 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	cout << check(n) << endl;
	}
}
