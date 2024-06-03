#include "bits/stdc++.h"
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n; cin >> n; 
	vector<int> v(n);
	for(int i = 0; i < n; i++) cin >> v[i];
	
	// 8 -1 2 4 -3 5 2 -5 2
	// Tim mang con lien tiep co tong la lon nhat.
	// sol1: duyet 3 for de tim best value.
	/* 
	int best = 0;
	for (int i = 0; i < n; i++){
		for (int j = i; j < n; j++){
			int sum = 0;
			for (int k = i; k <= j; k++){
				sum += v[k];
			}
			best = max(best, sum);
		}
	}
	cout << best << endl;
	*/
	
	// sol2: bo vong lap k
	/*
	int best = 0; 
	for (int i = 0; i < n; i++){
		int sum = 0;
		for (int j = i; j < n; j++){
			sum += v[j];
			best = max(best, sum);
		}
	}
	cout << best << endl;
	*/
	// sol3: mang con co phan tu cuoi la k, duoc tao thanh tu viec noi mang 
	// co phan tu cuoi la k - 1
	// mang con chi co 1 phan tu thu k
	
	/* */
	int best = 0, sum = 0;
	for (int k = 0; k < n; k++){
		sum = max(v[k], sum + v[k]);
		best = max(best, sum);
	}
	cout << best << endl;
	
	return 0;
}