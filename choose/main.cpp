#include <stdio.h>
#include <iostream>

int main()
{
	char* filePath = "vote.txt";
	FILE* file = fopen(filePath, "wb+"); 

	int* buffer;
	std::cout << "you will choose: cheburator = 0, terminator = 2\nenter: ";
	std::cin >> *buffer;
	fwrite(buffer, 1, 1, file);
	int objCount;
	int cheburator = 0;
	int terminator = 0;
	do
	{
		memset(buffer, 0, 1);
		objCount = fread(buffer, 1, 1, file);
		buffer == 0 ? cheburator++ : terminator++;
	} while (objCount > 0);

	int result = cheburator + terminator;
	std::cout << "cheburator = " << result * cheburator / 100 << " %"<< std::endl
		<< "terminator = " << result * terminator / 100 << " %" << std::endl;

	fflush(file);
	int closeResult = fclose(file);	// flush
	if (closeResult == 0)
	{
		file = nullptr;
	}

	delete[] buffer;

}
