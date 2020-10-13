#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<int> primes;
bool ar[90000001];

void sieve() {
	int mxN=90000000;
	ar[0]=ar[1]=1;
	for(int i=2; i*i<=mxN; ++i)
		if(!ar[i])
			for(int j=i*i; j<=mxN; j+=i)
				ar[j]=1;
	for(int i=2; i<=mxN; ++i)
		if(!ar[i])
			primes.push_back(i);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t, n;
	cin >> t;
	sieve();
	while(t--) {
		cin >> n;
		cout << primes[n-1] << "\n";
	}
}
