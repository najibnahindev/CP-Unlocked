#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n; // Number of elements in this test case
        
        int arr[100]; // Array to store the numbers (assuming maximum 100 elements)
        
        // Read the array elements
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }
        
        // Find the minimum value
        int min_val = arr[0];
        for (int j = 1; j < n; j++) {
            if (arr[j] < min_val) {
                min_val = arr[j];
            }
        }
        
        // Find the position of the maximum value (1-indexed)
        int max_val = arr[0];
        int max_pos = 1;
        for (int j = 1; j < n; j++) {
            if (arr[j] > max_val) {
                max_val = arr[j];
                max_pos = j + 1;
            }
        }
        
        // Output the result for this test case
        cout << min_val << " " << max_pos << endl;
    }
    
    return 0;
}