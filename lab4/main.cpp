#include <iostream>
#include <cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
       int n, kol = 0, s = 0;
       cout << "\t Input N";
       cin >> n;
       int* a = (int*)malloc(sizeof(int) * n);
       cout << "\n\t Massiv A" << endl;
       for(int i = 0; i < n; i++) {
                cout << "\t a[ " << i+1 << " ] = ";
                cin >> a[i]; // *(a + i)
        }
        for(int i=0; i < n; i++) {
            s += i[a];
            if (!*(a + i)){
                s = 0;
            }
        }
        cout << "\n\t summ: " << s;
        free(a); 
	return 0;
}
