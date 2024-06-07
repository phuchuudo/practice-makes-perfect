#include "bits/stdc++.h"
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	long long n; cin >> n;
	long long res = 0;
	for(int i = 5; n / i >= 1; i *= 5){
		res += n / i;
	}
	cout << res;
	return 0;
}