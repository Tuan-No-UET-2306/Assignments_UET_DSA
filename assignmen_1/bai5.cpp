#include<bits/stdc++.h>
using namespace std ; 
int main(){
    
    int min_val = INT_MAX ; 
    int max_val = INT_MIN ; 
    for(int i = 1 ; i <= 5 ; i++   ){
        int x; cin >> x; 

        min_val = min(min_val , x ) ; 
        max_val = max(max_val , x   ) ; 

    }
    cout << min_val + max_val << endl ;
}