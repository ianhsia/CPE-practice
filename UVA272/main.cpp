//UVA272 - Tex Qutes
# include<iostream>
# include<string>
using namespace std;

int main(){
    string s;

    bool open = true;                   //判斷是否為開啟狀態

    while(getline(cin,s)){
        for(int i=0; i<s.length(); i++){//逐字元檢查
            if(s[i] == '"'){            //遇到雙引號
                if(open){               //若為開啟狀態，則輸出``，並將開啟狀態改為關閉
                    cout << "``";
                    open = false;
                } else {
                    cout << "''";
                    open = true;
                }
            }else{                      //若不是雙引號，則直接輸出
                cout << s[i];
            }
        }cout << endl;                  

    }
    return 0;
}