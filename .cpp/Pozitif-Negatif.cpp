#include <iostream>

using namespace std;

int main()

{
	int sayi;
	menu:
	cout << "Lutfen bir sayi giriniz : ";
	cin >> sayi;
	
	if (sayi==0)
	{
		goto cikis;
	}
	
	if (sayi>0)
	{
		cout << "Sayiniz pozitiftir" << endl;
	}
	
	else
	{
		cout << "Sayiniz negatiftir" << endl;
	}

	goto menu;

	cikis:
	return 0;
}
