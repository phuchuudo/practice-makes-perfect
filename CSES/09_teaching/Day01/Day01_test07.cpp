#include "bits/stdc++.h"
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int a, b, c; cin >> a >> b >> c;
	
	if(a != 0){
		double delta = b * b - 4 * a * c;
		if(delta < 0){
			cout << "NO SOLUTION";
		}
		else if(delta == 0){
			double x1 = (-b) / (2 * a);
			cout << x1;
		}
		else {
			double x1 = (-b - sqrt(delta)) / (2 * a);
			double x2 = (-b + sqrt(delta)) / (2 * a);
			cout << x1 << "\n";
			cout << x2;
		}
	}
	
	return 0;
}