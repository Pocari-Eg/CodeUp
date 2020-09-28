//20_09_14 
//2650 : 디지털 도어락


//https://codeup.kr/problem.php?id=2650

#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;



int main() {

	int num[3];
	stack<int> CD;

	int count = 0;
	for (int i = 0; i < 3; i++) {
		cin >> num[i];
	}

	sort(num, num + 3);


	int max = num[0];
	
	for (int i = 2; i <= max;) {
		if ((num[0] % i == 0) && (num[1] % i == 0) && (num[2] % i == 0)) {
			CD.push(i);
			num[0] = num[0] / i;
			num[1] = num[1] / i;
			num[2] = num[2] / i;
		}
		else {
			i++;
		}

	}
	int GCD = 1;
	for (; !(CD.empty());) {
		GCD *= CD.top();
		CD.pop();
		
	}

	cout << GCD << endl;
		return 0;
}