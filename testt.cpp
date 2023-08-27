#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<vector<int>> solution(vector<int> a) {
    vector<vector<int>> ans(2, vector<int>(a.size() / 2));
    unordered_map<int, int> cnt;
    
    // Count the frequency of each integer in the array
    for(int x : a) cnt[x]++;
    
    // If any integer occurs more than twice, return empty array
    for(auto [x, c] : cnt) {
        if(c > 2) return {};
    }
    
    // Add all integers occurring twice to both arrays
    for(auto [x, c] : cnt) {
        if(c == 2) {
            ans[0].push_back(x);
            ans[1].push_back(x);
        }
    }
    
    // Add remaining integers to the two arrays, ensuring that they are unique
    int idx1 = 0, idx2 = 0;
    for(int x : a) {
        if(cnt[x] == 1) {
            if(idx1 < ans[0].size()) {
                ans[0][idx1++] = x;
            } else {
                ans[1][idx2++] = x;
            }
        }
    }
    
    return ans;
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5, 6};
    vector<vector<int>> ans = solution(a);
    for(auto v : ans) {
        for(int x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}











