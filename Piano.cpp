#include "Piano.h"

void playPiano()
{
	while (true)
	{
		char note = _getch();
		//getch() -- prompts a user to press a character and that character isn't printed on screen 	//getch() ligger i conio.h
		
		switch (note)
		{
		case 'a':
			Beep(261, 500);					
			std::cout << "C_4" << std::endl;
			break;
		case 's':
			Beep(293, 500);
			std::cout << "D_4" << std::endl;
			break;
		case 'd':
			Beep(329, 500);
			std::cout << "E_4" << std::endl;
			break;
		case 'f':
			Beep(349, 500);
			std::cout << "F_4" << std::endl;
			break;
		case 'g':
			Beep(392, 500);
			std::cout << "G_4" << std::endl;
			break;
		case 'h':
			Beep(440, 500);
			std::cout << "A_4" << std::endl;
			break;
		case 'j':
			Beep(493, 500);
			std::cout << "B_4" << std::endl;
			break;
		case 'k':
			Beep(523, 500);
			std::cout << "C_5" << std::endl;
			break;
		case 'l':
			std::cout << "D_5" << std::endl;
			Beep(587, 500);
			break;
		case 'z':
			Beep(659, 500);
			std::cout << "E_5" << std::endl;
			break;
		case 'x':
			Beep(698, 500);
			std::cout << "F_5" << std::endl;
			break;
		case 'c':
			Beep(783, 500);
			std::cout << "G_5" << std::endl;
			break;
		case 'v':
			Beep(880, 500);
			std::cout << "A_5" << std::endl;
			break;
		case 'b':
			Beep(987, 100);
			std::cout << "B_5" << std::endl;
			break;
		case 'q':
			Beep(277, 500);
			std::cout << "C#_4" << std::endl;
			break;
		case 'w':
			Beep(311, 500);
			std::cout << "D#_4" << std::endl;
			break;
		case 'e':
			Beep(370, 500);
			std::cout << "E#_4" << std::endl;
			break;
		case 'r':
			Beep(415, 500);
			std::cout << "G#_4" << std::endl;
			break;
		case 't':
			Beep(466, 500);
			std::cout << "A#_4" << std::endl;
			break;
		case 'y':
			Beep(554, 500);
			std::cout << "C#_5" << std::endl;
			break;
		case 'u':
			Beep(622, 500);
			std::cout << "D#_5" << std::endl;
			break;
		case 'i':
			Beep(740, 500);
			std::cout << "F#" << std::endl;
			break;

		case 0:
			break;
		default:
			std::cout << "Velg en gyldig tone. Gyldige toner er: a, s, d, f, g, h, j, k, l, z, x, c, v, b, q, w, e, r, t, y, u og i. " << std::endl;
		}
	}
}
/*
Beep(FREKVENS(frequency), VARIGHET(duration));
Beep() ligger i windows.h
Beep(1000,500); - would play a beep at pitch 1000 for half a second 500/1000 milliseconds.
    -Ikke mulig å bruke double som frekvens input :( - Feilmelding: 'argument': conversion from 
	'double' to 'DWORD', possible loss of data
*/

void menu()
{
	char wannaPlay{ ' ' };
	std::cout << "Har du lyst til å spille litt piano? :) J/N" << std::endl;
	std::cin >> wannaPlay;

	if (wannaPlay == 'J')
	{
		playPiano();
	}
	if (wannaPlay == 'N')
	{
		std::cout << "Den er grei, snakkes!" << std::endl;
		system("exit");
	}
	if (wannaPlay != 'N' && wannaPlay != 'J')
	{
		std::cout << "Gi et ordentlig svar, takk!" << std::endl;
		std::cout << " " << std::endl;
		menu();
	}
}