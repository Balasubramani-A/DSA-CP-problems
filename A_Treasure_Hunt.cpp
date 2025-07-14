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
    int x, y, a; cin >> x >> y >> a;
    a = a % (x + y);
    if(a < x) cout << "NO" << endl;
    else cout << "YES" << endl;
}
return 0;
}