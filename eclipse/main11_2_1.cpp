// four lakes
#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	a = b = c = d = 0;
	for(int a = 1; a <= 4; a++)// 鄱阳湖可能的排名
	{
		for(int b = 1; b <= 4; b++) // 洞庭湖可能的排名
		{
			for(int c = 1; c <= 4; c++) // 太湖可能的排名
			{
				for(int d = 1; d <= 4; d++)// 洪泽湖可能的排名
				{
					// 条件1: 4个湖的大小均不相等
					if((a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) 
						&&((b==1) + (d==4) + (a==3)==1)
						&&((d==1) + (b==4) + (a==2) + (c==3)==1)
						&&((d==4) + (b==3) ==1)
						&&((a==1) + (c==4) + (d==2) + (b==3)==1))
					{
						cout << a << endl << b << endl << c << endl << d << endl;
					}
				}
			}
		}
	}
	return 0;
}