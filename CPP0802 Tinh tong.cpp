#include <bits/stdc++.h>

using namespace std;

int main()
{
	ifstream fin;
	fin.open("DATA.in");
	string s;
	long long sum = 0;
	while(fin >> s){
		int so = 1, am = 0;;
		for(int i = 0; i < s.length(); i++){
			if(s[i] == '-'){ 
				am = 1;
				continue;
			}
			else if(s[i] < '0' || s[i] > '9'){
				so = 0;
				break;	
			}
		}	
		if(so==1){
			if(s.length() < 9){
				int num = 0;
				if(am==0){ 
					for(int i = 0; i < s.length(); i++)
						num = num*10 + s[i] - '0';
					sum += num;
				}
				else{
					for(int i = 1; i < s.length(); i++)
						num = num*10 + s[i] - '0';
					sum -= num;
				}
			}  	
		}
	}
	cout << sum;
}
