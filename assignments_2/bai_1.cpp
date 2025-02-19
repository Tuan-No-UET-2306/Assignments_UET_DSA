#include<bits/stdc++.h>
using namespace std ; 
typedef long long ll ;                  
int main(){
    int n ; cin >> n ; 
    map<int,int> mp ;
    for(int i = 0 ; i < n ; i ++){
        int x;  cin >> x; 
        mp[x]++ ;
    }int sum = 0 ; 
    for(auto x : mp){
        if(x.second > 1 ){
            sum += (x.second - 1 ) * x.second / 2 ; 
        }
    }
    cout << sum << endl ; 

}