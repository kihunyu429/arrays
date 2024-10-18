#include <stdio.h>

int main() {
    int i, j;
    int marks[2][4] = {{48, 78, 90, 40}, {25, 36, 45, 76}};
    
    for (i=0; i<2;i++) {
        for (j = 0;j<4; j++) {
            printf("marks[%d][%d] = %d\n", i, j, marks[i][j]);
        }
}
return 0;
}