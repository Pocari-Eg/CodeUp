//2651 : 극장 좌석 배치
//2020_09_16
/*
극장에 n개의 빈 좌석이 있다.
k명의 관객들이 영화를 보기 위해서 왔다.
이 관객들이 n개의 좌석에 앉을 수 있는 서로 다른 방법의 수를
구하는 프로그램을 작성하시오.

(단 , k명의 사람을 서로 구분되지 않는다.)
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