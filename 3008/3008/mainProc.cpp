// 2020_09_29
// 3008 : �ϰ�������

/*

��ȩ ���� �ٿ� ���� �ϰ� �������� Ű�� �־�����. 
�־����� Ű�� 100�� ���� �ʴ� �ڿ����̸�, ��ȩ �������� Ű�� ��� �ٸ���, 
������ ������ ���������� ��쿡�� �ƹ��ų� ����Ѵ�.

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