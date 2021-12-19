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

struct sv{
	string msv, ten, lop;
	float m1, m2, m3;
};

int main (){
	struct sv a[100];
	int b[100]={};
	int t;
	cin >> t;
	for (int i=1; i<=t; i++){
		cin.ignore();
		getline(cin, a[i].msv);
		getline(cin, a[i].ten);
		getline(cin, a[i].lop);
		cin >> a[i].m1 >> a[i].m2 >> a[i].m3;
		b[i] = i;
	}	
	for (int i=1; i<t; i++){
		for (int j=i+1; j<=t; j++){
			if(a[i].msv > a[j].msv){
				swap(a[i].msv, a[j].msv);
				swap(a[i].ten, a[j].ten);
				swap(a[i].lop, a[j].lop);
				swap(a[i].m1, a[j].m1);
				swap(a[i].m2, a[j].m2);
				swap(a[i].m3, a[j].m3);
			}	
		}
	}
	for (int i=1; i<=t; i++){
		cout << i << " " << a[i].msv << " " << a[i].ten << " " << a[i].lop << " " << fixed << setprecision(1) << a[b[i]].m1 << " " << a[b[i]].m2 << " " << a[b[i]].m3 << endl;	
	}
}
