//
//  main.cpp
//  Fibonacci
//
//  Created by Amir on 9/26/21.
//

#include <iostream>
#include <vector>
using namespace std;

//function which prints the fibonacci vector
void print(string label, const vector<int>& vec) {
    cout << label;
    for (int i : vec) cout << i << ' ';
    cout << '\n';
}
//function to create the fibonacci vector from any point using two initial numbers and the given vector size
vector<int> fibonacci(int x, int y, vector<int> v, int n) {
    v.push_back(x);
    v.push_back(y);
    for (int i = v.size(); i < n; ++i) {
        v.push_back(v[i-1] + v[i-2]);
    }
    
    return v;
}

int main() {
    vector<int> vec;
    string label = "Fibonacci: ";
    //45 reaches the max vector size for int when starting from 1
    print(label, fibonacci(1, 2, vec, 45));
    
    return 0;
}
