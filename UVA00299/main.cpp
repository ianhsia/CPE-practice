// UVA299 - Train Swapping
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N; // Τ碭舱代戈
    
    for (int n = 0; n < N; n++)
    {
        int L;
        cin >> L; // ó碵计秖

        int a[50];
        int count = 0;

        // 弄ó碵絪腹
        for (int i = 0; i < L; i++)
        {
            cin >> a[i];
        }

        // 獁獁逼
        for (int i = 0; i < L - 1; i++) //北材碭近:程惠璶禲L-1Ω(逼计秖-1)
        {
            for (int j = 0; j < L - 1 - i; j++)//北–近禲碭Ω:程惠璶禲L-1-iΩ(逼计秖-1-逼计秖)
            {
                if (a[j] > a[j + 1])
                {
                    swap(a[j], a[j + 1]);// ユ传ó碵
                    count++;// 璸衡ユ传Ω计
                }
            }
        }

        cout << "Optimal train swapping takes " << count << " swaps." << endl;
    }

    return 0;
}