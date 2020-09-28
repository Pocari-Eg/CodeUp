// CodeUp 
// 2631: 보물찾기
/*수열 속에 숨어 있는 보물들을 찾아보자. 
n개의 자연수로 이루어진 수열이 있다.

이 수열들 중 연속된 1개 이상의 원소들의 합이 정확히 k 가 되면
이 구간은 보물구간이라고 한다.

주어진 n개의 자연수 중에서 보물 구간이 몇개 있는지
구하는 프로그램을 작성하시오
*/

//https://codeup.kr/problem.php?id=2631




int arr[100000];
#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	if (a < 5 || a>100000) {
		return 0;
	}
	
	for (int i = 0; i < a; i++) {
		cin >> arr[i];
		
	}

	int i = 0, j = 0, sum =0, count = 0;
	
	for (; i < a - 1;) {
		if (sum <b ) {
			sum += arr[j++];
			

		}
		else if (sum == b) {
			
			sum = 0;
			count++;
			i++;
			j = i;
			
		}
		else if (sum > b) {
			sum = 0;
			i++;
			j = i;
			
		}


	}
	

	cout << count << endl;

	delete[] arr;
	return 0;
}
//2611 https://swblossom.tistory.com/55