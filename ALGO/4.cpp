/* 
问题描述
有一棵 n 个节点的树，树上每个节点都有一个正整数权值。如果一个点被选择了，那么在树上和它相邻的点都不能被选择。求选出的点的权值和最大是多少？

输入格式
第一行包含一个整数 n 。

接下来的一行包含 n 个正整数，第 i 个正整数代表点 i 的权值。

接下来一共 n-1 行，每行描述树上的一条边。

输出格式
输出一个整数，代表选出的点的权值和的最大值。
 */
#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;

#define MAX_ 100010
#define max(a,b) ((a>b)?(a):(b))

struct node
{
    int parent, next;
} edge[MAX_*2];

int head[MAX_];
int M;
int dp[MAX_][2];

void add(int from, int to) {
    edge[M].parent = to;
    edge[M].next = head[from];
    head[from] = M++;

    edge[M].parent = from;
    edge[M].next = head[to];
    head[to] = M++;
}
void dfs(int x, int pre) {
    for(int i = head[x]; i != -1; i = edge[i].next) {
        int v = edge[i].parent;
        if(pre == v) continue;
        dfs(v, x);
        dp[x][1] += dp[v][0];
        dp[x][0] += max(dp[v][0], dp[v][1]);
    }
}

int main() {
    int m, i, n;
    int s, t, c;
    while(~scanf("%d", &n)) {
        M = 0;
        memset(head, -1, sizeof(head));
        memset(dp, 0, sizeof(dp));
        
        for(i = 1; i <= n; ++i) {
            scanf("%d", &dp[i][1]);
        }

        for(i = 1; i < n; i++) {
            scanf("%d%d", &s, &t);
            add(s, t);
        }

        dfs(1, -1);
        int tmp = max(dp[1][0], dp[1][1]);
        printf("%d\n", tmp);
    }
    return 0;
}
