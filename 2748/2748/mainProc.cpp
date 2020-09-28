//2748 : 덧셈, 뺄셈으로 n 만들기
//https://codeup.kr/problem.php?id=2748

/*
영일이는 숫자 0에서 n개의 수를 덧셈과 뺄셈을 이용하여 m으로 만들려고 한다.
예를 들어 n=2이고 1,-1로 m=0을 만드는 경우는 다음과 같다.
0+1+(-1)=0,   0-1-(-1)=0
n개의 수를 덜셈과 뺄셈을 이용하여 m이 되는 경우의 수를 모두 구하시오.

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