//CodeUp
/*n���� �̷���� ���� ���տ��� ���ϴ� �� k�̻��� ���� ó������ �����ϴ�
��ġ�� ã���ÿ�

��, �ԷµǴ� ������ ������������ ���ĵǾ� ������, ���� ���� ���� �� ���� �� �� �ִ�.
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