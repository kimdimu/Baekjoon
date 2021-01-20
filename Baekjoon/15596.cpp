#include <vector>
using namespace std;

long long sum(vector<int>& a) {
	long long ans = 0;
	int size = a.size;

	for (int i = 0; i < a.size(); i++) {
		ans += a[i];
	}

	return ans;
}

//int main()
//{
//	long long n; cin >> n;
//	vector<int> a(n);
//
//	cout << sum(a);
//
//	return 0;
//}

