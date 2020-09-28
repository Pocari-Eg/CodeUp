#include<iostream>
using namespace std;
void test(int a,int b);
void test(int a,int b) {

	if (a <= b) {
		if (a % 2 != 0)
			cout << a << "  ";
		test(a + 1, b);
	}




	

}

int main() {

	test(0,100);

	return 0;

}