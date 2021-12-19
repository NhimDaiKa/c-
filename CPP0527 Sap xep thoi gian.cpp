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

int main(){ 
    int n;
    cin >> n;
    int a[n+5][3];
    for (int i=0; i<n; i++)
    	for (int j=0; j<3; j++)
    		cin >> a[i][j];
    for (int i=0; i<n-1; i++)
    	for (int j=i+1; j<n; j++){
    		if(a[i][0] > a[j][0])
				for(int k=0; k<3; k++)
					swap(a[i][k], a[j][k]);
			else if (a[i][0] == a[j][0]){
				if (a[i][1] > a[j][1])
					for(int k=0; k<3; k++)
						swap(a[i][k], a[j][k]);
				else if(a[i][1]==a[j][1])
					if (a[i][2] > a[j][2])
						for(int k=0; k<3; k++)
						swap(a[i][k], a[j][k]);
			}
    	}
    for (int i=0; i<n; i++){
    	for (int j=0; j<3; j++){
    		cout << a[i][j] << " ";	
    	}
    	cout << endl;
    }
}

