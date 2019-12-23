#include <iostream>
#include<fstream>
#include<string>
using namespace std;
class X{
public:
	int x;
	int y;
	X(int m, int n);
};
int main()
{
	X a(3,2);
	X b = a;
	cout << b.x << b.y;
	
	return 0;
}
