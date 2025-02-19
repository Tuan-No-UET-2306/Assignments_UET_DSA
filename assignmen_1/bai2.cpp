#include<bits/stdc++.h>
using namespace std; 
pair<double,double> vt(double ax , double ay , double bx , double by){
    pair<double, double> vt_ab  ;
    vt_ab.first = bx - ax ; 
    vt_ab.second = by - ay ; 
    return vt_ab ; 
}
int main(){
    double ax , ay ; cin >> ax >> ay ; 
    double bx , by ; cin >> bx >> by ;
    double cx , cy ; cin >> cx >> cy ;
    double dx , dy ; cin>> dx >> dy ; 
    pair<double,double> vt_ab = vt(ax , ay , bx ,by ) ; 
    pair<double , double > vt_cd = vt(cx, cy , dx ,dy ) ; 
    if(vt_ab.first * vt_cd.second - vt_ab.second * vt_cd.first == 0 ){
        pair<double ,double > vt_ac = vt(ax , ay , cx , cy ) ; 
        pair<double , double > vt_cd = vt(cx , cy , dx , dy ) ; 
        if(vt_ac.first * vt_cd.second - vt_ac.second * vt_cd.first == 0 ){
            cout << "MANY" << endl ; 
        
        }
        else cout  << "NO" << endl ;    
    }
    else{
        double k1 = vt_ab.second / vt_ab.first ; 
        double k2 = vt_cd.second / vt_cd.first ; 
        double x = (cy - k2*cx - ay + k1 * ax )/(k1 - k2 ) ; 
        double y = (k1 * x - k1 * ax + ay) ; 
        cout << fixed << setprecision(2) << x << " " << y  ;
    }
}   
