#include<bits/stdc++.h>
#include <iostream>
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
    fastio;
    int T;
    cin>>T;
    int count=1;
    while(T--){
        int N;
        cin>>N;
        string s;
        cin>>s;
        vector<int>d(N,0);
        vector<int>i(N,0);
        int aux=0;
        for (int i = 0; i < N; i++)
        {
            if(s[i]!='1' && i!=0){
                d[i]=(s[i]-'0')+d[i-1]+aux;
            }else if(s[i]=='1'){
                aux=1;
            }
        }
        aux=0;
        for (int j = N-1; j>=0; j--)
        {
            if(s[j]!='1' && j!=N-1){
                i[j]=(s[j]-'0')+i[j+1]+aux;
            }else if(s[j]=='1'){
                aux=1;
            }
        }
        ll res=0;
        for (int x = 0; x < N; x++)
        {
            if(s[x]=='0'){
                if(d[x]==0 && i[x]!=0){
                    res+=i[x];
                }else if(d[x]!=0 && i[x]==0){
                    res+=d[x];
                }else if(d[x]!=0 && i[x]!=0){
                    res+=min(d[x],i[x]);
                }
            }
        }
        cout<<"Case #"<<count<<": "<<res<<endl;
        count++;
    }
    return 0;
}
