#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
    int n, m, t, kol = 0, s = 0;
       cout << "Input T" << endl;
       cin >> t;
       cout << "Input N and M" << endl;
       cin >> n;
       cin >> m;
       int** a = new int*[n];
       for (int i = 0; i < n; i++){
           a[i] = new int[m];
       }
       cout << "\nMassiv A" << endl;
       for(int i = 0; i < n; i++) {
           for (int j = 0; j < m; j++){
               cout << " a[ " << i+1 << " ][ " << j+1 << " ] = ";
               cin >> *(*(a + i)+j);
               if((*(a+i))[j]>t){
                   s += i[a][j];
                   kol++;
               }
           }
        }
        
        cout << "\n summ: " << s << endl << "kol: " << kol << endl;
        for (int i = 0; i < n; i++){
            delete(a[i]); 
        }
        delete[](a);
	return 0;
}
