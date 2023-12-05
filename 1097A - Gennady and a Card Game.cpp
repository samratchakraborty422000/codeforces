#include<iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    string cards;
    for(int i=0;i<5;i++){
        string temp;
        cin>>temp;
        cards+=temp;
    }
    for(auto &i : cards){
        if(i==s[0] || i==s[1]){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
