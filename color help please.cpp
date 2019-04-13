#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <string>
#include <string.h>
using namespace std;

/* Background colours:		Foregorund colours:
	0 = Black				8 = Gray
	1 = Blue				9 = Light Blue
	2 = Green				A = Light Green
	3 = Aqua				B = Light Aqua
	4 = Red				C = Light Red
	5 = Purple			D = Light Purple
	6 = Yellow			E = Light Yellow
	7 = White				F = Bright White
*/

// Questa funzione di tipo void colora il testo in base alla rispota dell'utente
int coloretesto(char a)
{
	switch (a)
	{
	case '1': system("color 8"); break;
	case '2': system("color 9"); break;
	case '3': system("color a"); break;
	case '4': system("color b"); break;
	case '5': system("color c"); break;
	case '6': system("color d"); break;
	case '7': system("color e"); break;
	case '8': system("color f"); break;
	}
	return a;
}

int coloresfondo(char a)
{
	switch (a)
	{
	case '1': system("color nullc"); break;
	}
	return a;
}

// Questa funzione di tipo void colora lo sfondo in base alla rispota dell'utente

// Questo programma chiede l'input all'utente per il cambio del colore del testo e dello sfondo della console

int main()
{
	// Dichiarazione caratteri t(testo) e s(sfondo) e stringa risposta
	char t, s;
	string risposta;
	// Richiesta dell'input per il colore del testo
restart:
	cout << "Ciao! Di che colore vorresti il testo? " << endl;
	// Colori disponibili da scegliere per il testo
	cout << "1. Grigio\n2. Blu\n3. Verde Chiaro\n4. Celeste\n5. Rosso Chiaro\n6. Viola Chiaro\n7. Giallo Chiaro\n8. Bianco\n";
	// Input per il colore del testo
	cin >> t;
	// Funzione colore testo
	coloretesto(t);
	// Svuotamento console
	system("cls");
	// Richiesta dell'input per il colore dello sfondo
	cout << "Bella scelta! Invece di che colore vorresti lo sfondo?" << endl;
	// Colori disponibili da scegliere per lo sfondo
	cout << "1. Blu\n2. Verde\n3. Acqua\n4. Rosso\n5. Viola\n6. Giallo\n7. Bianco\n8. Nero\n";
	// Input per il colore dello sfondo
	cin >> s;
	// Funzione colore sfondo
	coloresfondo(s);
	coloretesto(t);
	// Svuotamento console
	system("cls");
	// Fine e richiesta di ricominciare da capo con ciclo while per evitare risposta sbagliata
	while (risposta != "si" || risposta != "Si")
	{
		system("cls");
		cout << "Tutto fatto! Vorresti scegliere altri colori? (Si/No)\n";
		getline(cin, risposta);

		if (risposta == "si" || risposta == "Si")
		{
			system("cls");
			goto restart;
		}
		else if (risposta == "no" || risposta == "No")
			break;
	}
	// Pausa console
	return 0;
}
