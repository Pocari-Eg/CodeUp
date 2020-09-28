#include<iostream>
using namespace std;
#include"Student.h"
#include"Sort.h"
int main() {

	int max;
	cin >> max;

	STUDENT* stu = new STUDENT[max];

	for (int i = 0; i < max; i++) {

		cin >> stu[i].name >> stu[i].Grade;
	}
	Sort sort(max);

	sort.initdata(stu);
	
	sort.sorting();
	STUDENT* tmp = sort.getData();
	cout << tmp[2].name << endl;

	

}