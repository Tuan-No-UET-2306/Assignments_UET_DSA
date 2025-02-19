#include<bits/stdc++.h>
using namespace std ; 
void merge(int a[] , int l , int r , int m    ){
    
    int n1 =  m - l + 1 ; 
    int n2 = r - m ; 
    int x[n1] ; 
    int y[n2] ; 
    for(int i = l ; i <= m ; i++){
        x[i - l ] = a[i] ; 
    }
    for(int i = m + 1 ; i <= r ; i++){
        y[i - m - 1 ] = a[i] ; 
    }
    int i = 0 , j = 0 , cnt = l ; 
    while(i < n1 && j < n2 ){
        if(x[i] < y[j]){
            a[cnt++ ] = x[i++] ;
        }
        else a[cnt++] = y[j++] ; 
    }
    while(i < n1 ) {
        a[cnt++] = x[i++] ;
    }
    while(j < n2 ){
        a[cnt++] = y[j++] ;
    }
}
void merge_Sort(int a[] , int l , int r ){
    if(l < r ){
        int m = (l + r ) / 2 ; 
        merge_Sort(a , l , m ) ; 
        merge_Sort(a , m + 1 , r ) ; 
        merge(a, l , r , m  ) ; 
    }
}
int main(){
    int n; cin >> n ; int a[n] ; 
    for(int i = 0 ; i < n ; i++ ) {
        cin >> a[i] ; 
    }
    merge_Sort(a , 0 , n - 1 ) ; 
    for(int i = 0 ; i < n ; i++) {
        cout << a[i] << " " ; 
    }
}