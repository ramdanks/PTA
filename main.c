#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

int i, l, ned, sect=0, asc, sect2=0, s, arrowPosition, realPosition, menu(), farewell(), x=0, y=0, z=0, a=0, pos = 8, pos1 = 8, pos2 = 8, pos3 = 8, kol=1, pg;
char jwb[1], sectfalse, sectfalse2, ser;
void about(), lev(), prosedur(), ini(), mgbox(), fullscreen(), arrowHere(), SetColorAndBackground(), gotoxy();
int i, n=1, passs, rpt=0, mx, mn, ex, ye;
int kumpulan[4]={};
char nama[20], keyPressed;
int score=100, scorehard=200, scoremedium=150, ForgC, BackC;

char inf[4][80]= {
        "\t\t\t\t\t\t\t\t\tMASUKKAN ANGKA DARI 0 - 3",
        "\t\t\t\t\t\t\t\t\tMASUKKAN ANGKA DARI 0 - 5",
        "\t\t\t\t\t\t\t\t\tMASUKKAN ANGKA DARI 0 - 7",
        "\t\t\t\t\t\t\t\t       TERDAPAT ANGKA YANG DIULANG"
    };

void main () {

	system("Color f0");
    fullscreen();

    if (PlaySound(TEXT("ini.wav"), NULL, SND_ASYNC | SND_FILENAME)) {
        ini();
    }
        menu();
}

void SetColorAndBackground(ForgC, BackC) {
    WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
    return;
}

int farewell () {

        FILE *fp;
        fp=fopen("win.txt", "r");
        do
        {
		ser=getc(fp);
		printf("%c", ser);
        }
        while(ser!=EOF);
        fflush(stdin);
        Sleep(2000);
        printf("\n");
        printf("\t\t\t\t\t\t\t\t     ");
        kol=1;
        system("pause");

    if (PlaySound(TEXT("bgmm.wav"), NULL, SND_ASYNC | SND_LOOP | SND_FILENAME))
    {
        menu();
    }
}

void arrowHere(int realPosition, int arrowPosition) {
    if(realPosition == arrowPosition){
    printf("--> - ");
    }
    else {
    printf("      ");
    }
}

void fullscreen () {
	keybd_event(VK_MENU, 0x38, 0, 0);
	keybd_event(VK_RETURN, 0x1c, 0, 0);
	keybd_event(VK_RETURN, 0x1c, KEYEVENTF_KEYUP, 0);
	keybd_event(VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);
}

void lev() {
		system ("cls");
		int position = 1;
int keyPressed = 0;

#define MAX 4
#define MIN 1

while (keyPressed !=13) {
system("cls");

printf("==========================================================================  Test Your Logic  ==========================================================================\n\n\n");

printf("MMMMMMMM               MMMMMMMM                    iiii                        MMMMMMMM               MMMMMMMM                                                        \n");
printf("M:::::::M             M:::::::M                   i::::i                       M:::::::M             M:::::::M                                                        \n");
printf("M::::::::M           M::::::::M                    iiii                        M::::::::M           M::::::::M                                                        \n");
printf("M:::::::::M         M:::::::::M                                                M:::::::::M         M:::::::::M                                                        \n");
printf("M::::::::::M       M::::::::::M  aaaaaaaaaaaaa   iiiiiiinnnn  nnnnnnnn         M::::::::::M       M::::::::::M    eeeeeeeeeeee    nnnn  nnnnnnnn    uuuuuu    uuuuuu  \n");
printf("M:::::::::::M     M:::::::::::M  a::::::::::::a  i:::::in:::nn::::::::nn       M:::::::::::M     M:::::::::::M  ee::::::::::::ee  n:::nn::::::::nn  u::::u    u::::u  \n");
printf("M:::::::M::::M   M::::M:::::::M  aaaaaaaaa:::::a  i::::in::::::::::::::nn      M:::::::M::::M   M::::M:::::::M e::::::eeeee:::::een::::::::::::::nn u::::u    u::::u  \n");
printf("M::::::M M::::M M::::M M::::::M           a::::a  i::::inn:::::::::::::::n     M::::::M M::::M M::::M M::::::Me::::::e     e:::::enn:::::::::::::::nu::::u    u::::u  \n");
printf("M::::::M  M::::M::::M  M::::::M    aaaaaaa:::::a  i::::i  n:::::nnnn:::::n     M::::::M  M::::M::::M  M::::::Me:::::::eeeee::::::e  n:::::nnnn:::::nu::::u    u::::u  \n");
printf("M::::::M   M:::::::M   M::::::M  aa::::::::::::a  i::::i  n::::n    n::::n     M::::::M   M:::::::M   M::::::Me:::::::::::::::::e   n::::n    n::::nu::::u    u::::u  \n");
printf("M::::::M    M:::::M    M::::::M a::::aaaa::::::a  i::::i  n::::n    n::::n     M::::::M    M:::::M    M::::::Me::::::eeeeeeeeeee    n::::n    n::::nu::::u    u::::u  \n");
printf("M::::::M     MMMMM     M::::::Ma::::a    a:::::a  i::::i  n::::n    n::::n     M::::::M     MMMMM     M::::::Me:::::::e             n::::n    n::::nu:::::uuuu:::::u  \n");
printf("M::::::M               M::::::Ma::::a    a:::::a i::::::i n::::n    n::::n     M::::::M               M::::::Me::::::::e            n::::n    n::::nu:::::::::::::::uu\n");
printf("M::::::M               M::::::Ma:::::aaaa::::::a i::::::i n::::n    n::::n     M::::::M               M::::::M e::::::::eeeeeeee    n::::n    n::::n u:::::::::::::::u\n");
printf("M::::::M               M::::::M a::::::::::aa:::ai::::::i n::::n    n::::n     M::::::M               M::::::M  ee:::::::::::::e    n::::n    n::::n  uu::::::::uu:::u\n");
printf("MMMMMMMM               MMMMMMMM  aaaaaaaaaa  aaaaiiiiiiii nnnnnn    nnnnnn     MMMMMMMM               MMMMMMMM    eeeeeeeeeeeeee    nnnnnn    nnnnnn    uuuuuuuu  uuuu\n");

    printf("\n                                                                         << Select Your Level >>\n");
    printf("\n========================================================================================================================================================================");
	printf("\n{{                                                                             DIFFICULTY                                                                             }}");
    printf("\n========================================================================================================================================================================");
	printf("\n{{\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      }}");
	printf("\n{{\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      }}");
	printf("\n{{\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      }}");
	printf("\n{{\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      }}");
	printf("\n{{\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      }}");
    printf("\n{{\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      }}");
	printf("\n{{\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      }}");
	printf("\n{{\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      }}");
	printf("\n{{\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      }}");
	printf("\n========================================================================================================================================================================");

	printf("\n\n\n\n\n\n\n\n\n\n");
    printf("________________________________________________________________________________________________________________________________________________________________________\n\n");
    printf("[ENT] - Submit    [UP/DOWN] - Change Value ");

    gotoxy(73,26);
    arrowHere(1,position); printf(" [1] Easy");
    gotoxy(73,28);
    arrowHere(2,position); printf(" [2] Medium");
    gotoxy(73,30);
    arrowHere(3,position); printf(" [3] Hard");
    gotoxy(73,32);
    arrowHere(4,position); printf(" [4] Back");

    gotoxy(50,46);
    keyPressed = getch();

if(keyPressed == 80 && position != MAX) {
    position++;
}
else if(keyPressed == 72 && position != MIN) {
    position--;
}
else {
    position = position;
}}

if (position==1){
    logic(position);
}

if (position==2) {
    logic1(position);
}
if (position==3) {
    logic2(position);
}
if (position==4) {
    menu();
}
}

void ini () {

	FILE *fp;
	fp=fopen("main.txt", "r");
	do
    {
		ser=getc(fp);
		printf("%c", ser);
	}
	while(ser!=EOF);
	fflush(stdin);
	Sleep(2000);
    system("cls");
}

int menu() {
		if (PlaySound(TEXT("bgmm.wav"), NULL, SND_ASYNC | SND_LOOP | SND_FILENAME))
		system ("cls");
		int position = 1;
int keyPressed = 0;

#define MAX 6
#define MIN 1

while (keyPressed !=13) {
system("cls");

printf("==========================================================================  Test Your Logic  ==========================================================================\n\n\n");

printf("MMMMMMMM               MMMMMMMM                    iiii                        MMMMMMMM               MMMMMMMM                                                        \n");
printf("M:::::::M             M:::::::M                   i::::i                       M:::::::M             M:::::::M                                                        \n");
printf("M::::::::M           M::::::::M                    iiii                        M::::::::M           M::::::::M                                                        \n");
printf("M:::::::::M         M:::::::::M                                                M:::::::::M         M:::::::::M                                                        \n");
printf("M::::::::::M       M::::::::::M  aaaaaaaaaaaaa   iiiiiiinnnn  nnnnnnnn         M::::::::::M       M::::::::::M    eeeeeeeeeeee    nnnn  nnnnnnnn    uuuuuu    uuuuuu  \n");
printf("M:::::::::::M     M:::::::::::M  a::::::::::::a  i:::::in:::nn::::::::nn       M:::::::::::M     M:::::::::::M  ee::::::::::::ee  n:::nn::::::::nn  u::::u    u::::u  \n");
printf("M:::::::M::::M   M::::M:::::::M  aaaaaaaaa:::::a  i::::in::::::::::::::nn      M:::::::M::::M   M::::M:::::::M e::::::eeeee:::::een::::::::::::::nn u::::u    u::::u  \n");
printf("M::::::M M::::M M::::M M::::::M           a::::a  i::::inn:::::::::::::::n     M::::::M M::::M M::::M M::::::Me::::::e     e:::::enn:::::::::::::::nu::::u    u::::u  \n");
printf("M::::::M  M::::M::::M  M::::::M    aaaaaaa:::::a  i::::i  n:::::nnnn:::::n     M::::::M  M::::M::::M  M::::::Me:::::::eeeee::::::e  n:::::nnnn:::::nu::::u    u::::u  \n");
printf("M::::::M   M:::::::M   M::::::M  aa::::::::::::a  i::::i  n::::n    n::::n     M::::::M   M:::::::M   M::::::Me:::::::::::::::::e   n::::n    n::::nu::::u    u::::u  \n");
printf("M::::::M    M:::::M    M::::::M a::::aaaa::::::a  i::::i  n::::n    n::::n     M::::::M    M:::::M    M::::::Me::::::eeeeeeeeeee    n::::n    n::::nu::::u    u::::u  \n");
printf("M::::::M     MMMMM     M::::::Ma::::a    a:::::a  i::::i  n::::n    n::::n     M::::::M     MMMMM     M::::::Me:::::::e             n::::n    n::::nu:::::uuuu:::::u  \n");
printf("M::::::M               M::::::Ma::::a    a:::::a i::::::i n::::n    n::::n     M::::::M               M::::::Me::::::::e            n::::n    n::::nu:::::::::::::::uu\n");
printf("M::::::M               M::::::Ma:::::aaaa::::::a i::::::i n::::n    n::::n     M::::::M               M::::::M e::::::::eeeeeeee    n::::n    n::::n u:::::::::::::::u\n");
printf("M::::::M               M::::::M a::::::::::aa:::ai::::::i n::::n    n::::n     M::::::M               M::::::M  ee:::::::::::::e    n::::n    n::::n  uu::::::::uu:::u\n");
printf("MMMMMMMM               MMMMMMMM  aaaaaaaaaa  aaaaiiiiiiii nnnnnn    nnnnnn     MMMMMMMM               MMMMMMMM    eeeeeeeeeeeeee    nnnnnn    nnnnnn    uuuuuuuu  uuuu\n");

printf("\n\t\t\t\t\t\t\t\t\t   << Select a Menu >>\n");

	printf("\n========================================================================================================================================================================");
	printf("\n{{                                                                                MENU                                                                                }}");
	printf("\n========================================================================================================================================================================");
	printf("\n{{\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      }}");
	printf("\n{{\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      }}");
    printf("\n{{\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      }}");
	printf("\n{{\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      }}");
	printf("\n{{\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      }}");
	printf("\n{{\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      }}");
	printf("\n{{\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      }}");
	printf("\n{{\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      }}");
    printf("\n{{\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      }}");
	printf("\n{{\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      }}");
	printf("\n{{\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      }}");
	printf("\n{{\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      }}");
	printf("\n{{\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      }}");
	printf("\n========================================================================================================================================================================");

	printf("\n\n\n\n\n\n");
printf("________________________________________________________________________________________________________________________________________________________________________\n\n");
printf("[ENT] - Submit    [UP/DOWN] - Change Value \t ");

gotoxy(70,26);
arrowHere(1,position); printf(" [1] Quick Play");
gotoxy(70,28);
arrowHere(2,position); printf(" [2] Select Level");
gotoxy(70,30);
arrowHere(3,position); printf(" [3] Instruction");
gotoxy(70,32);
arrowHere(4,position); printf(" [4] Leaderboard");
gotoxy(70,34);
arrowHere(5,position); printf(" [5] About");
gotoxy(70,36);
arrowHere(6,position); printf(" [6] Exit");

gotoxy(50,46);
keyPressed = getch();

if(keyPressed == 80 && position != MAX) {
    position++;
}
else if(keyPressed == 72 && position != MIN) {
    position--;
}
else {
    position = position;
}}

if (position==1) {
    logic(position);
}
if (position==2) {
    lev();
}
if (position==3) {
    prosedur();
}
if (position==4) {
    lead();
}
if (position==5) {
    about();
}
if (position==6) {
    exit(0);
}
}

void prosedur () {
    system("cls");
printf("==========================================================================  Test Your Logic  ==========================================================================\n\n");

    FILE *fp;
    fp=fopen("border1.txt", "r");
    do
    {
		ser=getc(fp);
		printf("%c", ser);
	}
    while(ser!=EOF);
	fflush(stdin);

gotoxy(33,10);
printf("SAMPLE RUN");
gotoxy(33,12);
printf("THIS IS THE GAME OF MIND BLOGGER.");
gotoxy(33,14);
printf("I AM GOING TO PICK A NUMBER BETWEEN 0000 - 5555.");
gotoxy(33,15);
printf("YOU ARE TO TRY TO GET THAT NUMBER IN THE MINIMAL");
gotoxy(33,16);
printf("AMOUNT OF GUESSES.");
gotoxy(33,18);
printf("EVERYTIME YOU GUESS A NUMBER I WILL GIVE YOU CLUES AS TO");
gotoxy(33,19);
printf("HOW CLOSE YOU ARE TO THE NUMBER I GIVE. THIS CLUES WILL");
gotoxy(33,20);
printf("BE 'BLACK' AND 'WHITE'. IF I SAY 'BLACK', THEN THAT MEANS THAT ONE OF THE DIGITS IS CORRECT BUT NOT IN");
gotoxy(33,21);
printf("THE RIGHT ORDER. IF I SAY 'WHITE', THEN YOU HAVE A CORRECT DIGIT IN THE CORRECT ORDER. IT IS UP TO YOU");
gotoxy(33,22);
printf("TO LOGICALLY FIGURE WHAT NUMBERS ARE CORRECT.\n\n");
gotoxy(33,24);
printf("FOR EXAMPLE:    THE CORRECT NUMBER IS 2510");
gotoxy(33,26);
printf("YOUR GUESS:     YOUR NUMBERS OF CHOICE IS 4213");
gotoxy(33,28);
printf("YOU WOULD GET A 'BLACK' BECAUSE THE NUMBER 2 IS CORRECT BUT IN THE WRONG ORDER, AND ALSO 'WHITE' BECAUSE");
gotoxy(33,29);
printf("YOU GUESSED THE NUMBER 1 WHICH WAS THE CORRECT NUMBER IN THE CORRECT ORDER.");
gotoxy(33,30);
printf("AND ALSO NOTE, THAT YOUR NUMBER OF CHOICE, SHOULD NOT BE REPEATABLE");
gotoxy(33,32);
printf("MORE THAN 1 PEOPLE CAN PLAY. TRY TO SEE WHO CAN BE THE BEST.");
gotoxy(33,34);
printf("/****************************************** GOOD LUCK **********************************************/");
gotoxy(33,36);
system("Pause");
menu();
}

void about () {
    system("cls");

    printf("==========================================================================  Test Your Logic  ==========================================================================\n\n");

    FILE *fp;
    fp=fopen("border2.txt", "r");
    do
    {
		ser=getc(fp);
		printf("%c", ser);
	}
    while(ser!=EOF);
	fflush(stdin);

    gotoxy(33,16);
    printf("This game is one of logic. You try to guess the number the computer has selected based on\n");
    gotoxy(33,17);
    printf("clues given to you by the computer. A clue is given to you after each of your guess.\n");
    gotoxy(33,18);
    printf("The clue will be 'black' and 'white'. if the computer says 'black'', that means one of the digits\n");
    gotoxy(33,19);
    printf("is correct but not in the right order. if the computer says 'white', that means one of the\n");
    gotoxy(33,20);
    printf("digits is correct, and has the right order.\n");
	gotoxy(33,21);
	printf("Pembuat Program : ");
	gotoxy(33,23);
	printf("Ramadhan Kalih Sewu [1806148826]");
	gotoxy(33,24);
	printf("Hanvey Xavero [1806200135]");
	gotoxy(33,26);
	printf("Almamater : ");
	gotoxy(33,27);
	printf("Universitas Indonesia");
	gotoxy(33,29);
	printf("/****************************************** GOOD LUCK **********************************************/");
    gotoxy(33,31);
	system("pause");
	menu();

}

void sel1 (pg) {

//pembatasan input angka berdasarkan levelnya
if (pg==3) {
mx = 8;
mn = 1;
}
else if (pg==2) {
mx = 8;
mn = 3;
}
else if (pg==1) {
mx = 8;
mn = 5;
}

#define ESC 27
keyPressed = 0;
angka(pg);
while (1) {

repeat :
keyPressed = getch();
system("cls");

if (keyPressed==27){
    lose();
}

if (keyPressed==13){
        if (x==y || x==z || x==a || y==z || y==a || z==a) {
        rpt=1;
        angka(pg);
        system("Pause");
        system("cls");
        rpt=0;
        sel1(pg);
        }
    if(pg==1){
    kerja(pg, kol);}
    if(pg==2){
    kerja1(pg, kol);}
    if(pg==3){
    kerja2(pg, kol);}

}

    if(keyPressed == 77 && kol != 4) {
        kol++;
        if (kol==1){
            sel1(pg);
            }
        if (kol==2){
            sel2(pg);
            }
        if (kol==3){
            sel3(pg);
            }
        if (kol==4){
            sel4(pg);
            }
    }
    else if(keyPressed == 75 && kol != 1) {
        kol--;
        if (kol==1){
            sel1(pg);
            }
        if (kol==2){
            sel2(pg);
            }
        if (kol==3){
            sel3(pg);
            }
        if (kol==4){
            sel4(pg);
            }
    }
    else if(kol == 4 || kol == 1) {
        kol = kol;
    }

if(keyPressed == 80 && pos != mx) {
    pos++;
    x--;
}
else if(keyPressed == 72 && pos != mn) {
    pos--;
    x++;
}
else if(pos==mx || pos==mn){
    pos = pos;
}

else {
goto repeat;
}
angka(pg, nama);
}
}

void sel2 (pg) {

//pembatasan input angka berdasarkan levelnya
if (pg==3) {
mx = 8;
mn = 1;
}
else if (pg==2) {
mx = 8;
mn = 3;
}
else if (pg==1) {
mx = 8;
mn = 5;
}

#define ESC 27
keyPressed = 0,
angka(pg);
while (1) {

repeat :
keyPressed = getch();
system("cls");

if (keyPressed==27){
    lose();
}

if (keyPressed==13){
        if (x==y || x==z || x==a || y==z || y==a || z==a) {
        rpt=1;
        angka(pg);
        system("Pause");
        system("cls");
        rpt=0;
        sel2(pg);
        }
    if(pg==1){
    kerja(pg, kol);}
    if(pg==2){
    kerja1(pg, kol);}
    if(pg==3){
    kerja2(pg, kol);}
}

       if(keyPressed == 77 && kol != 4) {
        kol++;
        if (kol==1){
            sel1(pg);
            }
        if (kol==2){
            sel2(pg);
            }
        if (kol==3){
            sel3(pg);
            }
        if (kol==4){
            sel4(pg);
            }
    }
    else if(keyPressed == 75 && kol != 1) {
        kol--;
        if (kol==1){
            sel1(pg);
            }
        if (kol==2){
            sel2(pg);
            }
        if (kol==3){
            sel3(pg);
            }
        if (kol==4){
            sel4(pg);
            }
    }
    else if(kol == 4 || kol == 1) {
        kol = kol;
    }

if(keyPressed == 80 && pos1 != mx) {
    pos1++;
    y--;
}
else if(keyPressed == 72 && pos1 != mn) {
    pos1--;
    y++;
}
else if(pos1==mx || pos1==mn){
    pos1 = pos1;
}
else {
goto repeat;
}
angka(pg, nama);

}
kerja();
}

void sel3 (pg) {

//pembatasan input angka berdasarkan levelnya
if (pg==3) {
mx = 8;
mn = 1;
}
else if (pg==2) {
mx = 8;
mn = 3;
}
else if (pg==1) {
mx = 8;
mn = 5;
}

#define ESC 27
keyPressed = 0,
angka(pg);
while (1) {

repeat :
keyPressed = getch();
system("cls");

if (keyPressed==27){
    lose();
}

if (keyPressed==13){
        if (x==y || x==z || x==a || y==z || y==a || z==a) {
        rpt=1;
        angka(pg);
        system("Pause");
        system("cls");
        rpt=0;
        sel3(pg);
        }
    if(pg==1){
    kerja(pg, kol);}
    if(pg==2){
    kerja1(pg, kol);}
    if(pg==3){
    kerja2(pg, kol);}
}

       if(keyPressed == 77 && kol != 4) {
        kol++;
        if (kol==1){
            sel1(pg);
            }
        if (kol==2){
            sel2(pg);
            }
        if (kol==3){
            sel3(pg);
            }
        if (kol==4){
            sel4(pg);
            }
    }
    else if(keyPressed == 75 && kol != 1) {
        kol--;
        if (kol==1){
            sel1(pg);
            }
        if (kol==2){
            sel2(pg);
            }
        if (kol==3){
            sel3(pg);
            }
        if (kol==4){
            sel4(pg);
            }
    }
    else if(kol == 4 || kol == 1) {
        kol = kol;
    }

if(keyPressed == 80 && pos2 != mx) {
    pos2++;
    z--;
}
else if(keyPressed == 72 && pos2 != mn) {
    pos2--;
    z++;
}
else if(pos2==mx || pos2==mn){
    pos2 = pos2;
}
else {
goto repeat;
}
angka(pg, nama);
}
kerja();
}

void sel4 (pg) {

//pembatasan input angka berdasarkan levelnya
if (pg==3) {
mx = 8;
mn = 1;
}
else if (pg==2) {
mx = 8;
mn = 3;
}
else if (pg==1) {
mx = 8;
mn = 5;
}

#define ESC 27
keyPressed = 0,
angka(pg);
while (1) {

repeat :
keyPressed = getch();
system("cls");

if (keyPressed==27){
    lose();
}

if (keyPressed==13){
        if (x==y || x==z || x==a || y==z || y==a || z==a) {
        rpt=1;
        angka(pg);
        system("Pause");
        system("cls");
        rpt=0;
        sel4(pg);
        }
    if(pg==1){
    kerja(pg, kol);}
    if(pg==2){
    kerja1(pg, kol);}
    if(pg==3){
    kerja2(pg, kol);}
}

        if(keyPressed == 77 && kol != 4) {
        kol++;
        if (kol==1){
            sel1(pg);
            }
        if (kol==2){
            sel2(pg);
            }
        if (kol==3){
            sel3(pg);
            }
        if (kol==4){
            sel4(pg);
            }
    }
    else if(keyPressed == 75 && kol != 1) {
        kol--;
        if (kol==1){
            sel1(pg);
            }
        if (kol==2){
            sel2(pg);
            }
        if (kol==3){
            sel3(pg);
            }
        if (kol==4){
            sel4(pg);
            }
    }
    else if(kol == 4 || kol == 1) {
        kol = kol;
    }

if(keyPressed == 80 && pos3 != mx) {
    pos3++;
    a--;
}
else if(keyPressed == 72 && pos3 != mn) {
    pos3--;
    a++;
}
else if(pos3==mx || pos3==mn){
    pos3 = pos3;
}
else {
goto repeat;
}
angka(pg, nama);
}
kerja();
}

void angka(pg){
        printf("==========================================================================  Test Your Logic  ==========================================================================");
    if (pg==1) {
        printf("\n\nLevel = Easy");}
    if (pg==2) {
        printf("\n\nLevel = Medium");}
    if (pg==3) {
        printf("\n\nLevel = Hard");}
    printf("\nPlayer Name = %s", nama);
    printf("\n\n\n\n\n\n\n");
    printf("Message Box :\n");
    mgbox(pg);

    //YOUR INPUT:
    printf("\t\t\t\t\t\t\t\t\t      YOUR INPUT :\n\n\n");
    printf("\t\t\t\t\t\t   1st -> (%d)", x);
    printf("\t      2nd -> (%d)", y);
    printf("\t3rd -> (%d)", z);
    printf("\t   4th -> (%d)", a);
    printf("\n\n\n");



    //WHERE"S MY SELECT
    SetColorAndBackground(4,15);
    if (kol==1) {
        printf("\t\t\t\t\t\t[<]=== VV ===[>]");
    }
    if (kol==2) {
        printf("\t\t\t\t\t\t\t\t   [<]=== VV ===[>]");
    }
    if (kol==3) {
        printf("\t\t\t\t\t\t\t\t\t\t     [<]=== VV ===[>]");
    }
    if (kol==4) {
        printf("\t\t\t\t\t\t\t\t\t\t\t\t        [<]=== VV ===[>]");
    }
    SetColorAndBackground(0,15);

    printf("\n\n");

if (pos==8 && kol==1) {
    printf("\t\t\t\t\t\t()============()\n\n");
    printf("\t\t\t\t\t\t     #####   \n");
    printf("\t\t\t\t\t\t    ##   ##  \n");
    printf("\t\t\t\t\t\t   ##     ##        ()============()   ()============()   ()============()\n");
    printf("\t\t\t\t\t\t   ##     ##          {----------}       {----------}       {----------}\n");
    printf("\t\t\t\t\t\t   ##     ##        ()============()   ()============()   ()============()\n");
    printf("\t\t\t\t\t\t    ##   ##  \n");
    printf("\t\t\t\t\t\t     #####   \n");
    printf("\n\t\t\t\t\t\t()============()\n");
}
    if (pos1==8 && kol==2) {
    printf("\t\t\t\t\t\t                   ()============()\n\n");
    printf("\t\t\t\t\t\t                        #####   \n");
    printf("\t\t\t\t\t\t                       ##   ##  \n");
    printf("\t\t\t\t\t\t()============()      ##     ##        ()============()   ()============()\n");
    printf("\t\t\t\t\t\t  {----------}        ##     ##          {----------}       {----------}  \n");
    printf("\t\t\t\t\t\t()============()      ##     ##        ()============()   ()============()\n");
    printf("\t\t\t\t\t\t                       ##   ##  \n");
    printf("\t\t\t\t\t\t                        #####   \n");
    printf("\n\t\t\t\t\t\t                   ()============()\n");
}
    if (pos2==8 && kol==3) {
    printf("\t\t\t\t\t\t                                     ()============()\n\n");
    printf("\t\t\t\t\t\t                                          #####   \n");
    printf("\t\t\t\t\t\t                                         ##   ##  \n");
    printf("\t\t\t\t\t\t()============()   ()============()     ##     ##         ()============()  \n");
    printf("\t\t\t\t\t\t  {----------}       {----------}       ##     ##           {----------}    \n");
    printf("\t\t\t\t\t\t()============()   ()============()     ##     ##         ()============()  \n");
    printf("\t\t\t\t\t\t                                         ##   ##  \n");
    printf("\t\t\t\t\t\t                                          #####   \n");
    printf("\n\t\t\t\t\t\t                                     ()============()\n");
}
    if (pos3==8 && kol==4) {
    printf("\t\t\t\t\t\t                                                        ()============()\n\n");
    printf("\t\t\t\t\t\t                                                             #####   \n");
    printf("\t\t\t\t\t\t                                                            ##   ##  \n");
    printf("\t\t\t\t\t\t()============()   ()============()   ()============()     ##     ## \n");
    printf("\t\t\t\t\t\t  {----------}       {----------}       {----------}       ##     ## \n");
    printf("\t\t\t\t\t\t()============()   ()============()   ()============()     ##     ## \n");
    printf("\t\t\t\t\t\t                                                            ##   ##  \n");
    printf("\t\t\t\t\t\t                                                             #####   \n");
    printf("\n\t\t\t\t\t\t                                                        ()============()\n");
}
if (pos==7 && kol==1) {
    printf("\t\t\t\t\t\t()============()\n\n");
    printf("\t\t\t\t\t\t     ####   \n");
    printf("\t\t\t\t\t\t       ##   \n");
    printf("\t\t\t\t\t\t       ##           ()============()   ()============()   ()============()\n");
    printf("\t\t\t\t\t\t       ##             {----------}       {----------}       {----------}\n");
    printf("\t\t\t\t\t\t       ##           ()============()   ()============()   ()============()\n");
    printf("\t\t\t\t\t\t       ##   \n");
    printf("\t\t\t\t\t\t     ###### \n");
    printf("\n\t\t\t\t\t\t()============()\n");
}
        if (pos1==7 && kol==2) {
    printf("\t\t\t\t\t\t                   ()============()\n\n");
    printf("\t\t\t\t\t\t                        ####   \n");
    printf("\t\t\t\t\t\t                          ##   \n");
    printf("\t\t\t\t\t\t()============()          ##           ()============()   ()============()\n");
    printf("\t\t\t\t\t\t  {----------}            ##             {----------}       {----------}  \n");
    printf("\t\t\t\t\t\t()============()          ##           ()============()   ()============()\n");
    printf("\t\t\t\t\t\t                          ##   \n");
    printf("\t\t\t\t\t\t                        ###### \n");
    printf("\n\t\t\t\t\t\t                   ()============()\n");
        }
        if (pos2==7 && kol==3) {
    printf("\t\t\t\t\t\t                                     ()============()\n\n");
    printf("\t\t\t\t\t\t                                          ####   \n");
    printf("\t\t\t\t\t\t                                            ##   \n");
    printf("\t\t\t\t\t\t()============()   ()============()         ##            ()============() \n");
    printf("\t\t\t\t\t\t  {----------}       {----------}           ##              {----------}   \n");
    printf("\t\t\t\t\t\t()============()   ()============()         ##            ()============() \n");
    printf("\t\t\t\t\t\t                                            ##   \n");
    printf("\t\t\t\t\t\t                                          ###### \n");
    printf("\n\t\t\t\t\t\t                                     ()============()\n");
        }
                if (pos3==7 && kol==4) {
    printf("\t\t\t\t\t\t                                                        ()============()\n\n");
    printf("\t\t\t\t\t\t                                                             ####   \n");
    printf("\t\t\t\t\t\t                                                               ##   \n");
    printf("\t\t\t\t\t\t()============()   ()============()   ()============()         ##   \n");
    printf("\t\t\t\t\t\t  {----------}       {----------}       {----------}           ##   \n");
    printf("\t\t\t\t\t\t()============()   ()============()   ()============()         ##   \n");
    printf("\t\t\t\t\t\t                                                               ##   \n");
    printf("\t\t\t\t\t\t                                                             ###### \n");
    printf("\n\t\t\t\t\t\t                                                        ()============()\n");
        }
if (pos==6 && kol==1) {
    printf("\t\t\t\t\t\t()============()\n\n");
    printf("\t\t\t\t\t\t     #######  \n");
    printf("\t\t\t\t\t\t    ##     ## \n");
    printf("\t\t\t\t\t\t           ##       ()============()   ()============()   ()============()\n");
    printf("\t\t\t\t\t\t     #######          {----------}       {----------}       {----------}\n");
    printf("\t\t\t\t\t\t    ##              ()============()   ()============()   ()============()\n");
    printf("\t\t\t\t\t\t    ##        \n");
    printf("\t\t\t\t\t\t    ######### \n");
    printf("\n\t\t\t\t\t\t()============()\n");
}
if (pos1==6 && kol==2) {
    printf("\t\t\t\t\t\t                   ()============()\n\n");
    printf("\t\t\t\t\t\t                        #######  \n");
    printf("\t\t\t\t\t\t                       ##     ## \n");
    printf("\t\t\t\t\t\t()============()              ##       ()============()   ()============()  \n");
    printf("\t\t\t\t\t\t  {----------}          #######          {----------}       {----------}    \n");
    printf("\t\t\t\t\t\t()============()       ##              ()============()   ()============()  \n");
    printf("\t\t\t\t\t\t                       ##        \n");
    printf("\t\t\t\t\t\t                       ######### \n");
    printf("\n\t\t\t\t\t\t                   ()============()\n");
}
if (pos2==6 && kol==3) {
    printf("\t\t\t\t\t\t                                     ()============()\n\n");
    printf("\t\t\t\t\t\t                                          #######  \n");
    printf("\t\t\t\t\t\t                                         ##     ## \n");
    printf("\t\t\t\t\t\t()============()   ()============()             ##        ()============() \n");
    printf("\t\t\t\t\t\t  {----------}       {----------}         #######           {----------}   \n");
    printf("\t\t\t\t\t\t()============()   ()============()      ##               ()============() \n");
    printf("\t\t\t\t\t\t                                         ##        \n");
    printf("\t\t\t\t\t\t                                         ######### \n");
    printf("\n\t\t\t\t\t\t                                     ()============()\n");
}
if (pos3==6 && kol==4) {
    printf("\t\t\t\t\t\t                                                        ()============()\n\n");
    printf("\t\t\t\t\t\t                                                             #######  \n");
    printf("\t\t\t\t\t\t                                                            ##     ## \n");
    printf("\t\t\t\t\t\t()============()   ()============()   ()============()             ## \n");
    printf("\t\t\t\t\t\t  {----------}       {----------}       {----------}         #######  \n");
    printf("\t\t\t\t\t\t()============()   ()============()   ()============()      ##        \n");
    printf("\t\t\t\t\t\t                                                            ##        \n");
    printf("\t\t\t\t\t\t                                                            ######### \n");
    printf("\n\t\t\t\t\t\t                                                        ()============()\n");
}
if (pos==5 && kol==1) {
    printf("\t\t\t\t\t\t()============()\n\n");
    printf("\t\t\t\t\t\t     #######  \n");
    printf("\t\t\t\t\t\t    ##     ## \n");
    printf("\t\t\t\t\t\t           ##       ()============()   ()============()   ()============()\n");
    printf("\t\t\t\t\t\t     #######          {----------}       {----------}       {----------}\n");
    printf("\t\t\t\t\t\t           ##       ()============()   ()============()   ()============()\n");
    printf("\t\t\t\t\t\t    ##     ## \n");
    printf("\t\t\t\t\t\t     #######  \n");
    printf("\n\t\t\t\t\t\t()============()\n");
}
if (pos1==5 && kol==2) {
    printf("\t\t\t\t\t\t                   ()============()\n\n");
    printf("\t\t\t\t\t\t                        #######  \n");
    printf("\t\t\t\t\t\t                       ##     ## \n");
    printf("\t\t\t\t\t\t()============()              ##       ()============()   ()============()  \n");
    printf("\t\t\t\t\t\t  {----------}          #######          {----------}       {----------}     \n");
    printf("\t\t\t\t\t\t()============()              ##       ()============()   ()============()   \n");
    printf("\t\t\t\t\t\t                       ##     ## \n");
    printf("\t\t\t\t\t\t                        #######  \n");
    printf("\n\t\t\t\t\t\t                   ()============()\n");
}
if (pos2==5 && kol==3) {
    printf("\t\t\t\t\t\t                                     ()============()\n\n");
    printf("\t\t\t\t\t\t                                          #######  \n");
    printf("\t\t\t\t\t\t                                         ##     ## \n");
    printf("\t\t\t\t\t\t()============()   ()============()             ##        ()============()  \n");
    printf("\t\t\t\t\t\t  {----------}       {----------}         #######           {----------}    \n");
    printf("\t\t\t\t\t\t()============()   ()============()             ##        ()============()  \n");
    printf("\t\t\t\t\t\t                                         ##     ## \n");
    printf("\t\t\t\t\t\t                                          #######  \n");
    printf("\n\t\t\t\t\t\t                                     ()============()\n");
}
if (pos3==5 && kol==4) {
    printf("\t\t\t\t\t\t                                                        ()============()\n\n");
    printf("\t\t\t\t\t\t                                                             #######  \n");
    printf("\t\t\t\t\t\t                                                            ##     ## \n");
    printf("\t\t\t\t\t\t()============()   ()============()   ()============()             ## \n");
    printf("\t\t\t\t\t\t  {----------}       {----------}       {----------}         #######  \n");
    printf("\t\t\t\t\t\t()============()   ()============()   ()============()             ## \n");
    printf("\t\t\t\t\t\t                                                            ##     ## \n");
    printf("\t\t\t\t\t\t                                                             #######  \n");
    printf("\n\t\t\t\t\t\t                                                        ()============()\n");
}
if (pos==4 && kol==1) {
    printf("\t\t\t\t\t\t()============()\n\n");
    printf("\t\t\t\t\t\t    ##        \n");
    printf("\t\t\t\t\t\t    ##    ##  \n");
    printf("\t\t\t\t\t\t    ##    ##        ()============()   ()============()   ()============()\n");
    printf("\t\t\t\t\t\t    ##    ##          {----------}       {----------}       {----------}\n");
    printf("\t\t\t\t\t\t    #########       ()============()   ()============()   ()============()\n");
    printf("\t\t\t\t\t\t          ##  \n");
    printf("\t\t\t\t\t\t          ##  \n");
    printf("\n\t\t\t\t\t\t()============()\n");
}
if (pos1==4 && kol==2) {
    printf("\t\t\t\t\t\t                   ()============()\n\n");
    printf("\t\t\t\t\t\t                       ##        \n");
    printf("\t\t\t\t\t\t                       ##    ##  \n");
    printf("\t\t\t\t\t\t()============()       ##    ##        ()============()   ()============()  \n");
    printf("\t\t\t\t\t\t  {----------}         ##    ##          {----------}       {----------}    \n");
    printf("\t\t\t\t\t\t()============()       #########       ()============()   ()============()  \n");
    printf("\t\t\t\t\t\t                             ##  \n");
    printf("\t\t\t\t\t\t                             ##  \n");
    printf("\n\t\t\t\t\t\t                   ()============()\n");
}
if (pos2==4 && kol==3) {
    printf("\t\t\t\t\t\t                                     ()============()\n\n");
    printf("\t\t\t\t\t\t                                         ##        \n");
    printf("\t\t\t\t\t\t                                         ##    ##  \n");
    printf("\t\t\t\t\t\t()============()   ()============()      ##    ##         ()============() \n");
    printf("\t\t\t\t\t\t  {----------}       {----------}        ##    ##           {----------}   \n");
    printf("\t\t\t\t\t\t()============()   ()============()      #########        ()============() \n");
    printf("\t\t\t\t\t\t                                              ##  \n");
    printf("\t\t\t\t\t\t                                              ##  \n");
    printf("\n\t\t\t\t\t\t                                     ()============()\n");
}
if (pos3==4 && kol==4) {
    printf("\t\t\t\t\t\t                                                        ()============()\n\n");
    printf("\t\t\t\t\t\t                                                            ##        \n");
    printf("\t\t\t\t\t\t                                                            ##    ##  \n");
    printf("\t\t\t\t\t\t()============()   ()============()   ()============()      ##    ##  \n");
    printf("\t\t\t\t\t\t  {----------}       {----------}       {----------}        ##    ##  \n");
    printf("\t\t\t\t\t\t()============()   ()============()   ()============()      ######### \n");
    printf("\t\t\t\t\t\t                                                                 ##   \n");
    printf("\t\t\t\t\t\t                                                                 ##   \n");
    printf("\n\t\t\t\t\t\t                                                        ()============()\n");
}
if (pos==3 & kol==1) {
    printf("\t\t\t\t\t\t()============()\n\n");
    printf("\t\t\t\t\t\t    ########  \n");
    printf("\t\t\t\t\t\t    ##        \n");
    printf("\t\t\t\t\t\t    ##              ()============()   ()============()   ()============()\n");
    printf("\t\t\t\t\t\t    #######           {----------}       {----------}       {----------}\n");
    printf("\t\t\t\t\t\t          ##        ()============()   ()============()   ()============()\n");
    printf("\t\t\t\t\t\t    ##    ##  \n");
    printf("\t\t\t\t\t\t     ######   \n");
    printf("\n\t\t\t\t\t\t()============()\n");
}
if (pos1==3 & kol==2) {
    printf("\t\t\t\t\t\t                   ()============()\n\n");
    printf("\t\t\t\t\t\t                       ########  \n");
    printf("\t\t\t\t\t\t                       ##        \n");
    printf("\t\t\t\t\t\t()============()       ##              ()============()   ()============()   \n");
    printf("\t\t\t\t\t\t  {----------}         #######           {----------}       {----------}     \n");
    printf("\t\t\t\t\t\t()============()             ##        ()============()   ()============()   \n");
    printf("\t\t\t\t\t\t                       ##    ##  \n");
    printf("\t\t\t\t\t\t                        ######   \n");
    printf("\n\t\t\t\t\t\t                   ()============()\n");
}
if (pos2==3 & kol==3) {
    printf("\t\t\t\t\t\t                                     ()============()\n\n");
    printf("\t\t\t\t\t\t                                         ########  \n");
    printf("\t\t\t\t\t\t                                         ##        \n");
    printf("\t\t\t\t\t\t()============()   ()============()      ##               ()============()   \n");
    printf("\t\t\t\t\t\t  {----------}       {----------}        #######            {----------}     \n");
    printf("\t\t\t\t\t\t()============()   ()============()            ##         ()============()   \n");
    printf("\t\t\t\t\t\t                                         ##    ##  \n");
    printf("\t\t\t\t\t\t                                          ######   \n");
    printf("\n\t\t\t\t\t\t                                     ()============()\n");
}
if (pos3==3 & kol==4) {
    printf("\t\t\t\t\t\t                                                        ()============()\n\n");
    printf("\t\t\t\t\t\t                                                            ########  \n");
    printf("\t\t\t\t\t\t                                                            ##        \n");
    printf("\t\t\t\t\t\t()============()   ()============()   ()============()      ##        \n");
    printf("\t\t\t\t\t\t  {----------}       {----------}       {----------}        #######   \n");
    printf("\t\t\t\t\t\t()============()   ()============()   ()============()            ##  \n");
    printf("\t\t\t\t\t\t                                                            ##    ##  \n");
    printf("\t\t\t\t\t\t                                                             ######   \n");
    printf("\n\t\t\t\t\t\t                                                        ()============()\n");
}
if (pos==2 && kol==1) {
    printf("\t\t\t\t\t\t()============()\n\n");
    printf("\t\t\t\t\t\t     #######  \n");
    printf("\t\t\t\t\t\t    ##     ## \n");
    printf("\t\t\t\t\t\t    ##              ()============()   ()============()   ()============()\n");
    printf("\t\t\t\t\t\t    ########          {----------}       {----------}       {----------}\n");
    printf("\t\t\t\t\t\t    ##     ##       ()============()   ()============()   ()============()\n");
    printf("\t\t\t\t\t\t    ##     ## \n");
    printf("\t\t\t\t\t\t     #######  \n");
    printf("\n\t\t\t\t\t\t()============()\n");
}
if (pos1==2 && kol==2) {
    printf("\t\t\t\t\t\t                   ()============()\n\n");
    printf("\t\t\t\t\t\t                        #######  \n");
    printf("\t\t\t\t\t\t                       ##     ## \n");
    printf("\t\t\t\t\t\t()============()       ##              ()============()   ()============()  \n");
    printf("\t\t\t\t\t\t  {----------}         ########          {----------}       {----------}    \n");
    printf("\t\t\t\t\t\t()============()       ##     ##       ()============()   ()============()  \n");
    printf("\t\t\t\t\t\t                       ##     ## \n");
    printf("\t\t\t\t\t\t                        #######  \n");
    printf("\n\t\t\t\t\t\t                   ()============()\n");
}
if (pos2==2 && kol==3) {
    printf("\t\t\t\t\t\t                                     ()============()\n\n");
    printf("\t\t\t\t\t\t                                          #######  \n");
    printf("\t\t\t\t\t\t                                         ##     ## \n");
    printf("\t\t\t\t\t\t()============()   ()============()      ##               ()============() \n");
    printf("\t\t\t\t\t\t  {----------}       {----------}        ########           {----------}   \n");
    printf("\t\t\t\t\t\t()============()   ()============()      ##     ##        ()============() \n");
    printf("\t\t\t\t\t\t                                         ##     ## \n");
    printf("\t\t\t\t\t\t                                          #######  \n");
    printf("\n\t\t\t\t\t\t                                     ()============()\n");
}
if (pos3==2 && kol==4) {
    printf("\t\t\t\t\t\t                                                        ()============()\n\n");
    printf("\t\t\t\t\t\t                                                             #######  \n");
    printf("\t\t\t\t\t\t                                                            ##     ## \n");
    printf("\t\t\t\t\t\t()============()   ()============()   ()============()      ##        \n");
    printf("\t\t\t\t\t\t  {----------}       {----------}       {----------}        ########  \n");
    printf("\t\t\t\t\t\t()============()   ()============()   ()============()      ##     ## \n");
    printf("\t\t\t\t\t\t                                                            ##     ## \n");
    printf("\t\t\t\t\t\t                                                             #######  \n");
    printf("\n\t\t\t\t\t\t                                                        ()============()\n");
}
if (pos==1 && kol==1) {
    printf("\t\t\t\t\t\t()============()\n\n");
    printf("\t\t\t\t\t\t    ########  \n");
    printf("\t\t\t\t\t\t    ##    ##  \n");
    printf("\t\t\t\t\t\t        ##          ()============()   ()============()   ()============()\n");
    printf("\t\t\t\t\t\t       ##             {----------}       {----------}       {----------}\n");
    printf("\t\t\t\t\t\t      ##            ()============()   ()============()   ()============()\n");
    printf("\t\t\t\t\t\t      ##      \n");
    printf("\t\t\t\t\t\t      ##      \n");
    printf("\n\t\t\t\t\t\t()============()\n");
}
if (pos1==1 && kol==2) {
    printf("\t\t\t\t\t\t                   ()============()\n\n");
    printf("\t\t\t\t\t\t                       ########  \n");
    printf("\t\t\t\t\t\t                       ##    ##  \n");
    printf("\t\t\t\t\t\t()============()           ##          ()============()   ()============() \n");
    printf("\t\t\t\t\t\t  {----------}            ##             {----------}       {----------}   \n");
    printf("\t\t\t\t\t\t()============()         ##            ()============()   ()============() \n");
    printf("\t\t\t\t\t\t                         ##      \n");
    printf("\t\t\t\t\t\t                         ##      \n");
    printf("\n\t\t\t\t\t\t                   ()============()\n");
}
if (pos2==1 && kol==3) {
    printf("\t\t\t\t\t\t                                     ()============()\n\n");
    printf("\t\t\t\t\t\t                                         ########  \n");
    printf("\t\t\t\t\t\t                                         ##    ##  \n");
    printf("\t\t\t\t\t\t()============()   ()============()          ##           ()============() \n");
    printf("\t\t\t\t\t\t  {----------}       {----------}           ##              {----------}   \n");
    printf("\t\t\t\t\t\t()============()   ()============()        ##             ()============() \n");
    printf("\t\t\t\t\t\t                                           ##      \n");
    printf("\t\t\t\t\t\t                                           ##      \n");
    printf("\n\t\t\t\t\t\t                                     ()============()\n");
}
if (pos3==1 && kol==4) {
    printf("\t\t\t\t\t\t                                                        ()============()\n\n");
    printf("\t\t\t\t\t\t                                                            ########  \n");
    printf("\t\t\t\t\t\t                                                            ##    ##  \n");
    printf("\t\t\t\t\t\t()============()   ()============()   ()============()          ##    \n");
    printf("\t\t\t\t\t\t  {----------}       {----------}       {----------}           ##     \n");
    printf("\t\t\t\t\t\t()============()   ()============()   ()============()        ##      \n");
    printf("\t\t\t\t\t\t                                                              ##      \n");
    printf("\t\t\t\t\t\t                                                              ##      \n");
    printf("\n\t\t\t\t\t\t                                                        ()============()\n");
}
printf("\n\n\n\n\n\n\n\n\n");
printf("________________________________________________________________________________________________________________________________________________________________________\n\n");
printf("[ESC] - Exit    [ENT] - Submit    [UP/DOWN] - Change Value    [LEFT/RIGHT] - Change Position \t ");
}

void mgbox(pg) {
SetColorAndBackground(2,15);
    printf("________________________________________________________________________________________________________________________________________________________________________\n\n");
    if (rpt==1) {
        printf("%s\n", inf[3]);
    }
    else if (pg==1) {
    printf("%s\n", inf[0]);
    }
    else if (pg==2) {
    printf("%s\n", inf[1]);
    }
    else if (pg==3) {
    printf("%s\n", inf[2]);
    }
    printf("________________________________________________________________________________________________________________________________________________________________________\n\n");
SetColorAndBackground(0,15);
}

void lose() {
        if (PlaySound(TEXT("lose.wav"), NULL, SND_ASYNC | SND_FILENAME)) {
        kol=1;
        printf("==========================================================================  Test Your Logic  ==========================================================================");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t\t           ");
        printf("== %s, you failed ==\n", nama);

        score = 0;

        x=0, y=0, z=0, a=0, pos = 8, pos1 = 8, pos2 = 8, pos3 = 8, score = 100, scoremedium=150, scorehard=150, n=1;
        FILE *fp;
        fp=fopen("fail.txt", "r");
        do
        {
		ser=getc(fp);
		printf("%c", ser);
        }
        while(ser!=EOF);
        fflush(stdin);
        Sleep(2000);
        printf("\n");
        printf("\t\t\t\t\t\t\t\t     ");
        system("pause");
		menu();
        }
}

int kerja(pg, kol) {

    if (x==kumpulan[0] && y==kumpulan[1] && z==kumpulan[2] && a==kumpulan[3]){
            if (PlaySound(TEXT("bgm-win.wav"), NULL, SND_ASYNC | SND_FILENAME)) {
                printf("==========================================================================  Test Your Logic  ==========================================================================");
                printf("\n\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t\t\t\t    ");
                printf("== Well done, %s!!! You got the number in %d guesses ==\n", nama, n);
                printf("\t\t\t\t\t\t\t\t              ");
                printf("# SCORE: %d #\n\n", score);
                FILE *out=fopen("final.csv","a");
                fprintf(out,"%s,%d,EASY\n",nama, score);
                fclose(out);
                x=0, y=0, z=0, a=0, pos = 8, pos1 = 8, pos2 = 8, pos3 = 8, score = 100, n=1;
                farewell();
            }
    }
    else {
        if (x==kumpulan[0]) {
        printf(" WHITE ");}
    else{
    for (i=0;i<4;i++){
        if (x==kumpulan[i]){
        printf(" BLACK ");}
    }}
    if (y==kumpulan[1]) {
        printf(" WHITE ");
    }
    else{
    for (i=0;i<4;i++){
        if (y==kumpulan[i]){
        printf(" BLACK ");}
    }}
    if (z==kumpulan[2]) {
        printf(" WHITE ");
    }
    else{
    for (i=0;i<4;i++){
        if (z==kumpulan[i]){
        printf(" BLACK ");}
    }}
    if (a==kumpulan[3]) {
        printf(" WHITE ");
    }
    else{
    for (i=0;i<4;i++){
        if (a==kumpulan[i]){
        printf(" BLACK ");}
    }}
    n = n+1;
    score = score-10;
    system("pause");
    system("cls");
    fflush(stdin);
    if (kol==1) {
    sel1(pg);}
    else if (kol==2) {
    sel2(pg);}
    else if (kol==3) {
    sel3(pg);}
    else if (kol==4) {
    sel4(pg);}
    }
}

int logic(pg){
    system("cls");
    if (PlaySound(TEXT("bgm-play.wav"), NULL, SND_ASYNC | SND_LOOP | SND_FILENAME))

#define ESC 27
keyPressed = 0;

        printf("==========================================================================  Test Your Logic  ==========================================================================");
    if (pg==1) {
        printf("\n\nLevel = Easy");}
    else if (pg==2) {
        printf("\n\nLevel = Medium");}
    else if (pg==3) {
        printf("\n\nLevel = Hard");}

	gotoxy(0,35);
	printf("\n\n\n\n\n\n\n\n\n");
    printf("________________________________________________________________________________________________________________________________________________________________________\n\n");
    printf("[ESC] - Back    [ENT] - Submit    [KEY] - Write \t ");

    gotoxy(52,20);
    printf("--------------------------------------------------------------------");
    gotoxy(52,22);
    printf("--------------------------------------------------------------------");
	gotoxy(52,21);
	printf("Insert Your Name : ");
	scanf(" %s", &nama); fflush(stdin);

    for (i=0; i<4; ++i){
    kumpulan[i]= i;
    }
    for (i = 0; i < 4; ++i) {    // shuffle array
    int temp = kumpulan[i];
    int randomIndex = rand() % 3;
    kumpulan[i]           = kumpulan[randomIndex];
    kumpulan[randomIndex] = temp;
}
    system("cls");
    sel1(pg);
    fflush(n);
}

int logic1(pg){
    system("cls");
    if (PlaySound(TEXT("bgm-play.wav"), NULL, SND_ASYNC | SND_LOOP | SND_FILENAME)) {
   printf("==========================================================================  Test Your Logic  ==========================================================================");
    if (pg==1) {
        printf("\n\nLevel = Easy");}
    else if (pg==2) {
        printf("\n\nLevel = Medium");}
    else if (pg==3) {
        printf("\n\nLevel = Hard");}

	gotoxy(0,35);
	printf("\n\n\n\n\n\n\n\n\n");
    printf("________________________________________________________________________________________________________________________________________________________________________\n\n");
    printf("[ESC] - Back    [ENT] - Submit    [KEY] - Write \t ");

    gotoxy(52,20);
    printf("--------------------------------------------------------------------");
    gotoxy(52,22);
    printf("--------------------------------------------------------------------");
	gotoxy(52,21);
	printf("Insert Your Name : ");
	scanf("%s", &nama); fflush(stdin);

    for (i=0; i<6; ++i){
    kumpulan[i]= i;
    }
    for (i = 0; i < 6; ++i) {    // shuffle array
    int temp = kumpulan[i];
    int randomIndex = rand() % 3;
    kumpulan[i]           = kumpulan[randomIndex];
    kumpulan[randomIndex] = temp;
}
    system("cls");
    sel1(pg);
    fflush(n);
    }
}

int kerja1(pg, kol){

    if (x==kumpulan[0] && y==kumpulan[1] && z==kumpulan[2] && a==kumpulan[3]){
        if (PlaySound(TEXT("bgm-win.wav"), NULL, SND_ASYNC | SND_FILENAME)) {
                printf("==========================================================================  Test Your Logic  ==========================================================================");
                printf("\n\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t\t\t\t    ");
                printf("== Well done, %s!!! You got the number in %d guesses ==\n", nama, n);
                printf("\t\t\t\t\t\t\t\t              ");
                printf("# SCORE: %d #\n\n", scoremedium);

        FILE *out=fopen("final.csv","a");
        fprintf(out,"%s,%d,MEDIUM\n",nama, scoremedium);
        fclose(out);
        x=0, y=0, z=0, a=0, pos = 8, pos1 = 8, pos2 = 8, pos3 = 8, scoremedium = 150, n=1;
    	farewell();
        }
    }
    else{
    if (x==kumpulan[0]) {
        printf(" WHITE ");
    }
    else{
    for (i=0;i<4;i++){
        if (x==kumpulan[i]){
        printf(" BLACK ");}
    }}
    if (y==kumpulan[1]) {
        printf(" WHITE ");
    }
    else{
    for (i=0;i<4;i++){
        if (y==kumpulan[i]){
        printf(" BLACK ");}
    }}
    if (z==kumpulan[2]) {
        printf(" WHITE ");
    }
    else{
    for (i=0;i<4;i++){
        if (z==kumpulan[i]){
        printf(" BLACK ");}
    }}
    if (a==kumpulan[3]) {
        printf(" WHITE ");
    }
    else{
    for (i=0;i<4;i++){
        if (a==kumpulan[i]){
        printf(" BLACK ");}
    }}
    n = n+1;
    scoremedium = scoremedium-10;
    system("pause");
    system("cls");
    fflush(stdin);
        if (kol==1) {
    sel1(pg);}
    if (kol==2) {
    sel2(pg);}
    if (kol==3) {
    sel3(pg);}
    if (kol==4) {
    sel4(pg);}
    }
}


int logic2(pg){
    system("cls");
    if (PlaySound(TEXT("bgm-play.wav"), NULL, SND_ASYNC | SND_LOOP | SND_FILENAME)) {
       printf("==========================================================================  Test Your Logic  ==========================================================================");
    if (pg==1) {
        printf("\n\nLevel = Easy");}
    else if (pg==2) {
        printf("\n\nLevel = Medium");}
    else if (pg==3) {
        printf("\n\nLevel = Hard");}

	gotoxy(0,35);
	printf("\n\n\n\n\n\n\n\n\n");
    printf("________________________________________________________________________________________________________________________________________________________________________\n\n");
    printf("[ESC] - Back    [ENT] - Submit    [KEY] - Write \t ");

    gotoxy(52,20);
    printf("--------------------------------------------------------------------");
    gotoxy(52,22);
    printf("--------------------------------------------------------------------");
	gotoxy(52,21);
	printf("Insert Your Name : ");
	scanf("%s", &nama); fflush(stdin);
	//printf("Masukkan umur : "); scanf("%d", &umur); fflush(stdin);

    for (i=0; i<8; ++i) {
    kumpulan[i]= i;
    }
    for (i = 0; i < 8; ++i) {    // shuffle array
    int temp = kumpulan[i];
    int randomIndex = rand() % 3;
    kumpulan[i]           = kumpulan[randomIndex];
    kumpulan[randomIndex] = temp;
}
    system("cls");
    sel1(pg);
    fflush(n);
    }
}

int kerja2(pg, kol){
    if (x==kumpulan[0] && y==kumpulan[1] && z==kumpulan[2] && a==kumpulan[3]){
        if (PlaySound(TEXT("bgm-win.wav"), NULL, SND_ASYNC | SND_FILENAME)) {
                printf("==========================================================================  Test Your Logic  ==========================================================================");
                printf("\n\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t\t\t\t    ");
                printf("== Well done, %s!!! You got the number in %d guesses ==\n", nama, n);
                printf("\t\t\t\t\t\t\t\t              ");
                printf("# SCORE: %d #\n\n", scorehard);

        FILE *out=fopen("final.csv","a");
        fprintf(out,"%s,%d,HARD\n",nama, scorehard);
        fclose(out);
    	x=0, y=0, z=0, a=0, pos = 8, pos1 = 8, pos2 = 8, pos3 = 8, scorehard = 200, n=1;
    	farewell();
        }
    }
    else{
    if (x==kumpulan[0]) {
        printf(" WHITE ");
    }
    else{
    for (i=0;i<4;i++){
        if (x==kumpulan[i]){
        printf(" BLACK ");}
    }}
    if (y==kumpulan[1]) {
        printf(" WHITE ");
    }
    else{
    for (i=0;i<4;i++){
        if (y==kumpulan[i]){
        printf(" BLACK ");}
    }}
    if (z==kumpulan[2]) {
        printf(" WHITE ");
    }
    else{
    for (i=0;i<4;i++){
        if (z==kumpulan[i]){
        printf(" BLACK ");}
    }}
    if (a==kumpulan[3]) {
        printf(" WHITE ");
    }
    else{
    for (i=0;i<4;i++){
        if (a==kumpulan[i]){
        printf(" BLACK ");}
    }}
    n = n+1;
    scorehard = scorehard-10;
    system("pause");
    system("cls");
    fflush(stdin);
        if (kol==1) {
    sel1(pg);}
    if (kol==2) {
    sel2(pg);}
    if (kol==3) {
    sel3(pg);}
    if (kol==4) {
    sel4(pg);}
    }
}

int lead()
{
	system("cls");
	printf("==========================================================================  Test Your Logic  ==========================================================================\n\n");
	printf("Daftar Leaderboard\n\n");
	char buffer[1024] ;
    char *record,*line;
    int i=0,j=0;
    int mat[100][100];
    FILE *fstream = fopen("final.csv","r");

	if(fstream == NULL)   {
    gotoxy(50,20);
    printf("<<======================================================>>\n");
	gotoxy(50,22);
	printf("              Belum ada yang Mencetak Skor");
	gotoxy(50,23);
	printf("   Jadilah pencetak Skor pertama dalam Test Your Logic!");
    gotoxy(50,25);
    printf("<<======================================================>>\n\n");
    gotoxy(50,27);
    system ("pause");
    menu();
    }

	while((line=fgets(buffer,sizeof(buffer),fstream))!=NULL)
    {
		record = strtok(line,";");
		while(record != NULL)
			{
			 printf("data : %s",record) ;
//here you can put the record into the array as per your requirement.
			 mat[i][j++] = atoi(record) ;
			 record = strtok(NULL,";");
			}
		++i ;
	}
printf("\n");
system ("Pause");
menu();
}

void gotoxy(ex, ye)
{
COORD coord;
coord.X = ex;
coord.Y = ye;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
