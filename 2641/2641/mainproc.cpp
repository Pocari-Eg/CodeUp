//2641 : ���ٸ��� ��� ������ (small)

/*N ���� ����� �ִ�.
�����̴� ����� �� ���� 1ĭ �Ǵ� 2ĭ �Ǵ� 3ĭ�� ���� �� �ִ�.
������ �ѹ��� 3ĭ�� ������ ���� ���� ��� ������ �ι��� 
1ĭ �Ǵ� 2ĭ�� ���� ��  �ִ�.

����� �� N�� �ԷµǸ� �����̰� �� ������� ����� �ö󰥼��ִ� ���δٸ�
����� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

//https://codeup.kr/problem.php?id=2641

#include<iostream>
using namespace std;

void climb(int n, int count);

int value = 0;
int main() {
	int n;
	int count = 0;
	
	cin >> n;

	climb(n, count);

	cout << value << endl;
	return 0;
}

void climb(int n,int count){
	
	if (n == 0) {
		value++;
		return;
	}
	else if(n<0) 
	{
		return;
		
	}
	if (count >0) {
		climb(n - 1, count - 1);
		climb(n - 2, count - 1);

	}
	else if (count >= 0) {
		climb(n - 1, 0);
		climb(n - 2, 0);
		climb(n - 3, 2);
	}

	

}

//�����ڷ�
//https://blog.naver.com/hongyou022/221599873434