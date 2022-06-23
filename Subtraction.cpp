#include<bits/stdc++.h>
using namespace std;

int subtraction(int a,int b){
    int ans=0;
    int carry=0;
    int pos=0;
    while(a!=0 || b!=0){
        int x=a&1,y=b&1;
        a>>=1,b>>=1;
        int one=0;
        if(x) one++;
        if(y) one++;
        if(carry) one++;
        if(x==0 && one || one==3) carry=1;
        else carry=0;
        if(one%2) ans^=(1<<pos);
        pos++;
    }
    return ans;
}

int main(){
    int a,b;
    cout<<"Enter the larger number :: ";
    cin>>a;
    cout<<"Enter the lower number :: ";
    cin>>b;
    int ans=subtraction(a,b);
    cout<<"Ans is :: "<<ans<<endl;
    return 0;
}