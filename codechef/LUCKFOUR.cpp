#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
    	int n, count = 0; cin >> n;
    	vector<int> v;
    	while(n>0){
    		v.push_back(n%10);
    		n /= 10;
    	}
    	for (int i = 0; i < v.size(); i++){
    		if (v[i] == 4) count++;
    	}
    	cout << count << endl;
    }
}