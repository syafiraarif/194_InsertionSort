

#include <iostream>
using namespace std;

int arr[20];											// membuat array dengan panjang data 20
int n;													// membuat variabel inputan n


void input()											// procedure untuk input 
{
	while (true)										//looping
	{
		cout << "masukan jumlah data pada array : ";	// output ke layar
		cin >> n;										// input dari pengguna 

		if (n <= 20)									// membuat kondisi n tidak lebih dari 20
		{
			break;										// keluar dari loop
		}
		else                                            // jika n lebih dari 20
		{
			cout << "\narray yang anda masukan maksimal 20 elemen.\n";			// menampilkan pesan jika data lebih dari 20
		}
	}
	cout << endl;										// membuat jarak perbaris program
	cout << "====================" << endl;				// membuat tampilan susunan data elemen array
	cout << "masukan elemen array" << endl;			
	cout << "====================" << endl;


	for (int i = 0; i < n; i++)							// menggunakan perulangan for untuk menyimpan data pada array
	{
		cout << "data ke- " << (i + 1) << ":";			// memasukan atau meng inputkan nilai data n
		cin >> arr[i];									// menyimpan nilai data n kedalam array arr
	}
}

void insertionsort()								// procedure insertionsort
{

	int temp;									// membuat variabel data temporer atau penyimpanan sementara
	int i, j;									// membuat variabel sebagai penanda

	for (i = 1; i <= n - 1; i++)				// 1. looping dengan i dimulai dari 1 hingga n-1
	{
		temp = arr[i];							// 2. simpan nilai arr[i] ke variabel sementara temp

		j = i - 1;								// 3. seeting nilai j sama dengan

		while (j >= 0 && arr[j] > temp)			// 4. looping while dimana nilai j lebih besar sama dengan 0 dan
												// arr [j] lebih besar dari pada temp
		{
			arr[j + i] = arr[j];				// 4a. simpan arr[j] kedalam variabel arr [j +1]
			j--;								// 4b. decrement nilai j by 1
		}

		arr[j + 1] = temp;						//5. simpan nilai temp kedalam arr [j + 1]


		cout << "\nPass " << i << "; ";			// output layar
		for (int k = 0; k < n; k++)				// looping nilai k dimulai dari 0 hingga n-1
		{
			cout << arr[k] << " ";				// output layar
		}
	}
}

void display()									// procedure untuk menampilkan hasil
{                                          
	cout << endl;                               // output baris kosong       
	cout << "\n===================" << endl;    // output ke layar   
	cout << "elemen array yang telah tersusun" << endl;  // output kelayar
	cout << "===================" << endl;               // output kelayar
	for (int j = 0; j < n; j++)								// looping dengan j dimulai dari 0 hingga n-1
	{                         
		cout << arr[j] << endl;                             // output ke layar
	}
	cout << endl;

}



int main()
{
	input();
	insertionsort();
	display();
}

