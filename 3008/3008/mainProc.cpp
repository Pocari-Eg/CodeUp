// 2020_09_29
// 3008 : 일곱난쟁이

/*

아홉 개의 줄에 걸쳐 일곱 난쟁이의 키가 주어진다. 
주어지는 키는 100을 넘지 않는 자연수이며, 아홉 난쟁이의 키는 모두 다르며, 
가능한 정답이 여러가지인 경우에는 아무거나 출력한다.

*/

#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;





int main() {
	int nan_[7];
	stack<int> s;
	int n[9];
	int num = 0;

	for (int i = 0; i < 9; i++) {
		cin >> n[i];
	}


for(int i=0;i<9;i++){
	num += n[i];
}

	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {

			if(num-(n[i]+n[j])==100){

				

				n[i] = 101;
				n[j] = 101;
			
				i = 10;
					break;
			}
		

		}
	}

	for (int i = 0; i < 9; i++) {
		if (n[i] != 101) {
			s.push(n[i]);
		}
	}

	int max = s.size();
	for (int i = 0; i < max; i++) {

		nan_[i] = s.top();
		s.pop();
	}
	
	sort(nan_,  nan_+7);


	for (int i = 0; i < 7; i++) {
		cout << nan_[i] << endl;
	}

	
	return 0;
}

/*
* 
* 

	for (int i = 0; i < 9; i++) {
		for (int j = i; j < 9; j++) {
			if (n[i] > n[j]) {
				int temp;
				temp = n[i];
				n[i] = n[j];
				n[j] = temp;
		
			}
		}
	}
*/