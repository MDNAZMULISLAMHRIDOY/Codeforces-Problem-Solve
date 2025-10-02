#include<bits/stdc++.h>
using namespace std;
int main(){

int tc;
cin>>tc;
int arr[tc];
for(int i=0;i<tc;i++){
    cin>>arr[i];
}

for(int i=0;i<tc;i++){

      if(arr[i]%4==0){
        cout<<"Bob"<<endl;
    }
    else{
        cout<<"Alice"<<endl;
    }
}
return 0;
}
