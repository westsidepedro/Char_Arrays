//============================================================================
// Name        : Char_Arrays.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
    {
    string textString = "hello_string";

    char textArray1[] =
	{
	'h', 'e', 'l', 'l', 'o', '_', 'c', 'h', 'a', 'r'
	};
    char textArray2[] = "hello_quotes";

    cout << textString << endl;

    cout << textArray1 << endl;

    cout << textArray2 << endl;

    cout << "" << endl;
    cout << "1xxxxxxxxxxxxxxxxxxxxxxxxx1" << endl;
    cout << "" << endl;

    cout << "There are " << sizeof(textArray1)
	    << " 'elements' in this array. And it goes as follows..." << endl;

    for (int i = 0; i < sizeof(textArray1); i++)
	{
	cout << i << ": " << textArray1[i] << endl;

	}

    cout << "" << endl;
    cout << "2xxxxxxxxxxxxxxxxxxxxxxxxx2" << endl;
    cout << "" << endl;

    cout << "There are " << sizeof(textArray2)
	    << " 'elements' in this array. And it goes as follows..." << endl;

    for (int i = 0; i < sizeof(textArray2); i++)
	{
	cout << i << ": " << textArray2[i] << endl;

	}

    /* there is an extra invisible element put in this array at the very end that is = 0
     * this is the 'null string terminator' and is put there b/c we used the " "
     * tells program where the string ends
     */

    cout << "" << endl;
    cout << "3xxxxxxxxxxxxxxxxxxxxxxxxx3" << endl;
    cout << "" << endl;

    int k = 0;

    while (true)  //Infinite Loop
	{

	if (textArray2[k] == 0) // b/c the null string term is there b/c of the  " " method
	    {
	    break;
	    }
	cout << textArray2[k] << flush;
	k++;

	}

    return 0;
    }
