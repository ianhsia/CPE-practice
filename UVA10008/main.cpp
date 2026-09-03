//UVA10008 - What's Cryptanalysis?
#include <iostream> 
#include <string> 
#include <cctype> 
using namespace std; 
 
int main() 
{ 
    int abc[26] = {0}; //設定26個字母的計數器
 
    int N; 
    cin >> N; 
    cin.ignore();      //★★★忽略換行符號，避免getline讀取到空行★★★
 
    string s; 
 
    for(int i = 0; i < N; i++) //讀取N行輸入
    { 
        getline(cin, s); 
 
        for(int j = 0; j < s.length(); j++) 
        { 
            if(isalpha(s[j])) //判斷是否為字母
            { 
                s[j] = tolower(s[j]); //將字母轉為小寫
                abc[s[j] - 'a']++; //★★★計數器對應字母的索引加1★★★
            } 
        } 
    } 
 
    for(int i = 0; i < 26; i++) //輸出字母及其出現次數，按出現次數從高到低排序
    { 
        int maxPos = -1; 
 
        for(int j = 0; j < 26; j++) //找出出現次數最多的字母
        { 
            if(abc[j] > 0) 
            { 
                if(maxPos == -1 || abc[j] > abc[maxPos]) //找出最大值的索引
                { 
                    maxPos = j; 
                } 
            } 
        } 

        if(maxPos != -1) 
        { 
            cout << static_cast<char>(maxPos + 'A') //★★★將索引轉換為大寫字母★★★
                 << " " << abc[maxPos] << endl; 
                 
            abc[maxPos] = 0; 
        } 
    } 
 
    return 0;
}