// CodeUp 
// 2631: ����ã��
/*���� �ӿ� ���� �ִ� �������� ã�ƺ���. 
n���� �ڿ����� �̷���� ������ �ִ�.

�� ������ �� ���ӵ� 1�� �̻��� ���ҵ��� ���� ��Ȯ�� k �� �Ǹ�
�� ������ ���������̶�� �Ѵ�.

�־��� n���� �ڿ��� �߿��� ���� ������ � �ִ���
���ϴ� ���α׷��� �ۼ��Ͻÿ�
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