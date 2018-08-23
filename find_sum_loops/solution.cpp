#include <iostream>

int arr[10] = {12, 44, 58, 3, 5, 6, 90, 23, 43, 71}; // The sum of those numbers is 355

bool sumFor();
bool sumWhile();
bool sumRecursion(int, int);

main()
{
	if (sumFor() && sumWhile() && sumRecursion(0, 0))
		std::cout << "Solution is correct!" << std::endl;
	else
		std::cout << "Solution is incorrect!" << std::endl;

	system("pause");			
}

bool sumFor()
{
	int sum = 0;

	for (int i = 0; i < 10; i++)
	{
		sum += arr[i];
	}

	return sum == 355;
}

bool sumWhile()
{
	int sum = 0;

	int i = 0;
	while (i < 10)
	{
		sum += arr[i];
		i++;
	}

	return sum == 355;
}

bool sumRecursion(int sum, int i)
{
	sum += arr[i];
	if (i < 10)
	{
		i++;
		sumRecursion(sum, i);
	}
	else
		return sum == 355;
}