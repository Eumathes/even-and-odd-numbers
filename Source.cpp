#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string c;
	string d;
	cout << "Dobar dan." << endl << endl << "Zelite li provjeriti parnost ili ne parnost nekog cijelog broja? | *** ZA IZLAZ IZ PROGRAMA UPISITE 'EXIT' ***" << endl;
	cout << "(DA ILI NE)" << endl << endl;
	while (c != "NE") {
		cout << "\t";
		cin >> c;
		if (c == "DA") {
			break;
		}
		if (c == "EXIT") {
			cout << endl << "\n\nHvala Vam na koristenju." << endl << endl << "Dovidenja!" << endl;
			break;
		}
		if (c != "NE") {
			cout << endl << "\t\tUpisali ste: " << c << endl << "\t\tMolimo Vas pokusajte ponovno. (DA ili NE)" << endl << endl;
		}
	}
	while (c == "DA") {
		string tekst;
		int broj;
		cout << endl << "Molimo Vas upisite cijeli broj: ";
		cin >> tekst;
		if (tekst == "EXIT") {
			cout << endl << "\n\nHvala Vam na koristenju." << endl << endl << "Dovidenja!" << endl;
			break;
		}
		istringstream pretvori(tekst);
		pretvori >> broj;
		if (pretvori.eof() == false) {
			cout << endl << "\t\tUpisali ste: " << tekst << endl << "\t\tMolimo Vas pokusajte ponovno." << endl << endl;
		}
		while (pretvori.eof() == false) {
			tekst.clear();
			cout << "\t\t";
			cin >> tekst;
			if (c == "EXIT") {
				cout << endl << "\n\nHvala Vam na koristenju." << endl << endl << "Dovidenja!" << endl;
				break;
			}
			istringstream pretvori(tekst);
			pretvori >> broj;
			if (pretvori.eof() == false) {
				cout << endl << "\t\tUpisali ste: " << tekst << endl << "\t\tMolimo Vas pokusajte ponovno." << endl << endl;
			}
			else if (broj % 2 == 0) {
				cout << endl << "\t\tBroj " << broj << " je paran broj." << endl << endl;
			}
			else {
				cout << endl << "\t\tBroj " << broj << " je ne paran broj." << endl << endl;
			}
		}
		if (broj % 2 == 0) {
			cout << endl << "\t\tBroj " << broj << " je paran broj." << endl;
		}
		else {
			cout << endl << "\t\tBroj " << broj << " je ne paran broj." << endl;
		}
	}
	if (c == "NE") {
		cout << endl << "\n\nHvala Vam na koristenju." << endl << endl << "Dovidenja!" << endl;
	}
}
