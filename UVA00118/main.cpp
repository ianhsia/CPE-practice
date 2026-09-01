//UVA118 - Mutant Flatworld Expolrers
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int maxX,maxY;
    int x,y;
    char direction;
    string command;
    bool scent[51][51][4] = {};//紀錄是否有機器人掉落的痕跡
    
    cin >> maxX >> maxY;

    while(cin >> x >> y >> direction)
    {
        cin >> command;//把方向轉為數字(方便計算)

        bool lost = false;//紀錄是否掉落

        int dir;
        if(direction == 'N')
            dir = 0;
        else if(direction == 'E')
            dir = 1;
        else if(direction == 'S')
            dir = 2;
        else if(direction == 'W')
            dir = 3;
    

        for (int i = 0; i < command.length(); i++)
        {
            if (command[i] == 'R')//右轉
                dir = (dir + 1) % 4;
            else if (command[i] == 'L')//左轉
                dir = (dir + 3) % 4;
            else if (command[i] == 'F')//前進
            {
                ///設一個新的座標變數，避免直接改變x,y
                int nextX = x;
                int nextY = y;

                if (dir == 0)
                    nextY++;
                else if (dir == 1)
                    nextX++;
                else if (dir == 2)
                    nextY--;
                else if (dir == 3)
                    nextX--;

                if(0 <= nextX && nextX <= maxX && 
                   0 <= nextY && nextY <= maxY)
                {
                    x = nextX;
                    y = nextY;
                }
                else//如果超出邊界★★★
                {
                    if(!scent[x][y][dir])//如果沒有掉落痕跡
                    {
                        scent[x][y][dir] = true;//紀錄掉落痕跡
                        lost = true;
                        break;
                    }
                }   
            }
        }

        //把數字轉回方向
        if (dir == 0)
            direction = 'N';
        else if (dir == 1)
            direction = 'E';
        else if (dir == 2)
            direction = 'S';
        else if (dir == 3)
            direction = 'W';
        
        cout << x << " " << y << " " << direction;
        
        if(lost)
            cout << " LOST";
        cout << endl;
    }
    return 0;
}