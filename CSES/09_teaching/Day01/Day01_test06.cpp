#include "bits/stdc++.h"
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int a, b; cin >> a >> b;
	if(a == 0){
		if(b == 0){
			cout << "INFINITE SOLUTION";
		}
		else {
			cout << "NO SOLUTION";
		}
	}
	else {
		if(b == 0) cout << 0;
		else {
			cout << -1.0 * b / a;
		}
	}
	return 0;
}