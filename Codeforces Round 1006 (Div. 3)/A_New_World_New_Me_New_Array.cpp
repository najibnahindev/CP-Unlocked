#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, p;
        cin >> n >> k >> p;

        if(k <= (n * p) && k >= (n * p * -1))
        {
            float a = (abs(k) / (float)p);
            cout << ceil(a) << endl;
        } 
        else  cout << -1 << endl;
    }
    return 0;
}