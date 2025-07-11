#include <unistd.h>
void ft_print_comb2(void){
    char comb[7];
    comb[0] = '0';
    comb[2] = ' ';
    comb[5] = ',';
    comb[6] = ' ';
    while (comb[0] <= '9') {
        comb[1] = '0';
        while (comb[1] <= '8') {
            comb[3] = '0';
            while (comb[3] <= '9') {
                comb[4] = comb[1] + 1;
                while (comb[4] <= '9') {
                    if(comb[0] == '9' && comb[1] == '8' && comb[3] == '9' && comb[4] == '9') write(1, comb, 5);
                    else write(1, comb, 7);
                    comb[4]++;
                }
                comb[3]++;
            }
            comb[1]++;
        }
        comb[0]++;
    }
}
/*int main (void) {
    ft_print_comb2();
    return 0;
}*/
