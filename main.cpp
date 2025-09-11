#include <iostream> 
using namespace std;

int main() {
    int counter = 0;
    int daun = 1;
    char pilih;
    int gugur = 0;
    // int jumlah, maks;
    // int i;

        system("cls");
		cout << "pilihan daun\n";
		cout << "a. 100\n";
		cout << "b. 250\n";
		cout << "c. 500\n";
		cout << "d. 1000\n";
		cout << "x. exit\n";
		cout << "Masukan pilihan anda: \n";
		cin >> pilih;


        switch(tolower(pilih)){
			case 'a' :  daun = 100;
						break;
			case 'b' : 	daun = 250;
						break;
			case 'c' : 	daun = 500;
						break;
			case 'd' : 	daun = 1000;
						break;
			case 'x' : cout << "\nselesaiiiiiii\n";
					break;
			default: cout << "\npilih yang benar dongggg\n";
        }



    return 0;
}