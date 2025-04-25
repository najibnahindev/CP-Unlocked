#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
 
        if(x == 1){
            if(y == 1) {
                cout << 2 << endl << 3 << " " << 2 << endl << 2 << " " << 3 << endl;
            }
            else if(y == 2) {
                cout << 2 << endl << 3 << " " << 3 << endl << 3 << " " << 1 << endl;
            }
            else if(y == 3) {
                cout << 2 << endl << 3 << " " << 2 << endl << 2 << " " << 1 << endl;
            }
        }
        else if(x == 2){
            if(y == 1) {
                cout << 2 << endl << 3 << " " << 3 << endl << 1 << " " << 3 << endl;
            }
            else if(y == 2) {
                cout << 0 << endl;
            }
            else if(y == 3) {
                cout << 2 << endl << 3 << " " << 1 << endl << 1 << " " << 1 << endl;
            }
        }
        else if(x == 3){
            if(y == 1) {
                cout << 2 << endl << 1 << " " << 2 << endl << 2 << " " << 3 << endl;
            }
            else if(y == 2) {
                cout << 2 << endl << 1 << " " << 3 << endl << 1 << " " << 1 << endl;
            }
            else if(y == 3) {
                cout << 2 << endl << 1 << " " << 2 << endl << 2 << " " << 1 << endl;
            }
        }
    }
    
    return 0;
}