#include "bits/stdc++.h"
#define ll long long int

using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	string tmp; getline(cin, tmp);
	getline(cin, tmp);
	getline(cin, tmp);
	
	string s; getline(cin, s);
	string year = s.substr(0, 4);
	string month = s.substr(5, 3);
	string day = s.substr(9, 2);
	string input; 
	while(cin >> input){
		if(input == "Exit") break;
		if(input == "Year?"){
			cout << year << endl;
		}
		else if (input == "Month?"){
			cout << month << endl;
		}
		else if(input == "Day?"){
			cout << day << endl;
		}
	}
	return 0;
}
