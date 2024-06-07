#include "bits/stdc++.h"
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	double a, b, c; cin >> a >> b >> c;
	
	if(a + b > c && a + c > b && b + c > a){
		// la tam giac
		// sap xep
		if(a > b){
			swap(a, b);
		}
		if(a > c){
			swap(a, c);
		}
		if(b > c){
			swap(b, c);
		}
		
		// check vuong?
		if(a * a + b * b == c * c) {
			cout << "RIGHT TRIANGLE" << "\n";
		}
		if(a == b || a == c || b == c){
			cout << "ISOSCELES TRIANGLE" << "\n";
		}
		if(a*a + b*b > c*c){
			cout << "ACUTE TRIANGLE" << "\n";
		}
		if(a*a + b*b < c*c){
			cout << "OBTUSE TRIANGLE" << "\n";
		}
	}
	else {
		cout << "NO TRIANGLE";
	}
	
	return 0;
}