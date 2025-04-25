#include <bits/stdc++.h>
using namespace std;

int calculateScore(const string& s) {
    int score = 0;
    for (char c : s) {
        if (c >= 'A' && c <= 'Z') score += 100 - (c - 'A');  
        else if (c >= 'a' && c <= 'z') score += 74 - (c - 'a');
    }
    return score;
}

int main() {
    int n;
    string s1, s2;
    
    cin >> n >> s1 >> s2;
    
    int sum1 = calculateScore(s1);
    int sum2 = calculateScore(s2);
    
    if (sum2 > sum1) cout << "Messi" << endl;
    else if (sum2 == sum1) cout << "Both" << endl;
    else cout << "Ronaldo" << endl;
    
    return 0;
}