#include <iostream>
using namespace std;

struct Nominals
{
int c25 = 0;
int c10 = 0;
int c5 = 0;
int c1 = 0;
};

bool TakeNumber(int number);
bool IsValid(int number);
int ConvertToCoins(double number);
void ShowTrifle(int coins, Nominals &nominals);

int main()
{

system("pause");
return 0;
}
