#include "DateTime.h"

using namespace std;

int main(){
    Date Da(14,12,1994);
    Time Ti(19,2,12);
	int amps;

	DateTime DT(Da,Ti);
	cout << "Tahun: " << DT.getDate().getTahun()<< endl;
	cout << "Bulan: " << DT.getDate().getBulan()<< endl;
	cout << "Tanggal: " << DT.getDate().getTanggal()<< endl;

	cout << "Jam: " << DT.getTime().getJam()<< endl;
	cout << "Menit: " << DT.getTime().getMenit()<< endl;
	cout << "Detik: " << DT.getTime().getDetik()<< endl;

	cin >> amps;
    return 0;
}
