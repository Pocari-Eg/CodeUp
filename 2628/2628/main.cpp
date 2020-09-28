// CodeUp 
// 2628 : 케익 자르기 

//https://codeup.kr/problem.php?id=2628

#include<iostream>
using namespace std;
#include<algorithm>

void cut(int* a, int* b) {

	sort(a, a + 2);
	sort(b, b + 2);

	if ((b[0] > a[0] && b[0] < a[1])&&(b[1]<a[0]||b[1]>a[1])) {
		cout << "Cross" << endl;
		
	}
	else
	{
		cout << "Not Corss" << endl;
	}
}

int main() {
	int* a;
	int* b;

	a = new int[2];
	b = new int[2];



	cin >> a[0] >> a[1];
	cin >> b[0] >> b[1];

	
	cut(a, b);
	

	return 0;
}

//STL SORT
//https://m.blog.naver.com/ndb796/221227975229

//케이크 자르기
//https://swblossom.tistory.com/54