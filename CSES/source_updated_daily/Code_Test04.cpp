#include "bits/stdc++.h"
using namespace std;

int n, q;
int a[int(1e7)+7];
int left, right;

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	
	cin >> n; cin >> q; 
	for(int i = 0; i < n; i++) cin >> a[i];
	
	sort(a, a + n);
	int left, right;
	for(int i = 0; i < q; i++){
		cin >> left >> right;
		// lower_bound(a, a + n, x) # >= x
		int idx1 = lower_bound(a, a + n, left) - a;
		int idx2 = lower_bound(a, a + n, right) - a;
		
		if(idx1 >= n) {
			cout << 0 << "\n";
			continue;
		}
		else {
			if(idx2 >= n) idx2 = n - 1;
			else if(a[idx2] > right) idx2 --;
		}
		
		if(idx1 < 0 || idx2 < 0) cout << 0;
		else if(idx2 < idx1) cout << 0;
		else cout << (idx2 - idx1 + 1);
		
		cout << "\n";
	}
	
	return 0;
}