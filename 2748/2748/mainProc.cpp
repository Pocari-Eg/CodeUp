//2748 : ����, �������� n �����
//https://codeup.kr/problem.php?id=2748

/*
�����̴� ���� 0���� n���� ���� ������ ������ �̿��Ͽ� m���� ������� �Ѵ�.
���� ��� n=2�̰� 1,-1�� m=0�� ����� ���� ������ ����.
0+1+(-1)=0,   0-1-(-1)=0
n���� ���� ������ ������ �̿��Ͽ� m�� �Ǵ� ����� ���� ��� ���Ͻÿ�.

*/
int func(int n,int m,int num, int* arr,int c,int result) {

	if (c == n && num == m) {
		result++;
		return result;
	}
	else if (c == n && num != m) {
		return result;
	}
	else
	{
		

		result = func(n, m, num + *arr, arr + 1, c+1, result);
		result = func(n, m, num - *arr, arr + 1,c+1, result);
	}



	return result;
		

}

#include<iostream>
using namespace std;
int main() {
	int n, m;
	int num = 0;
	

	cin >> m;
	cin >> n;
	int* arr=new int[n];
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	


	
	
	cout << func(n, m, num, arr, 0, 0) << endl;
	return 0;
}