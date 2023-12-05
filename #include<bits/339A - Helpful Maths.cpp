#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>v;
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]!='+'){
            v.push_back(s[i]-'0');
        }
    }
    sort(v.begin(),v.end());
    n=v.size();
    for(int i=0;i<n;i++){
	    cout<<v[i];
	    if(i==n-1){
	        break;
	    }
	    cout<<"+";
	}

    return 0;
}
