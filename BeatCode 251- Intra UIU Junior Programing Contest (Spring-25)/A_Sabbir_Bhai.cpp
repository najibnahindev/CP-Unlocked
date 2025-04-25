#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    int count = 0;
 
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != '0' && s[i] != '1' && s[i] != '2' && s[i] != '3' && s[i] != '4' && s[i] != '5' && s[i] != '6' && s[i] != '7' && s[i] != '8' && s[i] != '9')
        {
            count = 1;
        }
        if (count == 1)
            break;
    }
 
    if (count == 1)
        cout << "Chi Chi" << endl;
    else
        cout << "OWO nice !!" << endl;
    return 0;
}