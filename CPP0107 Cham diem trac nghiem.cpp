#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

char a[15]= {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'}; 
char b[15]= {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};

int main(){
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	char check[20];
    	int dung=0;
    	if(n==101)
	    	for(int i=0; i<15; i++){
	    		cin >> check[i];
	    		if(check[i]==a[i]) dung++;
	    	}
	    else 
	    	for(int i=0; i<15; i++){
	    		cin >> check[i];
	    		if(check[i]==b[i]) dung++;
	    	}
	    double diem = (double)dung*2/3;
	    cout << fixed << setprecision(2) << diem << endl;
	}
}
