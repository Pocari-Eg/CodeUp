//2653: ��Ģ�� �´� ������ �����
//20_09_18


//https://codeup.kr/problem.php?id=2653

/*
 ���� �� ���� ��Ģ�� ��Ű�鼭 �������� ������� �Ѵ�.
 ������ ���� �ٸ� �������� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

 ��Ģ 1) ���̴� n�̴�.
 ��Ģ 2) 0�� �������� �����ϸ� �ȵȴ�.
*/


#include<iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	
	int* arr = new int[n+1];
	arr[1] = 2;
	arr[2] = 3;
	for (int i = 3; i <=n; i++) {
		; arr[i] = arr[i - 1] + arr[i - 2];
	}

	cout << arr[n] << endl;
	return 0;
	
	}
