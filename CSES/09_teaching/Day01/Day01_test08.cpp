#include "bits/stdc++.h"
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	long long n; cin >> n;
	long long tmp = (long long)sqrt(n);
	if(tmp * tmp == n){
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}