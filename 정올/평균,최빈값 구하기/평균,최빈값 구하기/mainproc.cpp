#include<iostream>
using namespace std;

int main() {

	int  size = 10;
	int* num = new int[size];
	int total = 0;
	int avg;
	for (int i = 0; i < size; i++) {
		cin >> num[i];
		total += num[i];
	}

	avg = total / size;
	system("cls");
	int mode,freq, count = 0;
	for (int i = 0; i < size; i++) {
		freq = 1;
		for (int j = i + 1; j < size; j++) {

			if (num[i] == num[j]) {
				freq++;
			}
		}
		if (freq >= count) {
			mode = num[i];
			count = freq;
		}
	}

	cout << avg << endl;
	cout << mode << endl;
	cout << count << endl;
	return 0;
}