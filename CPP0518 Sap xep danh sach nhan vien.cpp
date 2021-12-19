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
#define a() a

using namespace std;
int k = 0;

struct NhanVien {
	string name, gen, addr, tel, date;
	char dob[20], dob1[20];
	int ngay, thang, nam, stt;
};

void nhap(NhanVien &a){
	if (k==0) scanf("\n");	
	getline(cin, a.name);
	getline(cin, a.gen);
	cin >> a.dob;
	scanf("\n");
	getline(cin, a.addr);
	getline(cin, a.tel);
	getline(cin, a.date); 
	strcpy(a.dob1, a.dob);
	char *p=strtok(a.dob,"/");
	a.thang=atoi(p);
	p=strtok(NULL,"/");
	a.ngay=atoi(p);
	p=strtok(NULL,"/");
	a.nam=atoi(p);
	a.stt = k+1;
	k++;
}

int cmp(NhanVien &a, NhanVien &b){
	if (a.nam != b.nam) return a.nam < b.nam;
	else 
		if(a.thang != b.thang) return a.thang < b.thang;
		else 
			return a.ngay < b.ngay;	
}

void sapxep(NhanVien ds[], int n){
	sort(ds, ds+n, cmp);	
}

void inds(NhanVien ds[], int n){
	for (int i = 0; i < n; i++)
		cout << setfill('0') << setw(5) << ds[i].stt << " " << ds[i].name << " " << ds[i].gen << " " << ds[i].dob1 << " " << ds[i].addr << " " << ds[i].tel << " " << ds[i].date << endl;
}

int main()
{
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
