// 2020-09-28
// 3002 ; ���� �׽�Ʈ 3

// N���� ���ڸ� ���� �����ְ�, M���� ������ �ϸ�
//  �� ���ڸ� �� ��°�� �ҷ����� �׽�Ʈ�Ѵ�.

/*
*ù°�ٿ� N�� �Էµȴ�. (1��N��1,000,000)

��° �ٿ� N���� ���� �ٸ� ���ڰ� �������� ���еǾ� ������������  �Էµȴ�. (�����Ͱ��� ���� : 1 ~ 100,000,000)

��°�ٿ� ������ �� M�� �Էµȴ�. (1��M��100,000)

��, ������ ������������ ���� �ʴ´�.

��° �ٿ� M���� ������ �Էµȴ�

M���� ������ ���� �� ���ڰ� �־����� 
�� ������ ��ġ�� ���, �������� -1�� ���ʴ�� ����Ѵ�
*/

void BinarySearch(int* arr, int First, int Last, int key, int& index) {
	if (First > Last)
		index = -1;
	else
	{
		int Mid = (First + Last) / 2;
		if (key == arr[Mid])
			index = Mid+1;
		else if (key < arr[Mid])
			BinarySearch(arr, First, Mid - 1, key, index);
		else
			BinarySearch(arr, Mid + 1, Last, key, index);

	}
}

#include<iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> m;
	int* arr_ = new int[m];
	int* index = new int[m];
	for (int i = 0; i < m; i++) {
		cin >> arr_[i];
	}

	for (int i = 0; i < m; i++) {
		
		BinarySearch(arr, 0, n, arr_[i], index[i]);
	}


	for (int i = 0; i < m; i++) {

		cout << index[i] << " ";
	}
	return 0;


}
