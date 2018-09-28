#include <iostream>

int funct(int n) {
	if (n < 10)
		return n;
	return n % 10 + funct(n / 10);
}

int main()
{
	int number;
	std::cin >> number;
	std::cout << funct(number) << std::endl;
	system("pause");
	return 0;
}