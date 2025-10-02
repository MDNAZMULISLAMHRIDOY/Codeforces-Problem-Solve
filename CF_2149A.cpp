#include<bits/stdc++.h>
using namespace std;
int main(){
int tc;
cin>>tc;
while(tc--){

 int tt;
 cin>>tt;
 int arr[tt];


    for(int i=0;i<tt;i++)
    {


        cin>>arr[i];
    }
    int x=0;
    int y=0;

    for(int i=0;i<tt;i++)
    {

        if(arr[i]==0){
            x++;
        }
        else if(arr[i]==-1){
            y++;
        }
    }

    if(y%2==0){
        cout<<x<<endl;
    }
    else if(y%2!=0){
        cout<<2+x<<endl;
    }
}
return 0;
}
