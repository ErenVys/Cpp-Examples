#include <iostream>

using namespace std;

int main()

{
	int adet,sayi,ciftsayilar=0,teksayilar=0;
	float cifttoplam=0 , tektoplam = 0;

	
	cout << "Kac adet sayi girmek istersiniz : ";
	cin >> adet;

	for (int i = 0; i < adet; i++)
	{
		cin >> sayi;
		if (sayi % 2 == 0)
		{
			ciftsayilar += 1;
			cifttoplam += sayi;
		}
		else
		{
			teksayilar += 1;
			tektoplam += sayi;
		}
	}

	cout << endl << endl << "Cift sayilar : " << ciftsayilar << "\t\t\t" << "Cift sayilarin toplami : " << cifttoplam;
	cout << endl << endl << "Tek sayilar : " << teksayilar << "\t\t\t" << "Tek sayilarin toplami : " << tektoplam;


	return 0;
}