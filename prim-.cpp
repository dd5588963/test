#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	ifstream fin("1.txt");
	char p[5];
	for (int i = 0; i < 5; i++) {
		fin >> p[i];
		cout << p[i];
		cout << 1111;
		cout << 2222;
	}
	
	return 0;
}
