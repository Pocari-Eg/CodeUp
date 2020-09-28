#include<iostream>
#include<stack>
using namespace std;
//10진수 입력받을 변수,

//변환된 수를 담을 변수


int main() {
    stack<int> base_stack;

    cout << "10진수를 입력해 주세요 (0~ 32767) :  "; 
    int decimal;
    int result;
    char system_select;
    bool Hexadecimal = false;
    cin >> decimal;
    if (decimal < 0 || decimal>32767) {
        cout << "범위를 넘어섰습니다." << endl;
        return 0;
    }

    cout << "\t ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;
    cout << "\t|                        |" << endl;
    cout << "\t|    1.    2진법         |" << endl;
    cout << "\t|    2.    8진법         |" << endl;
    cout << "\t|    3.   16진법         |" << endl;
    cout << "\t|    Q.    종료          |" << endl;
    cout << "\t|                        |" << endl;
    cout << "\t ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;
  
    cin >> system_select;


    switch (system_select) {
    case '1':
        cout << "2진법을 선택하셨습니다." << endl;
        result = decimal;
        while (result != 0) {
          base_stack.push(result % 2);
          result = result / 2;
        }


        break;
    case '2':
        cout << "8진법을 선택하셨습니다." << endl;
        result = decimal;
        while (result !=0 ) {
            base_stack.push(result % 8);
            result = result / 8;
        }
        break;
    case '3':
        cout << "16진법을 선택하셨습니다." << endl;
        result = decimal;
        while (result != 0) {
            base_stack.push(result % 16);
            result = result / 16;
        }
        Hexadecimal = true;
        break;
    case 'q':
        cout << "종료합니다." << endl;
        return 0;
    case 'Q':
        cout << "종료합니다." << endl;
        return 0;

    default:
        cout << "잘못된 선택입니다." << endl;
        break;

    }
    base_stack.push(result);
  int   size = base_stack.size();
  if (!Hexadecimal) {
      cout << decimal << " ";
      for (int i = 0; i < size; i++) {
          cout << base_stack.top();
          base_stack.pop();

      }
  }
  else
  {
      cout << decimal << " ";
      for (int i = 0; i < size; i++) {
          switch (base_stack.top())
          {
          case 10:
              cout << "A";
              base_stack.pop();
              break;
          case 11:
              cout << "B";
              base_stack.pop();
              break;
          case 12:
              cout << "C";
              base_stack.pop();
              break;
          case 13:
              cout << "D";
              base_stack.pop();
              break;
          case 14:
              cout << "E";
              base_stack.pop();
              break;
          case 15:
              cout << "F";
              base_stack.pop();
              break;
          default:
              cout << base_stack.top();
              base_stack.pop();
              break;
          }
      }
  }

    
    return 0;

}