#include <stdio.h>
#include <iostream>

int main()
{
	char* filePath = "D:\\testC.txt";
	int const bufSize = 256;
	FILE* file = fopen(filePath, "rb+"); //r w a r+ w+ a+ t b rt wb at+ rb+
	if (file == nullptr)
	{
		std::cout << "can't open file: " << filePath << std::endl;
		return 1;
	}
	fseek(file, bufSize, SEEK_END);
	int sizeFile = ftell(file);
	
	char* buffer = new char[bufSize];
	
	int objCount = 0;
	fseek(file, 0, SEEK_SET);
	do
	{
		memset(buffer, 0, bufSize);
		objCount = fread(buffer, 255, 1, file);
		std::cout << buffer;
	} while (objCount > 0);

	std::cout << std::endl;

	fflush(file);
	int closeResult = fclose(file);	// flush
	if (closeResult == 0)
	{
		file = nullptr; 
	}

	delete[] buffer;

}
