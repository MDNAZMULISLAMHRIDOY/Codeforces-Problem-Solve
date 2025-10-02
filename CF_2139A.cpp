#include<bits/stdc++.h>
using namespace std;
int main (){

int tc;
cin>>tc;

while(tc--)
{

    int a,b;
    cin>>a>>b;

    if(a==b){
        cout<<0<<endl;
    }
    else if(a%b==0 || b%a==0){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }
}


return 0;
}
