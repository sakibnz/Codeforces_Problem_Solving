#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pb push_back
#define eb emplace_back
#define mp make_pair

void file_i_o() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input_cf.txt", "r", stdin);
	freopen("output_cf.txt", "w", stdout);
#endif

}

int main() {

	clock_t begin = clock();
	file_i_o();
	//.....
	string s;
	cin >> s;

	if (s[0] >= 'a' && s[0] <= 'z') {
		s[0] = s[0] - 'a' + 'A';
	}

	cout << s << endl;


	//.....
#ifndef ONLINE_JUDGE
	clock_t end = clock();
	cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC << " sec\n";
#endif
	return 0;
}