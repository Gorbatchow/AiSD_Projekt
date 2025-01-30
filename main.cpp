#include <iostream>
#include <vector>

void funkcja(std::vector<int>& T, int n)
{
	std::vector<int> copyT = T;// Kopia oryginalnej tablicy

	for (int i = 0; i < n; i++)
	{
		int ll = 0; //Licznik liczb le¿¹cych na lewo od rozpatrywanej
		for (int j = 0; j < i; j++)
		{
			if (copyT[j] > copyT[i])
				ll++;
		}
		T[i] = ll;
	}

	for (int i = 0; i < n; i++)
		std::cout << T[i] << " ";
}

int main()
{
	int n = 0;
	int value = 0;

	std::vector<int> T;

	std::cout << "Podaj liczbe elementow: \n";
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cout << "Podaj element: \n";
		std::cin >> value;
		T.push_back(value);
	}

	for (int i = 0; i < n; i++)
		std::cout << T[i] << " ";


	std::cout << "\n";
	funkcja(T, n);
	return 0;
}
