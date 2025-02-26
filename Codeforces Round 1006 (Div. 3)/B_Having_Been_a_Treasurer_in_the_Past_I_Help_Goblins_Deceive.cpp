#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    
    while (t--) 
    {
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        long long dash_count = 0;
        long long underscore_count = 0;
        for (char c : s) 
        {
            if (c == '-') dash_count++;
            else if (c == '_') underscore_count++;
        }

        long long first_dash = dash_count / 2;
        long long second_dash = dash_count - first_dash;
        
        long long result = first_dash * underscore_count * second_dash;
        
        cout << result << endl;
    }
    
    return 0;
}