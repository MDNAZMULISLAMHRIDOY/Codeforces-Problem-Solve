#include<bits/stdc++.h>
using namespace std;
int main(){

int tc;
cin>>tc;

while(tc--){


int t;
cin>>t;
vector<int>v(t);

for(int i=0;i<t;i++)
{
    cin>>v[i];
}
sort(v.begin(),v.end(),greater<int>());

vector<int>temp;

for(int i=0;i<t;i+=2){

    int x= v[i]-v[i+1];
temp.push_back(x);
}
sort(temp.begin(),temp.end(),greater<int>());

cout<<temp.front()<<endl;
}
return 0;
}
