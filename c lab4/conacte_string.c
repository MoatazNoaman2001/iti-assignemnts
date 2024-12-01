#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<windows.h>

void concateName(){
    char str1[10], str2[10];
    scanf("%s", str1);
    scanf("%s", str2);
    strcat(str1, str2);
    printf("concated: %s", str1);
}



void countChar(){
    int count[128];
    memset(count, 0 , sizeof(count));
    char str[10];
    scanf("%s" , str);
    for(int i = 0; i < strlen(str) ; i++){
        count[str[i]]++;
    }
    for(int i = 0; i < sizeof(count) / sizeof(count[0]) ; i++){
        if (count[i] == 0)
            continue;
        printf("%c: %i\n" , i , count[i]);
    }
}

void isExtended(){
    char input;
    do
    {
        input = getche();
        if (input == -32){
            printf("extended");
            break;
        }else {
            printf("normal");
        }
    } while (input != 27);
}
void gotoxy(int x,int y) {
    COORD coord={0,0}; 
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void SetColor(int ForgC)
 {
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}
void menu(){
    char menu[][10] = {"new" , "edit" , "exit"};
    char pastInput;
    char input = -1;
    int pos = 0;
    do{
        if (pastInput == 13){
            if (input == 'q'){
                system("cls");
                pastInput =input= -1;
                for (int i = 0; i < 3 ; i++){
            gotoxy(43 , 5 + (i *2));
            if (i == pos){
                SetColor(5);
            }else{
                SetColor(15);
            }
            printf("%s" , menu[i]);
        }
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
            }
        }
        else {
            switch(input) {
            case 72:
                if (pos == 0){
                    pos =2;
                }else{
                    pos--;
                }
                break;
            case 80: 
                if (pos == 2){
                    pos = 0;
                }else{
                    pos++;
                }
                break;
            
            case 13:
                if (pos != 2){
                    pastInput = input;
                    system("cls");
                    gotoxy(0 , 5);
                    SetColor(15);
                    printf("you entered %s" , menu[pos]);
                    continue;
                }else{
                    exit(0);
                }
                
            }
        for (int i = 0; i < 3 ; i++){
            gotoxy(43 , 5 + (i *2));
            if (i == pos){
                SetColor(5);
            }else{
                SetColor(15);
            }
            printf("%s" , menu[i]);
        }
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        }
       
    }
    while ((input = getch()) != 27); 
}
int main(){
    // concateName();
    // countChar();
    // isExtended();
    menu();
}
