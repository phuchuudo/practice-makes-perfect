#include "bits/stdc++.h"
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int a, b; cin >> a >> b;
	string x; cin >> x; // khong chua space
	cout << x << ", " << a << ", " << b << "\n";
	string p; getline(cin, p); // chua space
	int val; 
	while(cin >> val){
		// to do something
	}
	freopen("input.text", "r", stdin);
	freopen("output.text", "w", stdout);
	long long y = 7589743895749857LL;
	float f1; cin >> f1; 
	double d1; cin >> d1;
	printf("%.9f", f1);
	cout << fixed << setprecision(9) << d1 << endl;
	// compare value
	if (abs(a - b) < 1e-9){
		// a and b are equal
	}
	
	// sum value from 1 to n
	int n; cin >> n; int sum = (n * (n + 1)) / 2;
	
	// sum value binh phuong
	int sum2 = n * (n + 1) * (2 * n + 1) / 6;
	
	// cap so cong from [a, b]
	// int sum3 = (so luong so tu a den b) * (a + b) / 2)
	
	// cap so nhan. (3, 6, 12, 24)
	// a + ak + ak^2 + ak^3 + ... + b = (bk - a) / (k - 1)
	// a = 3, k = 2, b = 24
	// sum = (24*2 - 3 ) / (2 - 1) = 45;
	
	return 0;
}