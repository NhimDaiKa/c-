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
	cin >> t;
	while(t--){
		double a,b,c,d;
		cin >> a >> b >> c >> d;
		double kc = sqrt((a-c)*(a-c)+(b-d)*(b-d));
		cout << fixed << setprecision(4) << kc << endl;
	}
}
