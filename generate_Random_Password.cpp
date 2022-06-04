#include<iostream>
#include<time.h>
#define PASSWORD_LEN 8
#define ASCII_LEFT_RANGE 33
#define ASCII_RIGHT_RANGE 126
using namespace std;

void generate_RandPassword(string &PW)
{
	int t;
	for(int i = 0; i < PASSWORD_LEN; i++)
	{
		t = ASCII_LEFT_RANGE + rand() % (ASCII_RIGHT_RANGE - ASCII_LEFT_RANGE);
		PW.push_back(char(t));
	}
}

int main() {
	srand((unsigned)time(NULL));
	while(true)
	{
		system("cls");
		string PW;
		generate_RandPassword(PW);
		cout << "<Ctr^C> to stop\n\n";
		cout << "\nPassword: " << PW << endl;
		getchar();
	}
	return 0;
}
