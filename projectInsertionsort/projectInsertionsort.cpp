

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

void insertionsort()
{

	int temp;
	int i, j;

	for (i = 1; i <= n - 1; i++)
	{
		temp = arr[i];

		j = i - 1;

		while (j >= 0 && arr[j] > temp)
		{
			arr[j + i] = arr[j];
			j--;
		}

		arr[j + 1] = temp;


		cout << "\nPass " << i << "; ";
		for (int k = 0; k < n; k++)
		{
			cout << arr[k] << " ";
		}
	}
}

void display()
{                                          
	cout << endl;                                         
	cout << "\n===================" << endl;                
	cout << "elemen array yang telah tersusun" << endl;  
	cout << "===================" << endl;               
	for (int j = 0; j < n; j++) 
	{                         
		cout << arr[j] << endl;                             
	}
	cout << endl;

}



int main()
{
	input();
	insertionsort();
	display();
}

