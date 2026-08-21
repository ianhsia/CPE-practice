//UVA948 - Fibonaccimal Base
#include <iostream>
using namespace std;

int main()
{
    int fib[50];// 纗 Fibonacci 计
    int i = 2;
    // ﹍て Fibonacci 计
    fib[0] = 1;
    fib[1] = 2;

    // ミ Fibonacci 计
    while (fib[i - 1] < 100000000)
    {
        fib[i] = fib[i - 2] + fib[i - 1];
        i++;
    }
    // 弄代戈舱计
    int N;
    cin >> N;

    for (int j = 0; j < N; j++)
    {
        int n;
        cin >> n;

        // т <= n 程 Fibonacci 竚
        int pos;

        for (int k = 0; k < i; k++)
        {
            if (fib[k] > n)
            {
                pos = k - 1;
                break;
            }
        }

        int temp = n;

        cout << n << " = ";

        // 眖程 Fibonacci ┕耞
        for (int L = pos; L >= 0; L--)
        {
            if (temp >= fib[L])
            {
                temp -= fib[L];
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }

        cout << " (fib)" << endl;
    }

    return 0;
}

