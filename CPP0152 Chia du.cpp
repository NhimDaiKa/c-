#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int check(int a, int m){
	int mod = 0;
	for (int i=1; i<=m-1; i++){
		mod = (mod+a)%m;
		if(mod == 1) 
			return i;	
	}
	return -1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, m;
        cin >> a >> m;
        int kq = check(a,m);
        cout << kq << endl;
    }
}
