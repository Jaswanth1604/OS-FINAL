#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long int ll;


//Int data type
#define sc1(a)              scanf("%d", &a)
#define sc2(a, b)           scanf("%d %d", &a, &b)
#define sc3(a, b, c)        scanf("%d %d %d", &a, &b, &c)
#define sc4(a, b, c, d)     scanf("%d %d %d %d", &a, &b, &c, &d)

//Long Data type
#define scl1(a)             scanf("%lld", &a)
#define scl2(a, b)          scanf("%lld %lld", &a, &b)
#define scl3(a, b, c)       scanf("%lld %lld %lld", &a, &b, &c)
#define scl4(a, b, c, d)    scanf("%lld %lld %lld %lld", &a, &b, &c, &d)

#define mx 1000005
#define pf(a) cout<<a<<endl

int main()
{
    ll a,n,m,t,b=0,c=0,i=0,j=0,dk=0,ck=0;

    scl1(t);
    while(t--){
    scl3(n,m,a);
    b = 0, c = 0;
    b = abs(a - n);
    c = abs(a - m);

    if(b==c)
        cout<<"Mouse C"<<endl;
    else if(b>c)
        cout<<"Cat B"<<endl;
    else
        cout<<"Cat A"<<endl;
    }
}
