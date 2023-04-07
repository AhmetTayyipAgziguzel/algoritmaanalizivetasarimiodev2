#include <bits/stdc++.h>

// Algoritma Analizi ve Tasarýmý Kýsa Sýnav 1 2.Kýsým
// Alfa-Beta Budama Algoritmasý
// Ahmet Tayyip Aðzýgüzel
// 1210505008


using namespace std;

const int INF = 1000000000;

// Alfa-beta budama algoritmasý fonksiyonu
int alphabeta(int depth, int nodeIndex, bool maximizingPlayer, int values[], int alpha, int beta)
{
    // Derinliðin sýfýr olduðu durumda, deðerleri geri döndürür
    if (depth == 0)
        return values[nodeIndex];

    // Maksimum oyuncunun hamlesini seçtiði durum
    if (maximizingPlayer)
    {
        int best = -INF;

        // Çocuk düðümleri tarar ve en iyi hamleyi bulur
        for (int i = 0; i < 2; i++)
        {
            int val = alphabeta(depth - 1, nodeIndex * 2 + i, false, values, alpha, beta);
            best = max(best, val);
            alpha = max(alpha, best);

            // Beta deðeri alfa deðerinden küçük veya eþit olduðunda,
            // diðer dallarýn incelenmesine gerek kalmaz
            if (beta <= alpha)
                break;
        }

        return best;
    }
    // Minimum oyuncunun hamlesini seçtiði durum
    else
    {
        int best = INF;

        // Çocuk düðümleri tarar ve en iyi hamleyi bulur
        for (int i = 0; i < 2; i++)
        {
            int val = alphabeta(depth - 1, nodeIndex * 2 + i, true, values, alpha, beta);
            best = min(best, val);
            beta = min(beta, best);

            // Beta deðeri alfa deðerinden küçük veya eþit olduðunda,
            // diðer dallarýn incelenmesine gerek kalmaz
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
	
    // Deðerler dizisi
    int values[] = { 3, 5, 6, 9, 1, 2, 0, -1 };
    int n = sizeof(values) / sizeof(values[0]);

    // Alfa-beta budama algoritmasýný çaðýrýr ve en iyi deðeri bulur
    int result = alphabeta(3, 0, true, values, -INF, INF);

    // Sonucu ekrana yazdýrýr
    cout << "En iyi deger: " << result << endl;

    return 0;
}

