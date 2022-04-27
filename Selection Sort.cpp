#include<iostream>
using namespace std;

// SELECTION SORT
int main() {
	
    int angka, tukar_angka, data[100];
    /*
	Variabel angka untuk menampung jumlah data yang nantinya di inputkan oleh user
	Variabel tukar_angka untuk menukar isi data dalam array sesuai instruksi prograM
	Variabel data untuk membatasi jumlah data array yang dimasukkan oleh user
    */
    
    cout << "Masukkan jumlah data: ";
    cin >> angka;
   	// Cin berfungsi untuk menerima inputan dari user dan kemudian dimasukkan ke dalam variable angka

	// Perulangan for dibawah ini berguna untuk melakukan perulangan data sesuai jumlah data yang kita masukkan
    for (int i = 0; i < angka; i++) {
        cout << "Data ke-" << i + 1 << " = " ;
        cin >> data[i];
        /* 
	Cin berfungsi untuk menerima inputan data yang dimasukkan oleh user dan kemudian ditampung oleh variabel data dengan index ke i
	index i ini, didapat dari perulangan for pada baris ke 19
	*/
        cout << endl;
    }

	// Perulangan Selection Sort
    for (int i = 0; i < angka-1; i++) {
    	// Variabel tukar_angka berfungsi untuk menampung perulangan selection sort yang ditandai dengan variabel integer i.
        tukar_angka = i;
        int angka_final;
        for(int j = i+1; j < angka; j++){
            if(data[j] < data[tukar_angka]){
                tukar_angka = j;
            }
        }
        
        // Variabel angka_final berfungsi untuk menampung index array yang sudah diurutkan dari angka terkecil sampai terbesar
        angka_final = data[tukar_angka];
        data[tukar_angka] = data[i]; // variabel data yang menyimpan index array dari variabel tukar angka berfungsi untuk menampung variabel data
        data[i] = angka_final;
        // data[i] berfungsi untuk menampung angka final yang sudah ditukar sesuai index yang sudah dilakukan perulangan pada baris 29 - 38
        
        // Untuk menampilkan proses sorting 
        cout << "Proses Sorting" << endl;
		for(int m=0; m < angka; m++){
			cout << data[m] << " ";
	    }
	    cout<<endl;
    }
	// Untuk menampilkan hasil sorting
	cout<< endl << "Hasil Sorting" << endl;
    for(int i = 0; i < angka; i++){
        cout << data[i] << " ";
    }

    cin.get();
    return 0;
}
