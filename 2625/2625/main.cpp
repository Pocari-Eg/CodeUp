// CodeUp 
// 2626 : �ﰢȭ�� ����� (small)
/* 
�־��� ȭ�� �ѷ��� ���̸� �̿��Ͽ� �ﰢ�� ����� ȭ����
��������Ѵ� �� �� ������� �ﰢ�� ȭ�� �ѷ��� ���̴�
�ݵ�� �־��� ȭ�� �ѷ��� ���̿� ���ƾ� �Ѵ�. ����, ȭ�� �ѷ���
������ ������ ���̴� �ڿ����̴�.
*/

//https://codeup.kr/problem.php?id=2625

#include<iostream>
using namespace std;

int main() {

	cout << "ȭ���� ���̸� �Է��ϼ��� (3<=n<=100) : ";
	int length;
	cin >> length;
    int count=0;
    for (int a = 1; a <= length; a++) {
        for (int b = a; b <= length; b++) {
            for (int c = b; c <= length; c++) {
                // ���� �˻��Ͽ� ������ ȭ�� ���� ����
                if (a <= b && b <= c
                    && a + b > c
                    && a + b + c == length) {
                    count++;
                }
            }
        }
    }
    cout << count << endl;

}
//�ذ� ����
//��
//https://m.blog.naver.com/mycho/220739201823

// ����� �� ->�߰� ->����ª�� ������� 1�� ������Ű�鼭
// ��� ����Ǽ��� ����Ѵ�.
