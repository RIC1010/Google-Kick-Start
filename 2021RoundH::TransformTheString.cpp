#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define endl "\n"
#define ll long long
#define PI 3.1415926535897932384626
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define br printf("\n")
#define fo(i, n) for(i=0;i<n;i++)
#define deba(i, a, n) fo(i, n){cout << a[i] << " ";}
#define deb(x) cout << #x << " = " << x << endl;
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl;
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, x) for(auto it = x.begin(); it != x.end(); it++)
#define trr(it, x) for(auto it = x.rbegin(); it != x.rend(); it+)
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

const int mod = 1'000'000'007;
const int N = 3e5;

int main() {
    int t;
    cin>>t;
    int count=1;
    while (t--)
    {
        unordered_map<char,int>izq={{'a',1},{'b',2},{'c',3},{'d',4},{'e',5},{'f',6},{'g',7},{'h',8},{'i',9},{'j',10},{'k',11},{'l',12},{'m',13},
        {'n',14},{'o',15},{'p',16},{'q',17},{'r',18},{'s',19},{'t',20},{'u',21},{'v',22},{'w',23},{'x',24},{'y',25},{'z',26}};
        unordered_map<char,int>der={{'a',27},{'b',28},{'c',29},{'d',30},{'e',31},{'f',32},{'g',33},{'h',34},{'i',35},{'j',36},{'k',37},{'l',38},{'m',39},
        {'n',40},{'o',41},{'p',42},{'q',43},{'r',44},{'s',45},{'t',46},{'u',47},{'v',48},{'w',49},{'x',50},{'y',51},{'z',52}};
        string s;
        cin>>s;
        string f;
        cin>>f;
        vector<char>vecs;
        unordered_map<char,int>operar;
        vector<char>vecf;
        for (int i = 0; i < s.size(); i++)
        {
            bool aux=false;
            for (int j = 0; j < f.size(); j++)
            {
                if(s[i]==f[j]){
                    aux=true;
                    break;
                }
            }
            if(!aux){
                operar[s[i]]++;
            }
        }
        int res=0;
        for (auto x: operar)
        {
            int mini=min(izq[max(x.first,f[0])]-izq[min(x.first,f[0])],der[min(x.first,f[0])]-izq[max(x.first,f[0])]);
            mini=mini*operar[x.first];
            for (int i = 1; i < f.size(); i++)
            {
                int var=min(izq[max(x.first,f[i])]-izq[min(x.first,f[i])],der[min(x.first,f[i])]-izq[max(x.first,f[i])]);
                var=var*operar[x.first];
                mini=min(mini,var);
            }
            res+=mini;
        }
        cout<<"Case #"<<count<<": "<<res<<endl;
        count++;
    }
    return 0;
}
