/*
*  Author : pritish.thakkar 
*/

#include<bits/stdc++.h>
#define     pb                      push_back
#define     mkp                     make_pair
#define     inf                     1000000007
#define     rep(i,n)                for(int i=0;i<n;i++)
#define     fr                      first
#define     sc                      second
#define     clr(a)                  memset(a,0LL,sizeof a);
#define     pi                      3.141592653589793
#define     gc                      getchar
#define     all(v)                  v.begin(), v.end()
using       namespace               std;

typedef     unsigned long long      ull;
typedef     long long               ll;
typedef     vector<ll>              vi;
typedef     pair<ll,ll>             ii;
typedef     vector<ii>              vii;
typedef     set<ll>::iterator       sit;
typedef     map<ll,ll>::iterator    mit;
typedef     vector<int>::iterator   vit;

template<class T>inline bool read(T &x){int c=gc();int sgn=1;while(~c&&c<'0'||c>'9'){if(c=='-')sgn=-1;c=gc();}for(x=0;~c&&'0'<=c&&c<='9';c=gc())x=x*10+c-'0';x*=sgn;return ~c;}

//_____________________________


ll gcd(ll a, ll b){return (b == 0) ? (a) : gcd(b, a%b);}
bool isUpper(char c) {return (c >= 'A' && c <= 'Z');}
bool isLower(char c) {return (c >= 'a' && c <= 'z');}
bool iplpha(char c) {return (c >= 'A' && c <= 'Z')||(c >= 'a' && c <= 'z');}
bool iplnum(char c) {return (c >= 'A' && c <= 'Z')||(c >= 'a' && c <= 'z')||(c >= '0' && c <= '9');}
char toUpper(char c){return isUpper(c)?c:c-'a'+'A';}
char toLower(char c){return isLower(c)?c:c+'a'-'A';}
template<typename t> t _GCD(t a, t b){return ((b == 0) ? a : _GCD(b, a%b));} 
template<typename t> t _LCM(t a, t b){return (a * (b / _GCD(a, b)));}
ll modpow(ll base, ll expo, ll mod){base  = base % mod;ll ret = 1LL;while(expo > 0){if(expo & 1LL){ret =( ret * base) % mod;}base = (base * base )% mod;expo >>= 1LL;}return ret;}

//______________________________

bool p[1000001];
vi primes;
void sieve(ll n){memset(p,1,sizeof p);p[0] = p[1] = 0;
    for(int i = 2 ; i <= sqrt(n) ; i++){if(p[i]){for(int j = i * i ; j < n ; j+=i){p[j] = 0;}}}
    for(int i = 2 ; i <= n ; i ++){if(p[i]){primes.pb(i);}}}

bool isPrime(ll n){if(n < 1000001){return p[n];}ll ans = 0;for(int i= 0 ; i < primes.size() && primes[i] * primes[i] <= n  ; i ++){if(n % primes[i] == 0){return 0;}}return 1;}
 
//______________________________

void solve(){
    int t;
    cin >> t;
    cin >> ws;
    string s;
    while(t--){
        ll n=0;
        getline(cin , s);
        istringstream is(s);
        ll x;
        ll a[111];
        while(is >> x){
            a[n++] = x;
        }
        ll ans = 0;
        for(int i = 0 ; i < n; i ++){
            for(int j = 1 ;j < n ; j ++){
                ans = max(ans, gcd(a[i], a[j]));
            }
        }
        cout << ans << endl;
    }
}
//________________________________

int main(int argc, char *argv[]){
    std::ios::sync_with_stdio(0);
    // freopen("input.in" , "r" , stdin);
    // freopen("output.out" , "w" , stdout);
    solve();
}

    
