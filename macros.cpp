#include <iostream>

#define bool float
#define true 123
#define false 456

#define CHECK_FOR_NULL(p)	if (p == nullptr) return 1;
#define MAIN_START int main() \
					{
#define MAIN_END	}
int serAuthor(int* p);

MAIN_START
	int k = 0;
	serAuthor(&k);
MAIN_END

int serAuthor(int* p)
{
	CHECK_FOR_NULL(p)
	*p = 100;
	return 0;
}
