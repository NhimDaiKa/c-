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

int main(){ 
	int t;
	cin>>t; 
	cin.ignore();
	while(t--){ 
		string n; 
		getline(cin, n);
		int s1[200]={}; 
		int check = 1;
		for(int i=0;i<n.length();i++){ 
			s1[n[i]]++; 
		} 
		for(int i=97;i<=122;i++){ 
			if(s1[i] > (n.length()+1)/2){
				check = 0;
				break;
			}
		} 
		cout << check << endl;
	} 
}

