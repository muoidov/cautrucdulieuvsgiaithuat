

#include <iostream>
using namespace std;
int BruteForce(const char* des, const char* x, int n, int m) {
	int j = 0;
	int count = 0;
	for (int i = 0; i <= (n - m); i++) {
		for (j = 0; j < m && x[j] == des[i + j]; j++);
		if (j >= m) {
			count++;
		}
	}
	return count;
}
int main()
{
	const char *des = "asewaafsfsdfs";
	const char *x = "a";
	int lenDes = strlen(des);
	int lenX = strlen(x);
	int res = BruteForce(des, x, lenDes, lenX);
	cout << "Xau x xuat hien: " << res << endl;
	return 0;
}

