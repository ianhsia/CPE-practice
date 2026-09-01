//UVA100 – The 3n + 1 problem
#include<iostream>
using namespace std;

//計算n的循環長度
int cyclelength(int n) { 
    int count = 1;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        count++;
    }
    return count;
}

int main(){
    int i,j;

    while(cin >> i >> j) {
        int max_cycle = 0;
        int start = min(i,j);
        int end = max(i,j);
        for (int k = start; k <= end; k++){
            int cycle = cyclelength(k);

            if (cycle > max_cycle) {
                max_cycle = cycle;
            }
        }
        cout << i << " " << j << " " << max_cycle << endl;
    }
    return 0;
}
