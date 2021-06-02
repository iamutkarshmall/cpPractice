#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
    	vector<int> v;
    	int n; cin >> n;
    	while(n>0){
    		v.push_back(n%10);
    		n /= 10;
    	}
    	cout << v[0] + v[v.size()-1] << endl;
    }
}