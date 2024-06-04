#include <iostream>
#include <iomanip>
using namespace std;

void selection_sort(char arr[], int n)
{
    int min;
    char temp;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void binary_search(char arr[], int n, char target)
{
    int awal = 0, akhir = n - 1, tengah;
    bool ditemukn = false;
    while (!ditemukn && awal <= akhir)
    {
        tengah = (awal + akhir) / 2;
        if (arr[tengah] == target)
        {
            ditemukn = true;
            break;
        }
        else if (arr[tengah] < target)
        {
            awal = tengah + 1;
        }
        else
        {
            akhir = tengah - 1;
        }
    }
    if (ditemukn)
        cout << "\nHuruf ditemukan pada urutan ke-" << (tengah+1) << endl;
    else
        cout << "\nHuruf tidak ditemukan\n";
}

int main()
{
    char kalimat[100], huruf;
    cout << "\nMasukkan sebuah kalimat   : ";
    cin.getline(kalimat, 100);
    int panjang = 0;
    while (kalimat[panjang] != 0 )
    {
        panjang++;
    }
    selection_sort(kalimat, panjang);
    cout << "Kalimat setelah diurutkan : " << kalimat << endl;
    cout << "\nMasukkan huruf yang dicari: ";
    cin >> huruf;
    binary_search(kalimat, panjang, huruf);

    return 0;
}