#include <iostream>

//#define INT
#define DOUBLE

#if defined (INT)
using Type = int;
#else
using Type = double;
#endif


#define ENTR_N "enter number: ";
 
#define CIN std::cin >>
#define COUT std::cout <<
#define ENDL << std::endl
#define MAIN_START void main()\
				{
#define THE_END	}
#define IF if(
#define X ){
#define ELIF else if(
#define ELSE else{




#define NUMBER(number) Type number
#define POSITION(number) number ## X, number ## Y
Type POSITION(number);


//Type numberX, numberY;

#define MAX_NUMBER (numberX > numberY ? numberX : numberY)
#define MIN_NUMBER (numberX < numberY ? numberX : numberY)



MAIN_START
COUT ENTR_N
CIN numberX;
COUT ENTR_N
CIN numberY;
int sort;
COUT "scan max enter 0" ENDL << "scan min enter 1" ENDL << ENTR_N
CIN sort;
IF sort == 0 X COUT MAX_NUMBER ENDL; THE_END
ELSE COUT MIN_NUMBER ENDL; THE_END
THE_END

