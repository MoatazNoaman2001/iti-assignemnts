#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<windows.h>

struct Birth{
    int day, month,year;
};

struct Emp{
    int i;
    char name[20];
    double salary;
    int age;
    struct Birth birth;
};

void displayEmps(struct Emp *e_arr,int size){
    system("cls");
    for (int i =0; i < size; i++){
        printf("%i ,%19s, %0.1lf, %i, birth: %i/%i/%i\n",e_arr[i].i, e_arr[i].name, e_arr[i].salary, e_arr[i].age,  e_arr[i].birth.day, e_arr[i].birth.month, e_arr[i].birth.year);
    }
}

struct Emp addEmp(struct Emp *emp){
    system("cls");
    printf("name: ");
    scanf("%19s", emp->name);
    printf("salary: ");
    scanf("%lf", &emp->salary); 
    printf("age: ");
    scanf("%i", &emp->age); 
    printf("birth: ");
    scanf("%i %i %i", &emp->birth.day, &emp->birth.month, &emp->birth.year);
}

void editEmp(struct Emp *emp){
    printf("Current Name: %s\n", emp->name);
    printf("enter new name: ");
    scanf("%19s", emp->name);
    printf("Current Salary: %lf\n", emp->salary);
    printf("enter new salary: ");
    scanf("%lf", &emp->salary); 
    printf("Current age: %i\n", emp->age);
    printf("enter new age: ");
    scanf("%i", &emp->age); 
    scanf("Current birth: %i/%i/%i", &emp->birth.day, &emp->birth.month, &emp->birth.year);
    printf("birth: ");
    scanf("%i %i %i", &emp->birth.day, &emp->birth.month, &emp->birth.year);
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
    char menu[][10] = {"add" , "edit" ,"display", "exit"};
    struct Emp e_arr[] = {
        { 1 ,"moataz", 10000, 23, {22 , 7 , 2001}},
        { 2 ,"alia" , 15000, 22, {28 , 9 , 2002}},
    };
    char pastInput;
    char input = -1;
    int pos = 0;
    do{
        if (pastInput == 13){
            if (input == 'q'){
                system("cls");
                pastInput =input= -1;
                for (int i = 0; i < 4 ; i++){
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
                    pos =3;
                }else{
                    pos--;
                }
                break;
            case 80: 
                if (pos == 3){
                    pos = 0;
                }else{
                    pos++;
                }
                break;
            
            case 13:
                if (pos != 3){
                    pastInput = input;
                    system("cls");
                    gotoxy(5 , 5);
                    SetColor(15);
                    if (pos == 0){
                        int size = 0;
                        for(int i = 0 ; i < 10; i++){
                            if (strlen(e_arr[i].name) != 0){
                                size++;
                            }else{
                                break;
                            }
                        }
                        addEmp(&e_arr[size]);

                        system("cls");
                        pastInput =input= -1;
                        for (int i = 0; i < 4 ; i++){
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
                    }else if (pos == 1){
                        int id;
                        int isfound = 0;
                        printf("enter employee id: ");
                        scanf("%i" , &id);
                        for (int i = 0; i < 10;i++){
                            if (strlen(e_arr[i].name) > 0 && id == e_arr[i].i){
                                printf("found");
                                isfound =  1;
                                editEmp(&e_arr[i]);
                                continue;
                            }
                        }
                        if(isfound != 1){
                            printf("cant found employee with that id");
                        }
                    }else if (pos == 2){
                        int size = 0;
                        for(int i = 0 ; i < 10; i++){
                            if (e_arr[i].i > 0){
                                size++;
                            }else{
                                break;
                            }
                        }
                        displayEmps(e_arr, size);
                    }else{
                        printf("you entered %i %s" ,pos, menu[pos]);
                    }
                    continue;
                }else{
                    exit(0);
                }
                
            }
        for (int i = 0; i < 4 ; i++){
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
       
    }while ((input = getch()) != 27); 
}
int main(){

    menu();
}