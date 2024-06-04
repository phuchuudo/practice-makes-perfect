#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define ll long long
#define vi vector<int>
#define vl vector<long long>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define umap unordered_map
#define uset unordered_set

#define rall(x) (x).rbegin(), (x).rend()
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mp make_pair

const long long LLINF = LLONG_MAX;
const int INF = INT_MAX;
const int MOD = 1e9 + 7;

const int MAX = 1e6 + 5;

int mobius[MAX];

void sieve() {
    vi primes;
    bitset<MAX> is_prime;
    is_prime.set();
    is_prime[0] = is_prime[1] = 0;
    mobius[1] = 1;

    for (int i = 2; i < MAX; i++) {
        if (is_prime[i]) {
            primes.pb(i);
            mobius[i] = -1;
        }

        for (size_t j = 0; j < primes.size() && primes[j] * i < MAX; j++) {
            int p = primes[j];
            is_prime[i * p] = 0;

            if (i % p == 0) {
                mobius[i * p] = 0;
                break;
            } else {
                mobius[i * p] = -mobius[i];
            }
        }
    }
}

void solve() {
    sieve();

    int n;
    cin >> n;

    vi cnt(MAX);
    while (n--) {
        int x;
        cin >> x;
        cnt[x]++;
    }

    ll result = 0;
    for (int i = 1; i < MAX; i++) {
        ll num = 0;
        for (int j = i; j < MAX; j += i) {
            num += cnt[j];
        }
        result += num * (num - 1) / 2 * mobius[i];
    }

    cout << result << "\n";
}

int main() {
    fastio

    int tc = 1; // Number of test cases
    // cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}
