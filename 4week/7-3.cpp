#include <iostream>

using namespace std;


#define N 52
int cal(int G[N][N],int n,int x,int y)
{
    if (G[x][y])
    {
        G[x][y] = 0;
        return cal(G,n,x - 1,y) + cal(G,n,x + 1,y) + cal(G,n,x ,y - 1) + cal(G,n,x,y + 1) + 1;
    }else 
    {
        return 0;
    }
}


int main()
{
    int n, sx, sy;
    cin >> n >> sx >> sy;
    int G[N][N] = {0};
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> G[i][j];
        }
    }
    cout << cal(G,n,sx,sy);
    return 0;
}