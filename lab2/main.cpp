#include <iostream>
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    double m1, m2, mr, rez;
    puts("\n\t m1, m2 = ");
    scanf("%lf %lf", &m1, &m2);
    mr = fabs(m1 - 2 * m2);
    printf("\n m1 = %7.5lf \n m2 = %7.5lf \n mr = %lf \n", m1, m2, mr);
    if(0.1 >= mr){
        printf("\n\tError!!");
        return 0;
    }else{
        if(mr > 1){
            printf("\n\t mr > 1");
            rez = 2*pow((m1-m2),exp((m1/m2)-1));
        }else{
            printf("\n\t 0.1 < mr <= 1");
            rez = (m1-2*m2)/(pow(m1,2)+2*pow(m2,2));
        }
        printf("\n Rezult = %lf \n", rez);
    }
    puts("Press any key ... ");
    return 0;
}
