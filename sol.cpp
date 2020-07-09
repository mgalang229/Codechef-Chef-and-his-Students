
#include <bits/stdc++.h>

using namespace std;

void test_case() {
	string a;
	cin >> a;
	for(int i = 0; i < (int)a.size() - 1; ++i) {
		if(a[i] == '>' && a[i+1] == '<') {
			swap(a[i], a[i+1]);
		}
	}
	int cnt = 0;
	for(int i = 0; i < (int)a.size() - 1;++i) {
		if(a[i] == '>' && a[i+1] == '<') {
			cnt++;
		}
	}
	cout << cnt << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T;
	cin >> T;
	while(T--) {
		test_case();
	}
	return 0;
}
