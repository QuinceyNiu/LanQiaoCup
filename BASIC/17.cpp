/*问题描述
　　给定一个N阶矩阵A，输出A的M次幂（M是非负整数）
　　例如：
　　A =
　　1 2
　　3 4
　　A的2次幂
　　7 10
　　15 22
输入格式
　　第一行是一个正整数N、M（1<=N<=30, 0<=M<=5），表示矩阵A的阶数和要求的幂数
　　接下来N行，每行N个绝对值不超过10的非负整数，描述矩阵A的值
输出格式
　　输出共N行，每行N个整数，表示A的M次幂所对应的矩阵。相邻的数之间用一个空格隔开*/

//attempt1 failed
/*#include <iostream>
#define N 30
using namespace std;
int main() {
    int n, m;
    int a[N][N], b[N][N], t[N][N];
    cin >> n >> m;
    int i, j, k;
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }

    //0次幂为单位矩阵
    if(m == 0) {
        for(i=0; i<n; i++) {
            for(j=0; j<n; j++) {
                if(i == j)
                    cout << "1 ";
                else
                    cout << "0 ";
            }
            cout << "\n";
        }
        return 0;
    }

    //1次幂为其本身
    if(m == 1) {
        for(i=0; i<n; i++) {
            for(j=0; j<n; j++) {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
        return 0;
    }

    //2次幂及以上
    while(m >= 2) {
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                k = n;
                while(k) {
                    t[i][j] += b[i][k-1]*a[k-1][j];
                    k--;
                }
            }
        }
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                b[i][j] = t[i][j];
                t[i][j] = 0;
            }
        }
        m--;
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            cout << b[i][j];
            cout << "\n";
    }
    return 0;
}*/

//attempt2
#include <iostream>
using namespace std;

long long num[30][30]={0};   
long long num1[30][30]={0};
long long num2[30][30]={0};

int main()
{
	int n,m;      //n阶 m次方 
	int i,j,z;
	cin >> n >> m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin >> num[i][j];
			num1[i][j]= num[i][j];   //对num1赋值，用于相乘 
		}
	}
	if(m==0)   //等于0的时候 
	{ 
		for(i=0;i<n;i++)
		{	
			num2[i][i] = 1;
		}	
	}
	else if(m==1)  //等于1的时候 
	{
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				num2[i][j] = num[i][j]; 
	}
	else  //m大于1的时候 
	{
		for(int count=1;count<m;count++)  //次数 
		{
			for(i=0;i<n;i++)         
			{
				for(j=0;j<n;j++)
				{
					num2[i][j]=0;
					for(z=0;z<n;z++)
					{
						num2[i][j] += num[i][z] * num1[z][j];   //num横向,num1纵向 
					}
				}
			}
			for(int x=0;x<n;x++)
				for(int y=0;y<n;y++)
					num[x][y] = num2[x][y];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			cout << num2[i][j] << " ";
		cout << endl;
	}
	return 0;
}