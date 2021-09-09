#include <iostream>
using namespace std;


class Test{
	public:
	int a;
};


class Worker{
	public:
		string name;
		string surname;
		string nationality;
		unsigned short int yearBirthday;
		float height;
		char gender;
	void ShowNameSurname(){ 
		cout << "Imiê i Nazwisko:" << name << " " << surname;
	};
	void showAllData();
};

void Worker::showAllData(){
	
	string genderDescription;
	switch(gender) {
		case 'm':
			genderDescription="Mê¿czyzna";
			break;
			case 'w':
			genderDescription="Kobieta";
			break;
			default:
				genderDescription="-";
	}
	
	cout << "\n\nImiê i Nazwisko: " << name << " " << surname << "\n"
	<< "narodowoœæ: " << nationality << ", rok urodzenia: " 
	<< yearBirthday << "\nwzrost: " << height << ", p³eæ: " << genderDescription; 
	;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Test newObject;
	
	Worker pracownik;
	pracownik.name="Jan";
	pracownik.surname="Kowalski";
	pracownik.nationality="Polska";
	pracownik.yearBirthday=1998;
	pracownik.height=198;
	pracownik.gender='m';
	cout << pracownik.name << endl << endl;
	pracownik.ShowNameSurname();
	pracownik.showAllData();
	// cout << newObject.a;
	
	
	
	
	return 0;
	
}
