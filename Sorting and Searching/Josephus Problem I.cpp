#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <unordered_map>
#include <unordered_set>


using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        a[i] = i+1;
    }
    while(a.size() !=0){
        vector<int> b;
        int s = a.size();
        if(a.size() == 1){
            cout<<a[0]<<" ";
            break;
        }
        for(int i=0; i<a.size(); i++){
            if(i%2==1){
                cout<<a[i]<<" ";
            }else{
                b.push_back(a[i]);
            }
        }
        if(s%2==1){
            int x = b.back();
            b.pop_back();
            b.insert(b.begin(), x);
        }
        a = b;
    }


    return 0;
}
