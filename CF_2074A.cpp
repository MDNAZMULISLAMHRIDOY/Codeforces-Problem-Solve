#include<bits/stdc++.h>
using namespace std;
int main(){

int tc;
cin>>tc;
while(tc--)
{

    int l,r,d,u;
    cin>>l>>r>>d>>u;
    if(l==r && d==u && r==d){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
return 0;
}
