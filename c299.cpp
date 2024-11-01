#include<bits/stdc++.h>
using namespace std;
int main(){
    /*接受輸入的地方*/
    int n;
    cin >> n;
    vector<int>s(n);
    for(int &i : s){
        cin >> i;
    }
    /*計算 and 輸出答案*/
    sort(s.begin(),s.end()); // 把輸入的資料排序
    if(s[n-1]-s[0] + 1 == n){ // 計算最大數到最小的數字總數是否等於長度
        cout << s[0] << ' ' << s[n-1] << " yes";
    }else{
        cout << s[0] << ' ' << s[n-1] << " no";
    }
}
