#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>
#include <math.h>
#include <set>
// #include <bits/stdc++.h>

#define LL long long
#define INF 0x7fffffff
#define INFLL 0x7FFFFFFFFFFFFFFF
#define lenA(ar) sizeof(ar)/sizeof(*ar)
#define LENROWs(mat) sizeof(mat)/sizeof(*mat)
#define LENCOLs(mat) sizeof(*mat)/sizeof(**mat)
#define Fill(a,c) memset(&a, c, sizeof(a))
#define rep(i,x,y) for(LL i=x;i<y;i++)
#define repI(i,x,y) for(LL i=x-1;i>=y;i--)

using namespace std;

/**
 * Solution
 * https://codeforces.com/problemset/problem/236/A
 * @author Joe
 */

int main() {
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    char string[101];
    set<char> myset;
    cin >> string;

    rep(i, 0 , strlen(string)){
        myset.insert(string[i]);
    }

    if(myset.size() & 1){
        cout << "IGNORE HIM!" << endl;
    } else {
        cout << "CHAT WITH HER!" << endl;
    }


    return 0;
}