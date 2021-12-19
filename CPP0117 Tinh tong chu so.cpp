#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int tong(long long n){
	long long sum=0;
	while(n>0){
		sum += n%10;
		n/=10;	
	}
	if(sum >= 10) return tong(sum);
	else return sum;
}

int main(){
    int t;
    cin >> t;
    while(t--){
    	long long n;
		cin >> n;
		cout << tong(n) << endl;	
    }
}
