#include <iostream>


int main()
{
	std::cout << "You see a vast cavern ahead and try to shout for an echo, but only manage to speak a single letter\n";
	char x{ };

	std::cin >> x;
	std::cout << x << " " << x << "  " << x << "    " << x << '\n' << "you hear it echoing in the large empty space";
}