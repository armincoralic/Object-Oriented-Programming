#include <iostream>
int main()
{
	int x = 10;
	int y = 9;
	std::cout << x << " ; " << y << std::endl; // 10 ; 9
	x++;
	--y;
	std::cout << x << " ; " << y << std::endl; // 11 ; 8
	x+=2; // 13
	y = ++x; // y=14 i x=14
	y -= x++; //  y=0
	std::cout << x << " ; " << y << std::endl; // 15 ; 0
	x = (y+2)*2/2; // x = 2
	y = y; // y = 0;
	std::cout << x << " ; " << y << std::endl; // 2 ; 0
	
}
