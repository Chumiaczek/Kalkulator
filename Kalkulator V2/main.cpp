#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
#include <fstream>
#include <string>
#include <algorithm>
#include <locale.h>
using namespace std;

int wybor,wybor1,dodawanie_iloscliczb,i,x,dodawanie_liczby,odejmowanie_iloscliczb,odejmowanie_liczby,roznica,mnoznik,mnozenie_iloscliczb, dzielenie_iloscliczb, dzielnik, wykladnik, liczba;
void menu(), potegowanie(), dodawanie(), dzielenie(), mnozenie(), odejmowanie(), historia(), historiadodawaniaprogram(), historiaodejmowaniaprogram(), historiamnozeniaprogram(), historiadzieleniaprogram(), historiapotegowaniaprogram();
float suma;
void menu()
{
	system("cls");
	cout << endl << endl << "JAKIE DZIALANIE CHCESZ WYKONAC" << endl;
	cout << "-----------------" << endl;
	cout << "1. Dodawanie" << endl;
	cout << "2. Odejmowanie" << endl;
	cout << "3. Mnozenie" << endl;
	cout << "4. Dzielenie" << endl;
	cout << "5. Potegowanie" << endl;
	cout << "6. Historia" << endl << endl;
	cout << "7. Wyjdz" << endl << endl;

	wybor = _getch();
	switch (wybor)
	{
	case '1':
	{
		dodawanie(); break;
	}
	case '2':
	{
		odejmowanie(); break;
	}
	case '3':
	{
		mnozenie(); break;
	}
	case '4':
	{
		dzielenie(); break;
	}
	case '5':
	{
		potegowanie(); break;
	}
	case '6':
	{
		historia(); break;
	}
	case '7':
	{
		exit(0); break;
	}
	}

}

void potegowanie()
{
	i = 1;
	x = 1;
	suma = 0;
	fstream historiapotegowania;
	historiapotegowania.open("historia_potegowania.txt", ios::out | ios::app);
	if (historiapotegowania.good() == false)
	{
		cout << "Plik nie istnieje, trwa proces tworzenia, prosze czekac...";
		ofstream historiapotegowania("historia_potegowania.txt");
		Sleep(3000);
	}

	system("cls");
	cout << "POTEGOWANIE" << endl;
	cout << "-----------------" << endl << endl;
	cout << "Jaka liczbe bedziesz potegowac?: ";
	cin >> liczba;
	while (cin.fail()) {
		cout << "Error, podany wyraz nie jest liczba, podaj ponownie" << endl;
		cout << "Ile liczb chcesz dodac do siebie?: ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> liczba;
	}
	system("cls");
	cout << "Potegowanie" << endl;
	cout << "-----------------" << endl << endl;
	cout << "Potegujesz liczbe " << liczba << endl;
	cout << "Jaki jest twoj wybrany wykladnik?: ";
	cin >> wykladnik;
	suma = liczba;
	cout << endl;
	while (i < wykladnik)
	{
		suma = suma * wykladnik;
		i++;
	}
	cout << "Suma wynosi: " << suma << endl;
	historiapotegowania << liczba << " do " << wykladnik << " = " << suma << endl;
	Sleep(3000);
	historiapotegowania.close();
	menu();
}

void dodawanie()
{
	i = 1;
	x = 1;
	suma = 0;
	fstream historiadodawania;
	historiadodawania.open("historia_dodawania.txt", ios::out | ios::app);
	if (historiadodawania.good() == false)
	{
		cout << "Plik nie istnieje, trwa proces tworzenia, prosze czekac...";
		ofstream historiadodawania("historia_dodawania.txt");
		Sleep(3000);
	}

	system("cls");
	cout << "DODAWANIE" << endl;
	cout << "-----------------" << endl << endl;
	cout << "Ile liczb chcesz dodac do siebie?: ";
	cin >> dodawanie_iloscliczb;
	if (dodawanie_iloscliczb == 1)
	{
		cout << "Nie mozna dodac jednej liczby. Minimalna wartosc to 2" << endl;
		cout << "Ile liczb chcesz dodac do siebie?: ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> dodawanie_iloscliczb;
	}
	while (cin.fail()) {
		cout << "Error, podany wyraz nie jest liczba, podaj ponownie" << endl;
		cout << "Ile liczb chcesz dodac do siebie?: ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> dodawanie_iloscliczb;
	}
	system("cls");
	cout << "DODAWANIE" << endl;
	cout << "-----------------" << endl << endl;
	cout << "Dodajesz " << dodawanie_iloscliczb << " liczb/y" << endl;

	while (i <= dodawanie_iloscliczb)
	{
		cout << "Podaj "<<x<< " liczbe: ";
		cin >> dodawanie_liczby;
		while (cin.fail()) {
			cout << "Error, podany wyraz nie jest liczba, podaj ponownie" << endl;
			cout << "Podaj " << x << " liczbe: ";
			cin.clear();
			cin.ignore(256, '\n');
			cin >> dodawanie_liczby;
		}
		cout << endl;
		if (i < dodawanie_iloscliczb)
		{
			historiadodawania << dodawanie_liczby << " + ";
		}
		else if (i = dodawanie_iloscliczb)
		{
			historiadodawania << dodawanie_liczby << " ";
		}
		suma = suma + dodawanie_liczby;
		x++;
		i++;
	}
	cout << "Suma podanych liczb wynosi: " << suma << endl;
	historiadodawania <<"= "<< suma << endl;
	Sleep(3000);
	historiadodawania.close();
	menu();

}

void odejmowanie()
{
	roznica = 0;
	x = 1;
	i = 1;
	fstream historiaodejmowania;
	historiaodejmowania.open("historia_odejmowania.txt", ios::out | ios::app);
	if (historiaodejmowania.good() == false)
	{
		cout << "Plik nie istnieje, trwa proces tworzenia, prosze czekac...";
		ofstream historiadodawania("historia_odejmowania.txt");
		Sleep(3000);
	}

	system("cls");
	cout << "ODEJMOWANIE" << endl;
	cout << "-----------------" << endl << endl;
	cout << "Ile liczb chcesz odjac do siebie?: ";
	cin >> odejmowanie_iloscliczb;
	if (odejmowanie_iloscliczb == 1)
	{
		cout << "Nie mozna odjac jednej liczby. Minimalna wartosc to 2" << endl;
		cout << "Ile liczb chcesz odjac do siebie?: ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> odejmowanie_iloscliczb;
	}
	while (cin.fail()) {
		cout << "Error, podany wyraz nie jest liczba, podaj ponownie" << endl;
		cout << "Ile liczb chcesz odjac do siebie?: ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> odejmowanie_iloscliczb;
	}
	system("cls");
	cout << "Odejmowanie" << endl;
	cout << "-----------------" << endl << endl;
	cout << "Odejmujesz " << odejmowanie_iloscliczb << " liczb/y" << endl;

	cout << "Podaj liczbe, od ktorej bedziesz odejmowal: ";
	cin >> roznica;
	cout << endl;

	for (i=0; i< odejmowanie_iloscliczb; i++)
	{
		cout << "Podaj " << x << " liczbe: ";
		cin >> odejmowanie_liczby;
		while (cin.fail()) {
			cout << "Error, podany wyraz nie jest liczba, podaj ponownie" << endl;
			cout << "Podaj " << x << " liczbe: ";
			cin.clear();
			cin.ignore(256, '\n');
			cin >> odejmowanie_liczby;
		}
		cout << endl;
		if (i < odejmowanie_iloscliczb)
		{
			historiaodejmowania << odejmowanie_liczby << " - ";
		}
		else if (i = dodawanie_iloscliczb)
		{
			historiaodejmowania << odejmowanie_liczby << " ";
		}
		roznica = roznica - odejmowanie_liczby;
		x++;
	}
	cout << "Roznica podanych liczb wynosi: " << roznica << endl;
	historiaodejmowania << "= " << roznica << endl;
	Sleep(3000);
	historiaodejmowania.close();
	menu();
}

void dzielenie()
{
	suma = 1;
	i = 1;
	x = 1;
	fstream historiadzielenia;
	historiadzielenia.open("historia_dzielenia.txt", ios::out | ios::app);
	if (historiadzielenia.good() == false)
	{
		cout << "Plik nie istnieje, trwa proces tworzenia, prosze czekac...";
		ofstream historiadzielenia("historia_dzielenia.txt");
		Sleep(3000);
	}

	system("cls");
	cout << "DZIELENIE" << endl;
	cout << "-----------------" << endl << endl;
	cout << "Ile liczb chcesz podzielic?: ";
	cin >> dzielenie_iloscliczb;
	if (dzielenie_iloscliczb == 1)
	{
		cout << "Nie mozna odjac jednej liczby. Minimalna wartosc to 2" << endl;
		cout << "Ile liczb chcesz podzielic?: ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> dzielenie_iloscliczb;
	}
	while (cin.fail()) {
		cout << "Error, podany wyraz nie jest liczba, podaj ponownie" << endl;
		cout << "Ile liczb chcesz podzielic?: ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> dzielenie_iloscliczb;
	}
	system("cls");
	cout << "Dzielenie" << endl;
	cout << "-----------------" << endl << endl;
	cout << "Dzielisz " << dzielenie_iloscliczb << " liczb/y" << endl;
	while (i <= dzielenie_iloscliczb)
	{
		cout << "Podaj " << x << " liczbe: ";
		cin >> dzielnik;
		while (cin.fail()) {
			cout << "Error, podany wyraz nie jest liczba, podaj ponownie" << endl;
			cout << "Podaj " << x << " liczbe: ";
			cin.clear();
			cin.ignore(256, '\n');
			cin >> dzielnik;
		}
		cout << endl;
		if (i < dzielenie_iloscliczb)
		{
			historiadzielenia << dzielnik << " / ";
		}
		else if (i = dzielenie_iloscliczb)
		{
			historiadzielenia << dzielnik << " ";
		}
		if (suma == 1)
		{
			suma = dzielnik;
		}
		else
		{
			suma = suma / dzielnik;
		}
		x++;
		i++;
	}
	cout << "Iloraz podanych liczb wynosi: " << suma << endl;
	historiadzielenia << "= " << suma << endl;
	Sleep(3000);
	historiadzielenia.close();
	menu();


}

void mnozenie()
{
	suma = 1;
	i = 1;
	x = 1;
	fstream historiamnozenia;
	historiamnozenia.open("historia_mnozenia.txt", ios::out | ios::app);
	if (historiamnozenia.good() == false)
	{
		cout << "Plik nie istnieje, trwa proces tworzenia, prosze czekac...";
		ofstream historiadodawania("historia_mnozenia.txt");
		Sleep(3000);
	}

	system("cls");
	cout << "MNOZENIE" << endl;
	cout << "-----------------" << endl << endl;
	cout << "Ile liczb chcesz pomnozyc?: ";
	cin >> mnozenie_iloscliczb;
	if (mnozenie_iloscliczb == 1)
	{
		cout << "Nie mozna odjac jednej liczby. Minimalna wartosc to 2" << endl;
		cout << "Ile liczb chcesz pomnozyc?: ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> mnozenie_iloscliczb;
	}
	while (cin.fail()) {
		cout << "Error, podany wyraz nie jest liczba, podaj ponownie" << endl;
		cout << "Ile liczb chcesz pomnozyc?: ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> mnozenie_iloscliczb;
	}
	system("cls");
	cout << "Mnozenie" << endl;
	cout << "-----------------" << endl << endl;
	cout << "Mnozysz " << mnozenie_iloscliczb << " liczb/y" << endl;
	while (i<=mnozenie_iloscliczb)
	{
		cout << "Podaj " << x << " liczbe: ";
		cin >> mnoznik;
		while (cin.fail()) {
			cout << "Error, podany wyraz nie jest liczba, podaj ponownie" << endl;
			cout << "Podaj " << x << " liczbe: ";
			cin.clear();
			cin.ignore(256, '\n');
			cin >> mnoznik;
		}
		cout << endl;
		if (i < mnozenie_iloscliczb)
		{
			historiamnozenia << mnoznik << " * ";
		}
		else if (i = mnozenie_iloscliczb)
		{
			historiamnozenia << mnoznik << " ";
		}
		suma = suma * mnoznik;
		x++;
		i++;
	}
	cout << "Iloczyn podanych liczb wynosi: " << suma << endl;
	historiamnozenia << "= " << suma << endl;
	Sleep(3000);
	historiamnozenia.close();
	menu();
	
}

void historia()
{
	system("cls");
	cout << "HISTORIA" << endl;
	cout << "-----------------" << endl;
	cout << "1. Historia Dodawania" << endl;
	cout << "2. Historia Odejmowania" << endl;
	cout << "3. Historia Mnozenia" << endl;
	cout << "4. Historia Dzielenia" << endl;
	cout << "5. Historia Potegowania" << endl << endl;
	cout << "6. Wroc" << endl << endl;
	
	wybor = _getch();
	switch (wybor)
	{
	case '1':
	{
		historiadodawaniaprogram(); break;
	}
	case '2':
	{
		historiaodejmowaniaprogram(); break;
	}
	case '3':
	{
		historiamnozeniaprogram(); break;
	}
	case '4':
	{
		historiadzieleniaprogram(); break;
	}
	case '5':
	{
		historiapotegowaniaprogram(); break;
	}
	case '6':
	{
		menu(); break;
	}

	}

}

void historiadodawaniaprogram()
{
	system("cls");
	cout << "HISTORIA DODAWANIE" << endl;
	cout << "-----------------" << endl;
	string y;
	fstream historiadodawania;
	historiadodawania.open("historia_dodawania.txt", ios::in);
	if (historiadodawania.good() == false)
	{
		cout << "Brak takiego pliku, prawdpodobnie nie wykonywales jeszcze takiego dzialania";
		cout << "Wracanie do menu histori";
		Sleep(3000);
		historia();
	}
	while (getline(historiadodawania, y))
	{
		cout << y << endl;
	}
	cout << endl << "1.Powrot";
	cout << endl << "2.Wyczysc Historie";
	wybor = _getch();
	switch (wybor)
	{
	case '1':
	{
		historiadodawania.close();
		historia(); break;
	}
	case '2':
	{
		system("cls");
		cout << "POTWIERDZENIE TEJ CZYNNOSCI USUNIE WSZYSTKIE DANE!!! CZY JESTES TEGO PEWNY?" << endl;
		cout << "1. TAK" << endl;
		cout << "2. NIE";
		wybor1 = _getch();
		switch (wybor1)
		{
		case '1':
		{
			historiadodawania.close();
			historiadodawania.open("historia_dodawania.txt", ios::out);
			historiadodawania << "";
			historiadodawania.close();
			historiadodawania.open("historia_dodawania.txt", ios::in);
		}
		case '2':
		{
			historiadodawania.close();
			historiadodawaniaprogram();
		}
		}
	}
	}
}

void historiaodejmowaniaprogram()
{
	system("cls");
	cout << "HISTORIA ODEJMOWANIA" << endl;
	cout << "-----------------" << endl;
	string y;
	fstream historiaodejmowania;
	historiaodejmowania.open("historia_odejmowania.txt", ios::in);
	if (historiaodejmowania.good() == false)
	{
		cout << "Brak takiego pliku, prawdpodobnie nie wykonywales jeszcze takiego dzialania";
		cout << "Wracanie do menu histori";
		Sleep(3000);
		historia();
	}
	while (getline(historiaodejmowania, y))
	{
		cout << y << endl;
	}
	cout << endl << "1.Powrot";
	cout << endl << "2.Wyczysc Historie";
	wybor = _getch();
	switch (wybor)
	{
	case '1':
	{
		historiaodejmowania.close();
		historia(); break;
	}
	case '2':
	{
		system("cls");
		cout << "POTWIERDZENIE TEJ CZYNNOSCI USUNIE WSZYSTKIE DANE!!! CZY JESTES TEGO PEWNY?" << endl;
		cout << "1. TAK" << endl;
		cout << "2. NIE";
		wybor1 = _getch();
		switch (wybor1)
		{
		case '1':
		{
			historiaodejmowania.close();
			historiaodejmowania.open("historia_odejmowania.txt", ios::out);
			historiaodejmowania << "";
			historiaodejmowania.close();
			historiaodejmowania.open("historia_odejmowania.txt", ios::in);
		}
		case '2':
		{
			historiaodejmowania.close();
			historiaodejmowaniaprogram();
		}
		}
	}
	}
}

void historiamnozeniaprogram()
{
	system("cls");
	cout << "HISTORIA MNOZENIA" << endl;
	cout << "-----------------" << endl;
	string y;
	fstream historiamnozenia;
	historiamnozenia.open("historia_mnozenia.txt", ios::in);
	if (historiamnozenia.good() == false)
	{
		cout << "Brak takiego pliku, prawdpodobnie nie wykonywales jeszcze takiego dzialania";
		cout << "Wracanie do menu histori";
		Sleep(3000);
		historia();
	}
	while (getline(historiamnozenia, y))
	{
		cout << y << endl;
	}
	cout << endl << "1.Powrot";
	cout << endl << "2.Wyczysc Historie";
	wybor = _getch();
	switch (wybor)
	{
	case '1':
	{
		historiamnozenia.close();
		historia(); break;
	}
	case '2':
	{
		system("cls");
		cout << "POTWIERDZENIE TEJ CZYNNOSCI USUNIE WSZYSTKIE DANE!!! CZY JESTES TEGO PEWNY?" << endl;
		cout << "1. TAK" << endl;
		cout << "2. NIE";
		wybor1 = _getch();
		switch (wybor1)
		{
		case '1':
		{
			historiamnozenia.close();
			historiamnozenia.open("historia_mnozenia.txt", ios::out);
			historiamnozenia << "";
			historiamnozenia.close();
			historiamnozenia.open("historia_mnozenia.txt", ios::in);
		}
		case '2':
		{
			historiamnozenia.close();
			historiamnozeniaprogram();
		}
		}
	}
	}


}

void historiadzieleniaprogram()
{
	system("cls");
	cout << "HISTORIA DZIELENIA" << endl;
	cout << "-----------------" << endl;
	string y;
	fstream historiadzielenia;
	historiadzielenia.open("historia_dzielenia.txt", ios::in);
	if (historiadzielenia.good() == false)
	{
		cout << "Brak takiego pliku, prawdpodobnie nie wykonywales jeszcze takiego dzialania";
		cout << "Wracanie do menu histori";
		Sleep(3000);
		historia();
	}
	while (getline(historiadzielenia, y))
	{
		cout << y << endl;
	}
	cout << endl << "1.Powrot";
	cout << endl << "2.Wyczysc Historie";
	wybor = _getch();
	switch (wybor)
	{
	case '1':
	{
		historiadzielenia.close();
		historia(); break;
	}
	case '2':
	{
		system("cls");
		cout << "POTWIERDZENIE TEJ CZYNNOSCI USUNIE WSZYSTKIE DANE!!! CZY JESTES TEGO PEWNY?" << endl;
		cout << "1. TAK" << endl;
		cout << "2. NIE";
		wybor1 = _getch();
		switch (wybor1)
		{
		case '1':
		{
			historiadzielenia.close();
			historiadzielenia.open("historia_dzielenia.txt", ios::out);
			historiadzielenia << "";
			historiadzielenia.close();
			historiadzielenia.open("historia_dzielenia.txt", ios::in);
		}
		case '2':
		{
			historiadzielenia.close();
			historiadzieleniaprogram();
		}
		}
	}
	}
}

void historiapotegowaniaprogram()
{
	system("cls");
	cout << "HISTORIA POTEGOWANIA" << endl;
	cout << "-----------------" << endl;
	string y;
	fstream historiapotegowania;
	historiapotegowania.open("historia_potegowania.txt", ios::in);
	if (historiapotegowania.good() == false)
	{
		cout << "Brak takiego pliku, prawdpodobnie nie wykonywales jeszcze takiego dzialania";
		cout << "Wracanie do menu histori";
		Sleep(3000);
		historia();
	}
	while (getline(historiapotegowania, y))
	{
		cout << y << endl;
	}
	cout << endl << "1.Powrot";
	cout << endl << "2.Wyczysc Historie";
	wybor = _getch();
	switch (wybor)
	{
	case '1':
	{
		historiapotegowania.close();
		historia(); break;
	}
	case '2':
	{
		system("cls");
		cout << "POTWIERDZENIE TEJ CZYNNOSCI USUNIE WSZYSTKIE DANE!!! CZY JESTES TEGO PEWNY?" << endl;
		cout << "1. TAK" << endl;
		cout << "2. NIE";
		wybor1 = _getch();
		switch (wybor1)
		{
		case '1':
		{
			historiapotegowania.close();
			historiapotegowania.open("historia_potegowania.txt", ios::out);
			historiapotegowania << "";
			historiapotegowania.close();
			historiapotegowania.open("historia_potegowania.txt", ios::in);
		}
		case '2':
		{
			historiapotegowania.close();
			historiapotegowaniaprogram();
		}
		}
	}
	}
}

int main()
{
    menu();

    return 0;
}