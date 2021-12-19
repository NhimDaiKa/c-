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

struct SinhVien{
    string name, msv, cla;
	float d1, d2, d3;
};

void nhap(SinhVien &a){
	cin.ignore();
	getline(cin, a.msv);
	getline(cin, a.name);
	getline(cin, a.cla);
	cin >> a.d1 >> a.d2 >> a.d3;
}

void in(struct SinhVien a){
	cout << a.msv << " " << a.name << " " << a.cla << fixed << setprecision(1) << " " << a.d1 << " " << a.d2 << " " << a.d3 << endl;
}

int cmp(struct SinhVien a, struct SinhVien b){
	return a.name < b.name;
}

void inds(struct SinhVien ds[], int n){
	sort(ds, ds + n, cmp);
	for(int i = 0; i < n; i++){
		cout << i + 1 << " ";
		in(ds[i]);
	}
}

int main(){
    struct SinhVien ds[101];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
