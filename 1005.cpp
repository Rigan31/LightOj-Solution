/// Bismillahir Rahmanir Rahim


#include<bits/stdc++.h>

using namespace std;
using namespace __gnu_cxx;


#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define IN freopen("input.txt","r+",stdin)
#define OUT freopen("output.txt", "w+", stdout)
#define DBG cout << "Hi there" << endl
#define all(x) (x).begin(), (x).end()
#define fap(x) cout << " -- " << #x << ": " << (x) << "\n"
#define CHECK_BIT(var,pos) ((var) & (1<<(pos)))
#define print_1D_vector(x) for(int i = 0; i < x.size(); i++) cout << x[i] << " "; cout << endl
#define print_2D_vector(x) for(int i = 0; i < x.size(); i++) {for(int j = 0; j < x[i].size(); j++) cout << x[i][j] << " "; cout << endl;}
#define print_2D_array(x,n,m) for(int i = 0; i < n; i++) {for(int j = 0; j < m; j++) cout << x[i][j] << " "; cout << endl;}


typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<pair<int, int> > vpii;


long double PI = acosl(-1);
const int NMAX = 20005;

/// code starts from here

ll bc[35][35];

void solve(){
    int n, k;
    cin >> n >> k;
    if(k > n){
        cout << 0 << endl;
        return;
    }
    ll ans = 1;
    for(int i = 1; i <= k; i++){
        ans *= i;
    }
    ans *= (bc[n][k]*bc[n][k]);
    cout << ans << endl;

}

int main(){
    #ifndef ONLINE_JUDGE
    IN;
    //OUT;
    #endif
    FASTIO;

    bc[0][0] = 1;
    for(int i = 1; i < 35; i++){
        bc[i][0] = 1;
        bc[i][i] = 1;
    }
    for(int i = 2; i < 35; i++){
        for(int j = 1; j <= i; j++){
            bc[i][j] = bc[i-1][j-1]+bc [i-1][j];
        }
    }

    int tc;
    cin >> tc;

    for(int i = 1; i <= tc; i++){
        cout << "Case " << i << ": ";
        solve();
    }

}








