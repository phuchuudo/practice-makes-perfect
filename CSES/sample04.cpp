#include "bits/stdc++.h"
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	
	int n; cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++) cin >> v[i];
	sort(v.begin(), v.end());
	
	// 8 1 2 3 3 3 4 5 9 
	/* template for binary search */
	/*
	int left = 0, right = n - 1;
	while(left <= right){
		int mid = (left + right) / 2;
		if(v[mid] == x){
			cout << "found" << endl;
		}
		else if (v[mid] > x) right = mid - 1;
		else left = mid + 1;
	}
	*/
	/* */
	// lower_bound(a, a + n, x): tra ve con tro dau tien voi gia tri >= x
	// upper_bound(a, a + n, x): tra ve con tro dau tien voi gia tri > x
	// equal_range(a, a + n, x): tra ve 2 con tro tren. (lower - first, upper - second)
	
	auto a = lower_bound(v.begin(), v.end(), 3);
	auto b = upper_bound(v.begin(), v.end(), 3);
	int idx1 = a - v.begin();
	int idx2 = b - v.begin();
	cout << idx1 << ", " << idx2 << endl;
	
	auto c = equal_range(v.begin(), v.end(), 3);
	int idx11 = c.first - v.begin();
	int idx22 = c.second - v.begin();
	cout << idx11 << ", " << idx22 << endl;
	
	return 0;
}