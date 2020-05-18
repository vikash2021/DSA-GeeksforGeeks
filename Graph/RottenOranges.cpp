#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int R,C;

bool isvalid(int i, int j)
{
    return (i >= 0 && j >= 0 && i < R && j < C);
}
 
struct ele {
    int x, y;
};
 
bool isdelim(ele temp)
{
    return (temp.x == -1 && temp.y == -1);
}
 
bool checkall(int arr[][101])
{
    for (int i=0; i<R; i++)
       for (int j=0; j<C; j++)
          if (arr[i][j] == 1)
             return true;
    return false;
}

int rotOranges(int arr[][101])
{

    queue<ele> Q;
    ele temp;
    int ans = 0;
    for (int i=0; i<R; i++)
    {
       for (int j=0; j<C; j++)
       {
            if (arr[i][j] == 2)
            {
                temp.x = i;
                temp.y = j;
                Q.push(temp);
            }
        }
    }
    temp.x = -1;
    temp.y = -1;
    Q.push(temp);

    while (!Q.empty())
    {

        bool flag = false;

        while (!isdelim(Q.front()))
        {
            temp = Q.front();
 
            if (isvalid(temp.x+1, temp.y) && arr[temp.x+1][temp.y] == 1)
            {
                
                if (!flag) ans++, flag = true;     
                arr[temp.x+1][temp.y] = 2;
                temp.x++;
                Q.push(temp);
 
                temp.x--; 
            }
            if (isvalid(temp.x-1, temp.y) && arr[temp.x-1][temp.y] == 1) {
                if (!flag) ans++, flag = true;
                arr[temp.x-1][temp.y] = 2;
                temp.x--;
                Q.push(temp); 
                temp.x++;
            }
            if (isvalid(temp.x, temp.y+1) && arr[temp.x][temp.y+1] == 1) {
                if (!flag) ans++, flag = true;
                arr[temp.x][temp.y+1] = 2;
                temp.y++;
                Q.push(temp); 
                temp.y--;
            }
            if (isvalid(temp.x, temp.y-1) && arr[temp.x][temp.y-1] == 1) {
                if (!flag) ans++, flag = true;
                arr[temp.x][temp.y-1] = 2;
                temp.y--;
                Q.push(temp); 
            }
             Q.pop();
        }
        Q.pop();
        if (!Q.empty()) {
            temp.x = -1;
            temp.y = -1;
            Q.push(temp);
        }
    }
    return (checkall(arr))? -1: ans;
}
int a[101][101];
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int t;
	cin>>t;
	while(t--)
	{
		//int x,y;
		cin>>R>>C;
		//int a[R][C];
		for(int i=0;i<R;++i)
			for(int j=0;j<C;++j)
				cin>>a[i][j];
		cout<<rotOranges(a)<<endl;
	}
	return 0;
}
