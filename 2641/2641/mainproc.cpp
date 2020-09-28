//2641 : 숏다리의 계단 오르기 (small)

/*N 개의 계단이 있다.
주현이는 계단을 한 번에 1칸 또는 2칸 또는 3칸을 오를 수 있다.
하지막 한번에 3칸을 오르고 나면 힘이 들어 앞으로 두번은 
1칸 또는 2칸만 오를 수  있다.

계단의 수 N이 입력되면 주현이가 이 방법으로 계단을 올라갈수있는 서로다른
방법의 수를 계산하는 프로그램을 작성하시오.
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

//참고자료
//https://blog.naver.com/hongyou022/221599873434