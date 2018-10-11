#include <iostream>
#include <string>

using namespace std;


class Car
{
public:

};


float calc(float earnDay, float invest)
{
	float earnYear = earnDay * 20 * 12;
	return earnYear / invest;
}

int main(int argc, char** argv)
{
	string::size_type sz;
	string earnDay(argv[1]);
	string invest(argv[2]);

	cout << "return " << calc(stof(earnDay, &sz), stof(invest, &sz)) << endl;
	return 1;
}

