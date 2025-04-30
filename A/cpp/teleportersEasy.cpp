#include<bits/stdc++.h>
using namespace std;
const long long inf = (long long) 1e18 + 10;
const int inf1 = (int) 1e9 + 10;
#define int long long
#define dbl long double
#define endl '\n'
#define sc second
#define fr first
#define mp make_pair
#define pb push_back
#define all(x) x.begin(), x.end()
const int maxn = -1;
 
// IDEA: The true cost of visiting a teleporter is length of the walk from zero + teleporting base cost.
// A greedy algorithm solves it!
void solve() {
    // Write your solution here
    int tele_num, coins;
    cin >> tele_num >> coins;

    // Declaring teleporter array and atributing teleporters costs
    int tele[tele_num];

    for (int i = 0; i < tele_num; i++) {
        cin >> tele[i]; 
        tele[i] += i + 1;
    }

    sort(tele, tele + tele_num);

    int curr = 0, visited = 0;

    while (curr < tele_num && coins >= tele[curr]) {
        coins -= tele[curr];
        visited ++;
        curr++;
    }

    cout << visited << endl;

}
 
int32_t main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tt = 1;
    cin >> tt;
    while(tt--) {
        solve();
    }
}

// What I've learned: Even if the problem has a mathematic array structure
// it is better to use the usual c++ struture -> whay less bugs.
// While Loop
    // Adding curr < tele_num protects us from erros if the individual can use all the teleporters