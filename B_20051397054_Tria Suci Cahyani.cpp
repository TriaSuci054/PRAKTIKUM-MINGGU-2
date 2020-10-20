#include<iostream>
using namespace std;

int main()
{
	{
	char nama;
	cout <<  "Masukkan Nama Karyawan  :  ";
	cin>>nama;
   }
  {
	char pi1;
	int jam = 0, jml, total, sisa, sisa1;
	cout << "Golongan : ";
	cin >> pi1;
	cout << "Jam Kerja : ";
	cin >> jam;


	if (pi1 == 'A')
	{
		jml = 5000;
	}
	else if (pi1 == 'B')
	{
		jml = 7000;
	}
	else if (pi1 == 'C')
	{
		jml = 8000;
	}
	else if (pi1 == 'D')
	{
		jml = 10000;
	}
	
	
	if (jam > 48)
	{
		sisa = jam - 48; //sisa = 1
		sisa1 = jml * (jam-sisa); // sisa1 = 5000(49-1)
		total = 4000 * sisa; // total = 4000*1
		jml = sisa1 + total; // jml = 240000 + 4000
	}
	

	else
	{
		jml= jml * jam;
		
	}
	
	cout<<jml<<endl;
}
}

