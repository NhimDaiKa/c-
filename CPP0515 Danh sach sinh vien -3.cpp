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
	int msv;
	string name, cla, dob;
	float gpa;
};

void nhap(SinhVien ds[], int n){
	for (int i = 0; i < n; i++){
		ds[i].msv = i+1;
        scanf("\n");
        getline(cin, ds[i].name);
        cin >> ds[i].cla;
        cin >> ds[i].dob;
        scanf("\n");
        cin >> ds[i].gpa;
	}	
}

int cmp(struct SinhVien a, struct SinhVien b){
	return a.gpa > b.gpa;
}

void sapxep(struct SinhVien ds[], int n){
    sort(ds,ds+n,cmp);
}

void in(SinhVien ds[], int n){
	for (int i = 0; i < n; i++){
		cout << "B20DCCN" << setfill('0') << setw(3) << ds[i].msv << " ";
		transform(ds[i].name.begin(), ds[i].name.end(), ds[i].name.begin(), ::tolower);
		string tmp = ""; 
		stringstream u;
        u << ds[i].name;
        vector<string> t;
    	while(u >> tmp){
    		t.push_back(tmp);	
    	}
    	for (int j = 0; j < t.size();j++){
			string temp = t[j];
			temp[0] = toupper(temp[0]);
			cout << temp << " ";	
		}
		cout << ds[i].cla << " ";
		if (ds[i].dob[2] != '/') ds[i].dob.insert(0, "0");
		if (ds[i].dob[5] != '/') ds[i].dob.insert(3, "0");
		cout << ds[i].dob << " " << fixed << setprecision(2) << ds[i].gpa << endl;
	}	
}

int main() {
	struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
