#include<iostream>

int main(void)
{
	std::srand(unsigned int(time(0)));

	std::cout << std::rand() % 100000 + 1;

	return 0;
}