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

int dem=0;

struct NhanVien
{
    string name, gen, dob, addr, thue, date;
};

void nhap(NhanVien &ds)
{
	if(dem==0) cin.ignore();
	dem++;
    getline(cin, ds.name);
    getline(cin, ds.gen);
    getline(cin, ds.dob);
    getline(cin, ds.addr);
    getline(cin, ds.thue);
    getline(cin, ds.date);
}
void inds(NhanVien ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << setfill('0') << setw(5) << i+1 << " ";
        cout << ds[i].name << " " << ds[i].gen << " " << ds[i].dob << " " << ds[i].addr << " " << ds[i].thue << " " << ds[i].date << endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    cin.ignore();
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
