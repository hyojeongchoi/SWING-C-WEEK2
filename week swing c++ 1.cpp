#include<iostream.>
using namespace std;
//¦��, Ȧ�� �Ǻ���

int main(void)
{
	
		int number[5];// �Է¹��� �迭 ����
		int i, n = 0;
		int odd = 0;
		int even = 0;


		for(int i=0; i<5; i++)
		{
			cout << "���ڸ� �Է����ּ��� :";
			cin >> n;
			number[i] = n;
		}

	    cout << "--------------���--------------" << endl;
	    cout << "Ȧ��:";
		for (int i = 0; i < 5; i++)
		{
			if (number[i] % 2 == 1)
			{
				cout << number[i] << " ";
					odd ++;
			}
		}
		
	    cout << "\nȦ���� �� " << odd << "�� �Դϴ�.";
	    cout << ' ';

	    cout << "\n¦��:";
		for (int i = 0; i < 5; i++)
		{
			if (number[i] % 2 == 0)
			{
				cout << number[i] << " ";
					even++;
			}
		}
		cout << "\n¦���� �� " << even << "�� �Դϴ�.";
		cout << ' ';
}