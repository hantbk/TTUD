#include<bits/stdc++.h>
using namespace std;

map<int, long long> a;
int n;

long long f(int n){
    if(n < 3) return n;

    auto p = a.find(n);
    if (p != a.end()) return p->second;
    

    int k = n /3;
    int r = f(2 * k);
    if (n % 3 > 0 )
        r = r + f(2 * k + 1);
    if( n % 3 > 1 )
        r = r + f(2 * k + 2);

    a[n] = r;

    return r;
}

int main() {
    cout<<"Nhap N = "; cin>>n;
    cout<<"f("<<n<<") = "<<f(n);

    return 0;
}
