//CodeUp
/*n개로 이루어진 정수 집합에서 원하는 수 k이상인 수가 처음으로 등장하는
위치를 찾으시오

단, 입력되는 집합은 오름차순으로 정렬되어 있으며, 같은 수가 여러 개 존재 할 수 있다.
*/

#include<iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int* arr = new int[n];
	int place;
	bool ok;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		if (arr[i]>=k) {
			place =i + 1;
			ok = true;
			break;	
		}
		else {
			ok = false;
		}
	}
	if (ok) {
		cout << place << endl;
	}
	else {
		cout << n + 1 << endl;
	}
}