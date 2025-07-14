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
    string s; cin >> s;
    multiset<char> ms;
    for(auto it : s){
        ms.insert(it);
    }
    for(int i = 9; i >= 0; i--){
        cout << *ms.lower_bound(i + '0');
        ms.erase(ms.lower_bound(i + '0'));
    }cout << endl;
}
return 0;
}