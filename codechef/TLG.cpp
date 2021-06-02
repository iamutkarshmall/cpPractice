#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    vector<int> v1;
    vector<int> v2;
    int score1 = 0, score2 = 0;
    while (t--){
    	int p1, p2;
        cin >> p1 >> p2;
        score1 += p1;
        score2 += p2;
        if (score1 > score2) v1.push_back(score1 - score2);
        else if (score2 > score1) v2.push_back(score2 - score1);
    }
    if (v1.empty()){
        int v2max = *max_element(v2.begin(), v2.end());
        cout << 2 << " " << v2max;
    } 
    else if (v2.empty()){
        int v1max = *max_element(v1.begin(), v1.end());
        cout << 1 << " " << v1max;
    } 
    else {
        int v1max = *max_element(v1.begin(), v1.end());
        int v2max = *max_element(v2.begin(), v2.end());
        if (v1max > v2max) cout << 1 << " " << v1max;
        else cout << 2 << " " << v2max;
    }

}