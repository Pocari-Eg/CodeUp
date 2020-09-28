// 2020-09-28
// 3002 ; 기억력 테스트 3

// N개의 숫자를 먼저 말해주고, M개의 질문을 하면
//  그 숫자를 몇 번째로 불렀는지 테스트한다.

/*
*첫째줄에 N이 입력된다. (1≤N≤1,000,000)

둘째 줄에 N개의 서로 다른 숫자가 공백으로 구분되어 오름차순으로  입력된다. (데이터값의 범위 : 1 ~ 100,000,000)

셋째줄에 질문의 수 M이 입력된다. (1≤M≤100,000)

단, 질문은 오름차순으로 묻지 않는다.

넷째 줄에 M개의 질문이 입력된다

M개의 질문에 대해 그 숫자가 있었으면 
그 숫자의 위치를 출력, 없었으면 -1을 차례대로 출력한다
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
