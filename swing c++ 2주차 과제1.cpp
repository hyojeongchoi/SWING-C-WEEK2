#include <iostream>
using namespace std;
//¦��, Ȧ�� �Ǻ���

int main(void)
{
	
		int number[] = { 0 };// �Է¹��� �迭 ����
		int i, n = 0;
		int odd = 0;
		int even = 0;


		while (1)
		{
			cout << "���ڸ� �Է����ּ��� :";
			cin >> n;
			int i = 0;
			number[i] = n;
			if (n == ' ')
				break;
		}

	    cout << "--------------���--------------" << endl;
	    cout << "Ȧ��:";
	    if (n % 2 == 1) 
		    cout << n;
		    odd++;
		
	    cout << "Ȧ���� �� " << odd << "�� �Դϴ�.";
	    cout << ' ';

	    cout << "¦��:";
	    if (n % 2 == 0) 
		    cout << n;
		    even++;
	    cout << "\n¦���� �� " << even << "�� �Դϴ�.";

}