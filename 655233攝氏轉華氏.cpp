#include <iostream>
using namespace std;
int main() {
    float f,c,num;
    cout << "要攝氏轉華氏請按1,反之請按2" << "\n";
    cin >> num;
    if (num == 1){
        cout << "請輸入一個攝氏溫度" << "\n";
    cin >> c;
    f = c * 9 / 5 + 32;
    cout << "轉換後的結果:" << f;
    } else if (num == 2){
        cout << "請輸入一個華氏溫度" << "\n";
    cin >> f;
    c = (f - 32) / 9 * 5;
    cout << "轉換後的結果:" << c;
    } else {
        cout << "輸入錯誤";
    }
}
