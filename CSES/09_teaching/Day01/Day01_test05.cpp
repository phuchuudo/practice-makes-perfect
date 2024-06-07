#include "bits/stdc++.h"
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int sophut; cin >> sophut;
	if(sophut <= 99){
		cout << sophut * 0.05;
	}
	else {
		cout << 99 * 0.05 + (sophut - 99) * 0.08;
	}
	return 0;
}