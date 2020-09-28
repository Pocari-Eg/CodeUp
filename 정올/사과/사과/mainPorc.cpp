#include<iostream>
#include<time.h>
using namespace std;
typedef struct School
{
	int student=0;
	int apple=0;
	int over_apple=0;
	
}SCHOOL;


int main() {

	int school_num;
	cin >> school_num;
	if (school_num < 1 && school_num>100) {
		cout << "학교 범위 초과" << endl;
		return 0;
	}
	

	SCHOOL* school = new SCHOOL[school_num];

	srand(time(NULL));
	for (int i = 0; i < school_num; i++) {
		school[i].apple = rand() % 100 + 1;
		school[i].student = rand() % 100 + 1;

	}



	int result = 0;
	for (int i = 0; i < school_num; i++) {
	
		school[i].over_apple=school[i].student% school[i].apple;
		result += school[i].over_apple;
	}

	for (int i = 0; i < school_num; i++) {
		cout << school[i].apple << " " << school[i].student << endl;

	}

	cout << result << endl;
	return 0;
}