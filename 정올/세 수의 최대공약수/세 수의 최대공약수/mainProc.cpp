#include<iostream>
using namespace std;
int GDC(int a, int b) {
	return b ? GDC(b, a % b) : a;
}

void check_range(int a, int b,int c) {
	
	if (a >= 1 && a <= b && b >= a && b <= c && c >= b && c <= 100000)
	{}
	else {
		throw "범위초과";
	}

}
int main() {
	int a, b, c;
	int result;
	cin >> a >> b >> c;
	try
	{
		check_range(a, b, c);
	}
	catch (const char *ex)
	{
		cout<<"오류 : "<<ex << endl;
		return 0;
	}

	result = GDC(GDC(a, b), c);

	cout << result;

}