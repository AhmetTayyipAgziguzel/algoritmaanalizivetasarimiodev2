#include <bits/stdc++.h>

// Algoritma Analizi ve Tasar�m� K�sa S�nav 1 2.K�s�m
// Alfa-Beta Budama Algoritmas�
// Ahmet Tayyip A�z�g�zel
// 1210505008


using namespace std;

const int INF = 1000000000;

// Alfa-beta budama algoritmas� fonksiyonu
int alphabeta(int depth, int nodeIndex, bool maximizingPlayer, int values[], int alpha, int beta)
{
    // Derinli�in s�f�r oldu�u durumda, de�erleri geri d�nd�r�r
    if (depth == 0)
        return values[nodeIndex];

    // Maksimum oyuncunun hamlesini se�ti�i durum
    if (maximizingPlayer)
    {
        int best = -INF;

        // �ocuk d���mleri tarar ve en iyi hamleyi bulur
        for (int i = 0; i < 2; i++)
        {
            int val = alphabeta(depth - 1, nodeIndex * 2 + i, false, values, alpha, beta);
            best = max(best, val);
            alpha = max(alpha, best);

            // Beta de�eri alfa de�erinden k���k veya e�it oldu�unda,
            // di�er dallar�n incelenmesine gerek kalmaz
            if (beta <= alpha)
                break;
        }

        return best;
    }
    // Minimum oyuncunun hamlesini se�ti�i durum
    else
    {
        int best = INF;

        // �ocuk d���mleri tarar ve en iyi hamleyi bulur
        for (int i = 0; i < 2; i++)
        {
            int val = alphabeta(depth - 1, nodeIndex * 2 + i, true, values, alpha, beta);
            best = min(best, val);
            beta = min(beta, best);

            // Beta de�eri alfa de�erinden k���k veya e�it oldu�unda,
            // di�er dallar�n incelenmesine gerek kalmaz
            if (beta <= alpha)
                break;
        }

        return best;
    }
}

int main()
{
	cout << "Algoritma Analizi ve Tasarimi Kisa Sinav 1 2.Kisim" << endl;
	cout << "Alfa-Beta Budama Agoritmasi" << endl;
	cout << "Ahmet Tayyip Agziguzel" << endl;
	cout << "1210505008" << endl;
	
	cout << "*********************************************************************************************" << endl;
	
    // De�erler dizisi
    int values[] = { 3, 5, 6, 9, 1, 2, 0, -1 };
    int n = sizeof(values) / sizeof(values[0]);

    // Alfa-beta budama algoritmas�n� �a��r�r ve en iyi de�eri bulur
    int result = alphabeta(3, 0, true, values, -INF, INF);

    // Sonucu ekrana yazd�r�r
    cout << "En iyi deger: " << result << endl;

    return 0;
}

