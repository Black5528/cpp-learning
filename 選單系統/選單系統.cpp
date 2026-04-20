#include <iostream>
using namespace std;
void choice1() {
    int choice;

    cout << "選擇操作" << endl;
    cout << "1,加法" << endl;
    cout << "2,減法" << endl;
    cout << "3,退出" << endl;
    cout << "請輸入選項（1-3):" << endl;

    cin >> choice;

    switch (choice) {
    case 1: {
        int a, b;
        cout << "請輸入兩個數字" << endl;
        cin >> a >> b;
        cout << "加總結果" << (a + b) << endl;
        break;

    }

    case 2: {
        int a, b;
        cout << "請輸入兩個數字" << endl;
        cin >> a >> b;
        cout << "減法結果" << a - b << endl;
        break;

    }

    case 3:
        cout << "退出程式..." << endl;
        break;

    default:
        cout << "選擇無效" << endl;
        break;
    }
}
void score1() {
    int score;
    bool cheated;
    cout << "請輸入成績" << endl;
    cin >> score;
    cout << "是否作弊,有請輸入1 沒有輸入0" << endl;
    cin >> cheated;

    if (score >= 60 && cheated == 0) {
        cout << "通過!" << endl;

    }
    else cout << "不通過!" << endl;
}
void level1() {
    int level;
    bool isvip;
    cout << "請輸入等級" << endl;
    cin >> level;
    cout << "是否是VIP,是請輸入1 不是輸入0" << endl;
    cin >> isvip;
    if (level >= 10 || isvip == 1) {
        cout << "可以進入遊戲房間" << endl;

    }
    else cout << "無法進入，請提升等級或成為 VIP" << endl;
}
void temperature() {
    int tem;
    cout << "輸入一個攝氏溫度" << endl;
    cin >> tem;
    if (tem > 30 || tem < 15) {
        cout << "⚠️ 啟動空調" << endl;
    }
    else cout << "✅ 溫度適中，無需空調" << endl;
}
void character() {
    int role;
    cout << "輸入一個數字（1～3）" << endl;
    cin >> role;

    switch (role) {
    case 1:
        cout << "你選擇了戰士" << endl;
        break;

    case 2:
        cout << "你選擇了法師" << endl;
        break;

    case 3:
        cout << "你選擇了弓箭手" << endl;
        break;

    default:
        cout << "沒有這個角色" << endl;
        break;
    }
}
void score2() {
    int scores[5];
    int total = 0;
    int maxScore, minScore;
    cout << "請輸入五科成績" << endl;
    for (int i = 0;i < 5; i++) {
        cin >> scores[i];
        total += scores[i];
        if (i == 0) {
            // 第一筆先當作最高與最低
            maxScore = scores[i];
            minScore = scores[i];
        }
        else {
            if (scores[i] > maxScore) {
                maxScore = scores[i];
            }
            if (scores[i] < minScore) {
                minScore = scores[i];
            }
        }
    }
    float average = static_cast<float>(total) / 5;

    cout << "所有成績：" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "第 " << (i + 1) << " 科：" << scores[i] << endl;
    }
    cout << "平均" << average << endl;
    cout << "總分" << total << endl;
    cout << "最高分是：" << maxScore << endl;
    cout << "最低分是：" << minScore << endl;

}
void heal() {
    int health[5];
    int total = 0;
    int maxheal, minheal;
    int maxIndex = 0;
    int minIndex = 0;
    cout << "請輸入五隻角色血量" << endl;
    for (int i = 0;i < 5; i++) {
        cin >> health[i];
        total += health[i];


        if (i == 0) {
            maxheal = health[i];
            minheal = health[i];

        }
        else {
            if (health[i] > maxheal) {
                maxheal = health[i];
                maxIndex = i;
            }
            if (health[i] < minheal) {
                minheal = health[i];
                minIndex = i;
            }
        }

    }
    float average = static_cast<float>(total) / 5;

    cout << "所有血量" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "第" << (i + 1) << "隻" << health[i] << endl;
    }

    cout << "總血量" << total << endl;
    cout << "平均血量" << average << endl;
    cout << "血量最高的是第 " << (maxIndex + 1) << " 隻，血量為 " << maxheal << endl;
    cout << "血量最低的是第 " << (minIndex + 1) << " 隻，血量為 " << minheal << endl;


}
void heal2() {
    int health[8];
    int total = 0;
    int count = 0;

    cout << "請輸入8隻角色血量" << endl;
    for (int i = 0; i < 8; i++) {
        cin >> health[i];
        total += health[i];
    }

    float average = static_cast<float>(total) / 8;

    cout << "所有血量：" << endl;
    for (int i = 0; i < 8; i++) {
        cout << "第" << (i + 1) << "隻：" << health[i] << endl;
    }

    cout << "\n符合血量在 60～80 之間的角色：" << endl;
    for (int i = 0; i < 8; i++) {
        if (health[i] >= 60 && health[i] <= 80) {
            cout << "第" << (i + 1) << "隻，血量：" << health[i] << endl;
            count++;
        }
    }

    cout << "\n總血量：" << total << endl;
    cout << "平均血量：" << average << endl;
    cout << "共有 " << count << " 隻角色血量在 60～80 之間" << endl;
}
int main() {

    heal2();

    return 0;
}
     
                
