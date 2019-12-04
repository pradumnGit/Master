#include <iostream>
#include <string>

using namespace std;

/// string basics with pointer
/// Reverse the string using pointer

char* Reverse(char *str)
{
	int sz = strlen(str), i = 0;
	while (sz > i)
	{
		char tmp = str[sz-1];
		str[sz-1] = str[i];
		str[i] = tmp;
		sz--, i++;
	}
	return str;
	
}
int main()
{
	char name[] = "pradumn";
	char *str = name;
	char *rstr = Reverse(str);
	cout << rstr << endl;
	return 0;
}
