#include<iostream.>
using namespace std;
//짝수, 홀수 판별기

int main(void)
{
	
		int number[5];// 입력받을 배열 생성
		int i, n = 0;
		int odd = 0;
		int even = 0;


		for(int i=0; i<5; i++)
		{
			cout << "숫자를 입력해주세요 :";
			cin >> n;
			number[i] = n;
		}

	    cout << "--------------결과--------------" << endl;
	    cout << "홀수:";
		for (int i = 0; i < 5; i++)
		{
			if (number[i] % 2 == 1)
			{
				cout << number[i] << " ";
					odd ++;
			}
		}
		
	    cout << "\n홀수는 총 " << odd << "개 입니다.";
	    cout << ' ';

	    cout << "\n짝수:";
		for (int i = 0; i < 5; i++)
		{
			if (number[i] % 2 == 0)
			{
				cout << number[i] << " ";
					even++;
			}
		}
		cout << "\n짝수는 총 " << even << "개 입니다.";
		cout << ' ';
}