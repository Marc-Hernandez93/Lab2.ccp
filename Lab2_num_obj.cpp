//Lab2_num_obj.cpp
/***
* looking at bite size
***/

#include <iostream> 
#include <cstdlib>
using namespace std;

int main() {
//numerical
int int_example = 1;
float float_example = 2.0;
double double_example = 2.0;

//non-numerical
char char_example = 'a';
bool bool_example = true;

//sizeof returns the number of bytes (8 bits is equiavalent  to 1  byte))
cout << "int_example: " << sizeof(int_example) << end1;
cout << "float_example: " << sizeof(float_example) << end1;
cout << "double_example: "<< sizeof(double_example) << end1;

cout << "char_example: "<< sizeof(char_example) << end1;
cout << "int_example: "<< sizeof(int_example) << end1;
cout << "bool_example: "<< sizeof(bool_example) << end1;
}