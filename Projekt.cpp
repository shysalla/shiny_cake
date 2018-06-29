#include "Header_Projekt.h"
#include <iostream>
using namespace std;


int main() {
	int answer;
	int los;
	Fertigen geraet = Fertigen ("Firma", 1, 10, 100, 1);
	cout << "Welche Datei soll eingelesen werden, yo ?" << endl;
	//Datei einlesen
	cout << "Wie soll sortiert werden, yo? \n 1.) nach Firma \n 2.) nach Dienstleistung" << endl;
	cin >> answer;
	fflush(stdin);
	//sortierte Ausgabe
	cout << "Wie viele Geräte sollen hergestellt werden, yo?" << endl;
	cin >> los;
	cout << "Schnell oder billig, yo? \n 1.) schnell \n 2.) billig \n 3. yo!" << endl;
	cin >> answer;
	fflush(stdin);
	switch (answer) {
		case 1:
		case 2: Fertigen.compare(int 2);
	}

	system("pause");
}