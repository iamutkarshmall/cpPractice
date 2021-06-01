#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int size = s.size() - 1;
    int count = 0;
    for (int i = 0; i <= size / 2; i++){
    	if (s[i] != s[size-i])
    		break;
    	else count++;
    }
    if (count) cout << "Palindrome";
    else cout << "Not Palindrome";
}