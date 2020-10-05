#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		long long s, b, a, c;
		cin >> s >> a >> b >> c;
		s/=c;
		int x=s/a;
		s%=a;
		long long res=x*1LL*(a+b);
		res+=s;
		cout << res << "\n";
	}
}
