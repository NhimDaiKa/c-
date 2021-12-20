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

string tong(string a, string b){
    string c = " ";
    while(a.length() < b.length()){
		a = "0" + a;
	}
    while(a.length() > b.length()){
		b = "0" + b;
	}
    int nho = 0;
    if(a < b) swap(a, b);
    for(int i = a.length()-1;i >= 0;i--){
        int tong = a[i] -48 + b[i] -48 + nho;
        if(tong >= 10){
            c = (char)(tong-10+48) + c;
            nho = 1;
        }
        else{
            c = (char)(tong+48) + c;
            nho = 0;
        }
    }
    if(nho == 1) c = "1" + c;
    return c;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string a, b;
        cin >> a >> b;
        cout << tong(a, b) << endl;
    }
}
