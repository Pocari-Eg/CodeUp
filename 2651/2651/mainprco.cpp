//2651 : ���� �¼� ��ġ
//2020_09_16
/*
���忡 n���� �� �¼��� �ִ�.
k���� �������� ��ȭ�� ���� ���ؼ� �Դ�.
�� �������� n���� �¼��� ���� �� �ִ� ���� �ٸ� ����� ����
���ϴ� ���α׷��� �ۼ��Ͻÿ�.

(�� , k���� ����� ���� ���е��� �ʴ´�.)
*/

//https://codeup.kr/problem.php?id=2651

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(int argc, char** argv) {

	int n, k;
	cin >> n >> k;

	vector<int> com(n, 0);
	for (int i = 0; i < k; i++) {
		com[i] = 1;
	}
	sort(com.begin(), com.end());

	int ans = 0;
	do {
		ans++;
	} while (next_permutation(com.begin(), com.end()));

	cout << ans;

	return 0;
}
//https://sewonkimm.github.io/algorithm/2020/03/03/Q2651.html