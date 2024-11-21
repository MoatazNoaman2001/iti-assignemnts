#include <stdio.h>
#include <windows.h>

COORD coord = {0, 0};

void gotoxy(int x, int y) {
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    gotoxy(10, 5);
    printf("MagicBox");

    gotoxy(0, 0);
    return 0;
}