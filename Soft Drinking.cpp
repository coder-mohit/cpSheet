//https://codeforces.com/problemset/problem/151/A
#include<bits/stdc++.h>
#define endl        '\n'
#define ll          long long
#define pb          push_back
#define ppb         pop_back
#define endl        '\n'
#define mii         map<ll,ll>
#define msi         map<string,ll>
#define mis         map<ll, string>
#define loop(i,a,b)    for(auto i=a;i<b;i++)
#define loopr(i,a,b) for(auto i=b-1;i>=a;i--)
#define trav(a, x)  for(auto& a : x)
#define pii         pair<ll,ll>
#define vll          vector<ll>
#define vlp         vector<pair<ll, ll>>
#define vs          vector<string>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll)x.size()
#define lbnd        lower_bound
#define ubnd        upper_bound
#define DEBUG       cerr<<"/n>>>I'm Here<<</n"<<endl;
#define display(x) trav(a,x) cout<<a<<" ";cout<<endl;
#define what_is(x)  cerr << #x << " is " << x << endl;
#define inf 1000000000000000001;
using namespace std;
#define PI 3.141592653589793
const ll mod=1e9+7;
const int N = 1e6;
long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
ll binaryToDecimal(string n){
    string num = n;
    ll dec_value = 0; 
    ll base = 1;
    ll len = num.length();
    for (ll i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
    return dec_value;
}
string decimalToBinary(ll n){
    string s(0,' ');
    while(n != 0){
        if(n%2) s.push_back('1');
        else s.push_back('0');
        n /= 2;
    }
    reverse(s.begin(),s.end());
    if(s.size() == 0) s.push_back('0');
    return s;
}

void solve()
{
    ll n;cin>>n;ll k;cin>>k;ll l;cin>>l;
    ll c;cin>>c;ll d;cin>>d;ll p;cin>>p;
    ll nl;cin>>nl;ll np;cin>>np;
    cout<<min({k*l/nl,c*d,p/np})/n<<endl;
}

int main()
{

ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

ll t=1;
 // cin>>t; 
while(t--)solve();
  }
