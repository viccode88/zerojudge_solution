#include<bits/stdc++.h>
using namespace std;
#define int long long
/*
解題：以矩形的四個座標往外面畫線所切分出的８個區塊做判斷即可。
*/
signed main(){
    int bird_x,bird_y,nest_ws_x,nest_ws_y,nest_en_x,nest_en_y;
    cin >> bird_x >> bird_y;
    cin >> nest_ws_x >> nest_ws_y;
    cin >> nest_en_x >> nest_en_y;
    if(bird_x < nest_ws_x && bird_y < nest_ws_y){ //左下
        cout << nest_ws_x - bird_x + nest_ws_y - bird_y;
    }else if(bird_x > nest_en_x && bird_y > nest_en_y){ //右上
        cout << bird_x - nest_en_x + bird_y - nest_en_y;
    }else if(bird_x > nest_en_x && bird_y < nest_ws_y){ //右下
        cout << bird_x - nest_en_x + nest_ws_y - bird_y;
    }else if(bird_x < nest_ws_x && bird_y > nest_en_y){ //左上
        cout << nest_ws_x - bird_x + bird_y - nest_en_y;
    }else if(bird_y > nest_en_y){ //中上
        cout << bird_y - nest_en_y;
    }else if(bird_y < nest_ws_y){ //中下
        cout << nest_ws_y - bird_y;
    }else if(bird_x < nest_ws_x){ //中左
        cout << nest_ws_x - bird_x;
    }else if(bird_x > nest_en_x){ //中右
        cout << bird_x - nest_en_x;
    }
    
}

//更為聰明的作法

/*
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int bird_x, bird_y, nest_ws_x, nest_ws_y, nest_en_x, nest_en_y;
    cin >> bird_x >> bird_y;
    cin >> nest_ws_x >> nest_ws_y;
    cin >> nest_en_x >> nest_en_y;

    // 計算投影座標
    int proj_x = max(nest_ws_x, min(bird_x, nest_en_x));
    int proj_y = max(nest_ws_y, min(bird_y, nest_en_y));

    // 計算曼哈頓距離
    cout << abs(bird_x - proj_x) + abs(bird_y - proj_y);
}
*/
