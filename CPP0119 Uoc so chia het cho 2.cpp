#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int check(long n){
	if (n%2 != 0) return 0;
	else {
		int count=1;
		int a = sqrt(n);
		for (int i=2; i<=a; i++){
			if (n%i == 0){
				if (i%2==0) count++;
				if (n/i%2==0) count++;
			}	
		}
		if (a*a == n) count--;
		return count;
	}
}

int main()
{
    int t;
    cin >> t;
    while (t--){
    	long n;
		cin >> n;
		cout << check(n) << endl;
    }
    return 0;
}
