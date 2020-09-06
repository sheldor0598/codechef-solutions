#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define FAST ios_base::sync_with_stdio(false);
#define INPT cin.tie(NULL);
#define OUTPT cout.tie(NULL);
#define fori(i,a,b) for(i=a;i<b;i++)
#define forireverse(i,a,b) for(i=a;i>=b;i--)
#define full(x) x.begin(),x.end()
#define sortV(x) sort(full(x))
#define sortVgr(x) sort(full(x),greater<LL>()) // x -> vector
#define reverse(x) reverse(full(x)) // x -> string
#define go(t) while(t--)
#define endl cout<<"\n"
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front
#define mp make_pair
#define M 1e9+7

LL gcd(LL a, LL b)
{
	if(a==0) return b;
	else return gcd(b%a,a);
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("inputCF.txt","r",stdin);
	freopen("outputCF.txt","w",stdout);
	#endif
	FAST INPT OUTPT
	LL t=1;
	cin>>t;
	go(t)
	{
		LL n,k,po=0;
		cin>>n;
		LL A[n+1],i;        
        fori(i,1,n+1) cin>>A[i];
        fori(i,1,n+1)
        {
        	if(A[i]>0) po+=A[i];
        	else
        	{
        		k=min(po,abs(A[i]));
        		po-=k;A[i]+=k;
        	}
        }
        LL sum=0;
        //fori(i,1,n+1) cout<<A[i]<<" ";endl;
        fori(i,1,n+1) if(A[i]<0) sum+=A[i];
        cout<<sum*-1<<"\n";
	}
	return 0;
}