#include <unistd.h>
void ft_print_comb(void) {
    char comb[5];
    comb[0] = '0';
    comb[3] = ',';
    comb[4] = ' ';
    while(comb[0] <= '7') {
        comb[1]= comb[0] + 1;
        while(comb[1] <= '8') {
            comb[2]= comb[1] + 1;
            while(comb[2] <= '9') {
                if(comb[0]== '7' && comb[1]== '8' && comb[2]== '9') write(1, comb, 3);
                else write(1, comb, 5);
                comb[2]++;
            }
            comb[1]++;
        }
        comb[0]++;
    }
    write(1, "\n", 1);
}
/*int main(void) {
    ft_print_comb();
    return 0;
}*/
