#include<bits/stdc++.h>
using namespace std;
// 0 ~ 9 ASCII:48~57
// A~Z ASCII:65~90
// a~z ASCII:97~122
int main(){
    ios_base::sync_with_stdio(0);//沒加會超時
    cin.tie(0);cout.tie(0);
    int N,M;
    string S,T,original_string;
    cin >> N >> M;
    cin >> original_string >> S >> T;
    //把每個字需要替換的字對應到一個vector，使用ASCII處理
    vector<char> char_map(256);
    //初始化為自己
    for(int i = 48;i <= 57;i++)char_map[i] = i;
    for(int i = 65;i <= 90;i++)char_map[i] = i;
    for(int i = 97;i <= 122;i++)char_map[i] = i;
    //把每個循環遍歷
    for(int i = 0;i < M;i++){
        char S_i = S[i];
        char T_i = T[i];
        for(int i = 48;i <= 57;i++){
            if(char_map[i] == S_i)char_map[i] = T_i;
        }
        for(int i = 65;i <= 90;i++){
            if(char_map[i] == S_i)char_map[i] = T_i;
        }
        for(int i = 97;i <= 122;i++){
            if(char_map[i] == S_i)char_map[i] = T_i;
        }
    }
    //替換原始字串
    for(char &i : original_string){
        i = char_map[(int)i];
    }
    cout << original_string << '\n';

}
