#include "bits/stdc++.h"
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	/*
	vector<int> v;
	v.push_back(5); v.push_back(2); v.push_back(7);
	for(auto x : v){
		cout << x << endl;
	}
	cout << "phan tu cuoi cung: " << v.back() << endl;
	cout << "phan tu dau tien: " << v.front() << endl;
	v.pop_back();
	cout << "phan tu cuoi cung: " << v.back() << endl;
	cout << "phan tu dau tien: " << v.front() << endl;
	*/
	/* */
	/*
	string a = "hatti";
	string c = a.substr(3, 4);  // bat dau index 3 va length la 4.
	cout << c << endl;
	*/
	
	// set: (logN) cac phan tu duoc sap xep
	// unordered_set (O(1)): cac phan tu khoong duoc sap xep
	/*
	set<int> s; s.insert(3); s.insert(2); s.insert(5); s.insert(3);
	cout << "check: " << s.count(3) << endl; // check x co trong set khong? (1: co, 0: khong)
	s.erase(3); // xoa 3 ra khoi set.
	for (auto x : s){
		cout << x << endl;
	}
	
	set<int> s1 = {3, 4, 5, 1};
	cout << s1.size() << endl;
	for (auto x : s1){
		cout << x << endl;
	}
	*/
	
	/* map */
	/*
	map<string, int> mm;
	mm["a"] = 3;
	mm["b"] = 5;
	cout << mm["a"] << endl;
	// check key exist
	if (mm.count("a")) {
		cout << "exist" << endl;
	}
	for (auto x : mm){
		cout << x.first << ", " << x.second << endl;
	}
	*/
	
	// phuong thuc thong dung
	/*
	vector<int> v = {3, 4, 1, 2, 2, 5};
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	random_shuffle(v.begin(), v.end());
	for (auto x : v){
		cout << x << endl;
	}
	*/
	
	// set iterator
	/*
	set<int> s; s.insert(3); s.insert(5); s.insert(2);
	auto it = s.begin();
	for (auto it = s.begin(); it != s.end(); it++){
		cout << *it << endl;
	}
	auto it1 = s.find(51);
	if (it1 == s.end()){
		cout << "Not found" << endl;
	}
	*/
	
	/* bitset */
	/*
	bitset<10> s(string("0010011010")); // from right to left
	cout << s[4] << endl; // 1
	cout << s[5] << endl; // 0
	cout << s.count() << endl; // count bit 1 // 4
	bitset<3> a(string("110"));
	bitset<3> b(string("010"));
	cout << (a&b) << endl;
	cout << (a^b) << endl; // xor
	cout << (a|b) << endl; // or
	*/
	
	/* deque */
	/*
	deque<int> d;
	d.push_back(4);
	d.push_back(5); // 4 5
	d.push_front(3); // 3 4 5
	d.pop_back(); // 3 4
	d.pop_front(); // 4
	*/
	
	/* stack */
	/*
	stack<int> st;
	st.push(3);
	st.push(5);
	st.push(6);
	cout << st.top() << endl; // 6
	st.pop();
	cout << st.top() << endl; // 5
	*/
	
	// queue
	/*
	queue<int> q;
	q.push(3);
	q.push(2);
	q.push(5);
	cout << q.front(); // 3
	q.pop(); 
	cout << q.front(); // 2
	*/
	
	// priority_queue
	priority_queue<int, vector<int>, greater<int>> q; // tu nho den lon.
	q.push(3); q.push(5); q.push(2);
	cout << q.top() << endl;
	q.pop();
	cout << q.top() << endl;
	return 0;
}