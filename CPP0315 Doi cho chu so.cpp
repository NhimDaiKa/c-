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
        string s;
        cin >> s;
        int dem = 0, len = s.length();
        int max =-1;
        int k =-1;
        int note = -1;
        if(s[0] == '0') cout << -1;
        else{
	        for (int i=len-1; i>0; i--){
	        	if(s[i]<s[i-1]){
	        		note=i-1;
	        		dem++;
					break;	
	        	}
	        }
	        for (int i=len-1; i>note; i--){
		        if(s[i] - 48 >= max && s[i]< s[note]){
					max = s[i]-48;
					k=i;	
				}
			}
			swap(s[note], s[k]);
	        if(dem == 1 && s[0] != '0')
	        	for (int i=0; i<len; i++)
	        		cout << s[i];
	        else cout << -1;
        }
        cout << endl;
    }
}
