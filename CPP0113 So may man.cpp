#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
    	cin.ignore();
    	string a;
		cin	>> a;
		int len=a.length();
		if (a[len-1]=='6' && a[len-2]=='8') cout <<1;
		else cout << 0;
		cout <<endl;
    }
}
