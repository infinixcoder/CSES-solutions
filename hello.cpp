#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxN = 2e5 + 5;


int tops[maxN];
int top_length = 1;

int binary_search(int a){
    int left =1;
    int right = top_length;
    while(left<=right){
        int mid = (left + right)/2;
        //cout<<mid<<endl;
        if(a < tops[mid]){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
        
    }
    return right;
}

int main() {
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        int x;
        cin>>x;
        if(i==1){
            tops[i]=x;
        }
        else{
            int pos = binary_search(x);
            
            tops[pos+1] = x;
            if(pos == top_length){
                
                top_length++;
            }
            
        }
    }
    cout<<top_length<<endl;
}
