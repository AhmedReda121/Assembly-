#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    long long SumWith_1[n + 1] = {};
    // ----> (x & y) + (x | y) = x + y
    for (int i = 2; i <= n; i++) {
        cout << "and 1 " << i << endl;
        cin >> SumWith_1[i];
        cout << "or 1 " << i << endl;
        int x;
        cin >> x;
        SumWith_1[i] += x;
    }
    long long Sumof2_3 = 0;
    cout << "and 2 3" << endl;
    cin >> Sumof2_3;
    cout << "or 2 3" << endl;
    long long x;
    cin >> x;
    Sumof2_3 += x;
    long long Firstnum = (SumWith_1[2] + SumWith_1[3] - Sumof2_3) / 2;
    long long Guessedarr[n + 1];
    Guessedarr[1] = Firstnum;
    for (int i = 2; i <= n; i++) {
        Guessedarr[i] = SumWith_1[i] - Firstnum;
    }
    for (int i = 1; i <= n; i++) {
        cout << Guessedarr[i] << " ";
    }
    return 0;
}
