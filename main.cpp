#include <iostream>
#include <conio.h>
#include <time.h>
using namespace std;
main()
{
	int endOfProgram = 1;
	int end = 1;
	time_t start = time(NULL);
	cout << "\t\t\t\t\t Mobile Message Composer \n";
	cout << endl;
	cout << "\t\t\t\tTo End Program Execution Press ESC key\n";
	cout << "1 == .\t 2 == abc\t 3 == def \t 4 == ghi \t 5 == jkl \t 6 == mno \t 7 == pqrs\t8 == tuv \t 9 == wxyz \t 0 == space 00 == newline " << endl;
	char value = getch();

	while (endOfProgram != 0)
	{

		if (value == 27)
		{
			endOfProgram = 0;
		}
		switch (value)
		{
		case '1':
			cout << ".";
			value = getch();
			break;

		case '2':
			while (value == '2')
			{
				time_t start = time(0);
				if (time(0) - start <= end)
					cout << "A";
				else
					cout << "\bA";

				value = getch();
				if (time(0) - start <= end)
				{
					if (value == '2')
					{
						if (time(0) - start <= end)
							cout << "\bB";
						else
							cout << "B";
						value = getch();
					}
					if (time(0) - start <= end)
					{
						if (value == '2')
						{
							if (time(0) - start <= end)
								cout << "\bC";
							else
								cout << "C";
							value = getch();
						}
						if (time(0) - start <= end)
							if (value == '2')
								cout << "\b";
					}
				}
			}
			break;

		case '3':
			while (value == '3')
			{
				time_t start = time(0);
				if (time(0) - start <= end)
					cout << "D";
				else
					cout << "\bD";

				value = getch();
				if (time(0) - start <= end)
				{
					if (value == '3')
					{
						if (time(0) - start <= end)
							cout << "\bE";
						else
							cout << "E";
						value = getch();
					}
					if (time(0) - start <= end)
					{
						if (value == '3')
						{
							if (time(0) - start <= end)
								cout << "\bF";
							else
								cout << "F";
							value = getch();
						}
						if (time(0) - start <= end)
							if (value == '3')
								cout << "\b";
					}
				}
			}
			break;

		case '4':
			while (value == '4')
			{
				time_t start = time(0);
				if (time(0) - start <= end)
					cout << "G";
				else
					cout << "\bG";

				value = getch();
				if (time(0) - start <= end)
				{
					if (value == '4')
					{
						if (time(0) - start <= end)
							cout << "\bH";
						else
							cout << "H";
						value = getch();
					}
					if (time(0) - start <= end)
					{
						if (value == '4')
						{
							if (time(0) - start <= end)
								cout << "\bI";
							else
								cout << "I";
							value = getch();
						}
						if (time(0) - start <= end)
							if (value == '4')
								cout << "\b";
					}
				}
			}
			break;

		case '5':
			while (value == '5')
			{
				time_t start = time(0);
				if (time(0) - start <= end)
					cout << "J";
				else
					cout << "\bJ";

				value = getch();
				if (time(0) - start <= end)
				{
					if (value == '5')
					{
						if (time(0) - start <= end)
							cout << "\bK";
						else
							cout << "K";
						value = getch();
					}
					if (time(0) - start <= end)
					{

						if (value == '5')
						{
							if (time(0) - start <= end)
								cout << "\bL";
							else
								cout << "L";
							value = getch();
						}
						if (time(0) - start <= end)
							if (value == '5')
								cout << "\b";
					}
				}
			}
			break;
		case '6':
			while (value == '6')
			{
				time_t start = time(0);
				if (time(0) - start <= end)
					cout << "M";
				else
					cout << "\bM";

				value = getch();
				if (time(0) - start <= end)
				{
					if (value == '6')
					{
						if (time(0) - start <= end)
							cout << "\bN";
						else
							cout << "N";
						value = getch();
					}
					if (time(0) - start <= end)
					{

						if (value == '6')
						{
							if (time(0) - start <= end)
								cout << "\bO";
							else
								cout << "O";
							value = getch();
						}
						if (time(0) - start <= end)
							if (value == '6')
								cout << "\b";
					}
				}
			}
			break;

		case '7':
			while (value == '7')
			{
				time_t start = time(0);
				if (time(0) - start <= end)
					cout << "P";
				else
					cout << "\bP";

				value = getch();
				if (time(0) - start <= end)
				{
					if (value == '7')
					{
						if (time(0) - start <= end)
							cout << "\bQ";
						else
							cout << "Q";
						value = getch();
					}
					if (time(0) - start <= end)
					{

						if (value == '7')
						{
							if (time(0) - start <= end)
								cout << "\bR";
							else
								cout << "R";
							value = getch();
						}
						if (value == '7')
						{
							if (time(0) - start <= end)
								cout << "\bS";
							else
								cout << "S";
							value = getch();
						}
						if (time(0) - start <= end)
							if (value == '7')
								cout << "\b";
					}
				}
			}
			break;

		case '8':
			while (value == '8')
			{
				time_t start = time(0);
				if (time(0) - start <= end)
					cout << "T";

				value = getch();
				if (time(0) - start <= end)
				{
					if (value == '8')
					{
						if (time(0) - start <= end)
							cout << "\bU";
						else
							cout << "U";
						value = getch();
					}
					if (time(0) - start <= end)
					{
						if (value == '8')
						{
							if (time(0) - start <= end)
								cout << "\bV";
							else
								cout << "V";
							value = getch();
						}
						if (time(0) - start <= end)
							if (value == '8')
								cout << "\b";
					}
				}
			}
			break;

		case '9':
			while (value == '9')
			{
				time_t start = time(0);
				if (time(0) - start <= end)
				{

					cout << "W";
					value = getch();
					if (time(0) - start <= end)
					{
						if (value == '9')
						{
							if (time(0) - start <= end)
								cout << "\bX";
							else
								cout << "X";
							value = getch();
						}
						if (time(0) - start <= end)
						{

							if (value == '9')
							{
								if (time(0) - start <= end)
									cout << "\bY";
								else
									cout << "Y";
								value = getch();
							}
							if (value == '9')
							{
								if (time(0) - start <= end)
									cout << "\bZ";
								else
									cout << "Z";
								value = getch();
							}
							if (time(0) - start <= end)
								if (value == '9')
									cout << "\b";
						}
					}
				}
			}
			break;
		case '\b':
			cout << "\b"
				 << " "
				 << "\b";
			;
			value = getch();
			break;
		case '0':
			while (value == '0')
			{
				time_t start = time(0);
				if (time(0) - start <= end)
				{
					cout << " ";

					value = getch();
				}
				if (time(0) - start <= end)
				{
					if (value == '0')
					{
						if (time(0) - start <= end)
							cout << " "
								 << "\b\n";
						else
							cout << ",";
						value = getch();
					}
				}
			}

			break;
		default:
			value = getch();
		}
	}
}
