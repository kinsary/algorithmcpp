#include <iostream>
#include <cassert>

using namespace std;

int fibonacci(int n);

int main()
{

	int n;
	cout << "please intput a int value what greater than or equal to 0: ";
	cin >> n;
	
	// here, maybe need more value validations

	assert(n > 0);

	cout << fibonacci(n) << endl;

	return 0;
}

int fibonacci(int n)
{
	if (n==0)
	{
		return 0;
	} else if (n == 1){
	  return 1;
	}
	else
		return fibonacci(n-1) + fibonacci(n - 2); // µÝ¹é´¦Àí
}