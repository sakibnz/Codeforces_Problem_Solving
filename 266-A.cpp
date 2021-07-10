#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pb push_back
#define eb emplace_back
#define mp make_pair

void file_i_o() {

#ifndef ONLINE_JUDGE
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("input_cf.txt", "r", stdin);
	freopen("output_cf.txt", "w", stdout);
#endif

}

int main() {

	clock_t begin = clock();
	file_i_o();
	//.....
	int n;
	cin >> n;

	char str[n + 1];
	cin >> str;

	int count = 0;
	for (int i = 0; i < n - 1; i++) {
		if (str[i] == str[i + 1])
			count++;
	}

	cout << count << endl;

	//.....
#ifndef ONLINE_JUDGE
	clock_t end = clock();
	cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC << " sec\n";
#endif
	return 0;
}