#include <iostream>

using namespace std;

/*                                              IF ELSE

int main()

{
	int suyunDerecesi;

	cout << "Lutfen suyun derecesini giriniz : ";
	cin >> suyunDerecesi;

	if (suyunDerecesi < 0)
	{
		cout << "Su 0 derecenin altinda oldugu icin donmustur";
	}

	else if (suyunDerecesi < 100)
	{
		cout << "Su sivi haldedir ";
	}

	else
	{
		cout << "Su gaz hale donusmustur ";
	}
	
	return 0;

}

*/

                                                        //SWITCH
/*
int main()

{
	int secim;

	cout << "Lutfen bir sayi giriniz : ";
	cin >> secim;

	switch (secim)
	{
	case 1:
		cout << "Biri sectiniz ";
		break;

	case 2:
		cout << "Ikiyi sectiniz ";
		break;

	case 3:
		cout << "Ucu sectiniz ";
		break;

	default:
		cout << "Lutfen bir ile uc arasinda bir sayi seciniz ";
	}

	return 0;
}

*/

/*
int main()

{
	int sayi, secim;
	float cevap;

	cout << "Lutfen bir sayi giriniz : ";
	cin >> sayi;
	
	cout << "Lutfen bir secim yapiniz " << endl;
	cout << " 1) 5 ile topla \n 2) 5 ile carp \n 3) 5 e bol ";
	cin >> secim;
	cout << endl << endl;

	switch (secim)
	{
	case 1:
		cevap = sayi + 5;
		cout << "Cevapibiniz : " << cevap;
		break;

	case 2:
		cevap = sayi * 5;
		cout << "Cevapibiniz : " << cevap;
		break;

	case 3:
		cevap = (float)sayi / 5;
		cout << "Cevapibiniz : " << cevap;
		break;

	default:
		cout << "Hatali giris yaptiniz ";
	}
	return 0;
}

*/
