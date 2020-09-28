// CodeUp 
// 2626 : 삼각화단 만들기 (small)
/* 
주어진 화단 둘레의 길이를 이용하여 삼각형 모양의 화단을
만들려고한다 이 때 만들어진 삼각형 화단 둘레의 길이는
반드시 주어진 화단 둘레의 길이와 같아야 한다. 또한, 화단 둘레의
길이의 각변의 길이는 자연수이다.
*/

//https://codeup.kr/problem.php?id=2625

#include<iostream>
using namespace std;

int main() {

	cout << "화단의 길이를 입력하세요 (3<=n<=100) : ";
	int length;
	cin >> length;
    int count=0;
    for (int a = 1; a <= length; a++) {
        for (int b = a; b <= length; b++) {
            for (int c = b; c <= length; c++) {
                // 조건 검사하여 맞으면 화단 갯수 증가
                if (a <= b && b <= c
                    && a + b > c
                    && a + b + c == length) {
                    count++;
                }
            }
        }
    }
    cout << count << endl;

}
//해결 못함
//답
//https://m.blog.naver.com/mycho/220739201823

// 가장긴 변 ->중간 ->가장짧은 순서대로 1씩 증가시키면서
// 모든 경우의수를 계산한다.
