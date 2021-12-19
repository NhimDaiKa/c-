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
#define a() a

using namespace std;

char name[100][100];
char dob[100][100];
int ngay[100], thang[100], nam[100];

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		scanf("\n");
		cin >> name[i];
		cin >> dob[i];
		char *p=strtok(dob[i],"/");
		ngay[i]=atoi(p);
		p=strtok(NULL,"/");
		thang[i]=atoi(p);
		p=strtok(NULL,"/");
		nam[i]=atoi(p);
	}
	for(int i = 0; i < t-1; i++){
		for(int j = i+1; j < t; j++){
			if(nam[i] > nam[j]){
				swap(name[i], name[j]);
				swap(nam[i], nam[j]);
				swap(thang[i], thang[j]);
				swap(ngay[i], ngay[j]);
			}
			else if (nam[i] == nam[j]){
				if (thang[i] > thang[j]){
					swap(name[i], name[j]);
					swap(nam[i], nam[j]);
					swap(thang[i], thang[j]);
					swap(ngay[i], ngay[j]);
				}
				else if (thang[i] == thang[j]){
					if (ngay[i] > ngay[j]){
						swap(name[i], name[j]);
						swap(nam[i], nam[j]);
						swap(thang[i], thang[j]);
						swap(ngay[i], ngay[j]);	
					}
				}
			}
		}	
	}
	cout << name[t-1] << endl << name[0];	
}
