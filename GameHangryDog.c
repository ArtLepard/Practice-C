#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {

    char array[10][21];
    int i;
    int x = 10, y = 5;
    char key;
    int ox, oy;
    int ax = 5, ay = 3;

    srand(time(NULL));                         //(Целое число и порядок будет одним и тем же,time(NULL) и будет рандом)

do {
    sprintf(array[0], "####################");
    for(int i = 1; i < 9; i++)
        sprintf(array[i],"#                  #");
    sprintf(array[9], "####################");

    array[y][x] = '@';
    array[ay][ax] = '*';


    system("cls");

    for(int i = 0; i < 10; i++)
        printf("%s\n", array[i]);

    ox = x;
    oy = y;
    key = getch();
    if(key =='w') y--;
    if(key == 's') y++;
    if(key =='a') x--;
    if(key == 'd') x++;  
    if(array[y][x] == '#') {   
        x = ox;
        y = oy;
    }

    if((x == ax) && (y == ay)) {
        ax = rand() * 1.0 / RAND_MAX * 18 + 1;
        ay = rand() * 1.0 / RAND_MAX * 8 + 1;
    }
    
    
} while (key != 'p');


    return 0;
}
