#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
    	int n, fact = 1; cin >> n;
    	while(n > 1){
    		fact *= n;
    		n--;
    	}
    	cout << fact << endl;
    }
}