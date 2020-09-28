#include<iostream>
using namespace std;


int main() {
	string regident_num;
    cin >> regident_num;

//	char* YYMMDDF = new char[12];

	if (regident_num[6] != '-' || regident_num.size() > 14||regident_num.size()<13) {
		cout << "잘못된 형식입니다." << endl;
		return 0;
	}
	int gender_code = (int)regident_num[7]-48;

	
	switch (gender_code)
	{
	case 1:
		cout << "19" << regident_num[0] << regident_num[1] << "/" << regident_num[2]
			<< regident_num[3] << "/" << regident_num[4] << regident_num[5] << " " << "M" << endl;
		break;

	case 2:
		cout << "19" << regident_num[0] << regident_num[1] << "/" << regident_num[2]
			<< regident_num[3] << "/" << regident_num[4] << regident_num[5] << " " << "F" << endl;
		break;

	case 3:
		cout << "20" << regident_num[0] << regident_num[1] << "/" << regident_num[2]
			<< regident_num[3] << "/" << regident_num[4] << regident_num[5] << " " << "M" << endl;
		break;

	case 4:
		cout << "20" << regident_num[0] << regident_num[1] << "/" << regident_num[2]
			<< regident_num[3] << "/" << regident_num[4] << regident_num[5] << " " << "F" << endl;
		break;

	default:
		break;
	}


	

	return 0;

	
}