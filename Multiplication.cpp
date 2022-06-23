#include<bits/stdc++.h>
using namespace std;

int multiplication(int a,int b){
    int ans=0,pos=0;
    while(b!=0){
        int x=b&1;
        b>>=1;
        if(x){
            int p=a<<pos;
            int res=ans;
            int carry=0,indx=0,temp_ans=0;
            while(p!=0 || res!=0){
                int y=p&1,z=res&1;
                p>>=1,res>>=1;
                int one=0;
                if(y) one++;
                if(z) one++;
                if(carry) one++;
                carry=one/2;
                if(one%2) temp_ans^=(1<<indx);
                indx++;
            }
            if(carry) temp_ans^=(1<<indx);
            ans=temp_ans;
        }
        pos++;
    }
    return ans;
}

int main(){
    int a,b;
    cout<<"Enter the first number :: ";
    cin>>a;
    cout<<"Enter the second number :: ";
    cin>>b;
    int ans=multiplication(a,b);
    cout<<"Multiplication of given numbers is :: "<<ans<<endl;
    return 0;
}