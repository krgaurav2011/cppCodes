#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX 10000000000
#define max_x 10000
#define max_y 1000
int tree[10005][1005];
int A[10004];
void update(int x, int y, int val) {
    int y1;
    while(x <= max_x) {
        y1 = y;
        while(y1 <= max_y) {
            tree[x][y1] += val;
            y1 += (y1 & -y1);
        }
        x += (x & -x);
    }
}
int read (int x, int y) {
    int sum = 0, y1;
    while(x > 0) {
        y1 = y;
        while(y1 > 0) {
            sum += tree[x][y1];
            y1 -= (y1 & -y1);
 
        }
        x -= (x & -x);
    }
    return sum;
}
 
int solve(int l, int r, int k) {
    int lo = 1;
    int hi = max_y;
    int mid;
    int ans = -1;
    while(lo <= hi) {
        mid = (lo+hi)/2;
        int v2 = read(r, mid);
        int v1 = read(l-1, mid);
        if(v2 - v1 >= k) {
            ans = mid;
            hi = mid -1;
        }
        else {
            lo = mid + 1;
        }
    }
    return ans;
}
 
int main() {
    int T, n, q;
    scanf("%d", &T);
    memset(tree, 0, sizeof(tree));
    while(T--) {
        scanf("%d", &n);
        for(int i = 1; i <= n; ++i) {
            scanf("%d", &A[i]);
            update(i, A[i], 1);
        }
        scanf("%d", &q);
        while(q--) {
            int b, x, y, k;
            scanf("%d", &b);
            if(b == 0) {
                scanf("%d %d %d", &x, &y,&k);
                printf("%d\n", solve(x, y, k));
            }
            else {
                scanf("%d %d", &x, &k);
                update(x, A[x], -1);
                A[x] = k;
                update(x, A[x], 1);
            }
 
        }
        for(int i = 1; i <= n; ++i) {
            update(i, A[i], -1);
        }
    }
 
    return 0;
}
