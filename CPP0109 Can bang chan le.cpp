#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int check(long long n){
	int chan = 0;
	int le = 0;
	while(n>0){
		if((n%10)%2==0) chan++;
		else le++;
		n/=10;
	}	
	if(chan==le) return 1;
	else return 0;
}

int main(){
    int n;
    cin >>n;
    long long a = pow(10, n-1);
    long long b = pow(10, n)-1;
    int count=0;
    for (a; a<=b; a++){
    	if(check(a)==1){
			cout <<a<<" ";
			count++;
			if(count == 10){
				cout << endl;
				count =0;	
			}
		}	
    }
    cout <<endl;
}
