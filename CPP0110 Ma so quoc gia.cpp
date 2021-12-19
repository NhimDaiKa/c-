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
    cin >> t;
    cin.ignore();
    while(t--){
		string a;
    	getline(cin,a);
    	int len = a.length();
    	int k = 0;
    	char b[100][100];
    	int note=0;
    	for (int i=0; i<len-2; i++){
    		for(int j=i; j<i+3; j++){
    			b[k][j-i] = a[j];
			}
			b[k][3]='\0';
			k++;
		}
		for(int i=0; i<=k; i++){
			if(strcmp(b[i],"084")==0){
				note=i;
				break;
			}
		}
		for (int i=0; i<len; i++){
			if(i<note || i > note +2) cout << char(a[i]);	
		}
		cout << endl;
	}
}
