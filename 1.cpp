#include <iostream>
using namespace std;
#define ll long long

ll FastExp(ll base,ll exp,ll mod){
    ll result=1;
    while (exp>0){
        if (exp%2==0){
            base=(base*base)%mod;
            exp/=2;
        }
        else{
            result=(base*result)%mod;
            base=(base*base)%mod;
            exp=(exp-1)/2;
        }
    }
    return result;
}

int main(){
    cout<<FastExp(2,123456789,987654321)<<endl;
}