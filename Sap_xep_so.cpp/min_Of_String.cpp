#include<bits/stdc++.h>
using namespace std; 
// priority_queue
// push 
// size
//empty
//pop:xoa di phan tu o dinh
//top: lay ra phan tu o dinh 
using ll = long long ; 
int main(){
    int n ; cin >> n ; 
    int a[n] ;  
    map<int ,int > mp ; 
    for(int i = 0 ; i < n ; i++ ){
        cin >> a[i] ; 
        mp[a[i]] = i ; 
    }
    // int res = mp.rbegin()->first;
    // int aj = INT_MIN ;
    // for(auto it = mp.rbegin() ; it != mp.rend() ;it++){
    //     for(int i = n -1  ; i >= it->second ; i--){
    //         if((a[i] - it->first) > (aj - res) ) {
    //             aj = a[i] ; 
    //             res = it->first ;
    //         }
    //         n = it->second - 1; 
    //     }  
    // }
    // cout << res << " " << aj << endl;
    
    int pivot = mp.begin()->second ; 
    int M_Value = mp.begin()->first ;
    int r = n - 1 ; 
    int res = mp.begin()->first ; 
    int aj = 0 ; 
    // cout << pivot << " " << M_Value;
    while(r > 0 ){
        for(int i = r ; i > pivot ; i--){
            if(a[i] > M_Value && (a[i] - M_Value) > (aj - res)){
                res = M_Value ; 
                aj = a[i];
            }
        }
        r = pivot - 1 ;
        map<int , int > mp1; 
        for(int i = 0 ; i <= r ; i++ ){
            mp1[a[i]] = i;
            pivot = mp1.begin()->second ; 
            M_Value = mp1.begin()->first; 
        }
        
    }
    
    cout << res << " " << aj << endl;
   }

