#include <iostream>
#include <vector>
#include <string>

void main() {
	int Number;
	std::cin >> Number;
	int lows = (Number * 2) - 1;
	std::string starlines;

	for (int i = 0; i < lows; i++)
	{
		for (int t = 0; t < lows; t++)
		{
			if (i < Number - 1) {
				for (int j = 0; j < lows; j++)
				{
					starlines[j] = '*';
				}
				for (int count = Number - 1 - i; count > 0; count--) {
					starlines[count] = ' ';
				}
				for (int count2 = Number + 1 + i; count2 > Number; count2--) {
					starlines[count2] = ' ';
				}
			}
			else if ((i + 1) == Number) {
				for (int k = 0; k < lows; k++) {
					starlines[k] = ' ';
				}
			}
			else {
				for (int j = 0; j < lows; j++)
				{
					starlines[j] = '*';
				}
				for (int count = Number - 1 - i; count > 0; count--) {
					starlines[count] = ' ';
				}
				for (int count2 = Number + 1 + i; count2 > Number; count2--) {
					starlines[count2] = ' ';
				}
			}
		}
		std::cout << starlines;
	}


}