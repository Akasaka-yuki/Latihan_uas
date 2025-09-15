#include <iostream> 
using namespace std;

int main() {
    int angka;
    int kelipatan;

    // cout << "masukan angka kelipatan: "; 
    // cin >> angka;

    // for (int i = 1; i <= 100 ; i++ ){
    //     kelipatan = angka * i;

    //     cout << "kelip 2 x " << i << " = " << kelipatan << endl;
    // }

    // if (27 % 3 == 0 ){
    //     cout << "kelipatan";
    // }

   
    int n;
    std::cin >> n;
    if ((n / 3) * 3 == n) 
        std::cout << n << " kelipatan 3\n";
    else 
        std::cout << n << " bukan kelipatan 3\n";






    return 0;
}