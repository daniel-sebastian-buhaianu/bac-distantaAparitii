#include <fstream>
#define NRMIN 0
#define NRMAX 99
using namespace std;
ifstream fin("numere.in");
ofstream fout("numere.out");
int pa[NRMAX+1], ua[NRMAX+1];
int main()
{
    int i, x;
    for (i = 1; fin >> x; i++)
    {
        if (!pa[x]) pa[x] = i;
        ua[x] = i;
    }
    fin.close();
    for (x = NRMIN; x <= NRMAX; x++)
        if (pa[x])
            fout << x << ' ' << ua[x]-pa[x] << '\n';
    fout.close();
    return 0;
}
