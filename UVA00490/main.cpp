//# UVA490 - Rotating Sentences
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    string s;
    vector<string> str; //用來存放每一行的字串
    int maxLen = 0;

    while (getline(cin,s))
    {
        str.push_back(s);//

        if(s.length() > maxLen){                //找出最長的字串長度
            maxLen = s.length();
        }
    }

    for(int j=0; j< maxLen; j++)            //第幾個字元
    {           
        for(int i=str.size()-1; i>=0; i--)  //第幾行 -1是因為arr從0開始
        { 
            if(j < str[i].length())         //如果第 i 行的第 j 個字元存在。
            {        
                cout << str[i][j];
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}