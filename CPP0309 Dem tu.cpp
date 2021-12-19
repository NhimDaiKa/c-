#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>
#define mod 1000000007
#define sli " \t\n"
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		char s[10000];
		cin.getline(s,100000);
		char* a = strtok(s, sli);
		int count = 0;
		while(a != NULL){
			count++;
			a = strtok(NULL, sli);
		}	
		cout << count << endl;
	}
}
