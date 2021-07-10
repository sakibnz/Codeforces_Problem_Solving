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
	string user_name;
	cin >> user_name;

	int n = user_name.size();
	vector < int > frequency(26, 0);
	for (int i = 0; i < user_name.size(); i++) {
		frequency[user_name[i] - 'a'] = 1;
	}

	int sum = 0;
	for (auto i : frequency)
		sum += i;

	if (sum % 2)
		cout << "IGNORE HIM!" << endl;
	else
		cout << "CHAT WITH HER!" << endl;

	//.....
#ifndef ONLINE_JUDGE
	clock_t end = clock();
	cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC << " sec\n";
#endif
	return 0;
}