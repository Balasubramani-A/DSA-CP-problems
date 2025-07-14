#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int t;
cin>>t;
while(t--){
    int n; cin >> n;
    string s; cin >> s;
    vector<int> v(n);
    v[0] = 0;
    int l = 0, r = 0;
    for(int i = 0; i < n - 1; i++){
        if(s[i] == '<'){
            v[i + 1] = --l;
        }
        else{
            v[i + 1] = ++r;
        }
    }
    for(auto it : v){
        cout << it - l + 1 << " ";
    }cout << endl;

}
return 0;
}