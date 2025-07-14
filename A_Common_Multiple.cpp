#include<bits/stdc++.h>
#include <numeric>
using namespace std;
int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a%b);
}
int lcm(int a, int b){
    return (a * b) / gcd(a, b);
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int t;
cin>>t;
while(t--){
    int n; cin >> n;
    vector<int> v;
    unordered_set<int> s;
    for(int i = 0; i < n; i++){
        // cin >> v[i];
        int a; cin >> a;
        s.insert(a);
    }
    for(auto it : s){
        v.push_back(it);
    }
    int result = v[0];
    for(int i = 1; i < n; i++){
        // int lcm = (a * b) / gcd(a, b);
        result = lcm(result, v[i]);
        // result = lcm(result, v[i]);
        // result = lcm(result, v[i]);
    }
    // for(int i = 0; i < n; i++){

    // }
    // for(int i = 0; i < n; i++){
    //     // int a; cin >> a;

    //     cin >> v[i];
    //     // int a; cin >> a;
    //     // s.insert(a);
    // }
    
    cout <<  v.size() << endl;

}   
return 0;
}