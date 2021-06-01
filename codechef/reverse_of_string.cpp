#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	cin.ignore();
	while (t--){
		string s;
		getline(cin, s);
		int size = s.size() - 1;
		for (int i = size; i >= 0; i--)
			cout << s[i];
		cout << endl;
	}
}