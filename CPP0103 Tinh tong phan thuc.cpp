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
    double n;
    cin >> n;
    double sum = 1;
    for(double i=2; i<=n; i++){
    	sum += 1/i;
	}
	cout << fixed << setprecision(4) << sum;
}
