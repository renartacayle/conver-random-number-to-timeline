#include <iostream>
using namespace std;

int main() {
    long long totalDetik;
    cout << "Masukan total Detik: ";
    cin >> totalDetik;
    long long hari = totalDetik/86400;
    long long sisa = totalDetik % 86400;
    long long jam = sisa/3600;
    sisa = sisa%3600;
    long long menit = sisa/60;
    long long detik = sisa%60;
    cout << hari << "hari " << jam << "jam " << menit << "menit " << detik << "detik";
    return 0;
}
