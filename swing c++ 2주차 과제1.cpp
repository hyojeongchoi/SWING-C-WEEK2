#include <iostream>
using namespace std;
//짝수, 홀수 판별기

int main(void)
{
	
		int number[] = { 0 };// 입력받을 배열 생성
		int i, n = 0;
		int odd = 0;
		int even = 0;


		while (1)
		{
			cout << "숫자를 입력해주세요 :";
			cin >> n;
			int i = 0;
			number[i] = n;
			if (n == ' ')
				break;
		}

	    cout << "--------------결과--------------" << endl;
	    cout << "홀수:";
	    if (n % 2 == 1) 
		    cout << n;
		    odd++;
		
	    cout << "홀수는 총 " << odd << "개 입니다.";
	    cout << ' ';

	    cout << "짝수:";
	    if (n % 2 == 0) 
		    cout << n;
		    even++;
	    cout << "\n짝수는 총 " << even << "개 입니다.";

}