#include <iostream>
#include <math.h>

using namespace std;

int main()

{
	int sayi,veri1,veri2,toplam;
	float PI = 3.14159;

	cout << "                                         HESAP MAKINASINA HOSGELDINIZ " << endl << endl;

	cout << " 1- Toplama \n 2- Cikarma \n 3- Carpma \n 4- Bolme \n 5- Kare alma \n 6- Kok alma \n 7- Sinus degeri bulma \n 8- Cosinus degeri bulma \n 9- Tanjant degeri bulma \n 10- Cotanjant degeri bulma \n\n";
	

	cout << "Yapmak istediginiz islemi seciniz : ";
	cin >> sayi;

	if (sayi == 1)
	{
		cout << endl << "Birinci sayiyi gir :";
		cin >> veri1;
		cout << "Ikinci sayiyi giriniz :";
		cin >> veri2;

		cout << "Toplama isleminizin sonucu :" << veri1+veri2;
	}

	else if (sayi == 2)
	{
		cout << endl << "Birinci sayiyi giriniz : ";
		cin >> veri1;
		cout << "Ikinci sayiyi giriniz :";
		cin >> veri2;

		cout << "Cikarma isleminizin sonucu :" << veri1 - veri2;
	}
	
	else if (sayi == 3)
	{
		cout << endl << "Birinci sayiyi giriniz : ";
		cin >> veri1;
		cout << "Ikinci sayiyi giriniz :";
		cin >> veri2;

		cout << "Carpma isleminizin sonucu :" << veri1 * veri2;
	}

	else if (sayi == 4)
	{
		cout << endl << "Birinci sayiyi giriniz : ";
		cin >> veri1;
		cout << "Ikinci sayiyi giriniz :";
		cin >> veri2;

		cout << "Bolme isleminizin sonucu :" << veri1 / veri2;
	}

	else if (sayi == 5)
	{
		cout << endl << "Birinci sayiyi giriniz : ";
		cin >> veri1;
		cout << "Ikinci sayiyi giriniz :";
		cin >> veri2;

		cout << "Birinci sayinizin karesi :" << veri1 * veri1 << endl << "Ikinci sayinizin karesi : " << veri2 * veri2;
	}

	else if (sayi == 6)
	{
		cout << endl << "Birinci sayiyi giriniz : ";
		cin >> veri1;
		cout << "Ikinci sayiyi giriniz :";
		cin >> veri2;

		cout << "Birinci sayinizin koku :" << sqrt(veri1) << endl << "Ikinci sayinizin koku : " << sqrt(veri2);
	}
	
	else if (sayi == 7)
	{
		cout << endl << "Birinci sayiyi giriniz : ";
		cin >> veri1;
		cout << "Ikinci sayiyi giriniz :";
		cin >> veri2;

		
		cout << "Birinci sayinizin sinusu :" << sin(veri1 * (PI / 180)) << endl;
		cout << "Ikinci sayinizin sinusu : " << sin(veri2 * (PI / 180));
	}
	
	else if (sayi == 8)
	{
		cout << endl << "Birinci sayiyi giriniz : ";
		cin >> veri1;
		cout << "Ikinci sayiyi giriniz :";
		cin >> veri2;


		cout << "Birinci sayinizin sinusu :" << cos(veri1 * (PI / 180)) << endl;
		cout << "Ikinci sayinizin sinusu : " << cos(veri2 * (PI / 180));
	}
	
	else if (sayi == 9)
	{
		cout << endl << "Birinci sayiyi giriniz : ";
		cin >> veri1;
		cout << "Ikinci sayiyi giriniz :";
		cin >> veri2;


		cout << "Birinci sayinizin sinusu :" << tan(veri1 * (PI / 180)) << endl;
		cout << "Ikinci sayinizin sinusu : " << tan(veri2 * (PI / 180));
	}
	
	else if (sayi == 10)
	{
		cout << endl << "Birinci sayiyi giriniz : ";
		cin >> veri1;
		cout << "Ikinci sayiyi giriniz :";
		cin >> veri2;


		cout << "Birinci sayinizin sinusu :" << 1/tan(veri1 * (PI / 180)) << endl;
		cout << "Ikinci sayinizin sinusu : " << 1/tan(veri2 * (PI / 180));
	}

	else
	{
		cout << endl << "Hatali giris yaptiniz lutfen gecerli bir sayi giriniz ";
	}
	
	return 0;
}