#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> count;
        int goodPairs = 0;
        for (int i : nums) {
            goodPairs += count[i];
            count[i]++;
        }
        return goodPairs;
    }
};

int main() {
    vector<int> vec;
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    cout << "Enter Numbers: " << endl;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        vec.push_back(num);
    }
    
    Solution s;
    int result = s.numIdenticalPairs(vec);
    cout << "Number of Identical Pairs: " << result << endl;
    
    return 0;
}
