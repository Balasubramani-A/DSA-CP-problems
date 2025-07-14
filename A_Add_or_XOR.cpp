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
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int sum = 0;
    if(b < a - 1 || (a % 2 == 0 && b < a)){
        cout << -1 << endl;
        continue;
    }
    if(b == a - 1){
        cout << y << endl;
        continue;
    }
    while(a != b){
        if(a % 2 == 0){
            sum += min(x, y);
        }
        else{
            sum += x;
        }
        a++;
    }
    cout << sum << endl;
}
return 0;
}