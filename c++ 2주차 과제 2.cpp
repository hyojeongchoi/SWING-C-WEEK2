#include <iostream>
using namespace std;
// ����� �ý���

int main(void)
{
	int repeat;

	for (;;)
	{
		int num;
		cout << "----------- ����� �ý���------------\n";
		cout << "����� ���� ����� �������ּ���.\n";
		cout << "1. �����ﰢ��\n2. ���ﰢ��\n3. ����\n4. ������\n";
		cin >> num;

		if (num == 1) {
			cout << "���� �ﰢ���� �����ϼ̽��ϴ�.\n";
			cout << "���� ������ �������ּ���" << endl;
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
			cout << "���ﰢ���� �����ϼ̽��ϴ�.\n";
			cout << "���� ������ �������ּ���" << endl;
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
			cout << "���� �����ϼ̽��ϴ�.\n";
			cout << "���� ������ �������ּ���" << endl;
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
				cout << "Ȧ���� �Է����ּ��� :";
				cin >> repeat;
			}
		}

		else {
			cout << "�����⸦ �����ϼ̽��ϴ�.\n";
			cout << "�����մϴ�." << endl;
			return 0;
		}
	}
}