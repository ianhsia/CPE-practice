// UVA299 - Train Swapping
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N; // 有幾組測資
    
    for (int n = 0; n < N; n++)
    {
        int L;
        cin >> L; // 車廂數量

        int a[50];
        int count = 0;

        // 讀入車廂編號
        for (int i = 0; i < L; i++)
        {
            cin >> a[i];
        }

        // 泡泡排序
        for (int i = 0; i < L - 1; i++)
        {
            for (int j = 0; j < L - 1 - i; j++)
            {
                if (a[j] > a[j + 1])
                {
                    swap(a[j], a[j + 1]);// 交換車廂
                    count++;// 計算交換次數
                }
            }
        }

        cout << "Optimal train swapping takes " << count << " swaps." << endl;
    }

    return 0;
}