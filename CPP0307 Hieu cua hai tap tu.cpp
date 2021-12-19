#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>
#define mod 1000000007
#define PI 3.141592653589793238

using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		stringstream u;
		stringstream v;
		string xau1 = "", xau2 = "";
		set<string> t1;
		set<string> t2;
		u << s1;
		v << s2;
		while(u >> xau1){
			t1.insert(xau1);	
		}
		while(v >> xau2){
			t2.insert(xau2);	
		}
		set<string>::iterator i;
		set<string>::iterator j;
		for (i = t1.begin(); i != t1.end(); i++){
		    int check = 0;
			for (j = t2.begin(); j != t2.end(); j++){
				if(*i == *j){ 
				    check = 1;
				    break;
				}
			}	
			if (check == 0) cout << *i << " ";
		}
		cout << endl;
	}
}
