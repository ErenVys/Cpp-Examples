#include <iostream>

using namespace std;

int main()

{
	float not1, not2, not3, not4, not5, ortalama = 0;

	cout << "					FIZIK  ORTALAMA HESAPLAMA " << endl << "\n\n\n";

	cout << "Lutfen kisa sinav 1 notunuzu giriniz : ";
	cin >> not1;
	if (not1 <= 100 && not1 >= 0)
	{

		cout << endl << "Lutfen kisa sinav 2 notunu giriniz : ";
		cin >> not2;
		if (not2 <= 100 && not2 >= 0)
		{

			cout << endl << "Lutfen odev notunuzu giriniz : ";
			cin >> not3;
			if (not3 <= 100 && not3 >= 0)
			{

				cout << endl << "Lutfen ara sinav notunuzu giriniz : ";
				cin >> not4;
				if (not4 <= 100 && not4 >= 0)
				{

					cout << endl << "Lutfen final sinavi notunuzu giriniz : ";
					cin >> not5;
					if (not5 <= 100 && not5 >= 0)
					{

						ortalama = (not1 * 0.05) + (not2 * 0.05) + (not3 * 0.1) + (not4 * 0.2) + (not5 * 0.6);

						if (ortalama > 87.5 && ortalama <= 100)
						{
							cout << endl << endl << "HARF ORTALAMANIZ : AA ";
						}

						else if (ortalama > 75 && ortalama <= 87.5)
						{
							cout << endl << endl << "HARF ORTALAMANIZ : BA ";
						}

						else if (ortalama > 62.5 && ortalama <= 75)
						{
							cout << endl << endl << "HARF ORTALAMANIZ : BB ";
						}

						else if (ortalama > 50 && ortalama <= 62.5)
						{
							cout << endl << endl << "HARF ORTALAMANIZ : CB ";
						}

						else if (ortalama > 37.5 && ortalama <= 50)
						{
							cout << endl << endl << "HARF ORTALAMANIZ : CC ";
						}

						else if (ortalama > 25 && ortalama <= 37.5)
						{
							cout << endl << endl << "HARF ORTALAMANIZ : DC ";
						}

						else if (ortalama > 12.5 && ortalama <= 25)
						{
							cout << endl << endl << "HARF ORTALAMANIZ : DD ";
						}

						else if (ortalama > 0 && ortalama <= 12.5)
						{
							cout << endl << endl << "HARF ORTALAMANIZ : FD ";
						}

						else if (ortalama == 0)
						{
							cout << endl << endl << "HARF ORTALMANIZ : FF ";
						}

						else
						{
							cout << endl << endl << "HATALI GIRIS YAPTINIZ";
						}

						cout << endl << endl << "NOT ORTALAMANIZ : " << ortalama;
					}
					else
					{
						cout << "HATALI GIRIS YAPTINIZ";
					}

				}
				else
				{
					cout << "HATALI GIRIS YAPTINIZ";
				}
			}
			else
			{
				cout << "HATALI GIRIS YAPTINIZ";
			}
		}
		else
		{
			cout << "HATALI GIRIS YAPTINIZ";
		}
	}
	else
	{
		cout << "HATALI GIRIS YAPTINIZ";
	}

	return 0;
}