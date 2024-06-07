#include "bits/stdc++.h"
#define ll long long int
#define eps 1e-6
using namespace std;

bool cmp(double a, double b){
	if(fabs(a - b) <= eps){
		return true;
	}
	return false;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	
	double a, b, c; cin >> a >> b >> c;
	vector<double> v = {a, b, c};
	sort(v.begin(), v.end());
	a = v[0]; b = v[1]; c = v[2];
	if(a + b > c && a + c > b && b + c > a){
		if(cmp(a, b) || cmp(b, c) || cmp(a, c)){
			cout << "ISOSCELES TRIANGLE" << endl;
		}
		if(cmp(a*a + b * b, c * c)) cout << "RIGHT TRIANGLE" << endl;
		if(a*a + b*b > c*c) cout << "ACUTE TRIANGLE" << endl;
		if(a*a + b*b < c*c) cout << "OBTUSE TRIANGLE" << endl;
	}
	else {
		cout << "NO TRIANGLE";
	}
	return 0;
}