#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t, ct1=0;
    cin >> t;
    while(t--){
        int ct=0;
    int a,b,c;
    cin >> a >> b >> c;
    if(a==1){ct++;}
    if(b==1){ct++;}
    if(c==1){ct++;}

    if(ct++ >=2){
        ct1++ ;
    }
    
    }
    cout << ct1 ;
    return 0;
}