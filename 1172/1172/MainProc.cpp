#include<iostream>
using namespace std;


#define SWAP(a, b)  a ^= b; b ^= a; a ^= b;


int main() {
	int num[3];
	cin >> num[0] >> num[1] >> num[2];
	
	
	for (int i = 0; i < 2; i++) {
		for (int j = i + 1; j < 3; j++) {

			if (num[i] >= num[j]) {
				SWAP(num[j], num[i]);
				}
		  }
	
	}
	for (int i = 0; i < 3; i++) {
		cout << num[i] << " ";
	}

	return 0;
}