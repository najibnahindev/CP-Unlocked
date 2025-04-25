#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int ct1, ct2, ct3, ct4, k, m, ctm;
    cin >> ct1 >> ct2 >> ct3 >> ct4 >> k >> m;
 
    if(k == 4) ctm = round ((ct1 + ct2 + ct3 + ct4) / 4);
    else if (k == 3){
        ctm = round (((ct1 + ct2 + ct3 + ct4) - (min(ct1, min(ct2, min(ct3, ct4))))) / 3);
        
    }
    else if (k == 2){
        int min1 = round (min(ct1, min(ct2, min(ct3, ct4))));
        if(min1 == ct1){
            int min2 = min(ct2, min(ct3, ct4));
            ctm = round(((ct1 + ct2 + ct3 + ct4) - min1 - min2 ) / 2);
        }
        else if(min1 == ct2){
            int min2 = min(ct1, min(ct3, ct4));
            ctm = round(((ct1 + ct2 + ct3 + ct4) - min1 - min2 ) / 2);
        }
        else if(min1 == ct3){
            int min2 = min(ct1, min(ct2, ct4));
            ctm = round(((ct1 + ct2 + ct3 + ct4) - min1 - min2 ) / 2);
        }
        else if(min1 == ct4){
            int min2 = min(ct1, min(ct2, ct3));
            ctm = round(((ct1 + ct2 + ct3 + ct4) - min1 - min2 ) / 2);
        }
    }
    else if( k == 1) ctm = round (max(ct1, max(ct2, max(ct3, ct4))));
 
 
    if((ctm + m) >= 40) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}