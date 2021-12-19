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

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
    	string a;
    	int b[200]={};
    	cin >> a;
    	for (int i=0; i<a.length(); i++){
    		b[a[i]]++;
    	}
    	for (int i=0; i<a.length(); i++){
    		if(b[a[i]]==1) cout << a[i];	
    	}
    	cout << endl;
    }
}
