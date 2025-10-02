#include<bits/stdc++.h>
using namespace std;
int main(){

string str;

getline(cin,str);

vector<char>v;

for(int i=0;i<str.size();i++){

    if(str[i]>='a' && str[i]<='z'){
        v.push_back(str[i]);
    }
}

sort(v.begin(),v.end());

int s=unique(v.begin(),v.end())-v.begin();
cout<<s<<endl;

return 0;
}
