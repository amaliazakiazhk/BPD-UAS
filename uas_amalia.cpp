#include <iostream>
using namespace std;

int main(){
	cout <<"UAS BPD AMALIA ZAKIA ZHK | 2211510488";
	cout <<"\nCARI NILAI RATA-RATA >= 60 ELEMENT DENGAN ARRAY";
	cout << endl;
	
	int el[100], i, nilai;
	float rata, total;
	
	//input jumlah element
	cout << "\nMasukan jumlah element: ";
	cin >> nilai;
	
	//melakukan perulangan untuk input nilai
	for(i=0; i<nilai; i++){
		cin >> el[i];
	}
	cout << endl;
	
	//hitung total nilai	
	total = 0;
  	for(i = 0; i < nilai; i++){
    total = total+el[i];
	}
	//cari nilai lulus dengan rata-rata nilai >= 60
	rata=(total/nilai);
		if(rata >= 60){
		cout << "Total nilai: " << total;
		cout << "\nLulus, dengan nilai rata-rata: " << rata;
	}else{
		cout << "Total nilai: " << total;
		cout << "\nGagal, dengan nilai rata-rata:  " << rata;
	}
	
	cout << endl;
	return 0;
	 
}