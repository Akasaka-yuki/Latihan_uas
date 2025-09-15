#include <iostream> 
using namespace std;

int main() {
    int counter = 1; // untuk menghitung menit(berapa kali loop)
    int daun = 100;
    char pilih;
    int gugur = 0;
    int jml_gugur = 0;
    int tumbuh = 0;
    int jml_tumbuh = 0;
    int sudahcek = false;
    // int jumlah, maks;
    // int i;

        // // nilai awal daun (n) = [100, 250, 500, 1000] 
        // system("cls");
		// cout << "pilihan daun\n";
		// cout << "a. 100\n";
		// cout << "b. 250\n";
		// cout << "c. 500\n";
		// cout << "d. 1000\n";
		// cout << "x. exit\n";
		// cout << "Masukan pilihan anda: \n";
		// cin >> pilih;


        // switch(tolower(pilih)){
		// 	case 'a' :  daun = 100;
		// 				break;
		// 	case 'b' : 	daun = 250;
		// 				break;
		// 	case 'c' : 	daun = 500;
		// 				break;
		// 	case 'd' : 	daun = 1000;
		// 				break;
		// 	case 'x' :  cout << "\nselesaiiiiiii\n";
		// 			    break;
		// 	default: cout << "\npilih yang benar dongggg\n";
        // }

        int daun_awal = daun;
    
    cout << "menit ke-i   |   kec. angin   |   tumbuh   |  jml. tumbuh   |  gugur  |  jml gugur | Sisa |" << endl ;
    
    // hentikan looping ketika daun berjumlah 50% lebih besar atau 50% lebih kecil dari jumlah awal.

    while (daun >= daun_awal * 0.5 && daun <= daun_awal * 1.5 ) {
        // for(counter; counter <= daun; counter++ ){
            // cout << gugur << endl;
            // setiap 2 menit GUGUR 2 buah daun
            if((counter / 2)* 2 == counter){ 
                gugur = 2;
                if((counter / 3)* 3 == counter ){

                    cout << "gugur" << gugur << endl; 
                    cout << "menit - " << counter << endl; 
                    gugur = gugur + 1;
                    tumbuh = 0;
                    sudahcek = true; // mengecek apakah angka yang di cek sudah dicek dengan dua kondisi
                }
            } 
            // setiap 3 menit GUGUR 1 buah daun
            if((counter / 3)* 3 == counter ){
                if(sudahcek == true){ // digunakan untuk angka yang sudah di cek 
                    gugur = gugur;
                } else {
                    gugur = 1;
                }
                // tumbuh = 0;
                // cout << "gugur" << gugur << endl; 
                // cout << "menit - " << counter << endl; 
            }
            // setiap 5 menit GUGUR 3 buah daun
            if((counter / 5)* 5 == counter ){
                gugur = 3;
                // tumbuh = 0;
                // cout << "gugur " << gugur << endl; 
                // cout << "menit - " << counter << endl; 
            }
            // setiap 4 menit TUMBUH 2 buah daun
            if((counter / 4)* 4 == counter ){
                tumbuh = 2;
                // gugur = 0;
            }
            // setiap GUGUR 5 daun TUMBUH 1 buah daun
            if((jml_gugur / 5)* 5 == jml_gugur ){
                // tumbuh = 1;
                // gugur = 0;
            // } else {
            //     gugur = 0;
            //     tumbuh = 0;
            }
            daun = daun - gugur; 
            cout << "menit ke-" << counter << "  |  kec. angin  |   " << tumbuh << "    |   jml. tumbuh |   " << gugur << " |   jml.gugur  |   " << daun << endl;
            
            counter++;
        // }

        

        
        

        // daun -= 1;
    }
    
    
    



    return 0;
}