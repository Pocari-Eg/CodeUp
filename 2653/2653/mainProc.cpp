//2653: 규칙에 맞는 이진수 만들기
//20_09_18


//https://codeup.kr/problem.php?id=2653

/*
 다음 두 가지 규칙을 지키면서 이진수를 만들고자 한다.
 가능한 서로 다른 이진수의 개수를 구하는 프로그램을 작성하시오.

 규칙 1) 길이는 n이다.
 규칙 2) 0이 연속으로 존재하면 안된다.
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
