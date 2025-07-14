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
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int x = v[0] % 2;
    int y = v[n - 1] % 2;
    
    int xcnt = 1, ycnt = 1;
    int i = 1;
    while(v[i] % 2 == x){
        xcnt++;
        i++;
    }
    int j = n - 2;
    while(v[j] % 2 == y){
        ycnt++;
        j--;
    }
    
    if(x == y){
        cout << 0 << endl;
    }
    else
    cout << min(xcnt, ycnt) << endl;
}
return 0;
}



class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        
        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
    }
};