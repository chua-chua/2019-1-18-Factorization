#include <iostream>
using namespace std;

void Factorization(int n)
{
	int i = 2;

	//�ѱ������������
	int is_printed = 0;

	while (i <= n)
	{
		//������
		if (n % i == 0)
		{
			//���δ�����
			if (i != is_printed)
			{
				//����������Ϊ�����
				is_printed = i;
				cout << i << " ";
			}
			n /= i;
		}

		//������������������
		else
			i++;
	}
	cout << endl;
}

//���Ժ���
void test()
{
	int num = 0;
	cin >> num;

	Factorization(num);

}

int main(void)
{
	test();


	system("pause");
	return 0;
}