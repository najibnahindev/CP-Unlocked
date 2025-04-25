#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    cin.ignore();
    
    for (int i = 0; i < t; i++) {
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        string abv = "";
        abv += s1[0];
        abv += s2[0];
        abv += s3[0];
        
        cout << abv << endl;
    }
    
    return 0;
}