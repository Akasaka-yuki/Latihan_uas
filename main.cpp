#include <iostream> 
using namespace std;

int main() {
    int counter = 0; // untuk menghitung menit(berapa kali loop)
    int daun = 1;
    char pilih;
    int gugur = 0;
    int jml_gugur = 0;
    int tumbuh;
    int jml_tumbuh = 0;
    // int jumlah, maks;
    // int i;

        // nilai awal daun (n) = [100, 250, 500, 1000] 
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
			case 'x' :  cout << "\nselesaiiiiiii\n";
					    break;
			default: cout << "\npilih yang benar dongggg\n";
        }

        int daun_awal = daun;
    
    cout << "menit ke-i   |   kec. angin   |   tumbuh   |  jml. tumbuh   |  gugur  |  jml gugur | Sisa |" << endl ;
    
    // hentikan looping ketika daun berjumlah 50% lebih besar atau 50% lebih kecil dari jumlah awal.
    while (daun >= daun_awal * 0.5 && daun <= daun_awal * 1.5 ) {
        cout << "menit ke-" << counter + 1 << "  | " << endl;
        // cout << "Menit ke-" << counter + 1 << " daun = " <<  daun << endl;

        // setiap 2 menit GUGUR 2 buah daun
        if(counter % 2 == 0 ) 
            gugur = daun - 2;
        // setiap 3 menit GUGUR 1 buah daun
        else if(counter % 3 == 0 )
            gugur = gugur - 1;
        // setiap 5 menit GUGUR 3 buah daun
        else if(counter % 5 == 0 )
            gugur = daun - 3;
        // setiap 4 menit TUMBUH 2 buah daun
        else if(counter % 4 == 0 )
            daun+= 2;
        // setiap GUGUR 5 daun TUMBUH 1 buah daun
        else if(gugur % 5 == 0 )
            daun+= 1;

        daun += 1;
        counter++;
    }
    
    
    



    return 0;
}