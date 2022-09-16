#include<bits/stdc++.h>
using namespace std;
int main(){
string str1;
cin>>str1;

map<char,int> mappy;

for(int i=0;i<str1.length();i++){
    mappy[str1[i]]++;

}
for(auto it:mappy){
    if(it.second>1){
        cout<<it.first;
    }
}

return 0;
}