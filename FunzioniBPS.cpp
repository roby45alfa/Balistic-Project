
#include "stdafx.h"
#include "Bullet.h"
#include "FunzioniBPS.h"
#include <iostream>
#include <windows.h>


using namespace std;

//Funzione setta colori
/*
0: nero
1: blu scuro
2: verde scuro
3: azzurro
4: rosso scuro
5: viola
6: giallo scuro
7: bianco  (default)
8: grigio
9: blu acceso
10: verde acceso
11: azzurro acceso
12: rosso acceso
13: viola acceso
14: giallo acceso
15: bianco acceso
*/
void setcolor(unsigned short color) {
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon, color);
}


//funzione gestione menu
void menu(int chose) {
	switch (chose)
	{
	case 1:
		setcolor(12); //rosso acceso
		cout << "\t\tBULLET PROJECT SIMULATOR\n\n\n";
		setcolor(15);//bianco acceso
		STDOUT_PAUSE

	}
}
