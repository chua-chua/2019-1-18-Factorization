#include <iostream>
using namespace std;

void Factorization(int n)
{
	int i = 2;

	//已被输出的质因数
	int is_printed = 0;

	while (i <= n)
	{
		//能整除
		if (n % i == 0)
		{
			//如果未被输出
			if (i != is_printed)
			{
				//输出，并标记为已输出
				is_printed = i;
				cout << i << " ";
			}
			n /= i;
		}

		//不能整除，跳过该数
		else
			i++;
	}
	cout << endl;
}

//测试函数
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