#include <iostream>
using namespace std;
// 별찍기 시스템

int main(void)
{
	int repeat;

	for (;;)
	{
		int num;
		cout << "----------- 별찍기 시스템------------\n";
		cout << "만들고 싶은 모양을 선택해주세요.\n";
		cout << "1. 직각삼각형\n2. 정삼각형\n3. 나비\n4. 나가기\n";
		cin >> num;

		if (num == 1) {
			cout << "직각 삼각형을 선택하셨습니다.\n";
			cout << "행의 개수를 선택해주세요" << endl;
			cin >> repeat;
			for (int i = 1; i <= repeat; i++)
			{
				for (int j = repeat; j > i; j--)
					cout << " ";
				for (int k = 0; k < i; k++)
					cout << "*";
				cout << "\n";
			}
			cout << " ";

			for (int i = 0; i < repeat; i++)
			{
				for (int j = 0; j < repeat - i; j++) {
					cout << "*";
				}
				cout << "\n";
				cout << " ";
			}

			for (int i = 0; i < repeat; i++)
			{
				for (int k = 0; k < i; k++)
					cout << " ";
				for (int j = 0; j < repeat - i; j++)
					cout << "*";
				cout << "\n";
				cout << " ";
			}
	continue;
		}

		else if (num == 2) {
			cout << "정삼각형을 선택하셨습니다.\n";
			cout << "행의 개수를 선택해주세요" << endl;
			cin >> repeat;

			for (int i = 0; i < repeat; i++)
			{
				for (int j = i; j < repeat; j++)
					cout << " ";
				for (int k = 0; k < i * 2 + 1; k++)
					cout << "*";
				cout << "\n";

			}
		}

		else if (num == 3) {
			cout << "나비를 선택하셨습니다.\n";
			cout << "행의 개수를 선택해주세요" << endl;
			cin >> repeat;

			if (repeat % 2 == 1) {

				for (int i = 1; i < repeat / 2 + 1; i++) {
					for (int j = 1; j <= i; j++)
						cout << "*";
					for (int j = 1; j <= repeat - i * 2; j++)
						cout << " ";
					for (int j = 1; j <= i; j++)
						cout << "*";
					cout << "\n";
				}

				for (int j = 1; j <= repeat; j++)
					cout << "*";
				cout << "\n";

				for (int i = repeat / 2; i > 0; i--) {
					for (int j = 1; j <= i; j++)
						cout << "*";
					for (int j = 1; j <= repeat - i * 2; j++)
						cout << " ";
					for (int j = 1; j <= i; j++)
						cout << "*";
					cout << "\n";
				}
			}
			else {
				cout << "홀수를 입력해주세요 :";
				cin >> repeat;
			}
		}

		else {
			cout << "나가기를 선택하셨습니다.\n";
			cout << "감사합니다." << endl;
			return 0;
		}
	}
}