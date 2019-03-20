#include <iostream>
using namespace std;
class str
{
	public:
	str()
	{
		char s[20];
		cin.getline(s,sizeof(s));
		reverse(s);
	}
	void reverse(char *n)
	{
		if(*n)
		{
			reverse(n+1);
			cout<<*n;
		}
	}
};

int main() {
	// your code goes here
	str obj;
	return 0;
}
