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

typedef struct {
	string name, cate;
	float mua, ban, ln;
} hang;

int main (){
	hang a[100];
	int b[100]={};
	int t;
	cin >> t;
	for (int i=1; i<=t; i++){
	    cin.ignore();
		getline(cin, a[i].name);
		getline(cin, a[i].cate);
		cin >> a[i].mua >> a[i].ban;
		a[i].ln = a[i].ban - a[i].mua;
		b[i] = i;
	}
	for (int i=1; i<=t; i++){
		for (int j=i+1; j<=t; j++){
			if (a[i].ln < a[j].ln){
				swap(b[i], b[j]);
			}
		}	
	}
	for (int i=1; i<=t; i++){
	    cout << b[i] << " " << a[b[i]].name << " " << a[b[i]].cate << " " << fixed << setprecision(2) << a[b[i]].ln << endl;
	}
}
