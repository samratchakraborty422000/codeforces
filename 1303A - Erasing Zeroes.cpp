#include<iostream>
using namespace std;
int main()
{
    int t;
    int count,start1,end1,i;
    cin>>t;
    string s;
    while(t--){
        count=0,start1=0,end1=0;
        cin>>s;
        int n=s.length();
        for(i=0; i<n; i++){
            if(s[i]=='1'){
                start1=i;
                break;
            }
        }
        
        for(i=n; i>=start1; i--){
            if(s[i]=='1'){
                end1=i;
                break;
            }
        }
        
        for(i=start1; i<end1; i++){
            if(s[i]=='0')
                count++;
        }
        cout<<count<<endl;
    }
}
