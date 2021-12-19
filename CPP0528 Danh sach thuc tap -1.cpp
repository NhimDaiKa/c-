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
	string msv, name, cla, mail, cty;
	int stt;
};

void nhap(SinhVien ds[], int n){
	for (int i = 0; i < n; i++){
		ds[i].stt = i+1;
		scanf("\n");
        getline(cin, ds[i].msv);
        getline(cin, ds[i].name);
        getline(cin, ds[i].cla);
        getline(cin, ds[i].mail);
        getline(cin, ds[i].cty);
	}
}

int cmp(struct SinhVien a, struct SinhVien b){
	return a.name < b.name;
}

void sapxep(struct SinhVien ds[], int n){
    sort(ds,ds+n,cmp);
}

void in(SinhVien ds[], int n, int q, string comp[]){
	for (int i = 0; i < q; i++){
		for (int j = 0; j < n; j++){
			if (ds[j].cty == comp[i]){
				cout << ds[j].stt << " " << ds[j].msv << " " << ds[j].name << " " << ds[j].cla << " " << ds[j].mail << " " << ds[j].cty << endl;	
			}
		}	
	}	
}

int main() {
	struct SinhVien ds[50];
    int N;
    cin >> N;
    int Q;
    string comp[10];
    nhap(ds, N);
    cin >> Q;
    cin.ignore();
    for (int i = 0; i < Q; i++){
		string L;
		getline(cin, L);
		comp[i] = L;
    }
    sapxep(ds, N);
    in(ds, N, Q, comp);
    return 0;
}
