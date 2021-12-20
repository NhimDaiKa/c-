#include<bits/stdc++.h>

using namespace std;


int main(){
	string ma, name;
	cin >> ma;
	scanf("\n");
	getline(cin, name);
	float toan, ly, hoa;
	cin >> toan >> ly >> hoa;
	char kv = ma[2];
	float uu = 0;
	if(kv=='1') uu = 0.5;
	else if(kv=='2') uu = 1.0;
	else uu = 1.5;
	float tong = toan + ly + hoa;
	cout << ma << " " << name << " " << uu << " " << tong << " ";
	if(tong+uu >= 24) cout << "TRUNG TUYEN";
	else cout << "TRUOT";
}
