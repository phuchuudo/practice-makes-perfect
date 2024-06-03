#include "bits/stdc++.h"
using namespace std;

void merge(vector<int> &v, int left, int mid, int right){
	int n1 = mid - left + 1;
	int n2 = right - mid;
	
	vector<int> L(n1), R(n2);
	for(int i = 0; i < n1; i++){
		L[i] = v[left + i]; // left...mid
	}
	for(int i = 0; i < n2; i++){
		R[i] = v[mid + 1 + i]; // mid + 1,..., right
	}
	int i = 0, j = 0, k = left;
	while(i < n1 && j < n2){
		if(L[i] <= R[j]){
			v[k++] = L[i++];		
		}
		else {
			v[k++] = R[j++];			
		}		
	}
	while(i < n1){
		v[k++] = L[i++];
	}
	while(j < n2){
		v[k++] = R[j++];
	}
}

void mergeSort(vector<int> &v, int left, int right){
	if(left < right){
		int mid = left + (right - left) / 2;
		mergeSort(v, left, mid);
		mergeSort(v, mid + 1, right);
		merge(v, left, mid, right);
	}
}

bool cmp(tuple<char, int, char> u1, tuple<char, int, char> u2){
	return get<2> (u1) < get<2> (u2);
}


int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	
	// tutple in c++
	vector<tuple<char, int, char>> v3;
	v3.push_back({'A', 3, 'U'});
	v3.push_back({'X', 7, 'D'});
	v3.push_back({'B', 4, 'Z'});
	v3.push_back({'Z', 5, 'E'});
	for(auto x : v3){
		cout << get<0>(x) << ", " << get<1>(x) << ", " << get<2>(x) << endl;
	}
	cout << endl;
	sort(v3.begin(), v3.end(), cmp);
	for(auto x : v3){
		cout << get<0>(x) << ", " << get<1>(x) << ", " << get<2>(x) << endl;
	}
	// sort buble sort
	/*
	int n; cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n;i ++) cin >> v[i];
	*/
	
	// 8 1 3 8 2 9 2 5 6
	
	/* buble sort */
	/*
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - 1; j++){
			if(v[i] < v[j]){
				swap(v[i], v[j]);
			}
		}
	}
	*/
	
	// merge sort
	/* 	
	mergeSort(v, 0, n - 1);
	*/
	
	/*
	sort(v.begin(), v.end());
	
	for(auto x : v){
		cout << x << endl;
	}
	*/
	
	// sort static arry
	/*
	n = 7; 
	int a[] = {1, 3, 2, 4, 6, 5, 7};
	sort(a, a + n);
	for(int i = 0; i < n; i++) cout << a[i] << endl;
	*/
	
	// sort string
	/*
	string s = "hello world";
	sort(s.begin(), s.end());
	*/
	
	/* pair<int, int> make_pair(3, 4) */
	/*
	vector<pair<int, int>> v1;
	v1.push_back(make_pair(2, 3));
	v1.push_back({5, 6});
	sort(v1.begin(), v1.end());
	*/
	
	/*
	vector<tuple<int, int, int>> v2;
	v2.push_back({3, 4, 5});
	v2.push_back(make_tuple(3, 4, 6));
	sort(v2.begin(), v2.end());
	*/
	return 0;
}