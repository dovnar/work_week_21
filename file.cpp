#include <stdio.h>
#include <iostream>

int main()
{
	char* filePath = "D:\\12345.txt";
	FILE* file = fopen(filePath, "rb+"); //r w a r+ w+ a+ t b rt wb at+ rb+
	if (file == nullptr)
	{
		std::cout << "can't open file: " << filePath << std::endl;
		return 1;
	}


	int const bu7fSize = 6;
	char* buffer = new char[bu7fSize];
	memset(buffer, 0, bu7fSize);
	int objCount = fread(buffer, 5, 1, file);

	fseek(file, 0, SEEK_END);
	//SEEK_CUR - ТЕКУЩАЯ ПОЗИТИЯ ФАЙЛА
	//SEEK_END - КОНЕЦ ФАЙЛА
	//SEEK_SET - НАЧАЛО ФАЙЛА
	int filePost = ftell(file);

	std::cout << "5 byte: " << buffer << std::endl << "size file in byte = " << filePost << std::endl;
	fflush(file);
	int closeResult = fclose(file);	// flush
	if (closeResult == 0)
	{
		file = nullptr; 
	}

	delete[] buffer;

}
