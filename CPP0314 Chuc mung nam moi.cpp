#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

int main() {
	int n;
	cin >> n;
	cin.ignore();
	set <string> s;
	for (int i=0; i<n; i++){
		string a;
		getline(cin, a);
		s.insert(a);	
	}
	cout << s.size();
}
