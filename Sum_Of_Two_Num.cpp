#include<bits/stdc++.h>
using namespace std;

int sum(int a,int b){
    int ans=0;
    int pos=0;
    int carry=0;
    while(a!=0 || b!=0){
        int x=a&1,y=b&1;
        a>>=1,b>>=1;
        int one=0;
        if(x) one++;
        if(y) one++;
        if(carry) one++;
        carry=one/2;
        if(one%2) ans^=(1<<pos);
        pos++;
    }
    if(carry) ans^=(1<<pos);

    return ans;
}
int main(){
    int a,b;
    cout<<"Enter the first number :: ";
    cin>>a;
    cout<<"Enter the second number :: ";
    cin>>b;
    int ans=sum(a,b);
    cout<<"Sum is :: "<<ans<<endl;
    return 0;
}