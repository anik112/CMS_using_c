#include<stdio.h>
#include<io.h>
#include<windows.h>
#include<ctype.h>



void gotoxy(int x,int y){
    COORD coord;
    coord.X=x;
    coord.Y=y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}


struct std_reg{
    long int st_id;
    char name[30];
    char f_name[30];
    char g_name[30];
    unsigned long int g_number;
    char gender;
    char st_dpt[16];
    char st_city[20];
    char st_admi_yer[10];
    unsigned long int s_number;
}sut_reg;


struct tec_reg{
    long int tec_id;
    char tec_name[15];
    char gndr;
    char education[10];
    char te_dpt[4];
    char te_city[10];
    char te_post[15];
    unsigned long int te_number;
}tuc_reg;


struct fee{
    unsigned long int roll;
    char name[30];
    char semester[10];
    float sem_fee;
    float other_fee;
    char other_cos[50];
    float total;
    float arrears;
}fee_col;


struct reciv_fee{
    unsigned long int roll;
    char name[30];
    char date[65];
    float total;
    float recive;
    float arrears;
}rec_fee;


struct employ_ac{

    unsigned long int epl;
    char name[30];
    char post[30];
    char date[65];
    float toatl;
    float recive;
    float arrears;
}empt_reg;



struct other_ac{

    char other_cos[100];
    float other_amau;
}other_fee;



struct result_st{
    unsigned long int rol;
    char name[20];
    char gpa[4];
    char dipt[20];
    char res_dat[10];
}st_result;


/* Drawing table.........*/

void draw(int lth){
    int i;
    for(i=0;i<lth;i++){
        printf("%c",219);
    }
}


void draw_th(int thlt){
    int i;
    for(i=0;i<thlt;i++){
        printf("\n\t\t%c",178);
    }
}


void draw_sp(int splth){
    int i;
    for(i=0;i<splth;i++){
        printf(" ");
    }
}


int loginsystem(int key){     ///  Admin penal

    int i,j;

    if(key==1){

    gotoxy(16,4);
    printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
    gotoxy(27,6);
   // SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
    printf("COLLEGE MENAGEMENT SYSTEM");

    gotoxy(25,10);
    draw(30);
    for(i=10;i<=15;i++){
        gotoxy(25,i);
        printf("%c",219);
        gotoxy(54,i);
        printf("%c",219);
    }
    gotoxy(25,16);
    draw(30);

    gotoxy(25,18);
    draw(30);
    for(i=18;i<=23;i++){
        gotoxy(25,i);
        printf("%c",219);
        gotoxy(54,i);
        printf("%c",219);
    }
    gotoxy(25,24);
    draw(30);

    gotoxy(25,26);
    draw(30);
    for(i=26;i<=31;i++){
        gotoxy(25,i);
        printf("%c",219);
        gotoxy(54,i);
        printf("%c",219);
    }
    gotoxy(25,32);
    draw(30);


    gotoxy(33,13);
    printf("1.ADMIN LOGIN");
    gotoxy(32,21);
    printf("2.ACCOUNTS LOGIN");
    gotoxy(32,29);
    printf("3.MONITORING LOGIN");

    gotoxy(27,35);
    printf("Please type your chose: ");

    int ik;

    scanf("%d",&ik);

    if(ik==1){
        system("cls");
       return 1213;
    }
    if(ik==2){
        system("cls");
        return 1214;
    }
    if(ik==3){
        system("cls");
        return 1215;
    }



    }
}

// ..................................

int login(int key){            /// login page
    printf("\n\n\n\n\t\t");
    if(key==1213){
    FILE *pas;
    int j,k=1;
    char get_pas[20],com_pas[20];

    pas=fopen("pass.txt","r");
    fscanf(pas,"%s",&com_pas);
js:
        printf("\n\n\t\t\tPlease type administration password:\n\n\t\t\t\t");
        gets(get_pas);
        if((k=strcmp(get_pas,com_pas))== 0){
         system("cls");
         return 111;
        }
        else{
            system("cls");
            goto js;
        }

    fclose(pas);
    }


    if(key==1214){
    FILE *pas;
    int j,k=1;
    char get_pas[20],com_pas[20];

    pas=fopen("pass.txt","r");
    fscanf(pas,"%s",&com_pas);

os:
    printf("\n\n\t\t\tPlease type administration password:\n\n\t\t\t\t");
        gets(get_pas);
        if((k=strcmp(get_pas,com_pas))==0){
         system("cls");
         return 121;
        }
        else{
            system("cls");
            goto os;
        }
    fclose(pas);
    }


    if(key==1215){
    FILE *pas;
    int j,k=1;
    char get_pas[20],com_pas[20];

    pas=fopen("pass.txt","r");
    fscanf(pas,"%s",&com_pas);
ui:
        printf("\n\n\t\t\tPlease type administration password:\n\n\t\t\t\t");
        gets(get_pas);
        if((k=strcmp(get_pas,com_pas))==0){
            system("cls");
           // main_menu(1);
         return 131;
        }
        else{
            system("cls");
            goto ui;
        }

    fclose(pas);
    }
}


/// ....................................................

int set_password(int key){         /// set password
    if(key==02){
    FILE* opfile;
    int i,j,o;
    char get_pass[20];


    gotoxy(16,2);
    for(j=0;j<60;j++){
        printf("%c",177);
    }
    for(j=0;j<10;j++){
            printf("\n\t\t%c",178);
        for(o=0;o<58;o++){
            printf(" ");
        }
    printf("%c",178);
    }
    printf("\n\t\t");
        for(j=0;j<60;j++){
        printf("%c",177);
    }
    gotoxy(39,2);
    printf(" SET PASSWORD ");
    gotoxy(20,4);
    printf("1 %c Admin password",222);
    gotoxy(20,5);
    printf("2 %c Account password",222);
    gotoxy(20,6);
    printf("3 %c Monitoring password",222);
    gotoxy(20,8);
    printf("4 %c Back menu",222);
    gotoxy(23,13);
    printf("[ INSTITUTE OF COMPUTER SIENCE & TECHNOLOGY ]");

    int ts=0;
    gotoxy(30,11);
    printf("Please type select number: ");
    scanf("%d",&ts);
    fflush(stdin);


    if(ts==1){

     gotoxy(16,2);
    for(j=0;j<60;j++){
        printf("%c",177);
    }
    for(j=0;j<10;j++){
            printf("\n\t\t%c",178);
        for(o=0;o<58;o++){
            printf(" ");
        }
    printf("%c",178);
    }
    printf("\n\t\t");
        for(j=0;j<60;j++){
        printf("%c",177);
    }
    gotoxy(35,2);
    printf(" ADMIN SET PASSWORD ");
    gotoxy(23,13);
    printf("[ INSTITUTE OF COMPUTER SIENCE & TECHNOLOGY ]");
    gotoxy(20,4);
    printf("Please type new password:\t");
    gotoxy(30,5);
    gets(get_pass);

//    opfile=fopen("pass.txt","w");
//    fprintf(opfile,"%s",get_pass);
//    fclose(opfile);
    gotoxy(30,8);
    printf("......SAVE PASSWORD......");
    gotoxy(30,9);
    printf("-------------------------");

    int k=0;
    gotoxy(30,11);
    printf("Go To Back [ 0 ] AND Enter: ");
    scanf("%d",&k);
    if(k==0){
        set_password(02);
    }
    }




    if(ts==2){

    gotoxy(16,2);
    for(j=0;j<60;j++){
        printf("%c",177);
    }
    for(j=0;j<10;j++){
            printf("\n\t\t%c",178);
        for(o=0;o<58;o++){
            printf(" ");
        }
    printf("%c",178);
    }
    printf("\n\t\t");
        for(j=0;j<60;j++){
        printf("%c",177);
    }
    gotoxy(35,2);
    printf(" ACCOUNT SET PASSWORD ");
    gotoxy(23,13);
    printf("[ INSTITUTE OF COMPUTER SIENCE & TECHNOLOGY ]");
    gotoxy(20,4);
    printf("Please type new password:\t");
    gotoxy(30,5);
    gets(get_pass);

//    opfile=fopen("pass.txt","w");
//    fprintf(opfile,"%s",get_pass);
//    fclose(opfile);
    gotoxy(30,8);
    printf("......SAVE PASSWORD......");
    gotoxy(30,9);
    printf("-------------------------");

    int k=0;
    gotoxy(30,11);
    printf("Go To Back [ 0 ] AND Enter: ");
    scanf("%d",&k);
    if(k==0){
        set_password(02);
    }
    }



    if(ts==3){

    gotoxy(16,2);
    for(j=0;j<60;j++){
        printf("%c",177);
    }
    for(j=0;j<10;j++){
            printf("\n\t\t%c",178);
        for(o=0;o<58;o++){
            printf(" ");
        }
    printf("%c",178);
    }
    printf("\n\t\t");
        for(j=0;j<60;j++){
        printf("%c",177);
    }
    gotoxy(30,2);
    printf(" MONITRONING SET PASSWORD ");
    gotoxy(23,13);
    printf("[ INSTITUTE OF COMPUTER SIENCE & TECHNOLOGY ]");
    gotoxy(20,4);
    printf("Please type new password:\t");
    gotoxy(30,5);
    gets(get_pass);

//    opfile=fopen("pass.txt","w");
//    fprintf(opfile,"%s",get_pass);
//    fclose(opfile);
    gotoxy(30,8);
    printf("......SAVE PASSWORD......");
    gotoxy(30,9);
    printf("-------------------------");

    int k=0;
    gotoxy(30,11);
    printf("Go To Back [ 0 ] AND Enter: ");
    scanf("%d",&k);
    if(k==0){
        set_password(02);
    }

    if(ts==4){
        return 303;
    }
    }
}
}

/// ...................................................

int close_pro(int key){
    if(key==006){

     int i,j,o;
     char ar[41]={"=>> Anik paul -- ' Semester 7th' -- 'CMT'"};

    /* Fast table draw */

    gotoxy(16,2);
    for(j=0;j<60;j++){
        printf("%c",177);
    }
    for(j=0;j<3;j++){
            printf("\n\t\t%c",178);
        for(o=0;o<58;o++){
            printf(" ");
        }
    printf("%c",178);
    }
    printf("\n\t\t");
        for(j=0;j<60;j++){
        printf("%c",177);
    }
    gotoxy(22,4);
    printf("[ INSTITUTE OF COMPUTER SIENCE & TECHNOLOGY ]");

    /* second table draw */

    gotoxy(16,9);
    for(j=0;j<60;j++){
        printf("%c",177);
    }
    for(j=0;j<10;j++){
            printf("\n\t\t%c",178);
        for(o=0;o<58;o++){
            printf(" ");
        }
    printf("%c",178);
    }
    printf("\n\t\t");
        for(j=0;j<60;j++){
        printf("%c",177);
    }

    /* Write loop show name */

    gotoxy(40,9);
    printf(" Good Bey! ");
    gotoxy(20,11);
    printf("Programmer:");


    gotoxy(22,13);
    for(i=0;i<41;i++){
        Sleep(60);
        printf("%c", ar[i]);
    }

    gotoxy(28,20);
    printf(" Closing College Management System ");
    printf("\n\n\n");
    return 0;
    }
}


/// ....................................................


int main_menu(int gelth){          /// main_menu page
    int i=0,j=0,gt_val;

    if(gelth==1){
    fflush(stdin);
    gt_val=0;

     printf("\n\t\t");
     draw(50);
     while(i<21){
        j=1;
        draw_th(j);

        if(i==0){
            draw_sp(20);
            printf("MAIN MENU");
            draw_sp(19);
            printf("%c",178);
        }
        if(i==1){
            draw(48);
            printf("%c",178);
        }
        if(i==3){
            printf("\t%c%c 1.Addmission",178,177);
            draw_sp(26);
            printf("%c",178);
        }
        if(i==5){
            printf("\t%c%c 2.Student & Teacher info",178,177);
            draw_sp(14);
            printf("%c",178);
        }
        if(i==7){
            printf("\t%c%c 3.Finance",178,177);
            draw_sp(29);
            printf("%c",178);
        }
        if(i==9){
            printf("\t%c%c 4.Menage User",178,177);
            draw_sp(25);
            printf("%c",178);
        }
        if(i==11){
            printf("\t%c%c 5.Time table",178,177);
            draw_sp(26);
            printf("%c",178);
        }
        if(i==13){
            printf("\t%c%c 6.Result student",178,177);
            draw_sp(22);
            printf("%c",178);
        }
        if(i==15){
            printf("\t%c%c 7.Old student & teacher",178,177);
            draw_sp(15);
            printf("%c",178);
        }
        if(i==18){
            printf("\t\t%C 0.Close apps",200);
            draw_sp(19);
            printf("%c",178);
        }

        if(i==19){
            draw(48);
            printf("%c",178);
        }
        if(i==20){
            printf("   Institute Of Computer Since & Technology");
            draw_sp(5);
            printf("%c",178);
        }
        if(i==2 || i==4 || i==6 || i==8 || i==10 || i==12 || i==14 || i==16 || i==17){
            draw_sp(48);
            printf("%c",178);
        }

        i++;
     }
     printf("\n\t\t");
     draw(50);

     for( ; ; ){
     printf("\n\t\tPlease type selected number:  ");
     scanf("%d",&gt_val);
     fflush(stdin);
     if(gt_val==1){
        system("cls");
       // addmissiton(01);
       return 901;
     }
     if(gt_val==2){
        system("cls");
       // studen_and_teacher_info(02);
       return 902;
     }
     if(gt_val==3){
            system("cls");
            return 903;
     }
     if(gt_val==4){
        system("cls");
       // menage_user(04);
       return 904;
     }
     if(gt_val==5){
        system("cls");
        return 905;
     }
     if(gt_val==6){
        system("cls");
        return 906;
     }
     if(gt_val==7){
        system("cls");
        return 907;
     }
     if(gt_val==0){
        system("cls");
        return 004;
     }
     else{
        continue;
     }

    }
 }
}



///  ....................................................


int account_main_menu(int key){

    if(key==12){

  int i=0,j=0,gt_val,gelth;

     printf("\n\t\t");
     draw(50);
     while(i<21){
        j=1;
        draw_th(j);

        if(i==0){
            draw_sp(18);
            printf("ACCOUNT MAIN MENU");
            draw_sp(13);
            printf("%c",178);
        }
        if(i==1){
            draw(48);
            printf("%c",178);
        }
        if(i==5){
            printf("\t%c%c 1.Student account",178,177);
            draw_sp(21);
            printf("%c",178);
        }
        if(i==7){
            printf("\t%c%c 2.Employ account",178,177);
            draw_sp(22);
            printf("%c",178);
        }
        if(i==9){
            printf("\t%c%c 3.Income",178,177);
            draw_sp(30);
            printf("%c",178);
        }
        if(i==11){
          printf("\t%c%c 4.Expenses",178,177);
          draw_sp(28);
          printf("%c",178);
        }
        if(i==18){
            printf("\t\t%C 0.Close apps",200);
            draw_sp(19);
            printf("%c",178);
        }

        if(i==19){
            draw(48);
            printf("%c",178);
        }
        if(i==20){
            printf("   Institute Of Computer Since & Technology");
            draw_sp(5);
            printf("%c",178);
        }
        if(i==2 || i==4 || i==6 || i==3 || i==8  || i==10 || i==12 || i==13 || i==14 || i==15 || i==16 || i==17){
            draw_sp(48);
            printf("%c",178);
        }

        i++;
     }
     printf("\n\t\t");
     draw(50);

     for( ; ; ){
     printf("\n\t\tPlease type selected number:  ");
     scanf("%d",&gt_val);
     fflush(stdin);
     if(gt_val==1){
        system("cls");
        return 915;
     }
     if(gt_val==2){
        system("cls");
        return 916;
     }
     if(gt_val==3){
        system("cls");
        return 917;
     }
     if(gt_val==4){
        system("cls");
        return 918;
     }
     if(gt_val==0){
        system("cls");
        return 919;
     }
     else{
        continue;
     }

        }
    }
}




/// ....................................................


int addmissiton(int kr){           ///  addmission page.

    int i=0,j=0,get_v;
    if(kr==01){
    printf("\n\t\t");

     draw(50);
     while(i<20){
        j=1;
        draw_th(j);

        if(i==0){
            draw_sp(19);
            printf("ADDMISSION");
            draw_sp(19);
            printf("%c",178);
        }
        if(i==1){
            draw(48);
            printf("%c",178);
        }
        if(i==3){
            printf("\t%c%c 1.Student registration",178,177);
            draw_sp(16);
            printf("%c",178);
        }
        if(i==5){
            printf("\t%c%c 2.Employ registration",178,177);
            draw_sp(17);
            printf("%c",178);
        }

        if(i==17){
            printf("\t\t> 0.Back main menu ");
            draw_sp(14);
            printf("%c",178);
        }

        if(i==18){
            draw(48);
            printf("%c",178);
        }
        if(i==19){
            printf("   Institute Of Computer Since & Technology");
            draw_sp(5);
            printf("%c",178);
        }
        if(i==2||i==4||i==6||i==7||i==8||i==9||i==10||i==11||i==12||i==13||i==14 || i==15 || i==16 || i==20){
            draw_sp(48);
            printf("%c",178);
        }
        i++;
     }
     printf("\n\t\t");
     draw(50);
     int l=1;

     for( ; ; ){
     printf("\n\t\tPlease type selected number:  ");
     scanf("%d",&get_v);
     fflush(stdin);
     if(get_v==1){
        system("cls");
        //student_reg(001);
        return 001;
        break;
     }
     if(get_v==2){
        system("cls");
        //teacher_reg(002);
        return 002;
        break;
     }
     if(get_v==0){
        system("cls");
        return 12;
     }
     else{
        continue;
            }
        }
        }
}



/// ....................................................



int student_reg(int ky){           /// student registration

    FILE *sutd;
    char codi;
    int i,lk;

    if(ky==001){

    printf("\n\t\t\tSTUDENT REGISTRATION\n");
    printf("\n\t\t\t====================");

st_reveu:

    sutd=fopen("student_info.dat","a");
    fflush(sutd);


    printf("\n\n\t\tStudent id: ");
    scanf("%lu",&sut_reg.st_id);
    fflush(stdin);

    printf("\n\n\t\tStudent name [MAX 28W]: ");
    gets(sut_reg.name);

    printf("\n\n\t\tFather name [MAX 28W]: ");
    gets(sut_reg.f_name);

    printf("\n\n\t\tGuidance name [MAX 28W]: ");
    gets(sut_reg.g_name);

    printf("\n\n\t\tGuidance number [MAX 10N]: 0");
    scanf("%lu",&sut_reg.g_number);
    fflush(stdin);

    printf("\n\n\t\tGender [M || F]: ");
    scanf("%c",&sut_reg.gender);
    fflush(stdin);

    printf("\n\n\t\tDepartment [MAX 15W]: ");
    gets(sut_reg.st_dpt);

    printf("\n\n\t\tCity [MEX 18W]: ");
    gets(sut_reg.st_city);

    printf("\n\n\t\tAdmission year [MAX 9W]: ");
    gets(sut_reg.st_admi_yer);

    printf("\n\n\t\tStudent number [MAX 10N]: 0");
    scanf("%lu",&sut_reg.s_number);
    fflush(stdin);

    fwrite(&sut_reg,sizeof(sut_reg),1,sutd);
    fflush(sutd);
    printf("\n\t\t[******   Information add Successful   ******]\n");
    printf("\n\t-----------------------------------------------------------------");

    printf("\n\n\t\tAdd more information [Y/N]: ");
    scanf("%c",&codi);
    fflush(stdin);

    if(codi=='y'){
        fclose(sutd);
        system("cls");
        goto st_reveu;
    }
    else{
        fclose(sutd);
        system("cls");
       // addmissiton(01);
       return 101;
    }
    }
}


/// ....................................................


int student_serc(int key){         /// search by student roll number

     FILE* serc_st;
    long int g_id;
    char gt_di;

    if(key==0001){
    printf("\n\t\t\t\tSEARCH STUDENT INFORMATION\n");
    printf("\n\t\t\t\t============================");

revo:
    serc_st=fopen("student_info.dat","r");

    g_id=0;
    sut_reg.st_id=0;
    printf("\n\nSearch by Student Roll number: ");
    scanf("%lu",&g_id);
    fflush(stdin);

    while(fread(&sut_reg,sizeof(sut_reg),1,serc_st)){
        //fflush(serc_st);
        if(sut_reg.st_id==g_id){
            printf("\n\n\n\t\tStudent name: %s",sut_reg.name);
            printf("\n\n\t\tFather name: %s",sut_reg.f_name);
            printf("\n\n\t\tGuidance name: %s",sut_reg.g_name);
            printf("\n\n\t\tGuidance number: 0%lu",sut_reg.g_number);
            printf("\n\n\t\tGander: %c",sut_reg.gender);
            printf("\n\n\t\tDepartment: %s",sut_reg.st_dpt);
            printf("\n\n\t\tCity: %s",sut_reg.st_city);
            printf("\n\n\t\tAdmission year: %s",sut_reg.st_admi_yer);
            printf("\n\n\t\tStudent number: %lu",sut_reg.s_number);
        }
//        else if(){
//            printf("\n\t\tSorry, can't find..\n");
//
//        }
    }
    printf("\n\n\t-------------------------------------------");
    printf("\n\n\t\t\tShow more information [Y/N]: ");
    scanf("%c",&gt_di);
    if(gt_di=='y'){
        fclose(serc_st);
        fflush(stdin);
        system("cls");
        goto revo;
    }
    else{
        fclose(serc_st);
        system("cls");
        //studen_and_teacher_info(02);
        return 110;
    }
    }

}


/// ....................................................


int teacher_reg(int kay){          /// Employ registration
    FILE *tc_rg;
    char g_v;

    if(kay==002){

    printf("\n\t\t\tEMPOLY REGISTRATION\n");
    printf("\n\t\t\t===================");

te_reveu:
        tc_rg=fopen("teacher_info.dat","a");

        printf("\n\n\t\tEmploy id: ");
        scanf("%lu",&tuc_reg.tec_id);
        fflush(stdin);

        printf("\n\n\t\tEmploy name: ");
        gets(tuc_reg.tec_name);

        printf("\n\n\t\tGender: ");
        scanf("%c",&tuc_reg.gndr);
        fflush(stdin);

        printf("\n\n\t\tEmploy post: ");
        gets(tuc_reg.te_post);

        printf("\n\n\t\tEducation: ");
        gets(tuc_reg.education);

        printf("\n\n\t\tJoining Department: ");
        gets(tuc_reg.te_dpt);

        printf("\n\n\t\tCity: ");
        gets(tuc_reg.te_city);

        printf("\n\n\t\tMobile number: ");
        scanf("%lu",&tuc_reg.te_number);
        fflush(stdin);

        fwrite(&tuc_reg,sizeof(tuc_reg),1,tc_rg);
        fflush(tc_rg);

        printf("\n\t\t[******   Information add Successful   ******]\n");
        printf("\n\t-----------------------------------------------------------------");
        printf("\n\n\t\tAdd more information [Y/N]: ");

        char codi;
        scanf("%c",&codi);
        fflush(stdin);

        if(codi=='y'){
            fclose(tc_rg);
            system("cls");
            goto te_reveu;
        }
    else{
        fclose(tc_rg);
            system("cls");
           // addmissiton(01);
           return 102;
    }

    }
}


/// ....................................................


int teacher_serc(int key){             /// search by teacher id number

    FILE *tc_red;
    int k_t;

    if(key==0002){

    printf("\n\t\t\t\tSEARCH EMPLOY INFORMATION\n");
    printf("\n\t\t\t\t===========");

te_reveu:
    k_t=0;
    tuc_reg.tec_id=0;
    tc_red=fopen("teacher_info.dat","r");


    printf("\n\nSearch by Teacher Id number: ");
    scanf("%d",&k_t);
    fflush(stdin);

    while(fread(&tuc_reg,sizeof(tuc_reg),1,tc_red)){
    if(tuc_reg.tec_id==k_t){
    printf("\n\n\n\t\tTeacher id: %lu",tuc_reg.tec_id);
    printf("\n\n\t\tTeacher name: %s",tuc_reg.tec_name);
    printf("\n\n\t\tGender: %c",tuc_reg.gndr);
    printf("\n\n\t\tEducation: %s",tuc_reg.education);
    printf("\n\n\t\tJoining Department: %s",tuc_reg.te_dpt);
    printf("\n\n\t\tCity: %s",tuc_reg.te_city);
    printf("\n\\n\t\tTeacher number: %lu",tuc_reg.te_number);
    }
    }
    char gt_v;
    printf("\n\n\t-------------------------------------------");
    printf("\n\nShow more information [Y/N]: ");
    scanf("%c",&gt_v);

    if(gt_v=='y'){
        fflush(stdin);
        fclose(tc_red);
        system("cls");
        goto te_reveu;
    }
    else{
        fclose(tc_red);
        system("cls");
      //  studen_and_teacher_info(02);
        return 26;
    }
    }
}


/// ....................................................


int student_and_teacher_info(int key){          ///   student and teacher information

    int i=0,j=0,get_v;

    if(key==02){
    printf("\n\t\t");

     draw(50);
     while(i<20){
        j=1;
        draw_th(j);

        if(i==0){
            draw_sp(10);
            printf("Student & Teacher information");
            draw_sp(9);
            printf("%c",178);
        }
        if(i==1){
            draw(48);
            printf("%c",178);
        }
        if(i==3){
            printf("\t%c%c 1.Student information",178,177);
            draw_sp(17);
            printf("%c",178);
        }
        if(i==5){
            printf("\t%C%c 2.Employ information",178,177);
            draw_sp(17);
            printf("%c",178);
        }

        if(i==7){
            printf("\t%c%c 3.View student",178,177);
            draw_sp(24);
            printf("%c",178);
        }
        if(i==9){
            printf("\t%c%c 4.View Employ",178,177);
            draw_sp(25);
            printf("%c",178);
        }

        if(i==17){
            printf("\t\t> 0.Back main menu");
            draw_sp(15);
            printf("%c",178);
        }

        if(i==18){
            draw(48);
            printf("%c",178);
        }
        if(i==19){
            printf("   Institute Of Computer Since & Technology");
            draw_sp(5);
            printf("%c",178);
        }
        if(i==2||i==4||i==6|| i==8|| i==10||i==11||i==12||i==13||i==14 || i==15 || i==16 || i==20){
            draw_sp(48);
            printf("%c",178);
        }
        i++;
     }
     printf("\n\t\t");
     draw(50);
     int l=1;

     for( ; ; ){
     printf("\n\t\tPlease type selected number:  ");
     scanf("%d",&get_v);
     fflush(stdin);
     if(get_v==1){
        system("cls");
       // student_serc(0001);
        return 0001;
        break;
     }
     if(get_v==2){
        system("cls");
        //teacher_serc(0002);
        return 0002;
        break;
     }
     if(get_v==3){
        system("cls");
        //view_st(0003);
        return 0003;
        break;
     }
     if(get_v==4){
        system("cls");
        //view_te(0004);
        return 0004;
        break;
     }
     if(get_v==0){
        system("cls");
     //   main_menu(l);
     return 0005;
        break;
     }
     else{
        continue;
     }
     }
    }
}


/// ....................................................


int view_st(int key){              /// view all student information

    FILE* serc_st;
    char gt_di;

    if(key==0003){

    printf("\n\t\t\tALL STUDENT INFORMATION");
    printf("\n\t\t\t=======================\n\n");

    serc_st=fopen("student_info.dat","r");

    while(fread(&sut_reg,sizeof(sut_reg),1,serc_st) != 0){

            printf("\n\n\t\tStudent [REG] number: < %lu >",sut_reg.st_id);
            printf("\n\n\t\tStudent name: [ %s ]",sut_reg.name);
            printf("\n\n\t\tFather name: [ %s ]",sut_reg.f_name);
            printf("\n\n\t\tGuidance name: [ %s ]",sut_reg.g_name);
            printf("\n\n\t\tGuidance number: | 0%lu |",sut_reg.g_number);
            printf("\n\n\t\tGander: [ %c ]",sut_reg.gender);
            printf("\n\n\t\tDepartment: [ %s ]",sut_reg.st_dpt);
            printf("\n\n\t\tCity: [ %s ]",sut_reg.st_city);
            printf("\n\n\t\tAdmission year: [ %s ]",sut_reg.st_admi_yer);
            printf("\n\n\t\tStudent number: | 0%lu |",sut_reg.s_number);

        printf("\n\n\t|----------------------------------------------------");
    }
gt_bc:
    printf("\n\n\t\t[  Press [E] & then Press ENTER  ]:  ");
    scanf("%c",&gt_di);
    if(gt_di=='e'){
        fflush(stdin);
        system("cls");
        //studen_and_teacher_info(02);
        return 56;
    }
    else{
        fflush(stdin);
        goto gt_bc;
    }

    fclose(serc_st);
    }
}



/// ....................................................


int view_te(int key){         /// view all teacher information

    FILE* serc_te;
    char gt_di;

    if(key==0004){

    printf("\n\t\t\tALL EMPLOY INFORMATION");
    printf("\n\t\t\t======================\n\n");

    serc_te=fopen("teacher_info.dat","r");

    while(fread(&tuc_reg,sizeof(tuc_reg),1,serc_te) != 0){

            printf("\n\n\t\tEmploy [REG] number: < %lu >",tuc_reg.tec_id);
            printf("\n\n\t\tEmploy name: [ %s ]",tuc_reg.tec_name);
            printf("\n\n\t\tGander: [ %c ]",tuc_reg.gndr);
            printf("\n\n\t\tEmploy post: [ %s ]",tuc_reg.te_post);
            printf("\n\n\t\tEducation: [ %s ]",tuc_reg.education);
            printf("\n\n\t\tJoining Department: [ %s ]",tuc_reg.te_dpt);
            printf("\n\n\t\tCity: [ %s ]",tuc_reg.te_city);
            printf("\n\n\t\tEmploy number: | 0%lu |",tuc_reg.te_number);

        printf("\n\n\t|----------------------------------------------------");
    }
gt_bc:
    printf("\n\n\t\t[  Press [E] & then Press ENTER  ]:  ");
    scanf("%c",&gt_di);
    if(gt_di=='e'){
        fflush(stdin);
        system("cls");
       // studen_and_teacher_info(02);
       return 57;
    }
    else{
        fflush(stdin);
        goto gt_bc;
    }

    fclose(serc_te);
    }
}


/// ....................................................


int st_del_rec(int key){           /// delete recovery go to old student

    FILE *dl_file,*re_file,*wrt_dte;
    long int ik;
    char cha;

    if(key==13){
add_m:
            printf("\n\t\t\tDELETE STUDENT INFORMATION");
            printf("\n\t\t\t==========================\n");

    dl_file=fopen("student_info.dat","r");
    re_file=fopen("dlt.dat","w");

    printf("\n\n\tPlease type student [ROLL] number: ");
    scanf("%lu",&ik);
    fflush(stdin);

    while(fread(&sut_reg,sizeof(sut_reg),1,dl_file) != 0){

    if(sut_reg.st_id==ik){

            printf("\n\n\t\tStudent [REG] number: < %lu >",sut_reg.st_id);
            printf("\n\n\t\tStudent name: [ %s ]",sut_reg.name);
            printf("\n\n\t\tFather name: [ %s ]",sut_reg.f_name);
            printf("\n\n\t\tGuidance name: [ %s ]",sut_reg.g_name);
            printf("\n\n\t\tGuidance number: | 0%lu |",sut_reg.g_number);
            printf("\n\n\t\tGander: [ %c ]",sut_reg.gender);
            printf("\n\n\t\tDepartment: [ %s ]",sut_reg.st_dpt);
            printf("\n\n\t\tCity: [ %s ]",sut_reg.st_city);
            printf("\n\n\t\tAdmission year: [ %s ]",sut_reg.st_admi_yer);
            printf("\n\n\t\tStudent number: | 0%lu |",sut_reg.s_number);

    wrt_dte=fopen("recovery\\reco.dat","a");
    fwrite(&sut_reg,sizeof(sut_reg),1,wrt_dte);
    fflush(wrt_dte);
    continue;
    }
    else{
        fwrite(&sut_reg,sizeof(sut_reg),1,re_file);
        fflush(re_file);
        fclose(re_file);
    }
    }
    fclose(dl_file);
    fclose(wrt_dte);
    remove("student_info.dat");
    rename("dlt.dat","student_info.dat");


    printf("\n\n\t-------------------------------------------");
    printf("\nDelete more information [Y/N]: ");
    scanf("%c",&cha);

    if(cha=='y'){
        fflush(stdin);
        system("cls");
        goto add_m;
    }
    else{
        system("cls");
        //menage_user(04);
        return 80;
    }
    }
}


/// ....................................................


int te_del_rec(int key){       /// delete and recovery go to old teacher

    FILE *dl_fil,*re_fil,*wrt_dt;
    long int ik;
    char ch;

    if(key==62){

more:
            printf("\n\t\t\tDELETE EMPLOY INFORMATION");
            printf("\n\t\t\t=========================\n");

    dl_fil=fopen("teacher_info.dat","r");       //  open teacher info file
    re_fil=fopen("dlte.dat","w");               //  open delete file

    printf("\n\n\tPlease type Employ id: ");
    scanf("%lu",&ik);
    fflush(stdin);

    while(fread(&tuc_reg,sizeof(tuc_reg),1,dl_fil) != 0){

    if(tuc_reg.tec_id==ik){

            printf("\n\n\t\tEmploy [REG] number: < %lu >",tuc_reg.tec_id);
            printf("\n\n\t\tEmploy name: [ %s ]",tuc_reg.tec_name);
            printf("\n\n\t\tGander: [ %c ]",tuc_reg.gndr);
            printf("\n\n\t\tEmploy post: [ %s ]",tuc_reg.te_post);
            printf("\n\n\t\tEducation: [ %s ]",tuc_reg.education);
            printf("\n\n\t\tJoining Department: [ %s ]",tuc_reg.te_dpt);
            printf("\n\n\t\tCity: [ %s ]",tuc_reg.te_city);
            printf("\n\n\t\tEmploy number: | 0%lu |",tuc_reg.te_number);


    wrt_dt=fopen("recovery\\reco_te.dat","a");    // open recovery file
    fwrite(&tuc_reg,sizeof(tuc_reg),1,wrt_dt);
    fflush(wrt_dt);
    fflush(stdin);
    continue;
    }
    else{
        fwrite(&tuc_reg,sizeof(tuc_reg),1,re_fil);
        fflush(re_fil);
        fclose(re_fil);
        fflush(stdin);
    }
    }

    fclose(dl_fil);
//fflush(dl_fil);
    fclose(wrt_dt);

    //char deltfile[]="teacher_info.dat";

    remove("teacher_info.dat");
    rename("dlte.dat","teacher_info.dat");

    printf("\n\n\t----------------------------------------------");
    printf("\nDelete more information [Y/N]: ");
    fflush(stdin);
    scanf("%c",&ch);

    if(ch=='y'){
        fflush(stdin);
        system("cls");
        goto more;
    }
    else{
    system("cls");
   // menage_user(04);
       // studen_and_teacher_info(02);
       return 81;
    }
    }
}                                                                       /// ..............................................


/// ....................................................



int menage_user(int key){          /// menage user penal

     int i=0,j=0,get_v;
    if(key==04){
    printf("\n\t\t");

     draw(50);
     while(i<20){
        j=1;
        draw_th(j);

        if(i==0){
            draw_sp(18);
            printf("MENAGE USER");
            draw_sp(19);
            printf("%c",178);
        }
        if(i==1){
            draw(48);
            printf("%c",178);
        }
        if(i==3){
            printf("\t%c%c 1.Delete Student Information",178,177);
            draw_sp(10);
            printf("%c",178);
        }
        if(i==5){
            printf("\t%c%c 2.Delete Employ Information",178,177);
            draw_sp(11);
            printf("%c",178);
        }
        if(i==7){
            printf("\t%c%c 3.Set Program password",178,177);
            draw_sp(16);
            printf("%c",178);
        }

        if(i==17){
            printf("\t\t> 0.Back main menu ");
            draw_sp(14);
            printf("%c",178);
        }

        if(i==18){
            draw(48);
            printf("%c",178);
        }
        if(i==19){
            printf("   Institute Of Computer Since & Technology");
            draw_sp(5);
            printf("%c",178);
        }
        if(i==2||i==4||i==6||i==8||i==9||i==10||i==11||i==12||i==13||i==14 || i==15 || i==16 || i==20){
            draw_sp(48);
            printf("%c",178);
        }
        i++;
     }
     printf("\n\t\t");
     draw(50);
     int l=1;

     for( ; ; ){
     printf("\n\t\tPlease type selected number:  ");
     scanf("%d",&get_v);
     fflush(stdin);
     if(get_v==1){
        system("cls");
        return 881;
     }
     if(get_v==2){
        system("cls");
        return 882;
     }
     if(get_v==3){
        system("cls");
        return 883;
     }
     if(get_v==0){
        system("cls");
        return 055;
     }
     else{
        continue;
     }
    }
    }
}


/// ....................................................



int acc_reg(int key){              ///  account reg

    FILE* acount;
    int j=25,k,l,o;


    if(key==2){

syse_fast:

    printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);

    gotoxy(35,1);
    printf(" ACCOUNT REGISTITON ");
    gotoxy(20,4);
    printf("Type roll number: ");
    gotoxy(20,6);
    printf("Name: ");
    gotoxy(20,8);
    printf("Semester: ");
    gotoxy(20,10);
    printf("Semester fee: ");
    gotoxy(20,12);
    printf("Other fee cause: ");
    gotoxy(20,14);
    printf("Other fee: ");
    gotoxy(20,16);
    printf("Total: ");
//    gotoxy(20,18);
//    printf("Date: ");
//    gotoxy(20,20);
//    printf("Earning: ");
//    gotoxy(20,22);
//    printf("Arrears: ");
    //getch();

    acount=fopen("fast_st_account.dat","a");


    gotoxy(45,4);
    scanf("%lu",&fee_col.roll);
    fflush(stdin);
    gotoxy(45,6);
    gets(fee_col.name);
    gotoxy(45,8);
    gets(fee_col.semester);
    gotoxy(45,10);
    scanf("%f",&fee_col.sem_fee);
    fflush(stdin);
    gotoxy(45,12);
    gets(fee_col.other_cos);
    gotoxy(45,14);
    scanf("%f",&fee_col.other_fee);
    fflush(stdin);
    gotoxy(45,16);
    fee_col.total=fee_col.sem_fee+fee_col.other_fee;
    printf("%f",fee_col.total);
//    gotoxy(45,18);
//    gets(fee_col.date);
//    gotoxy(45,20);
//    scanf("%f",&fee_col.recive);
//    fflush(stdin);
//    gotoxy(45,22);
//    fee_col.arrears=fee_col.total-fee_col.recive;
   // printf("%f",fee_col.arrears);

    fwrite(&fee_col,sizeof(fee_col),1,acount);
    fflush(acount);
    fclose(acount);

    char xp;
    scanf("%c",&xp);

    if(xp=='y'){
        system("cls");
        j=25;
        goto syse_fast;
    }
    else{
        fflush(stdin);
        system("cls");
        j=25;
        //semester(5);
        return 101;
    }

}


    if(key==3){

syse_sec:

    printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);

    gotoxy(35,1);
    printf(" ACCOUNT REGISTITON ");
    gotoxy(20,4);
    printf("Type roll number: ");
    gotoxy(20,6);
    printf("Name: ");
    gotoxy(20,8);
    printf("Semester: ");
    gotoxy(20,10);
    printf("Semester fee: ");
    gotoxy(20,12);
    printf("Other fee cause: ");
    gotoxy(20,14);
    printf("Other fee: ");
    gotoxy(20,16);
    printf("Total: ");
//    gotoxy(20,18);
//    printf("Date: ");
//    gotoxy(20,20);
//    printf("Earning: ");
    gotoxy(20,22);
    printf("Arrears: ");
    //getch();

    acount=fopen("two_st_account.dat","a");


    gotoxy(45,4);
    scanf("%lu",&fee_col.roll);
    fflush(stdin);
    gotoxy(45,6);
    gets(fee_col.name);
    gotoxy(45,8);
    gets(fee_col.semester);
    gotoxy(45,10);
    scanf("%f",&fee_col.sem_fee);
    fflush(stdin);
    gotoxy(45,12);
    gets(fee_col.other_cos);
    gotoxy(45,14);
    scanf("%f",&fee_col.other_fee);
    fflush(stdin);
    gotoxy(45,16);
    fee_col.total=fee_col.sem_fee+fee_col.other_fee;
    printf("%f",fee_col.total);
//    gotoxy(45,18);
//    gets(fee_col.date);
//    gotoxy(45,20);
//    scanf("%f",&fee_col.recive);
//    fflush(stdin);
//    gotoxy(45,22);
//    fee_col.arrears=fee_col.total-fee_col.recive;
    printf("%f",fee_col.arrears);

    fwrite(&fee_col,sizeof(fee_col),1,acount);
    fflush(acount);
    fclose(acount);

    char xp;
    scanf("%c",&xp);

    if(xp=='y'){
        system("cls");
        j=25;
        goto syse_sec;
    }

        else{
        system("cls");
        j=25;
        //semester(5);
        return 102;
    }

}

    if(key==4){

syse_thrd:

    printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);

    gotoxy(35,1);
    printf(" ACCOUNT REGISTITON ");
    gotoxy(20,4);
    printf("Type roll number: ");
    gotoxy(20,6);
    printf("Name: ");
    gotoxy(20,8);
    printf("Semester: ");
    gotoxy(20,10);
    printf("Semester fee: ");
    gotoxy(20,12);
    printf("Other fee cause: ");
    gotoxy(20,14);
    printf("Other fee: ");
    gotoxy(20,16);
    printf("Total: ");
    gotoxy(20,22);
    printf("Arrears: ");

    acount=fopen("three_st_account.dat","a");


    gotoxy(45,4);
    scanf("%lu",&fee_col.roll);
    fflush(stdin);
    gotoxy(45,6);
    gets(fee_col.name);
    gotoxy(45,8);
    gets(fee_col.semester);
    gotoxy(45,10);
    scanf("%f",&fee_col.sem_fee);
    fflush(stdin);
    gotoxy(45,12);
    gets(fee_col.other_cos);
    gotoxy(45,14);
    scanf("%f",&fee_col.other_fee);
    fflush(stdin);
    gotoxy(45,16);
    fee_col.total=fee_col.sem_fee+fee_col.other_fee;
    printf("%f",fee_col.total);
//    gotoxy(45,18);
//    gets(fee_col.date);
//    gotoxy(45,20);
//    scanf("%f",&fee_col.recive);
//    fflush(stdin);
//    gotoxy(45,22);
//    fee_col.arrears=fee_col.total-fee_col.recive;
    printf("%f",fee_col.arrears);

    fwrite(&fee_col,sizeof(fee_col),1,acount);
    fflush(acount);
    fclose(acount);

    char xp;
    scanf("%c",&xp);

    if(xp=='y'){
        system("cls");
        j=25;
        goto syse_thrd;
    }

        else{
        system("cls");
        j=25;
        //semester(5);
        return 103;
    }

}

    if(key==5){

syse_four:

    printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);

    gotoxy(35,1);
    printf(" ACCOUNT REGISTITON ");
    gotoxy(20,4);
    printf("Type roll number: ");
    gotoxy(20,6);
    printf("Name: ");
    gotoxy(20,8);
    printf("Semester: ");
    gotoxy(20,10);
    printf("Semester fee: ");
    gotoxy(20,12);
    printf("Other fee cause: ");
    gotoxy(20,14);
    printf("Other fee: ");
    gotoxy(20,16);
    printf("Total: ");
//    gotoxy(20,18);
//    printf("Date: ");
//    gotoxy(20,20);
//    printf("Earning: ");
    gotoxy(20,22);
    printf("Arrears: ");
    //getch();

    acount=fopen("four_st_account.dat","a");


    gotoxy(45,4);
    scanf("%lu",&fee_col.roll);
    fflush(stdin);
    gotoxy(45,6);
    gets(fee_col.name);
    gotoxy(45,8);
    gets(fee_col.semester);
    gotoxy(45,10);
    scanf("%f",&fee_col.sem_fee);
    fflush(stdin);
    gotoxy(45,12);
    gets(fee_col.other_cos);
    gotoxy(45,14);
    scanf("%f",&fee_col.other_fee);
    fflush(stdin);
    gotoxy(45,16);
    fee_col.total=fee_col.sem_fee+fee_col.other_fee;
    printf("%2f",fee_col.total);
//    gotoxy(45,18);
//    gets(fee_col.date);
//    gotoxy(45,20);
//    scanf("%f",&fee_col.recive);
//    fflush(stdin);
//    gotoxy(45,22);
//    fee_col.arrears=fee_col.total-fee_col.recive;
    printf("%2f",fee_col.arrears);

    fwrite(&fee_col,sizeof(fee_col),1,acount);
    fflush(acount);
    fclose(acount);

    char xp;
    scanf("%c",&xp);

    if(xp=='y'){
        system("cls");
        j=25;
        goto syse_four;
    }


        else{
        system("cls");
        j=25;
       // semester(5);
       return 104;
    }

}

    if(key==6){

syse_five:

    printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);

    gotoxy(35,1);
    printf(" ACCOUNT REGISTITON ");
    gotoxy(20,4);
    printf("Type roll number: ");
    gotoxy(20,6);
    printf("Name: ");
    gotoxy(20,8);
    printf("Semester: ");
    gotoxy(20,10);
    printf("Semester fee: ");
    gotoxy(20,12);
    printf("Other fee cause: ");
    gotoxy(20,14);
    printf("Other fee: ");
    gotoxy(20,16);
    printf("Total: ");
//    gotoxy(20,18);
//    printf("Date: ");
//    gotoxy(20,20);
//    printf("Earning: ");
    gotoxy(20,22);
    printf("Arrears: ");
    //getch();

    acount=fopen("five_st_account.dat","a");



    gotoxy(45,4);
    scanf("%lu",&fee_col.roll);
    fflush(stdin);
    gotoxy(45,6);
    gets(fee_col.name);
    gotoxy(45,8);
    gets(fee_col.semester);
    gotoxy(45,10);
    scanf("%f",&fee_col.sem_fee);
    fflush(stdin);
    gotoxy(45,12);
    gets(fee_col.other_cos);
    gotoxy(45,14);
    scanf("%f",&fee_col.other_fee);
    fflush(stdin);
    gotoxy(45,16);
    fee_col.total=fee_col.sem_fee+fee_col.other_fee;
    printf("%2f",fee_col.total);
//    gotoxy(45,18);
//    gets(fee_col.date);
//    gotoxy(45,20);
//    scanf("%f",&fee_col.recive);
//    fflush(stdin);
//    gotoxy(45,22);
//    fee_col.arrears=fee_col.total-fee_col.recive;
    printf("%2f",fee_col.arrears);

    fwrite(&fee_col,sizeof(fee_col),1,acount);
    fflush(acount);
    fclose(acount);

    char xp;
    scanf("%c",&xp);

    if(xp=='y'){
        system("cls");
        j=25;
        goto syse_five;
    }

        else{
        system("cls");
        j=25;
        //semester(5);
        return 105;
    }

}

    if(key==7){

syse_six:

    printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);

    gotoxy(35,1);
    printf(" ACCOUNT REGISTITON ");
    gotoxy(20,4);
    printf("Type roll number: ");
    gotoxy(20,6);
    printf("Name: ");
    gotoxy(20,8);
    printf("Semester: ");
    gotoxy(20,10);
    printf("Semester fee: ");
    gotoxy(20,12);
    printf("Other fee cause: ");
    gotoxy(20,14);
    printf("Other fee: ");
    gotoxy(20,16);
    printf("Total: ");
//    gotoxy(20,18);
//    printf("Date: ");
//    gotoxy(20,20);
//    printf("Earning: ");
    gotoxy(20,18);
    printf("Arrears: ");
    //getch();

    acount=fopen("six_st_account.dat","a");


    gotoxy(45,4);
    scanf("%lu",&fee_col.roll);
    fflush(stdin);
    gotoxy(45,6);
    gets(fee_col.name);
    gotoxy(45,8);
    gets(fee_col.semester);
    gotoxy(45,10);
    scanf("%f",&fee_col.sem_fee);
    fflush(stdin);
    gotoxy(45,12);
    gets(fee_col.other_cos);
    gotoxy(45,14);
    scanf("%f",&fee_col.other_fee);
    fflush(stdin);
    gotoxy(45,16);
    fee_col.total=fee_col.sem_fee+fee_col.other_fee;
    printf("%2f",fee_col.total);
//    gotoxy(45,18);
//    gets(fee_col.date);
//    gotoxy(45,20);
//    scanf("%f",&fee_col.recive);
//    fflush(stdin);
//    gotoxy(45,22);
//    fee_col.arrears=fee_col.total-fee_col.recive;
    printf("%2f",fee_col.arrears);

    fwrite(&fee_col,sizeof(fee_col),1,acount);
    fflush(acount);
    fclose(acount);

    char xp;
    scanf("%c",&xp);

    if(xp=='y'){
        system("cls");
        j=25;
        goto syse_six;
    }


        else{
        system("cls");
        j=25;
        //semester(5);
        return 106;
    }

}


    if(key==8){

syse_seven:

    printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);

    gotoxy(35,1);
    printf(" ACCOUNT REGISTITON ");
    gotoxy(20,4);
    printf("Type roll number: ");
    gotoxy(20,6);
    printf("Name: ");
    gotoxy(20,8);
    printf("Semester: ");
    gotoxy(20,10);
    printf("Semester fee: ");
    gotoxy(20,12);
    printf("Other fee cause: ");
    gotoxy(20,14);
    printf("Other fee: ");
    gotoxy(20,16);
    printf("Total: ");
//    gotoxy(20,18);
//    printf("Date: ");
//    gotoxy(20,20);
//    printf("Earning: ");
    gotoxy(20,18);
    printf("Arrears: ");
    //getch();

    acount=fopen("seven_st_account.dat","a");


    gotoxy(45,4);
    scanf("%lu",&fee_col.roll);
    fflush(stdin);
    gotoxy(45,6);
    gets(fee_col.name);
    gotoxy(45,8);
    gets(fee_col.semester);
    gotoxy(45,10);
    scanf("%f",&fee_col.sem_fee);
    fflush(stdin);
    gotoxy(45,12);
    gets(fee_col.other_cos);
    gotoxy(45,14);
    scanf("%f",&fee_col.other_fee);
    fflush(stdin);
    gotoxy(45,16);
    fee_col.total=fee_col.sem_fee+fee_col.other_fee;
    printf("%2f",fee_col.total);
//    gotoxy(45,18);
//    gets(fee_col.date);
//    gotoxy(45,20);
//    scanf("%f",&fee_col.recive);
//    fflush(stdin);
//    gotoxy(45,22);
//    fee_col.arrears=fee_col.total-fee_col.recive;
    printf("%2f",fee_col.arrears);

    fwrite(&fee_col,sizeof(fee_col),1,acount);
    fflush(acount);
    fclose(acount);

    char xp;
    scanf("%c",&xp);

    if(xp=='y'){
        system("cls");
        j=25;
        goto syse_seven;
    }


        else{
        system("cls");
        j=25;
        //semester(5);
        return 107;
    }

}


    if(key==9){

syse_eight:

    printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);

    gotoxy(35,1);
    printf(" ACCOUNT REGISTITON ");
    gotoxy(20,4);
    printf("Type roll number: ");
    gotoxy(20,6);
    printf("Name: ");
    gotoxy(20,8);
    printf("Semester: ");
    gotoxy(20,10);
    printf("Semester fee: ");
    gotoxy(20,12);
    printf("Other fee cause: ");
    gotoxy(20,14);
    printf("Other fee: ");
    gotoxy(20,16);
    printf("Total: ");
//    gotoxy(20,18);
//    printf("Date: ");
//    gotoxy(20,20);
//    printf("Earning: ");
    gotoxy(20,18);
    printf("Arrears: ");
    //getch();

    acount=fopen("eight_st_account.dat","a");


    gotoxy(45,4);
    scanf("%lu",&fee_col.roll);
    fflush(stdin);
    gotoxy(45,6);
    gets(fee_col.name);
    gotoxy(45,8);
    gets(fee_col.semester);
    gotoxy(45,10);
    scanf("%f",&fee_col.sem_fee);
    fflush(stdin);
    gotoxy(45,12);
    gets(fee_col.other_cos);
    gotoxy(45,14);
    scanf("%f",&fee_col.other_fee);
    fflush(stdin);
    gotoxy(45,16);
    fee_col.total=fee_col.sem_fee+fee_col.other_fee;
    printf("%f",fee_col.total);
//    gotoxy(45,18);
//    gets(fee_col.date);
//    gotoxy(45,20);
//    scanf("%f",&fee_col.recive);
//    fflush(stdin);
//    gotoxy(45,22);
//    fee_col.arrears=fee_col.total-fee_col.recive;
    //printf("%f",fee_col.arrears);

    fwrite(&fee_col,sizeof(fee_col),1,acount);
    fflush(acount);
    fclose(acount);

    char xp;
    scanf("%c",&xp);

    if(xp=='y'){
        fflush(stdin);
        system("cls");
        j=25;
        goto syse_eight;
    }


        else{
        system("cls");
        j=25;
        //semester(5);
        return 108;
    }
}
}


/// ....................................................


int view_acco(int key){            ///  view account

        FILE *acount_vi,*chk_total;

    if(key==1){

    printf("\n\t\t\tALL STUDENT INFORMATION");
    printf("\n\t\t\t=======================\n\n");

    acount_vi=fopen("fast_st_account.dat","r");
    //chk_total=fopen("fast_pr.dat","r");

    while(fread(&fee_col,sizeof(fee_col),1,acount_vi) != 0){

       //     if(fee_col.roll==rec_fee.roll){
        printf("\n\n\t\tRoll number:  %lu",fee_col.roll);
        printf("\n\n\t\tName:  %s",fee_col.name);
        printf("\n\n\t\tSemester:  %s",fee_col.semester);
        printf("\n\n\t\tSemester fee:  %f",fee_col.sem_fee);
        printf("\n\n\t\tOther expenc [text only]:  %s",fee_col.other_cos);
        printf("\n\n\t\tOther fee [amount]:  %f",fee_col.other_fee);
            //}
         //   printf("\n\t %f",rec_fee.recive);
        printf("\n\n\t\tTotal fee:  %f",fee_col.total);
       // printf("\n%2f",fee_col.arrears);
        printf("\n\n\t|-------------------------------\n");
    //}
   // fclose(chk_total);

    }
        fclose(acount_vi);
    fflush(stdin);


    int ko;

    printf("\n\n\tExit this page press [0]");
    scanf("%d",&ko);
    fflush(stdin);

    if(ko==0){
        system("cls");
        //fast_semester(1);
        return 301;
    }
}


        if(key==2){

    acount_vi=fopen("two_st_account.dat","r");


    while(fread(&fee_col,sizeof(fee_col),1,acount_vi) != 0){
        printf("\nRoll number:  %lu",fee_col.roll);
        printf("\nName:  %s",fee_col.name);
        printf("\nSemester:  %s",fee_col.semester);
        printf("\nSemester fee:  %f",fee_col.sem_fee);
        printf("\nOther expenc [text only]:  %s",fee_col.other_cos);
        printf("\nOther fee [amount]:  %f",fee_col.other_fee);
        printf("\nTotal fee:  %f",fee_col.total);
        printf("\n%f",fee_col.arrears);
        printf("\n---------------------------------\n");
    }
    fclose(acount_vi);
    fflush(stdin);

        int ko;

    printf("\n\n\tExit this page press [0]");
    scanf("%d",&ko);
    fflush(stdin);

    if(ko==0){
        system("cls");
        //fast_semester(1);
        return 302;
    }
    }


        if(key==3){

    acount_vi=fopen("three_st_account.dat","r");


    while(fread(&fee_col,sizeof(fee_col),1,acount_vi) != 0){
        printf("\nRoll number:  %lu",fee_col.roll);
        printf("\nName:  %s",fee_col.name);
        printf("\nSemester:  %s",fee_col.semester);
        printf("\nSemester fee:  %f",fee_col.sem_fee);
        printf("\nOther expenc [text only]:  %s",fee_col.other_cos);
        printf("\nOther fee [amount]:  %f",fee_col.other_fee);
        printf("\nTotal fee:  %f",fee_col.total);
        printf("\nDue: %f",fee_col.arrears);
        printf("\n-------------------------------\n");
    }
    fclose(acount_vi);
    fflush(stdin);

        int ko;

    printf("\n\n\tExit this page press [0]");
    scanf("%d",&ko);
    fflush(stdin);

    if(ko==0){
        system("cls");
        //fast_semester(1);
        return 303;
    }


    }


        if(key==4){

    acount_vi=fopen("four_st_account.dat","r");


    while(fread(&fee_col,sizeof(fee_col),1,acount_vi) != 0){
        printf("\nRoll number:  %lu",fee_col.roll);
        printf("\nName:  %s",fee_col.name);
        printf("\nSemester:  %s",fee_col.semester);
        printf("\nSemester fee:  %f",fee_col.sem_fee);
        printf("\nOther expenc [text only]:  %s",fee_col.other_cos);
        printf("\nOther fee [amount]:  %f",fee_col.other_fee);
        printf("\nTotal fee:  %f",fee_col.total);
        printf("\n%f",fee_col.arrears);
        printf("\n---------------------------\n");
    }
    fclose(acount_vi);
    fflush(stdin);


        int ko;

    printf("\n\n\tExit this page press [0]");
    scanf("%d",&ko);
    fflush(stdin);

    if(ko==0){
        system("cls");
        //fast_semester(1);
        return 304;
    }

    }


        if(key==5){

    acount_vi=fopen("five_st_account.dat","r");


    while(fread(&fee_col,sizeof(fee_col),1,acount_vi) != 0){
        printf("\nRoll number:  %lu",fee_col.roll);
        printf("\nName:  %s",fee_col.name);
        printf("\nSemester:  %s",fee_col.semester);
        printf("\nSemester fee:  %f",fee_col.sem_fee);
        printf("\nOther expenc [text only]:  %s",fee_col.other_cos);
        printf("\nOther fee [amount]:  %f",fee_col.other_fee);
        printf("\nTotal fee:  %f",fee_col.total);
        printf("\n%f",fee_col.arrears);
        printf("\n-------------------------\n");
    }
    fclose(acount_vi);
    fflush(stdin);


        int ko;

    printf("\n\n\tExit this page press [0]");
    scanf("%d",&ko);
    fflush(stdin);

    if(ko==0){
        system("cls");
        //fast_semester(1);
        return 305;
    }

    }


        if(key==6){

    acount_vi=fopen("six_st_account.dat","r");

    while(fread(&fee_col,sizeof(fee_col),1,acount_vi) != 0){
        printf("\nRoll number:  %lu",fee_col.roll);
        printf("\nName:  %s",fee_col.name);
        printf("\nSemester:  %s",fee_col.semester);
        printf("\nSemester fee:  %f",fee_col.sem_fee);
        printf("\nOther expenc [text only]:  %s",fee_col.other_cos);
        printf("\nOther fee [amount]:  %f",fee_col.other_fee);
        printf("\nTotal fee:  %f",fee_col.total);
        printf("\n%f",fee_col.arrears);
        printf("\n-------------------------------\n");
    }
    fclose(acount_vi);


        int ko;

    printf("\n\n\tExit this page press [0]");
    scanf("%d",&ko);
    fflush(stdin);

    if(ko==0){
        system("cls");
        //fast_semester(1);
        return 306;
    }

    }


        if(key==7){

    acount_vi=fopen("seven_st_account.dat","r");


    while(fread(&fee_col,sizeof(fee_col),1,acount_vi) != 0){
        printf("\nRoll number:  %lu",fee_col.roll);
        printf("\nName:  %s",fee_col.name);
        printf("\nSemester:  %s",fee_col.semester);
        printf("\nSemester fee:  %f",fee_col.sem_fee);
        printf("\nOther expenc [text only]:  %s",fee_col.other_cos);
        printf("\nOther fee [amount]:  %f",fee_col.other_fee);
        printf("\nTotal fee:  %f",fee_col.total);
        printf("\n%f",fee_col.arrears);
        printf("\n--------------------------\n");
    }
    fclose(acount_vi);
    fflush(stdin);

        int ko;

    printf("\n\n\tExit this page press [0]");
    scanf("%d",&ko);
    fflush(stdin);

    if(ko==0){
        system("cls");
        //fast_semester(1);
        return 307;
    }

    }




        if(key==8){

    acount_vi=fopen("eight_st_account.dat","r");

    while(fread(&fee_col,sizeof(fee_col),1,acount_vi) != 0){
        printf("\nRoll number:  %lu",fee_col.roll);
        printf("\nName:  %s",fee_col.name);
        printf("\nSemester:  %s",fee_col.semester);
        printf("\nSemester fee:  %f",fee_col.sem_fee);
        printf("\nOther expenc [text only]:  %s",fee_col.other_cos);
        printf("\nOther fee [amount]:  %f",fee_col.other_fee);
        printf("\nTotal fee:  %f",fee_col.total);
        printf("\n%f",fee_col.arrears);
        printf("\n------------------------------\n");
    }
    fclose(acount_vi);
    fflush(stdin);


        int ko;

    printf("\n\n\tExit this page press [0]");
    scanf("%d",&ko);
    fflush(stdin);

    if(ko==0){
        system("cls");
        //fast_semester(1);
        return 308;
    }

    }

}




/// ....................................................


int preament(int key){                          /// into payment and edit op

    FILE *pray,*opn;
    int j=25,i;

    if(key==1){

    int i, o, eg;

    gotoxy(18,3);
    printf("INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY");

    gotoxy(8,5);
    for(i=0;i<60;i++){
        printf("%c",177);
    }
    for(i=0;i<8;i++){
            printf("\n\t%c",177);
        for(o=0;o<58;o++){
            printf(" ");
        }
    printf("%c",177);
    }
    printf("\n\t");
    for(i=0;i<60;i++){
        printf("%c",177);
    }

    gotoxy(15,7);
    printf("%c If You Want Add New Payment Then Press [1]",219);
    gotoxy(15,9);
    printf("%c If You Want Edit Any Payment Then Press [2]",219);

    gotoxy(35,12);
    scanf("%d",&eg);
    fflush(stdin);
    system("cls");

    if(eg==1){

    printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);


    gotoxy(40,1);
    printf(" PAYMENT ");
    gotoxy(20,6);
    printf("Roll number: ");
    gotoxy(20,8);
    printf("Name: ");
    gotoxy(20,10);
    printf("Date: ");
    gotoxy(20,12);
    printf("Total: ");
    gotoxy(20,14);
    printf("Now pay: ");
    gotoxy(20,16);
    printf("Dew: ");
    gotoxy(30,19);
    printf("Press [0] ENTER then goto main menu");



    opn=fopen("fast_st_account.dat","r");
    pray=fopen("fast_pr.dat","a");

    gotoxy(45,6);
    scanf("%lu",&rec_fee.roll);
    fflush(stdin);

    while(fread(&fee_col,sizeof(fee_col),1,opn) != 0){

    if(rec_fee.roll==fee_col.roll ){


    gotoxy(45,8);
    strcpy(rec_fee.name,fee_col.name);
    printf("%s",rec_fee.name);

    gotoxy(45,10);
    gets(rec_fee.date);
    gotoxy(45,12);
    printf("%f",fee_col.total);
    fflush(stdin);
    gotoxy(45,14);
    scanf("%f",&rec_fee.recive);
    fflush(stdin);

    //printf("%lu",fee_col.roll);

    rec_fee.arrears=fee_col.total-rec_fee.recive;
    gotoxy(45,16);
    printf("%f",rec_fee.arrears);
    fflush(stdin);
    fclose(opn);

        }
    }

    fwrite(&rec_fee,sizeof(rec_fee),1,pray);
    fflush(pray);
    fclose(pray);

    int k,fast=101;
    gotoxy(30,20);
    scanf("%d",&k);
    fflush(stdin);
    if(k==0){
        fflush(stdin);
        system("cls");
        return 1200;
    }
    }



    else if(eg==2){

edtl:

                printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);


    gotoxy(40,1);
    printf(" PRAYMENT ");
    gotoxy(20,6);
    printf("Roll number: ");
    gotoxy(20,8);
    printf("Name: ");
    gotoxy(20,10);
    printf("Date: ");
    gotoxy(20,12);
    printf("Total: ");
    gotoxy(20,14);
    printf("Now pay: ");
    gotoxy(20,16);
    printf("Dew: ");
//    gotoxy(30,19);
//    printf("Press [0] ENTER then goto main menu");

    pray=fopen("fast_pr.dat","r+");

    unsigned long int ik_int;

   gotoxy(45,6);
    scanf("%lu",&ik_int);
    fflush(stdin);

    while(fread(&rec_fee,sizeof(rec_fee),1,pray) != 0){

    if(ik_int==rec_fee.roll){

    gotoxy(45,8);
    printf("%s",rec_fee.name);
    fflush(stdin);

    gotoxy(45,10);
    gets(rec_fee.date);
    gotoxy(45,12);
    printf("%f",rec_fee.arrears);
    fflush(stdin);
    gotoxy(45,14);
    scanf("%f",&rec_fee.recive);
    fflush(stdin);

    rec_fee.arrears=rec_fee.arrears-rec_fee.recive;
    gotoxy(45,16);
    printf("%f",rec_fee.arrears);

    fseek(pray,-sizeof(rec_fee),SEEK_CUR);
    fwrite(&rec_fee,sizeof(rec_fee),1,pray);
    fflush(pray);
    fclose(pray);
            }
    fflush(stdin);
    }


    int k;
    gotoxy(30,20);
    printf("More Press [0] AND Back press [1]:  ");
    scanf("%d",&k);
    fflush(stdin);
    if(k==0){
        fflush(stdin);
        system("cls");
        goto edtl;


    }
    else{
        fflush(stdin);
        system("cls");
        return 1201;
    }
    }

    }




    if(key==2){


             int i, o, eg;

    gotoxy(18,3);
    printf("INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY");

    gotoxy(8,5);
    for(i=0;i<60;i++){
        printf("%c",177);
    }
    for(i=0;i<8;i++){
            printf("\n\t%c",177);
        for(o=0;o<58;o++){
            printf(" ");
        }
    printf("%c",177);
    }
    printf("\n\t");
    for(i=0;i<60;i++){
        printf("%c",177);
    }

    gotoxy(15,7);
    printf("%c If You Want Add New Payment Then Press [1]",219);
    gotoxy(15,9);
    printf("%c If You Want Edit Any Payment Then Press [2]",219);

    gotoxy(35,12);
    scanf("%d",&eg);
    fflush(stdin);
    system("cls");



if(eg==1){

    printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);


    gotoxy(40,1);
    printf(" PRAYMENT ");
    gotoxy(20,6);
    printf("Roll number: ");
    gotoxy(20,8);
    printf("Name: ");
    gotoxy(20,10);
    printf("Date: ");
    gotoxy(20,12);
    printf("Total: ");
    gotoxy(20,14);
    printf("Now pray: ");
    gotoxy(20,16);
    printf("Dew: ");
    gotoxy(30,19);
    printf("Press [0] ENTER then goto main menu");



    opn=fopen("two_st_account.dat","r");
    pray=fopen("sec_pr.dat","a");

    gotoxy(45,6);
    scanf("%lu",&rec_fee.roll);
    fflush(stdin);

    while(fread(&fee_col,sizeof(fee_col),1,opn) != 0){

    if(rec_fee.roll==fee_col.roll){


    gotoxy(45,8);
    strcpy(rec_fee.name,fee_col.name);
    printf("%s",rec_fee.name);

    gotoxy(45,10);
    gets(rec_fee.date);
    gotoxy(45,12);
    printf("%f",fee_col.total);
    fflush(stdin);
    gotoxy(45,14);
    scanf("%f",&rec_fee.recive);
    fflush(stdin);
    gotoxy(45,16);

    //printf("%lu",fee_col.roll);

    rec_fee.arrears=fee_col.total-rec_fee.recive;

    printf("%f",rec_fee.arrears);
    fflush(stdin);
    fclose(opn);

        }
    }

    fwrite(&rec_fee,sizeof(rec_fee),1,pray);
    fflush(pray);
    fclose(pray);

    int k;
    gotoxy(30,20);
    scanf("%d",&k);
    fflush(stdin);
    if(k==0){
            fflush(stdin);
    system("cls");
    //secnd_semester(2);
    return 1300;
    }
}




else if(eg==2){

two_edtl:

                printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);


    gotoxy(40,1);
    printf(" PRAYMENT ");
    gotoxy(20,6);
    printf("Roll number: ");
    gotoxy(20,8);
    printf("Name: ");
    gotoxy(20,10);
    printf("Date: ");
    gotoxy(20,12);
    printf("Total: ");
    gotoxy(20,14);
    printf("Now pray: ");
    gotoxy(20,16);
    printf("Dew: ");
//    gotoxy(30,19);
//    printf("Press [0] ENTER then goto main menu");

    pray=fopen("sec_pr.dat","r+");

    unsigned long int ik_int;

   gotoxy(45,6);
    scanf("%lu",&ik_int);
    fflush(stdin);

            while(fread(&rec_fee,sizeof(rec_fee),1,pray) != 0){

            if(ik_int==rec_fee.roll){

    gotoxy(45,8);
    printf("%s",rec_fee.name);
    fflush(stdin);

    gotoxy(45,10);
    gets(rec_fee.date);
    gotoxy(45,12);
    printf("%f",rec_fee.arrears);
    fflush(stdin);
    gotoxy(45,14);
    scanf("%f",&rec_fee.recive);
    fflush(stdin);

    rec_fee.arrears=rec_fee.arrears-rec_fee.recive;
    gotoxy(45,16);
    printf("%f",rec_fee.arrears);

    fseek(pray,-sizeof(rec_fee),SEEK_CUR);
    fwrite(&rec_fee,sizeof(rec_fee),1,pray);
    fflush(pray);
    fclose(pray);
            }
    fflush(stdin);
    }


    int k;
    gotoxy(30,20);
    printf("More Press [0] AND Back press [1]:  ");
    scanf("%d",&k);
    fflush(stdin);
    if(k==0){
        fflush(stdin);
        system("cls");
        goto two_edtl;
    }
    else{
        fflush(stdin);
        system("cls");
        return 1301;
    }
    }
}




    if(key==3){

             int i, o, eg;

    gotoxy(18,3);
    printf("INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY");

    gotoxy(8,5);
    for(i=0;i<60;i++){
        printf("%c",177);
    }
    for(i=0;i<8;i++){
            printf("\n\t%c",177);
        for(o=0;o<58;o++){
            printf(" ");
        }
    printf("%c",177);
    }
    printf("\n\t");
    for(i=0;i<60;i++){
        printf("%c",177);
    }

    gotoxy(15,7);
    printf("%c If You Want Add New Payment Then Press [1]",219);
    gotoxy(15,9);
    printf("%c If You Want Edit Any Payment Then Press [2]",219);

    gotoxy(35,12);
    scanf("%d",&eg);
    fflush(stdin);
    system("cls");


    if(eg==1){

    printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);


    gotoxy(40,1);
    printf(" PRAYMENT ");
    gotoxy(20,6);
    printf("Roll number: ");
    gotoxy(20,8);
    printf("Name: ");
    gotoxy(20,10);
    printf("Date: ");
    gotoxy(20,12);
    printf("Total: ");
    gotoxy(20,14);
    printf("Now pray: ");
    gotoxy(20,16);
    printf("Dew: ");
    gotoxy(30,19);
    printf("Press [0] ENTER then goto main menu");



    opn=fopen("three_st_account.dat","r");
    pray=fopen("trd_pr.dat","a");

    gotoxy(45,6);
    scanf("%lu",&rec_fee.roll);
    fflush(stdin);

    while(fread(&fee_col,sizeof(fee_col),1,opn) != 0){

    if(rec_fee.roll==fee_col.roll){


    gotoxy(45,8);
    strcpy(rec_fee.name,fee_col.name);
    printf("%s",rec_fee.name);

    gotoxy(45,10);
    gets(rec_fee.date);
    gotoxy(45,12);
    printf("%f",fee_col.total);
    fflush(stdin);
    gotoxy(45,14);
    scanf("%f",&rec_fee.recive);
    fflush(stdin);
    gotoxy(45,16);

    //printf("%lu",fee_col.roll);

    rec_fee.arrears=fee_col.total-rec_fee.recive;

    printf("%f",rec_fee.arrears);
    fflush(stdin);
    fclose(opn);

        }
    }

    fwrite(&rec_fee,sizeof(rec_fee),1,pray);
    fflush(pray);
    fclose(pray);

    int k;
    gotoxy(30,20);
    scanf("%d",&k);
    fflush(stdin);
    if(k==0){
        fflush(stdin);
    system("cls");
    //trd_semester(3);
    return 1400;
    }
    }




        else if(eg==2){

thr_edtl:

                printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);


    gotoxy(40,1);
    printf(" PRAYMENT ");
    gotoxy(20,6);
    printf("Roll number: ");
    gotoxy(20,8);
    printf("Name: ");
    gotoxy(20,10);
    printf("Date: ");
    gotoxy(20,12);
    printf("Total: ");
    gotoxy(20,14);
    printf("Now pray: ");
    gotoxy(20,16);
    printf("Dew: ");
//    gotoxy(30,19);
//    printf("Press [0] ENTER then goto main menu");

    pray=fopen("trd_pr.dat","r+");

    unsigned long int ik_int;

   gotoxy(45,6);
    scanf("%lu",&ik_int);
    fflush(stdin);

            while(fread(&rec_fee,sizeof(rec_fee),1,pray) != 0){

            if(ik_int==rec_fee.roll){

    gotoxy(45,8);
    printf("%s",rec_fee.name);
    fflush(stdin);

    gotoxy(45,10);
    gets(rec_fee.date);
    gotoxy(45,12);
    printf("%f",rec_fee.arrears);
    fflush(stdin);
    gotoxy(45,14);
    scanf("%f",&rec_fee.recive);
    fflush(stdin);

    rec_fee.arrears=rec_fee.arrears-rec_fee.recive;
    gotoxy(45,16);
    printf("%f",rec_fee.arrears);

    fseek(pray,-sizeof(rec_fee),SEEK_CUR);
    fwrite(&rec_fee,sizeof(rec_fee),1,pray);
    fflush(pray);
    fclose(pray);
            }
    fflush(stdin);
    }


    int k;
    gotoxy(30,20);
    printf("More Press [0] AND Back press [1]:  ");
    scanf("%d",&k);
    fflush(stdin);
    if(k==0){
        fflush(stdin);
        system("cls");
        goto thr_edtl;
    }
    else{
        fflush(stdin);
        system("cls");
      //  fast_semester(1);
      return 1401;
    }
    }
}



    if(key==4){

    int i, o, eg;

    gotoxy(18,3);
    printf("INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY");

    gotoxy(8,5);
    for(i=0;i<60;i++){
        printf("%c",177);
    }
    for(i=0;i<8;i++){
        printf("\n\t%c",177);
        for(o=0;o<58;o++){
            printf(" ");
        }
    printf("%c",177);
    }
    printf("\n\t");
    for(i=0;i<60;i++){
        printf("%c",177);
    }

    gotoxy(15,7);
    printf("%c If You Want Add New Payment Then Press [1]",219);
    gotoxy(15,9);
    printf("%c If You Want Edit Any Payment Then Press [2]",219);

    gotoxy(35,12);
    scanf("%d",&eg);
    fflush(stdin);
    system("cls");

if(eg==1){

    printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);


    gotoxy(40,1);
    printf(" PRAYMENT ");
    gotoxy(20,6);
    printf("Roll number: ");
    gotoxy(20,8);
    printf("Name: ");
    gotoxy(20,10);
    printf("Date: ");
    gotoxy(20,12);
    printf("Total: ");
    gotoxy(20,14);
    printf("Now pray: ");
    gotoxy(20,16);
    printf("Dew: ");
    gotoxy(30,19);
    printf("Press [0] ENTER then goto main menu");



    opn=fopen("four_st_account.dat","r");
    pray=fopen("for_pr.dat","a");

    gotoxy(45,6);
    scanf("%lu",&rec_fee.roll);
    fflush(stdin);

    while(fread(&fee_col,sizeof(fee_col),1,opn) != 0){

    if(rec_fee.roll==fee_col.roll){


    gotoxy(45,8);
    strcpy(rec_fee.name,fee_col.name);
    printf("%s",rec_fee.name);
    fflush(stdin);

    gotoxy(45,10);
    gets(rec_fee.date);
    gotoxy(45,12);
    printf("%f",fee_col.total);
    fflush(stdin);
    gotoxy(45,14);
    scanf("%f",&rec_fee.recive);
    fflush(stdin);
    gotoxy(45,16);

    //printf("%lu",fee_col.roll);

    rec_fee.arrears=fee_col.total-rec_fee.recive;

    printf("%f",rec_fee.arrears);
    fflush(stdin);
    fclose(opn);

        }
    }

    fwrite(&rec_fee,sizeof(rec_fee),1,pray);
    fflush(pray);
    fclose(pray);

    int k;
    gotoxy(30,20);
    scanf("%d",&k);
    fflush(stdin);
    if(k==0){
            fflush(stdin);
    system("cls");
   // four_semester(4);
   return 1500;
    }
}




        else if(eg==2){

for_edtl:

                printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);


    gotoxy(40,1);
    printf(" PRAYMENT ");
    gotoxy(20,6);
    printf("Roll number: ");
    gotoxy(20,8);
    printf("Name: ");
    gotoxy(20,10);
    printf("Date: ");
    gotoxy(20,12);
    printf("Total: ");
    gotoxy(20,14);
    printf("Now pray: ");
    gotoxy(20,16);
    printf("Dew: ");
//    gotoxy(30,19);
//    printf("Press [0] ENTER then goto main menu");

    pray=fopen("for_pr.dat","r+");

    unsigned long int ik_int;

   gotoxy(45,6);
    scanf("%lu",&ik_int);
    fflush(stdin);

            while(fread(&rec_fee,sizeof(rec_fee),1,pray) != 0){

            if(ik_int==rec_fee.roll){

    gotoxy(45,8);
    printf("%s",rec_fee.name);
    fflush(stdin);

    gotoxy(45,10);
    gets(rec_fee.date);
    gotoxy(45,12);
    printf("%f",rec_fee.arrears);
    fflush(stdin);
    gotoxy(45,14);
    scanf("%f",&rec_fee.recive);
    fflush(stdin);

    rec_fee.arrears=rec_fee.arrears-rec_fee.recive;
    gotoxy(45,16);
    printf("%f",rec_fee.arrears);

    fseek(pray,-sizeof(rec_fee),SEEK_CUR);
    fwrite(&rec_fee,sizeof(rec_fee),1,pray);
    fflush(pray);
    fclose(pray);
            }
    fflush(stdin);
    }


    int k;
    gotoxy(30,20);
    printf("More Press [0] AND Back press [1]:  ");
    scanf("%d",&k);
    fflush(stdin);
    if(k==0){
        fflush(stdin);
        system("cls");
        goto for_edtl;
    }
    else{
        fflush(stdin);
        system("cls");
        //fast_semester(1);
        return 1501;
    }
    }

    }



    if(key==5){

    int i, o, eg;

    gotoxy(18,3);
    printf("INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY");

    gotoxy(8,5);
    for(i=0;i<60;i++){
        printf("%c",177);
    }
    for(i=0;i<8;i++){
            printf("\n\t%c",177);
        for(o=0;o<58;o++){
            printf(" ");
        }
    printf("%c",177);
    }
    printf("\n\t");
    for(i=0;i<60;i++){
        printf("%c",177);
    }

    gotoxy(15,7);
    printf("%c If You Want Add New Payment Then Press [1]",219);
    gotoxy(15,9);
    printf("%c If You Want Edit Any Payment Then Press [2]",219);

    gotoxy(35,12);
    scanf("%d",&eg);
    fflush(stdin);
    system("cls");


if(eg==1){

    printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);


    gotoxy(40,1);
    printf(" PRAYMENT ");
    gotoxy(20,6);
    printf("Roll number: ");
    gotoxy(20,8);
    printf("Name: ");
    gotoxy(20,10);
    printf("Date: ");
    gotoxy(20,12);
    printf("Total: ");
    gotoxy(20,14);
    printf("Now pray: ");
    gotoxy(20,16);
    printf("Dew: ");
    gotoxy(30,19);
    printf("Press [0] ENTER then goto main menu");



    opn=fopen("five_st_account.dat","r");
    pray=fopen("fiv_pr.dat","a");

    gotoxy(45,6);
    scanf("%lu",&rec_fee.roll);
    fflush(stdin);

    while(fread(&fee_col,sizeof(fee_col),1,opn) != 0){

    if(rec_fee.roll==fee_col.roll){


    gotoxy(45,8);
    strcpy(rec_fee.name,fee_col.name);
    printf("%s",rec_fee.name);

    gotoxy(45,10);
    gets(rec_fee.date);
    gotoxy(45,12);
    printf("%f",fee_col.total);
    fflush(stdin);
    gotoxy(45,14);
    scanf("%f",&rec_fee.recive);
    fflush(stdin);
    gotoxy(45,16);

    //printf("%lu",fee_col.roll);

    rec_fee.arrears=fee_col.total-rec_fee.recive;

    printf("%f",rec_fee.arrears);
    fflush(stdin);
    fclose(opn);

        }
    }

    fwrite(&rec_fee,sizeof(rec_fee),1,pray);
    fflush(pray);
    fclose(pray);

    int k;
    gotoxy(30,20);
    scanf("%d",&k);
    fflush(stdin);
    if(k==0){
            fflush(stdin);
    system("cls");
    //fiv_semester(5);
    return 1600;
    }
}




        else if(eg==2){

fiv_edtl:

                printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);


    gotoxy(40,1);
    printf(" PRAYMENT ");
    gotoxy(20,6);
    printf("Roll number: ");
    gotoxy(20,8);
    printf("Name: ");
    gotoxy(20,10);
    printf("Date: ");
    gotoxy(20,12);
    printf("Total: ");
    gotoxy(20,14);
    printf("Now pray: ");
    gotoxy(20,16);
    printf("Dew: ");
//    gotoxy(30,19);
//    printf("Press [0] ENTER then goto main menu");

    pray=fopen("fiv_pr.dat","r+");

    unsigned long int ik_int;

   gotoxy(45,6);
    scanf("%lu",&ik_int);
    fflush(stdin);

            while(fread(&rec_fee,sizeof(rec_fee),1,pray) != 0){

            if(ik_int==rec_fee.roll){

    gotoxy(45,8);
    printf("%s",rec_fee.name);
    fflush(stdin);

    gotoxy(45,10);
    gets(rec_fee.date);
    gotoxy(45,12);
    printf("%f",rec_fee.arrears);
    fflush(stdin);
    gotoxy(45,14);
    scanf("%f",&rec_fee.recive);
    fflush(stdin);

    rec_fee.arrears=rec_fee.arrears-rec_fee.recive;
    gotoxy(45,16);
    printf("%f",rec_fee.arrears);

    fseek(pray,-sizeof(rec_fee),SEEK_CUR);
    fwrite(&rec_fee,sizeof(rec_fee),1,pray);
    fflush(pray);
    fclose(pray);
            }
    fflush(stdin);
    }


    int k;
    gotoxy(30,20);
    printf("More Press [0] AND Back press [1]:  ");
    scanf("%d",&k);
    fflush(stdin);
    if(k==0){
        fflush(stdin);
        system("cls");
        goto fiv_edtl;
    }
    else{
        fflush(stdin);
        system("cls");
       // fast_semester(1);
       return 1601;
    }
    }
}



    if(key==6){

    int i, o, eg;

    gotoxy(18,3);
    printf("INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY");

    gotoxy(8,5);
    for(i=0;i<60;i++){
        printf("%c",177);
    }
    for(i=0;i<8;i++){
            printf("\n\t%c",177);
        for(o=0;o<58;o++){
            printf(" ");
        }
    printf("%c",177);
    }
    printf("\n\t");
    for(i=0;i<60;i++){
        printf("%c",177);
    }

    gotoxy(15,7);
    printf("%c If You Want Add New Payment Then Press [1]",219);
    gotoxy(15,9);
    printf("%c If You Want Edit Any Payment Then Press [2]",219);

    gotoxy(35,12);
    scanf("%d",&eg);
    fflush(stdin);
    system("cls");


if(eg==1){

    printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);


    gotoxy(40,1);
    printf(" PRAYMENT ");
    gotoxy(20,6);
    printf("Roll number: ");
    gotoxy(20,8);
    printf("Name: ");
    gotoxy(20,10);
    printf("Date: ");
    gotoxy(20,12);
    printf("Total: ");
    gotoxy(20,14);
    printf("Now pray: ");
    gotoxy(20,16);
    printf("Dew: ");
    gotoxy(30,19);
    printf("Press [0] ENTER then goto main menu");



    opn=fopen("six_st_account.dat","r");
    pray=fopen("sx_pr.dat","a");

    gotoxy(45,6);
    scanf("%lu",&rec_fee.roll);
    fflush(stdin);

    while(fread(&fee_col,sizeof(fee_col),1,opn) != 0){

    if(rec_fee.roll==fee_col.roll){


    gotoxy(45,8);
    strcpy(rec_fee.name,fee_col.name);
    printf("%s",rec_fee.name);

    gotoxy(45,10);
    gets(rec_fee.date);
    gotoxy(45,12);
    printf("%f",fee_col.total);
    fflush(stdin);
    gotoxy(45,14);
    scanf("%f",&rec_fee.recive);
    fflush(stdin);
    gotoxy(45,16);

    //printf("%lu",fee_col.roll);

    rec_fee.arrears=fee_col.total-rec_fee.recive;

    printf("%f",rec_fee.arrears);
    fflush(stdin);
    fclose(opn);

        }
    }

    fwrite(&rec_fee,sizeof(rec_fee),1,pray);
    fflush(pray);
    fclose(pray);

    int k;
    gotoxy(30,20);
    scanf("%d",&k);
    fflush(stdin);
    if(k==0){
            fflush(stdin);
    system("cls");
  //  six_semester(6);
  return 1700;
    }
}



        else if(eg==2){

six_edtl:

                printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);


    gotoxy(40,1);
    printf(" PRAYMENT ");
    gotoxy(20,6);
    printf("Roll number: ");
    gotoxy(20,8);
    printf("Name: ");
    gotoxy(20,10);
    printf("Date: ");
    gotoxy(20,12);
    printf("Total: ");
    gotoxy(20,14);
    printf("Now pray: ");
    gotoxy(20,16);
    printf("Dew: ");
//    gotoxy(30,19);
//    printf("Press [0] ENTER then goto main menu");

    pray=fopen("sx_pr.dat","r+");

    unsigned long int ik_int;

   gotoxy(45,6);
    scanf("%lu",&ik_int);
    fflush(stdin);

            while(fread(&rec_fee,sizeof(rec_fee),1,pray) != 0){

            if(ik_int==rec_fee.roll){

    gotoxy(45,8);
    printf("%s",rec_fee.name);
    fflush(stdin);

    gotoxy(45,10);
    gets(rec_fee.date);
    gotoxy(45,12);
    printf("%f",rec_fee.arrears);
    fflush(stdin);
    gotoxy(45,14);
    scanf("%f",&rec_fee.recive);
    fflush(stdin);

    rec_fee.arrears=rec_fee.arrears-rec_fee.recive;
    gotoxy(45,16);
    printf("%f",rec_fee.arrears);

    fseek(pray,-sizeof(rec_fee),SEEK_CUR);
    fwrite(&rec_fee,sizeof(rec_fee),1,pray);
    fflush(pray);
    fclose(pray);
            }
    fflush(stdin);
    }


    int k;
    gotoxy(30,20);
    printf("More Press [0] AND Back press [1]:  ");
    scanf("%d",&k);
    fflush(stdin);
    if(k==0){
        fflush(stdin);
        system("cls");
        goto six_edtl;
    }
    else{
        fflush(stdin);
        system("cls");
        //six_semester(6);
        return 1701;
    }
    }

    }



    if(key==7){

    int i, o, eg;

    gotoxy(18,3);
    printf("INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY");

    gotoxy(8,5);
    for(i=0;i<60;i++){
        printf("%c",177);
    }
    for(i=0;i<8;i++){
            printf("\n\t%c",177);
        for(o=0;o<58;o++){
            printf(" ");
        }
    printf("%c",177);
    }
    printf("\n\t");
    for(i=0;i<60;i++){
        printf("%c",177);
    }

    gotoxy(15,7);
    printf("%c If You Want Add New Payment Then Press [1]",219);
    gotoxy(15,9);
    printf("%c If You Want Edit Any Payment Then Press [2]",219);

    gotoxy(35,12);
    scanf("%d",&eg);
    fflush(stdin);
    system("cls");


if(eg==1){

    printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);


    gotoxy(40,1);
    printf(" PRAYMENT ");
    gotoxy(20,6);
    printf("Roll number: ");
    gotoxy(20,8);
    printf("Name: ");
    gotoxy(20,10);
    printf("Date: ");
    gotoxy(20,12);
    printf("Total: ");
    gotoxy(20,14);
    printf("Now pray: ");
    gotoxy(20,16);
    printf("Dew: ");
    gotoxy(30,19);
    printf("Press [0] ENTER then goto main menu");



    opn=fopen("seven_st_account.dat","r");
    pray=fopen("sev_pr.dat","a");

    gotoxy(45,6);
    scanf("%lu",&rec_fee.roll);
    fflush(stdin);

    while(fread(&fee_col,sizeof(fee_col),1,opn) != 0){

    if(rec_fee.roll==fee_col.roll){


    gotoxy(45,8);
    strcpy(rec_fee.name,fee_col.name);
    printf("%s",rec_fee.name);

    gotoxy(45,10);
    gets(rec_fee.date);
    gotoxy(45,12);
    printf("%f",fee_col.total);
    fflush(stdin);
    gotoxy(45,14);
    scanf("%f",&rec_fee.recive);
    fflush(stdin);
    gotoxy(45,16);

    //printf("%lu",fee_col.roll);

    rec_fee.arrears=fee_col.total-rec_fee.recive;

    printf("%f",rec_fee.arrears);
    fflush(stdin);
    fclose(opn);

        }
    }

    fwrite(&rec_fee,sizeof(rec_fee),1,pray);
    fflush(pray);
    fclose(pray);

    int k;
    gotoxy(30,20);
    scanf("%d",&k);
    fflush(stdin);
    if(k==0){
            fflush(stdin);
    system("cls");
   // seven_semester(7);
   return 1800;
    }
}



        else if(eg==2){

sev_edtl:

    printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);


    gotoxy(40,1);
    printf(" PRAYMENT ");
    gotoxy(20,6);
    printf("Roll number: ");
    gotoxy(20,8);
    printf("Name: ");
    gotoxy(20,10);
    printf("Date: ");
    gotoxy(20,12);
    printf("Total: ");
    gotoxy(20,14);
    printf("Now pray: ");
    gotoxy(20,16);
    printf("Dew: ");
//    gotoxy(30,19);
//    printf("Press [0] ENTER then goto main menu");

    pray=fopen("sev_pr.dat","r+");

    unsigned long int ik_int;

   gotoxy(45,6);
    scanf("%lu",&ik_int);
    fflush(stdin);

            while(fread(&rec_fee,sizeof(rec_fee),1,pray) != 0){

            if(ik_int==rec_fee.roll){

    gotoxy(45,8);
    printf("%s",rec_fee.name);
    fflush(stdin);

    gotoxy(45,10);
    gets(rec_fee.date);
    gotoxy(45,12);
    printf("%f",rec_fee.arrears);
    fflush(stdin);
    gotoxy(45,14);
    scanf("%f",&rec_fee.recive);
    fflush(stdin);

    rec_fee.arrears=rec_fee.arrears-rec_fee.recive;
    gotoxy(45,16);
    printf("%f",rec_fee.arrears);

    fseek(pray,-sizeof(rec_fee),SEEK_CUR);
    fwrite(&rec_fee,sizeof(rec_fee),1,pray);
    fflush(pray);
    fclose(pray);
            }
    fflush(stdin);
    }


    int k;
    gotoxy(30,20);
    printf("More Press [0] AND Back press [1]:  ");
    scanf("%d",&k);
    fflush(stdin);
    if(k==0){
        fflush(stdin);
        system("cls");
        goto sev_edtl;
    }
    else{
        fflush(stdin);
        system("cls");
        //seven_semester(7);
        return 1801;
    }
    }

}



    if(key==8){

    int i, o, eg;

    gotoxy(18,3);
    printf("INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY");

    gotoxy(8,5);
    for(i=0;i<60;i++){
        printf("%c",177);
    }
    for(i=0;i<8;i++){
            printf("\n\t%c",177);
        for(o=0;o<58;o++){
            printf(" ");
        }
    printf("%c",177);
    }
    printf("\n\t");
    for(i=0;i<60;i++){
        printf("%c",177);
    }

    gotoxy(15,7);
    printf("%c If You Want Add New Payment Then Press [1]",219);
    gotoxy(15,9);
    printf("%c If You Want Edit Any Payment Then Press [2]",219);

    gotoxy(35,12);
    scanf("%d",&eg);
    fflush(stdin);
    system("cls");



if(eg==1){

    printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);


    gotoxy(40,1);
    printf(" PRAYMENT ");
    gotoxy(20,6);
    printf("Roll number: ");
    gotoxy(20,8);
    printf("Name: ");
    gotoxy(20,10);
    printf("Date: ");
    gotoxy(20,12);
    printf("Total: ");
    gotoxy(20,14);
    printf("Now pray: ");
    gotoxy(20,16);
    printf("Dew: ");
    gotoxy(30,19);
    printf("Press [0] ENTER then goto main menu");



    opn=fopen("eight_st_account.dat","r");
    pray=fopen("eght_pr.dat","a");

    gotoxy(45,6);
    scanf("%lu",&rec_fee.roll);
    fflush(stdin);

    while(fread(&fee_col,sizeof(fee_col),1,opn) != 0){

    if(rec_fee.roll==fee_col.roll){


    gotoxy(45,8);
    strcpy(rec_fee.name,fee_col.name);
    printf("%s",rec_fee.name);

    gotoxy(45,10);
    gets(rec_fee.date);
    gotoxy(45,12);
    printf("%f",fee_col.total);
    fflush(stdin);
    gotoxy(45,14);
    scanf("%f",&rec_fee.recive);
    fflush(stdin);
    gotoxy(45,16);

    //printf("%lu",fee_col.roll);

    rec_fee.arrears=fee_col.total-rec_fee.recive;

    printf("%f",rec_fee.arrears);
    fflush(stdin);
    fclose(opn);

        }
    }

    fwrite(&rec_fee,sizeof(rec_fee),1,pray);
    fflush(pray);
    fclose(pray);

    int k;
    gotoxy(30,18);
    scanf("%d",&k);
    fflush(stdin);
    if(k==0){
            fflush(stdin);
    system("cls");
  //  eight_semester(8);
    return 1900;

    }
}




        else if(eg==2){

eit_edtl:

                printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);


    gotoxy(40,1);
    printf(" PRAYMENT ");
    gotoxy(20,6);
    printf("Roll number: ");
    gotoxy(20,8);
    printf("Name: ");
    gotoxy(20,10);
    printf("Date: ");
    gotoxy(20,12);
    printf("Total: ");
    gotoxy(20,14);
    printf("Now pray: ");
    gotoxy(20,16);
    printf("Dew: ");

    pray=fopen("eght_pr.dat","r+");

    unsigned long int ik_int;

   gotoxy(45,6);
    scanf("%lu",&ik_int);
    fflush(stdin);

            while(fread(&rec_fee,sizeof(rec_fee),1,pray) != 0){

            if(ik_int==rec_fee.roll){

    gotoxy(45,8);
    printf("%s",rec_fee.name);
    fflush(stdin);

    gotoxy(45,10);
    gets(rec_fee.date);
    gotoxy(45,12);
    printf("%f",rec_fee.arrears);
    fflush(stdin);
    gotoxy(45,14);
    scanf("%f",&rec_fee.recive);
    fflush(stdin);

    rec_fee.arrears=rec_fee.arrears-rec_fee.recive;
    gotoxy(45,16);
    printf("%f",rec_fee.arrears);

    fseek(pray,-sizeof(rec_fee),SEEK_CUR);
    fwrite(&rec_fee,sizeof(rec_fee),1,pray);
    fflush(pray);
    fclose(pray);
            }
    fflush(stdin);
    }


    int k;
    gotoxy(30,20);
    printf("More Press [0] AND Back press [1]:  ");
    scanf("%d",&k);
    fflush(stdin);
    if(k==0){
        fflush(stdin);
        system("cls");
        goto eit_edtl;
    }
    else{
        fflush(stdin);
        system("cls");
        return 1901;
    }
    }

    }

}


int view_prayment(int key){

    FILE *pray;

    if(key==1){
    printf("\n\t\t\tALL STUDENT PAYMENT INFORMATION");
    printf("\n\t\t\t===============================\n\n");


    pray=fopen("fast_pr.dat","r");


    while(fread(&rec_fee,sizeof(rec_fee),1,pray) !=0 ){

            printf("\n\n\t\tStudent Roll: %lu",rec_fee.roll);
            printf("\n\n\t\tStudent name: %s",rec_fee.name);
            printf("\n\n\t\tDate: %s",rec_fee.date);
            printf("\n\n\t\tPayment: %f",rec_fee.recive);
            printf("\n\n\t\tDue: %f",rec_fee.arrears);
            printf("\n\n\t|----------------------------------------------\n");
    }
    fclose(pray);

    int ap;
    printf("\n\n\n\t\tIf you exit this page, than press [0]:    ");
    scanf("%d",&ap);
    fflush(stdin);
    if(ap==0){
      system("cls");
     return 11;
    }
    }

        if(key==2){
         printf("\n\t\t\tALL STUDENT PAYMENT INFORMATION");
    printf("\n\t\t\t=================================\n\n");



    pray=fopen("sec_pr.dat","r");


    while(fread(&rec_fee,sizeof(rec_fee),1,pray) !=0 ){

            printf("\n\n\t\tStudent Roll: %lu",rec_fee.roll);
            printf("\n\n\t\tStudent name: %s",rec_fee.name);
            printf("\n\n\t\tDate: %s",rec_fee.date);
            printf("\n\n\t\tPayment: %f",rec_fee.recive);
            printf("\n\n\t\tDue: %f",rec_fee.arrears);
            printf("\n\n\t|----------------------------------------------\n");
    }
    fclose(pray);

        int ap;
    printf("\n\n\n\t\tIf you exit this page, than press [0]:    ");
    scanf("%d",&ap);
    if(ap==0){
      system("cls");
      return 12;

    }
    }


        if(key==3){

        FILE *x_pray;

     printf("\n\t\t\tALL STUDENT PAYMENT INFORMATION");
    printf("\n\t\t\t================================\n\n");



    x_pray=fopen("trd_pr.dat","r");


    while(fread(&rec_fee,sizeof(rec_fee),1,x_pray) !=0 ){

            printf("\n\n\t\tStudent Roll: %lu",rec_fee.roll);
            printf("\n\n\t\tStudent name: %s",rec_fee.name);
            printf("\n\n\t\tDate: %s",rec_fee.date);
            printf("\n\n\t\tPayment: %f",rec_fee.recive);
            printf("\n\n\t\tDue: %f",rec_fee.arrears);
            printf("\n\n\t|----------------------------------------------\n");
    }
    fclose(x_pray);

        int ap;
    printf("\n\n\n\t\tIf you exit this page, than press [0]:    ");
    scanf("%d",&ap);
    if(ap==0){
     fflush(stdin);
      system("cls");
        return 13;
    }
    }


        if(key==4){

         printf("\n\t\t\tALL STUDENT PAYMENT INFORMATION");
    printf("\n\t\t\t================================\n\n");



    pray=fopen("for_pr.dat","r");


    while(fread(&rec_fee,sizeof(rec_fee),1,pray) !=0 ){

            printf("\n\n\t\tStudent Roll: %lu",rec_fee.roll);
            printf("\n\n\t\tStudent name: %s",rec_fee.name);
            printf("\n\n\t\tDate: %s",rec_fee.date);
            printf("\n\n\t\tPayment: %f",rec_fee.recive);
            printf("\n\n\t\tDue: %f",rec_fee.arrears);
            printf("\n\n\t|----------------------------------------------\n");
    }
    fclose(pray);

        int ap;
    printf("\n\n\n\t\tIf you exit this page, than press [0]:    ");
    scanf("%d",&ap);
    if(ap==0){
      system("cls");
      return 14;
    }
    }


        if(key==5){


         printf("\n\t\t\tALL STUDENT PAYMENT INFORMATION");
    printf("\n\t\t\t=================================\n\n");


    pray=fopen("fiv_pr.dat","r");


    while(fread(&rec_fee,sizeof(rec_fee),1,pray) !=0 ){

            printf("\n\n\t\tStudent Roll: %lu",rec_fee.roll);
            printf("\n\n\t\tStudent name: %s",rec_fee.name);
            printf("\n\n\t\tDate: %s",rec_fee.date);
            printf("\n\n\t\tPayment: %f",rec_fee.recive);
            printf("\n\n\t\tDue: %f",rec_fee.arrears);
            printf("\n\n\t|----------------------------------------------\n");
    }
    fclose(pray);

        int ap;
    printf("\n\n\n\t\tIf you exit this page, than press [0]:    ");
    scanf("%d",&ap);
    if(ap==0){
      system("cls");
        return 15;
    }
    }


        if(key==6){

         printf("\n\t\t\tALL STUDENT PAYMENT INFORMATION");
    printf("\n\t\t\t=================================\n\n");



    pray=fopen("sx_pr.dat","r");


    while(fread(&rec_fee,sizeof(rec_fee),1,pray) !=0 ){

            printf("\n\n\t\tStudent Roll: %lu",rec_fee.roll);
            printf("\n\n\t\tStudent name: %s",rec_fee.name);
            printf("\n\n\t\tDate: %s",rec_fee.date);
            printf("\n\n\t\tPayment: %f",rec_fee.recive);
            printf("\n\n\t\tDue: %f",rec_fee.arrears);
            printf("\n\n\t|----------------------------------------------\n");
    }
    fclose(pray);

        int ap;
    printf("\n\n\n\t\tIf you exit this page, than press [0]:    ");
    scanf("%d",&ap);
    if(ap==0){
      system("cls");
      return 16;
    }
    }

        if(key==7){

         printf("\n\t\t\tALL STUDENT PAYMENT INFORMATION");
    printf("\n\t\t\t=================================\n\n");



    pray=fopen("sev_pr.dat","r");


    while(fread(&rec_fee,sizeof(rec_fee),1,pray) !=0 ){

            printf("\n\n\t\tStudent Roll: %lu",rec_fee.roll);
            printf("\n\n\t\tStudent name: %s",rec_fee.name);
            printf("\n\n\t\tDate: %s",rec_fee.date);
            printf("\n\n\t\tPayment: %f",rec_fee.recive);
            printf("\n\n\t\tDue: %f",rec_fee.arrears);
            printf("\n\n\t|----------------------------------------------\n");
    }
    fclose(pray);

        int ap;
    printf("\n\n\n\t\tIf you exit this page, than press [0]:    ");
    scanf("%d",&ap);
    if(ap==0){
      system("cls");
      return 17;
    }
    }


        if(key==8){

         printf("\n\t\t\tALL STUDENT PAYMENT INFORMATION");
    printf("\n\t\t\t=================================\n\n");



    pray=fopen("eght_pr.dat","r");


    while(fread(&rec_fee,sizeof(rec_fee),1,pray) !=0 ){

            printf("\n\n\t\tStudent Roll: %lu",rec_fee.roll);
            printf("\n\n\t\tStudent name: %s",rec_fee.name);
            printf("\n\n\t\tDate: %s",rec_fee.date);
            printf("\n\n\t\tPayment: %f",rec_fee.recive);
            printf("\n\n\t\tDue: %f",rec_fee.arrears);
            printf("\n\n\t|----------------------------------------------\n");
    }
    fclose(pray);

        int ap;
    printf("\n\n\n\t\tIf you exit this page, than press [0]:    ");
    scanf("%d",&ap);
    if(ap==0){
      system("cls");
      return 18;
    }
    }


}



/// .............................................................



int search_account(int key){        /* search reg all account */

    if (key==15){
        FILE *ser_acc;
        unsigned long int se_roll;
        int j=25;



        printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);


    gotoxy(38,1);
    printf(" VIEW PAYMENT ");
    gotoxy(20,6);
    printf("Please type student roll number: ");
    gotoxy(20,8);
    printf("Name: ");
    gotoxy(20,10);
    printf("Date: ");
    gotoxy(20,12);
    printf("Payment: ");
    gotoxy(20,14);
    printf("Dew: ");
    gotoxy(28,19);
    printf("Press [0] & ENTER then goto main menu");


        gotoxy(55,6);
        scanf("%lu",&se_roll);
        fflush(stdin);

        ser_acc=fopen("fast_pr.dat","r");

        while(fread(&rec_fee,sizeof(rec_fee),1,ser_acc) != 0){

            if(se_roll==rec_fee.roll){

                gotoxy(50,8);
                printf("%s",rec_fee.name);

                gotoxy(50,10);
                printf("%s",rec_fee.date);

                gotoxy(50,12);
                printf("%f",rec_fee.recive);

                gotoxy(50,14);
                printf("%f",rec_fee.arrears);

            }

        }
        fclose(ser_acc);

        int kl;
        gotoxy(45,20);
        scanf("%d",&kl);
        fflush(stdin);


        if(kl==0){
            system("cls");
           return 990;
        }

    }



    if (key==25){
        FILE *ser_acc;
        unsigned long int se_roll;
        int j=25;



        printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);


    gotoxy(38,1);
    printf(" VIEW PAYMENT ");
    gotoxy(20,6);
    printf("Please type student roll number: ");
    gotoxy(20,8);
    printf("Name: ");
    gotoxy(20,10);
    printf("Date: ");
    gotoxy(20,12);
    printf("Payment: ");
    gotoxy(20,14);
    printf("Dew: ");
    gotoxy(28,19);
    printf("Press [0] & ENTER then goto main menu");


        gotoxy(55,6);
        scanf("%lu",&se_roll);
        fflush(stdin);

        ser_acc=fopen("sec_pr.dat","r");

        while(fread(&rec_fee,sizeof(rec_fee),1,ser_acc) != 0){

            if(se_roll==rec_fee.roll){

                gotoxy(50,8);
                printf("%s",rec_fee.name);

                gotoxy(50,10);
                printf("%s",rec_fee.date);

                gotoxy(50,12);
                printf("%f",rec_fee.recive);

                gotoxy(50,14);
                printf("%f",rec_fee.arrears);

            }

        }
        fclose(ser_acc);

        int kl;
        gotoxy(45,20);
        scanf("%d",&kl);
        fflush(stdin);


        if(kl==0){
            system("cls");
           return 991;
        }

    }



    if (key==35){
        FILE *ser_acc;
        unsigned long int se_roll;
        int j=25;



    printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);


    gotoxy(38,1);
    printf(" VIEW PAYMENT ");
    gotoxy(20,6);
    printf("Please type student roll number: ");
    gotoxy(20,8);
    printf("Name: ");
    gotoxy(20,10);
    printf("Date: ");
    gotoxy(20,12);
    printf("Payment: ");
    gotoxy(20,14);
    printf("Dew: ");
    gotoxy(28,19);
    printf("Press [0] & ENTER then goto main menu");


        gotoxy(55,6);
        scanf("%lu",&se_roll);
        fflush(stdin);

        ser_acc=fopen("trd_pr.dat","r");

        while(fread(&rec_fee,sizeof(rec_fee),1,ser_acc) != 0){

            if(se_roll==rec_fee.roll){

                gotoxy(50,8);
                printf("%s",rec_fee.name);

                gotoxy(50,10);
                printf("%s",rec_fee.date);

                gotoxy(50,12);
                printf("%f",rec_fee.recive);

                gotoxy(50,14);
                printf("%f",rec_fee.arrears);

            }

        }
        fclose(ser_acc);

        int kl;
        gotoxy(45,20);
        scanf("%d",&kl);
        fflush(stdin);


        if(kl==0){
            system("cls");
           // fast_semester(1);
           return 992;
        }

    }



    if (key==45){
        FILE *ser_acc;
        unsigned long int se_roll;
        int j=25;



        printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);


    gotoxy(38,1);
    printf(" VIEW PAYMENT ");
    gotoxy(20,6);
    printf("Please type student roll number: ");
    gotoxy(20,8);
    printf("Name: ");
    gotoxy(20,10);
    printf("Date: ");
    gotoxy(20,12);
    printf("Payment: ");
    gotoxy(20,14);
    printf("Dew: ");
    gotoxy(28,19);
    printf("Press [0] & ENTER then goto main menu");


        gotoxy(55,6);
        scanf("%lu",&se_roll);
        fflush(stdin);

        ser_acc=fopen("for_pr.dat","r");

        while(fread(&rec_fee,sizeof(rec_fee),1,ser_acc) != 0){

            if(se_roll==rec_fee.roll){

                gotoxy(50,8);
                printf("%s",rec_fee.name);

                gotoxy(50,10);
                printf("%s",rec_fee.date);

                gotoxy(50,12);
                printf("%f",rec_fee.recive);

                gotoxy(50,14);
                printf("%f",rec_fee.arrears);

            }

        }
        fclose(ser_acc);

        int kl;
        gotoxy(45,20);
        scanf("%d",&kl);
        fflush(stdin);


        if(kl==0){
            system("cls");
           // fast_semester(1);
           return 993;
        }

    }



    if (key==55){
        FILE *ser_acc;
        unsigned long int se_roll;
        int j=25;



        printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);


    gotoxy(38,1);
    printf(" VIEW PAYMENT ");
    gotoxy(20,6);
    printf("Please type student roll number: ");
    gotoxy(20,8);
    printf("Name: ");
    gotoxy(20,10);
    printf("Date: ");
    gotoxy(20,12);
    printf("Payment: ");
    gotoxy(20,14);
    printf("Dew: ");
    gotoxy(28,19);
    printf("Press [0] & ENTER then goto main menu");


        gotoxy(55,6);
        scanf("%lu",&se_roll);
        fflush(stdin);

        ser_acc=fopen("fiv_pr.dat","r");

        while(fread(&rec_fee,sizeof(rec_fee),1,ser_acc) != 0){

            if(se_roll==rec_fee.roll){

                gotoxy(50,8);
                printf("%s",rec_fee.name);

                gotoxy(50,10);
                printf("%s",rec_fee.date);

                gotoxy(50,12);
                printf("%f",rec_fee.recive);

                gotoxy(50,14);
                printf("%f",rec_fee.arrears);

            }

        }
        fclose(ser_acc);

        int kl;
        gotoxy(45,20);
        scanf("%d",&kl);
        fflush(stdin);


        if(kl==0){
            system("cls");
           // fast_semester(1);
           return 994;
        }

    }



    if (key==65){
        FILE *ser_acc;
        unsigned long int se_roll;
        int j=25;



        printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);


    gotoxy(38,1);
    printf(" VIEW PAYMENT ");
    gotoxy(20,6);
    printf("Please type student roll number: ");
    gotoxy(20,8);
    printf("Name: ");
    gotoxy(20,10);
    printf("Date: ");
    gotoxy(20,12);
    printf("Payment: ");
    gotoxy(20,14);
    printf("Dew: ");
    gotoxy(28,19);
    printf("Press [0] & ENTER then goto main menu");


        gotoxy(55,6);
        scanf("%lu",&se_roll);
        fflush(stdin);

        ser_acc=fopen("sx_pr.dat","r");

        while(fread(&rec_fee,sizeof(rec_fee),1,ser_acc) != 0){

            if(se_roll==rec_fee.roll){

                gotoxy(50,8);
                printf("%s",rec_fee.name);

                gotoxy(50,10);
                printf("%s",rec_fee.date);

                gotoxy(50,12);
                printf("%f",rec_fee.recive);

                gotoxy(50,14);
                printf("%f",rec_fee.arrears);

            }

        }
        fclose(ser_acc);

        int kl;
        gotoxy(45,20);
        scanf("%d",&kl);
        fflush(stdin);


        if(kl==0){
            system("cls");
           // fast_semester(1);
           return 995;
        }

    }



    if (key==75){
        FILE *ser_acc;
        unsigned long int se_roll;
        int j=25;



        printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);


    gotoxy(38,1);
    printf(" VIEW PAYMENT ");
    gotoxy(20,6);
    printf("Please type student roll number: ");
    gotoxy(20,8);
    printf("Name: ");
    gotoxy(20,10);
    printf("Date: ");
    gotoxy(20,12);
    printf("Payment: ");
    gotoxy(20,14);
    printf("Dew: ");
    gotoxy(28,19);
    printf("Press [0] & ENTER then goto main menu");


        gotoxy(55,6);
        scanf("%lu",&se_roll);
        fflush(stdin);

        ser_acc=fopen("sev_pr.dat","r");

        while(fread(&rec_fee,sizeof(rec_fee),1,ser_acc) != 0){

            if(se_roll==rec_fee.roll){

                gotoxy(50,8);
                printf("%s",rec_fee.name);

                gotoxy(50,10);
                printf("%s",rec_fee.date);

                gotoxy(50,12);
                printf("%f",rec_fee.recive);

                gotoxy(50,14);
                printf("%f",rec_fee.arrears);

            }

        }
        fclose(ser_acc);

        int kl;
        gotoxy(45,20);
        scanf("%d",&kl);
        fflush(stdin);


        if(kl==0){
            system("cls");
           // fast_semester(1);
           return 996;
        }

    }



    if (key==85){
        FILE *ser_acc;
        unsigned long int se_roll;
        int j=25;



        printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);


    gotoxy(38,1);
    printf(" VIEW PAYMENT ");
    gotoxy(20,6);
    printf("Please type student roll number: ");
    gotoxy(20,8);
    printf("Name: ");
    gotoxy(20,10);
    printf("Date: ");
    gotoxy(20,12);
    printf("Payment: ");
    gotoxy(20,14);
    printf("Dew: ");
    gotoxy(28,19);
    printf("Press [0] & ENTER then goto main menu");


        gotoxy(55,6);
        scanf("%lu",&se_roll);
        fflush(stdin);

        ser_acc=fopen("eght_pr.dat","r");

        while(fread(&rec_fee,sizeof(rec_fee),1,ser_acc) != 0){

            if(se_roll==rec_fee.roll){

                gotoxy(50,8);
                printf("%s",rec_fee.name);

                gotoxy(50,10);
                printf("%s",rec_fee.date);

                gotoxy(50,12);
                printf("%f",rec_fee.recive);

                gotoxy(50,14);
                printf("%f",rec_fee.arrears);

            }

        }
        fclose(ser_acc);

        int kl;
        gotoxy(45,20);
        scanf("%d",&kl);
        fflush(stdin);


        if(kl==0){
            system("cls");
           // fast_semester(1);
           return 997;
        }

    }


}




/// ...................................................


int semester(int key){    /// view semester;

    int i=0,j;

    if(key==5){
    printf("\n\t\t");

     draw(50);
     while(i<20){
        j=1;
        draw_th(j);

        if(i==0){
            draw_sp(20);
            printf("SEMESTER");
            draw_sp(20);
            printf("%c",178);
        }
        if(i==1){
            draw(48);
            printf("%c",178);
        }
        if(i==3){
            printf("\t%c%c 1.1st Semester",178,177);
            draw_sp(24);
            printf("%c",178);
        }
        if(i==4){
            printf("\t%C%c 2.2nd Semester",178,177);
            draw_sp(24);
            printf("%c",178);
        }

        if(i==5){
            printf("\t%c%c 3.3rd Semester",178,177);
            draw_sp(24);
            printf("%c",178);
        }
        if(i==6){
            printf("\t%c%c 4.4th Semester",178,177);
            draw_sp(24);
            printf("%c",178);
        }
        if(i==7){
            printf("\t%c%c 5.5th Semester",178,177);
            draw_sp(24);
            printf("%c",178);
        }
        if(i==8){
            printf("\t%c%c 6.6th Semester",178,177);
            draw_sp(24);
            printf("%c",178);
        }
        if(i==9){
            printf("\t%c%c 7.7th Semester",178,177);
            draw_sp(24);
            printf("%c",178);
        }
        if(i==10){
            printf("\t%c%c 8.8th Semester",178,177);
            draw_sp(24);
            printf("%c",178);
        }


        if(i==17){
            printf("\t\t> 0.Back main menu");
            draw_sp(15);
            printf("%c",178);
        }

        if(i==18){
            draw(48);
            printf("%c",178);
        }
        if(i==19){
            printf("   Institute Of Computer Since & Technology");
            draw_sp(5);
            printf("%c",178);
        }
        if(i==2|| i==11||i==12||i==13||i==14 || i==15 || i==16 || i==20){
            draw_sp(48);
            printf("%c",178);
        }
        i++;
     }
     printf("\n\t\t");
     draw(50);

     int ok;

     gotoxy(26,17);
     printf("Please type selected number: ");
     scanf("%d",&ok);
     fflush(stdin);

     if(ok==1){
         fflush(stdin);
         system("cls");
         return 301;
     }
     if(ok==2){
         fflush(stdin);
         system("cls");
         return 302;
     }
     if(ok==3){
         fflush(stdin);
         system("cls");
         return 303;
     }
     if(ok==4){
         fflush(stdin);
         system("cls");
         return 304;
     }
     if(ok==5){
         fflush(stdin);
         system("cls");
         return 305;
     }
     if(ok==6){
         fflush(stdin);
         system("cls");
         return 306;
     }
     if(ok==7){
         fflush(stdin);
         system("cls");
         return 307;
     }
     if(ok==8){
         fflush(stdin);
         system("cls");
        return 308;
     }
     if(ok==0){
        system("cls");
        return 100;
     }

    }

}


/// ...................................................


int fast_semester(int key){

     int i=0,j=0,get_v;

    if(key==18){
    printf("\n\t\t");

     draw(50);
     while(i<20){
        j=1;
        draw_th(j);

        if(i==0){
            draw_sp(18);
            printf("1ST SEMESTER");
            draw_sp(18);
            printf("%c",178);
        }
        if(i==1){
            draw(48);
            printf("%c",178);
        }
        if(i==3){
            printf("\t%c%c 1.Student Account Registation",178,177);
            draw_sp(9);
            printf("%c",178);
        }
        if(i==5){
            printf("\t%C%c 2.View student account",178,177);
            draw_sp(16);
            printf("%c",178);
        }

        if(i==7){
            printf("\t%c%c 3.Prayment",178,177);
            draw_sp(28);
            printf("%c",178);
        }
        if(i==9){
            printf("\t%c%c 4.View student dew",178,177);
            draw_sp(20);
            printf("%c",178);
        }
        if(i==11){
            printf("\t%c%c 5.Search account");
            draw_sp(22);
            printf("%c",178);
       }

        if(i==17){
            printf("\t\t> 0.Back main menu");
            draw_sp(15);
            printf("%c",178);
        }

        if(i==18){
            draw(48);
            printf("%c",178);
        }
        if(i==19){
            printf("   Institute Of Computer Since & Technology");
            draw_sp(5);
            printf("%c",178);
        }
        if(i==2||i==4||i==6|| i==8|| i==10||i==12||i==13||i==14 || i==15 || i==16 || i==20){
            draw_sp(48);
            printf("%c",178);
        }
        i++;
     }
     printf("\n\t\t");
     draw(50);

     int ke;

     gotoxy(20,17);
     printf("Please type selected number: ");
     gotoxy(54,17);
     scanf("%d",&ke);

     if(ke==1){
     fflush(stdin);
     system("cls");
     //acc_reg(2);
     return 505;
     }
     if(ke==2){
     fflush(stdin);
     system("cls");
     //view_acco(1);
     return 506;

     }
     if(ke==3){
     fflush(stdin);
     system("cls");
     return 507;

     }
     if(ke==4){
     fflush(stdin);
     system("cls");
     return 508;

     }
     if(ke==5){
     fflush(stdin);
     system("cls");
        return 509;
     }

     if(ke==0){
        fflush(stdin);
        system("cls");
       // semester(5);
       return 500;
     }

     }


}

/// ...................................................


int secnd_semester(int key){

     int i=0,j=0,get_v;

    if(key==19){
    printf("\n\t\t");

     draw(50);
     while(i<20){
        j=1;
        draw_th(j);

        if(i==0){
            draw_sp(18);
            printf("2ND SEMESTER");
            draw_sp(18);
            printf("%c",178);
        }
        if(i==1){
            draw(48);
            printf("%c",178);
        }
        if(i==3){
            printf("\t%c%c 1.Student Account Registation",178,177);
            draw_sp(9);
            printf("%c",178);
        }
        if(i==5){
            printf("\t%C%c 2.View student account",178,177);
            draw_sp(16);
            printf("%c",178);
        }

        if(i==7){
            printf("\t%c%c 3.Prayment",178,177);
            draw_sp(28);
            printf("%c",178);
        }
        if(i==9){
            printf("\t%c%c 4.View student dew",178,177);
            draw_sp(20);
            printf("%c",178);
        }
        if(i==11){
            printf("\t%c%c 5.Search account");
            draw_sp(22);
            printf("%c",178);
       }

        if(i==17){
            printf("\t\t> 0.Back main menu");
            draw_sp(15);
            printf("%c",178);
        }

        if(i==18){
            draw(48);
            printf("%c",178);
        }
        if(i==19){
            printf("   Institute Of Computer Since & Technology");
            draw_sp(5);
            printf("%c",178);
        }
        if(i==2||i==4||i==6|| i==8|| i==10||i==12||i==13||i==14 || i==15 || i==16 || i==20){
            draw_sp(48);
            printf("%c",178);
        }
        i++;
     }
     printf("\n\t\t");
     draw(50);

     int ke;

     gotoxy(20,17);
     printf("Please type selected number: ");
     gotoxy(54,17);
     scanf("%d",&ke);

     if(ke==1){
     fflush(stdin);
     system("cls");
     //acc_reg(2);
     return 605;

     }
     if(ke==2){
     fflush(stdin);
     system("cls");
     //view_acco(2);
     return 606;

     }
     if(ke==3){
    fflush(stdin);
    system("cls");
    //preament(2);
    return 607;

     }
     if(ke==4){
     fflush(stdin);
     system("cls");
     //view_prayment(2);
     return 608;

     }
     if(ke==5){
     fflush(stdin);
     system("cls");
     return 609;

     }
     if(ke==0){
        fflush(stdin);
        system("cls");
       // semester(5);
       return 1105;
     }

      }
}


/// ........................................................


int trd_semester(int key){

     int i=0,j=0,get_v;

    if(key==20){
    printf("\n\t\t");

     draw(50);
     while(i<20){
        j=1;
        draw_th(j);

        if(i==0){
            draw_sp(18);
            printf("3RD SEMESTER");
            draw_sp(18);
            printf("%c",178);
        }
        if(i==1){
            draw(48);
            printf("%c",178);
        }
        if(i==3){
            printf("\t%c%c 1.Student Account Registation",178,177);
            draw_sp(9);
            printf("%c",178);
        }
        if(i==5){
            printf("\t%C%c 2.View student account",178,177);
            draw_sp(16);
            printf("%c",178);
        }

        if(i==7){
            printf("\t%c%c 3.Prayment",178,177);
            draw_sp(28);
            printf("%c",178);
        }
        if(i==9){
            printf("\t%c%c 4.View student dew",178,177);
            draw_sp(20);
            printf("%c",178);
        }
        if(i==11){
            printf("\t%c%c 5.Search account");
            draw_sp(22);
            printf("%c",178);
       }

        if(i==17){
            printf("\t\t> 0.Back main menu");
            draw_sp(15);
            printf("%c",178);
        }

        if(i==18){
            draw(48);
            printf("%c",178);
        }
        if(i==19){
            printf("   Institute Of Computer Since & Technology");
            draw_sp(5);
            printf("%c",178);
        }
        if(i==2||i==4||i==6|| i==8|| i==10||i==12||i==13||i==14 || i==15 || i==16 || i==20){
            draw_sp(48);
            printf("%c",178);
        }
        i++;
     }
     printf("\n\t\t");
     draw(50);

     int ke;

     gotoxy(20,17);
     printf("Please type selected number: ");
     gotoxy(54,17);
     scanf("%d",&ke);

     if(ke==1){
     fflush(stdin);
     system("cls");
     return 705;

     }
     if(ke==2){
     fflush(stdin);
     system("cls");
     return 706;

     }
     if(ke==3){
    fflush(stdin);
    system("cls");
    return 707;
     }
     if(ke==4){
     fflush(stdin);
     system("cls");
     return 708;
     }
     if(ke==5){
    fflush(stdin);
    system("cls");
    return 709;
     }
     if(ke==0){
        fflush(stdin);
        system("cls");
        return 1105;
     }

     }

}


///  .......................................................

int four_semester(int key){

     int i=0,j=0,get_v;

    if(key==21){
    printf("\n\t\t");

     draw(50);
     while(i<20){
        j=1;
        draw_th(j);

        if(i==0){
            draw_sp(18);
            printf("4TH SEMESTER");
            draw_sp(18);
            printf("%c",178);
        }
        if(i==1){
            draw(48);
            printf("%c",178);
        }
        if(i==3){
            printf("\t%c%c 1.Student Account Registation",178,177);
            draw_sp(9);
            printf("%c",178);
        }
        if(i==5){
            printf("\t%C%c 2.View student account",178,177);
            draw_sp(16);
            printf("%c",178);
        }

        if(i==7){
            printf("\t%c%c 3.Prayment",178,177);
            draw_sp(28);
            printf("%c",178);
        }
        if(i==9){
            printf("\t%c%c 4.View student dew",178,177);
            draw_sp(20);
            printf("%c",178);
        }
        if(i==11){
            printf("\t%c%c 5.Search account");
            draw_sp(22);
            printf("%c",178);
       }

        if(i==17){
            printf("\t\t> 0.Back main menu");
            draw_sp(15);
            printf("%c",178);
        }

        if(i==18){
            draw(48);
            printf("%c",178);
        }
        if(i==19){
            printf("   Institute Of Computer Since & Technology");
            draw_sp(5);
            printf("%c",178);
        }
        if(i==2||i==4||i==6|| i==8|| i==10||i==12||i==13||i==14 || i==15 || i==16 || i==20){
            draw_sp(48);
            printf("%c",178);
        }
        i++;
     }
     printf("\n\t\t");
     draw(50);

     int ke;

     gotoxy(20,17);
     printf("Please type selected number: ");
     gotoxy(54,17);
     scanf("%d",&ke);

     if(ke==1){
     fflush(stdin);
     system("cls");
     //acc_reg(4);
     return 805;
     }

     if(ke==2){
     fflush(stdin);
     system("cls");
     //view_acco(4);
     return 806;

     }
     if(ke==3){
     fflush(stdin);
     system("cls");
     //preament(4);
     return 807;
     }
     if(ke==4){
    fflush(stdin);
     system("cls");
     //view_prayment(4);
     return 808;
     }
     if(ke==5){
    fflush(stdin);
     system("cls");
        return 809;
     }
     if(ke==0){
        fflush(stdin);
        system("cls");
     //   semester(5);
     return 1405;
     }

     }
}


/// .............................................................

int fiv_semester(int key){

     int i=0,j=0,get_v;

    if(key==22){
    printf("\n\t\t");

     draw(50);
     while(i<20){
        j=1;
        draw_th(j);

        if(i==0){
            draw_sp(18);
            printf("5TH SEMESTER");
            draw_sp(18);
            printf("%c",178);
        }
        if(i==1){
            draw(48);
            printf("%c",178);
        }
        if(i==3){
            printf("\t%c%c 1.Student Account Registation",178,177);
            draw_sp(9);
            printf("%c",178);
        }
        if(i==5){
            printf("\t%C%c 2.View student account",178,177);
            draw_sp(16);
            printf("%c",178);
        }

        if(i==7){
            printf("\t%c%c 3.Prayment",178,177);
            draw_sp(28);
            printf("%c",178);
        }
        if(i==9){
            printf("\t%c%c 4.View student dew",178,177);
            draw_sp(20);
            printf("%c",178);
        }
        if(i==11){
            printf("\t%c%c 5.Search account");
            draw_sp(22);
            printf("%c",178);
       }

        if(i==17){
            printf("\t\t> 0.Back main menu");
            draw_sp(15);
            printf("%c",178);
        }

        if(i==18){
            draw(48);
            printf("%c",178);
        }
        if(i==19){
            printf("   Institute Of Computer Since & Technology");
            draw_sp(5);
            printf("%c",178);
        }
        if(i==2||i==4||i==6|| i==8|| i==10||i==12||i==13||i==14 || i==15 || i==16 || i==20){
            draw_sp(48);
            printf("%c",178);
        }
        i++;
     }
     printf("\n\t\t");
     draw(50);

     int ke;

     gotoxy(20,17);
     printf("Please type selected number: ");
     gotoxy(54,17);
     scanf("%d",&ke);

     if(ke==1){
     fflush(stdin);
     system("cls");
     //acc_reg(5);
     return 511;

     }
     if(ke==2){
     fflush(stdin);
     system("cls");
     //view_acco(5);
     return 522;

     }
     if(ke==3){
     fflush(stdin);
     system("cls");
    // preament(5);
    return 533;

     }
     if(ke==4){
     fflush(stdin);
     system("cls");
     //view_prayment(5);
     return 544;
     }
     if(ke==5){
        system("cls");
     return 555;

     }
     if(ke==0){
        fflush(stdin);
        system("cls");
        //semester(5);
        return 135;
     }

    }
}

/// ....................................................



int six_semester(int key){

     int i=0,j=0,get_v;

    if(key==23){
    printf("\n\t\t");

     draw(50);
     while(i<20){
        j=1;
        draw_th(j);

        if(i==0){
            draw_sp(18);
            printf("6TH SEMESTER");
            draw_sp(18);
            printf("%c",178);
        }
        if(i==1){
            draw(48);
            printf("%c",178);
        }
        if(i==3){
            printf("\t%c%c 1.Student Account Registation",178,177);
            draw_sp(9);
            printf("%c",178);
        }
        if(i==5){
            printf("\t%C%c 2.View student account",178,177);
            draw_sp(16);
            printf("%c",178);
        }

        if(i==7){
            printf("\t%c%c 3.Prayment",178,177);
            draw_sp(28);
            printf("%c",178);
        }
        if(i==9){
            printf("\t%c%c 4.View student dew",178,177);
            draw_sp(20);
            printf("%c",178);
        }
        if(i==11){
            printf("\t%c%c 5.Search account");
            draw_sp(22);
            printf("%c",178);
       }

        if(i==17){
            printf("\t\t> 0.Back main menu");
            draw_sp(15);
            printf("%c",178);
        }

        if(i==18){
            draw(48);
            printf("%c",178);
        }
        if(i==19){
            printf("   Institute Of Computer Since & Technology");
            draw_sp(5);
            printf("%c",178);
        }
        if(i==2||i==4||i==6|| i==8|| i==10||i==12||i==13||i==14 || i==15 || i==16 || i==20){
            draw_sp(48);
            printf("%c",178);
        }
        i++;
     }
     printf("\n\t\t");
     draw(50);

     int ke;

     gotoxy(20,17);
     printf("Please type selected number: ");
     gotoxy(54,17);
     scanf("%d",&ke);

     if(ke==1){
     fflush(stdin);
     system("cls");
     //acc_reg(6);
     return 611;
     }
     if(ke==2){
     fflush(stdin);
     system("cls");
     //view_acco(6);
     return 622;
     }
     if(ke==3){
     fflush(stdin);
     system("cls");
     //preament(6);
     return 633;

     }
     if(ke==4){
            fflush(stdin);
     system("cls");
     //view_prayment(6);
     return 644;
     }
     if(ke==5){
        system("cls");
        return 655;
     }
     if(ke==0){
        fflush(stdin);
        system("cls");
        return 145;
     }

   }
}


/// ...................................................

int seven_semester(int key){

     int i=0,j=0,get_v;

    if(key==24){
    printf("\n\t\t");

     draw(50);
     while(i<20){
        j=1;
        draw_th(j);

        if(i==0){
            draw_sp(18);
            printf("7TH SEMESTER");
            draw_sp(18);
            printf("%c",178);
        }
        if(i==1){
            draw(48);
            printf("%c",178);
        }
        if(i==3){
            printf("\t%c%c 1.Student Account Registation",178,177);
            draw_sp(9);
            printf("%c",178);
        }
        if(i==5){
            printf("\t%C%c 2.View student account",178,177);
            draw_sp(16);
            printf("%c",178);
        }

        if(i==7){
            printf("\t%c%c 3.Prayment",178,177);
            draw_sp(28);
            printf("%c",178);
        }
        if(i==9){
            printf("\t%c%c 4.View student dew",178,177);
            draw_sp(20);
            printf("%c",178);
        }
        if(i==11){
            printf("\t%c%c 5.Search account");
            draw_sp(22);
            printf("%c",178);
       }

        if(i==17){
            printf("\t\t> 0.Back main menu");
            draw_sp(15);
            printf("%c",178);
        }

        if(i==18){
            draw(48);
            printf("%c",178);
        }
        if(i==19){
            printf("   Institute Of Computer Since & Technology");
            draw_sp(5);
            printf("%c",178);
        }
        if(i==2||i==4||i==6|| i==8|| i==10||i==12||i==13||i==14 || i==15 || i==16 || i==20){
            draw_sp(48);
            printf("%c",178);
        }
        i++;
     }
     printf("\n\t\t");
     draw(50);

     int ke;

     gotoxy(20,17);
     printf("Please type selected number: ");
     gotoxy(54,17);
     scanf("%d",&ke);

     if(ke==1){
     fflush(stdin);
     system("cls");
     //acc_reg(7);
     return 711;
     }

     if(ke==2){
     fflush(stdin);
     system("cls");
     //view_acco(7);
     return 722;

     }
     if(ke==3){
     fflush(stdin);
     system("cls");
    // preament(7);
    return 733;

     }
     if(ke==4){
        fflush(stdin);
        system("cls");
//        view_prayment(7);
        return 744;
     }
     if(ke==5){
        system("cls");
        return 788;

     }
     if(ke==0){
        fflush(stdin);
        system("cls");
        //semester(5);
        return 155;
     }

   }
}

///  ...................................................


int eight_semester(int key){

     int i=0,j=0,get_v;

    if(key==25){
    printf("\n\t\t");

     draw(50);
     while(i<20){
        j=1;
        draw_th(j);

        if(i==0){
            draw_sp(18);
            printf("8TH SEMESTER");
            draw_sp(18);
            printf("%c",178);
        }
        if(i==1){
            draw(48);
            printf("%c",178);
        }
        if(i==3){
            printf("\t%c%c 1.Student Account Registation",178,177);
            draw_sp(9);
            printf("%c",178);
        }
        if(i==5){
            printf("\t%C%c 2.View student account",178,177);
            draw_sp(16);
            printf("%c",178);
        }

        if(i==7){
            printf("\t%c%c 3.Prayment",178,177);
            draw_sp(28);
            printf("%c",178);
        }
        if(i==9){
            printf("\t%c%c 4.View student dew",178,177);
            draw_sp(20);
            printf("%c",178);
        }
        if(i==11){
            printf("\t%c%c 5.Search account");
            draw_sp(22);
            printf("%c",178);
       }

        if(i==17){
            printf("\t\t> 0.Back main menu");
            draw_sp(15);
            printf("%c",178);
        }

        if(i==18){
            draw(48);
            printf("%c",178);
        }
        if(i==19){
            printf("   Institute Of Computer Since & Technology");
            draw_sp(5);
            printf("%c",178);
        }
        if(i==2||i==4||i==6|| i==8|| i==10||i==12||i==13||i==14 || i==15 || i==16 || i==20){
            draw_sp(48);
            printf("%c",178);
        }
        i++;
     }
     printf("\n\t\t");
     draw(50);

     int ke;

     gotoxy(20,17);
     printf("Please type selected number: ");
     gotoxy(54,17);
     scanf("%d",&ke);

     if(ke==1){
     fflush(stdin);
     system("cls");
     return 811;
     }
     if(ke==2){
     fflush(stdin);
     system("cls");
     return 822;

     }
     if(ke==3){
     fflush(stdin);
     system("cls");
     //preament(8);
     return 833;

     }
     if(ke==4){
            fflush(stdin);
     system("cls");
     //view_prayment(8);
     return 844;
     }
     if(ke==5){
        system("cls");
        return 855;
     }
     if(ke==0){
        fflush(stdin);
        system("cls");
        //semester(5);
        return 165;
     }
     }
}



/// ...................................................



int employ_account(int key){

    int i=0,j=0,get_v;

    if(key==29){
    printf("\n\t\t");

     draw(50);
     while(i<20){
        j=1;
        draw_th(j);

        if(i==0){
            draw_sp(18);
            printf("EMPLOY ACCOUNT");
            draw_sp(16);
            printf("%c",178);
        }
        if(i==1){
            draw(48);
            printf("%c",178);
        }
        if(i==3){
            printf("\t%c%c 1.Employ Account Registation",178,177);
            draw_sp(10);
            printf("%c",178);
        }
        if(i==5){
            printf("\t%C%c 2.View employ account",178,177);
            draw_sp(17);
            printf("%c",178);
        }

//        if(i==7){
//            printf("\t%c%c 3.Other expenses",178,177);
//            draw_sp(22);
//            printf("%c",178);
//        }
//        if(i==9){
//            printf("\t%c%c 4.View other expenses",178,177);
//            draw_sp(17);
//            printf("%c",178);
//        }
        if(i==11){
            printf("\t%c%c 5.Search employ account");
            draw_sp(15);
            printf("%c",178);
       }

        if(i==17){
            printf("\t\t> 0.Back main menu");
            draw_sp(15);
            printf("%c",178);
        }

        if(i==18){
            draw(48);
            printf("%c",178);
        }
        if(i==19){
            printf("   Institute Of Computer Since & Technology");
            draw_sp(5);
            printf("%c",178);
        }
        if(i==2||i==4||i==6|| i==8||i==7||i==9|| i==10||i==12||i==13||i==14 || i==15 || i==16 || i==20){
            draw_sp(48);
            printf("%c",178);
        }
        i++;
     }
     printf("\n\t\t");
     draw(50);

     int ke;

     gotoxy(20,17);
     printf("Please type selected number: ");
     gotoxy(54,17);
     scanf("%d",&ke);

     if(ke==1){
     fflush(stdin);
     system("cls");
     return 3012;

     }
     if(ke==2){
     fflush(stdin);
     system("cls");
     return 3013;

     }
     if(ke==3){
     fflush(stdin);
     system("cls");
     return 3014;

     }
     if(ke==4){
     fflush(stdin);
     system("cls");
     return 3015;
     }
     if(ke==5){
     system("cls");
     return 3016;

     }
     if(ke==0){
        fflush(stdin);
        system("cls");
        return 165;
     }

    }

}


/// .............................................


int employ_reg(int key){

    FILE *emp_reg;
    int j=25,i;

    if(key==18){
    int i,o,eg;

    gotoxy(18,3);
    printf("INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY");

    gotoxy(8,5);
    for(i=0;i<60;i++){
        printf("%c",177);
    }
    for(i=0;i<8;i++){
            printf("\n\t%c",177);
        for(o=0;o<58;o++){
            printf(" ");
        }
    printf("%c",177);
    }
    printf("\n\t");
    for(i=0;i<60;i++){
        printf("%c",177);
    }

    gotoxy(15,7);
    printf("%c If You Want Add New Account Then Press [1]",219);
    gotoxy(15,9);
    printf("%c If You Want Edit Any Account Then Press [2]",219);

    gotoxy(35,12);
    scanf("%d",&eg);
    fflush(stdin);
    system("cls");



    if(eg==1){

    printf("\n\t\t");
    j=25;
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);


    gotoxy(35,1);
    printf(" ACCOUNT REGISTITION ");
    gotoxy(20,6);
    printf("Reg number: ");
    gotoxy(20,8);
    printf("Name: ");
    gotoxy(20,10);
    printf("Post: ");
    gotoxy(20,12);
    printf("Date: ");
    gotoxy(20,14);
    printf("Total: ");
    gotoxy(20,16);
    printf("Now pray: ");
    gotoxy(20,18);
    printf("Dew: ");
    gotoxy(30,22);
    printf("Press [0] ENTER then goto main menu");



    emp_reg=fopen("employ_account.dat","a");

    gotoxy(45,6);
    scanf("%lu",&empt_reg.epl);
    fflush(stdin);
    gotoxy(45,8);
    gets(empt_reg.name);
    gotoxy(45,10);
    gets(empt_reg.post);
    gotoxy(45,12);
    gets(empt_reg.date);
    gotoxy(45,14);
    scanf("%f",&empt_reg.toatl);
    fflush(stdin);
    gotoxy(45,16);
    scanf("%f",&empt_reg.recive);
    fflush(stdin);

    empt_reg.arrears=empt_reg.toatl-empt_reg.recive;
    gotoxy(45,18);
    printf("%f",empt_reg.arrears);
    fflush(stdin);

    fwrite(&empt_reg,sizeof(empt_reg),1,emp_reg);
    fflush(emp_reg);
    fclose(emp_reg);



    int k;
    gotoxy(30,20);
    scanf("%d",&k);
    fflush(stdin);
    if(k==0){
        fflush(stdin);
        system("cls");
        return 1500;
    }
    }



    else if(eg==2){

edtl_i:
    printf("\n\t\t");
    draw(56);
    j=25;
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);


    gotoxy(35,1);
    printf(" ACCOUNT REGISTITION ");
    gotoxy(20,6);
    printf("Reg number: ");
    gotoxy(20,8);
    printf("Name: ");
    gotoxy(20,10);
    printf("Post: ");
    gotoxy(20,12);
    printf("Date: ");
    gotoxy(20,14);
    printf("Total: ");
    gotoxy(20,16);
    printf("Now pray: ");
    gotoxy(20,18);
    printf("Dew: ");
    gotoxy(30,22);
    printf("Press [0] ENTER then goto main menu");



    emp_reg=fopen("employ_account.dat","r+");

    unsigned long int compit;

    gotoxy(45,6);
    scanf("%lu",&compit);
    fflush(stdin);

    while(fread(&empt_reg,sizeof(empt_reg),1,emp_reg) != 0){

    if(compit==empt_reg.epl){

    gotoxy(45,8);
    printf("%s",empt_reg.name);
    gotoxy(45,10);
    printf("%s",empt_reg.post);
    gotoxy(45,12);
    gets(empt_reg.date);
    gotoxy(45,14);
    printf("%f",empt_reg.arrears);
    empt_reg.toatl=empt_reg.arrears;
    fflush(stdin);
    gotoxy(45,16);
    scanf("%f",&empt_reg.recive);
    fflush(stdin);

    empt_reg.arrears=empt_reg.arrears-empt_reg.recive;
    gotoxy(45,18);
    printf("%f",empt_reg.arrears);
    fflush(stdin);

    fseek(emp_reg,-sizeof(empt_reg),SEEK_CUR);
    fwrite(&empt_reg,sizeof(empt_reg),1,emp_reg);
    fflush(emp_reg);
    fclose(emp_reg);
            }
    }


    int k;
    gotoxy(30,20);
    scanf("%d",&k);
    fflush(stdin);
    if(k==0){
        fflush(stdin);
        system("cls");
        return 1600;
    }
    else{
        goto edtl_i;
    }

    }
    }
}


/// ...................................................


int view_employ_account(int key){

    if(key==47){

    FILE *view_empl;

    printf("\n\t\tINSTITUTE OF COMPUTER SINCE AND TECHNOLOGY");
    printf("\n\t\t==========================================");
    printf("\n\t\t\t   VIEW EMPLOY ACCOUNT");
    printf("\n\t\t\t   -------------------\n\n\n");

    view_empl=fopen("employ_account.dat","r");

    while(fread(&empt_reg,sizeof(empt_reg),1,view_empl) != 0){

    printf("\n\t\tReg number: %lu",empt_reg.epl);
    printf("\n\t\tName: %s",empt_reg.name);
    printf("\n\t\tPost: %s",empt_reg.post);
    printf("\n\t\tDate: %s",empt_reg.date);
    printf("\n\t\tTotal: %f",empt_reg.toatl);
    printf("\n\t\tNow pray: %f",empt_reg.recive);
    printf("\n\t\tDew: %f",empt_reg.arrears);
    printf("\n\t|-----------------------------------\n\n\n");
    }
    fclose(view_empl);

    int it=0;

    printf("\n\t\tBack ---->  PRESS [ 0 ] & ENTER:  ");
    scanf("%d",&it);
    if(it==0){
        return 1920;
    }

    }
}

/// ....................................................

int search_employ_account(int key){
    if(key==34){
    system("cls");
    FILE *viw_emp;
    int i,j,o,eg;


    printf("\n\t\t");
    draw(56);
    j=25;
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);
    gotoxy(37,1);
    printf(" SEARCH ACCOUNT ");

    viw_emp=fopen("employ_account.dat","r");


    unsigned long int compit;

    gotoxy(20,4);
    printf("Reg number: ");
    scanf("%lu",&compit);
    fflush(stdin);

    while(fread(&empt_reg,sizeof(empt_reg),1,viw_emp) != 0){

    if(compit==empt_reg.epl){

    gotoxy(20,8);
    printf("Name: %s",empt_reg.name);
    gotoxy(20,10);
    printf("Post: %s",empt_reg.post);
    gotoxy(20,12);
    printf("Date: %s",empt_reg.date);
    gotoxy(20,14);
    printf("Total: %f",empt_reg.toatl);
    gotoxy(20,16);
    printf("Now pray: %f",empt_reg.recive);
    gotoxy(20,18);
    printf("Dew: %f",empt_reg.arrears);
    gotoxy(30,22);
    printf("Press [0] ENTER then goto main menu");

            }
        }
    fclose(viw_emp);

    int js=0;
    scanf("%d",&js);
    fflush(stdin);

    if(js==0){
        return 6890;
    }


    }
}


/// .................................................


int other_expences(int key){
    if(key==110){
        FILE *exp_pt;
        int j;

    printf("\n\t\t");
    draw(56);
    j=9;
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);

    gotoxy(37,1);
    printf(" OTHER EXPENSES ");
    gotoxy(20,3);
    printf("Expenses name: ");
    gotoxy(20,5);
    printf("Expenses amount: ");
    gotoxy(20,7);
    printf("PRESS [ 0 ] and ENETR goto menu : ");


    exp_pt=fopen("other_exp.dat","a");

    gotoxy(35,3);
    gets(other_fee.other_cos);
    gotoxy(37,5);
    scanf("%f",&other_fee.other_amau);

    fwrite(&other_fee,sizeof(other_fee),1,exp_pt);
    fflush(exp_pt);
    fclose(exp_pt);

    int ipk=0;
    gotoxy(60,7);
    scanf("%d",&ipk);

    if(ipk==0){
        return 340;
    }

    }
}


/// ...................................................

int view_other_exp(int key){
    if(key==88){

        FILE *viw_oth;

    printf("\n\t\tINSTITUTE OF COMPUTER SINCE AND TECHNOLOGY");
    printf("\n\t\t==========================================");
    printf("\n\t\t\t   VIEW OTHER EXPENSES");
    printf("\n\t\t\t   -------------------\n\n\n");

    viw_oth=fopen("other_exp.dat","r");

    while(fread(&other_fee,sizeof(other_fee),1,viw_oth) != 0){

    printf("\n\t\tExpenses name: [ %s ]",other_fee.other_cos);
    printf("\n\t\tExpenses amount: %f",other_fee.other_amau);
    printf("\n\t|------------------------------------------\n\n");
    }
    fclose(viw_oth);


    int it=0;

    printf("\n\t\tBack ---->  PRESS [ 0 ] & ENTER:  ");
    scanf("%d",&it);
    if(it==0){
        return 1923;
    }

    }
}

/// ...................................................


int time_table_semester(int key){

    int i=0,j;

    if(key==519){
    printf("\n\t\t");

     draw(50);
     while(i<20){
        j=1;
        draw_th(j);

        if(i==0){
            draw_sp(17);
            printf("TABLE SEMESTER");
            draw_sp(17);
            printf("%c",178);
        }
        if(i==1){
            draw(48);
            printf("%c",178);
        }
        if(i==3){
            printf("\t%c%c 1.1st Semester",178,177);
            draw_sp(24);
            printf("%c",178);
        }
        if(i==4){
            printf("\t%C%c 2.2nd Semester",178,177);
            draw_sp(24);
            printf("%c",178);
        }

        if(i==5){
            printf("\t%c%c 3.3rd Semester",178,177);
            draw_sp(24);
            printf("%c",178);
        }
        if(i==6){
            printf("\t%c%c 4.4th Semester",178,177);
            draw_sp(24);
            printf("%c",178);
        }
        if(i==7){
            printf("\t%c%c 5.5th Semester",178,177);
            draw_sp(24);
            printf("%c",178);
        }
        if(i==8){
            printf("\t%c%c 6.6th Semester",178,177);
            draw_sp(24);
            printf("%c",178);
        }
        if(i==9){
            printf("\t%c%c 7.7th Semester",178,177);
            draw_sp(24);
            printf("%c",178);
        }
        if(i==10){
            printf("\t%c%c 8.8th Semester",178,177);
            draw_sp(24);
            printf("%c",178);
        }


        if(i==17){
            printf("\t\t> 0.Back main menu");
            draw_sp(15);
            printf("%c",178);
        }

        if(i==18){
            draw(48);
            printf("%c",178);
        }
        if(i==19){
            printf("   Institute Of Computer Since & Technology");
            draw_sp(5);
            printf("%c",178);
        }
        if(i==2|| i==11||i==12||i==13||i==14 || i==15 || i==16 || i==20){
            draw_sp(48);
            printf("%c",178);
        }
        i++;
     }
     printf("\n\t\t");
     draw(50);

     int ok;

     gotoxy(20,17);
     printf("Please type selected number: ");
     scanf("%d",&ok);
     fflush(stdin);

     if(ok==1){
         fflush(stdin);
         system("cls");
         return 3011;
     }
     if(ok==2){
         fflush(stdin);
         system("cls");
         return 3022;
     }
     if(ok==3){
         fflush(stdin);
         system("cls");
         return 3033;
     }
     if(ok==4){
         fflush(stdin);
         system("cls");
         return 3044;
     }
     if(ok==5){
         fflush(stdin);
         system("cls");
         return 3055;
     }
     if(ok==6){
         fflush(stdin);
         system("cls");
         return 3066;
     }
     if(ok==7){
         fflush(stdin);
         system("cls");
         return 3077;
     }
     if(ok==8){
         fflush(stdin);
         system("cls");
        return 3088;
     }
     if(ok==0){
        system("cls");
        return 170;
     }

    }

}


/// ...................................................


int draw_table(int key){
    if(key==3011){
        int j;

    printf("\n\n\n\n\n\t");
    draw(83);
    j=30;
    while(j--){
        printf("\n\t%c%c",219,219);

        if(j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            printf("         |           |           |           |          |          |           ");
            printf("%c",219);
        }
        if(j==16||j==17||j==18||j==19||j==20||j==21||j==22||j==23||j==24||j==25||j==26){
            printf("         |           |           |           |          |          |           ");
            printf("%c",219);
        }
        if(j==30){
            draw_sp(79);
            printf("%c",219);
        }
        if(j==29){
            printf("   Day:        1            2           3          4          5          6     ");
            printf("%c",219);
        }
        if(j==28){
            printf("-------------------------------------------------------------------------------");
            printf("%c",219);
        }
        char yt[12]="09.30-10.15";
        if(j==27){
            printf("Time --> |08.45-08.45|08.45-09.30|%s|10.15-11.0|11.0-11.45|11.45-12.30",yt);
            printf("%c",219);
        }
        if(j==1){
            draw(79);
            printf("%c",219);
        }
        if(j==0){
            printf("                  Institute of computer since and technology                   ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t");
    draw(83);

    gotoxy(10,9);
    draw(81);
    gotoxy(10,13);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,17);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,21);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,25);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,29);
    printf("-------------------------------------------------------------------------------");


   /// {

    gotoxy(12,11);
    printf("SAT");
    gotoxy(23,10);
    printf("7786");
    gotoxy(23,11);
    printf("R=102");
    gotoxy(23,12);
    printf("MS");

    /// }


    gotoxy(12,15);
    printf("SUN");
    gotoxy(12,19);
    printf("MON");
    gotoxy(12,23);
    printf("TUS");
    gotoxy(12,27);
    printf("WID");
    gotoxy(12,31);
    printf("THS");
    getch();

    }


    if(key==3022){
    int j;

    printf("\n\n\n\n\n\t");
    draw(83);
    j=30;
    while(j--){
        printf("\n\t%c%c",219,219);

        if(j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            printf("         |           |           |           |          |          |           ");
            printf("%c",219);
        }
        if(j==16||j==17||j==18||j==19||j==20||j==21||j==22||j==23||j==24||j==25||j==26){
            printf("         |           |           |           |          |          |           ");
            printf("%c",219);
        }
        if(j==30){
            draw_sp(79);
            printf("%c",219);
        }
        if(j==29){
            printf("   Day:        1            2           3          4          5          6     ");
            printf("%c",219);
        }
        if(j==28){
            printf("-------------------------------------------------------------------------------");
            printf("%c",219);
        }
        char yt[12]="09.30-10.15";
        if(j==27){
            printf("Time --> |08.45-08.45|08.45-09.30|%s|10.15-11.0|11.0-11.45|11.45-12.30",yt);
            printf("%c",219);
        }
        if(j==1){
            draw(79);
            printf("%c",219);
        }
        if(j==0){
            printf("                  Institute of computer since and technology                   ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t");
    draw(83);

    gotoxy(10,9);
    draw(81);
    gotoxy(10,13);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,17);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,21);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,25);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,29);
    printf("-------------------------------------------------------------------------------");


   /// {

    gotoxy(12,11);
    printf("SAT");
    gotoxy(23,10);
    printf("7786");
    gotoxy(23,11);
    printf("R=102");
    gotoxy(23,12);
    printf("MS");

    /// }


    gotoxy(12,15);
    printf("SUN");
    gotoxy(12,19);
    printf("MON");
    gotoxy(12,23);
    printf("TUS");
    gotoxy(12,27);
    printf("WID");
    gotoxy(12,31);
    printf("THS");
    getch();

    }


    if(key==3033){
    int j;

    printf("\n\n\n\n\n\t");
    draw(83);
    j=30;
    while(j--){
        printf("\n\t%c%c",219,219);

        if(j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            printf("         |           |           |           |          |          |           ");
            printf("%c",219);
        }
        if(j==16||j==17||j==18||j==19||j==20||j==21||j==22||j==23||j==24||j==25||j==26){
            printf("         |           |           |           |          |          |           ");
            printf("%c",219);
        }
        if(j==30){
            draw_sp(79);
            printf("%c",219);
        }
        if(j==29){
            printf("   Day:        1            2           3          4          5          6     ");
            printf("%c",219);
        }
        if(j==28){
            printf("-------------------------------------------------------------------------------");
            printf("%c",219);
        }
        char yt[12]="09.30-10.15";
        if(j==27){
            printf("Time --> |08.45-08.45|08.45-09.30|%s|10.15-11.0|11.0-11.45|11.45-12.30",yt);
            printf("%c",219);
        }
        if(j==1){
            draw(79);
            printf("%c",219);
        }
        if(j==0){
            printf("                  Institute of computer since and technology                   ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t");
    draw(83);

    gotoxy(10,9);
    draw(81);
    gotoxy(10,13);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,17);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,21);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,25);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,29);
    printf("-------------------------------------------------------------------------------");


   /// {

    gotoxy(12,11);
    printf("SAT");
    gotoxy(23,10);
    printf("7786");
    gotoxy(23,11);
    printf("R=102");
    gotoxy(23,12);
    printf("MS");

    /// }


    gotoxy(12,15);
    printf("SUN");
    gotoxy(12,19);
    printf("MON");
    gotoxy(12,23);
    printf("TUS");
    gotoxy(12,27);
    printf("WID");
    gotoxy(12,31);
    printf("THS");
    getch();

    }


    if(key==3044){
        int j;

    printf("\n\n\n\n\n\t");
    draw(83);
    j=30;
    while(j--){
        printf("\n\t%c%c",219,219);

        if(j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            printf("         |           |           |           |          |          |           ");
            printf("%c",219);
        }
        if(j==16||j==17||j==18||j==19||j==20||j==21||j==22||j==23||j==24||j==25||j==26){
            printf("         |           |           |           |          |          |           ");
            printf("%c",219);
        }
        if(j==30){
            draw_sp(79);
            printf("%c",219);
        }
        if(j==29){
            printf("   Day:        1            2           3          4          5          6     ");
            printf("%c",219);
        }
        if(j==28){
            printf("-------------------------------------------------------------------------------");
            printf("%c",219);
        }
        char yt[12]="09.30-10.15";
        if(j==27){
            printf("Time --> |08.45-08.45|08.45-09.30|%s|10.15-11.0|11.0-11.45|11.45-12.30",yt);
            printf("%c",219);
        }
        if(j==1){
            draw(79);
            printf("%c",219);
        }
        if(j==0){
            printf("                  Institute of computer since and technology                   ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t");
    draw(83);

    gotoxy(10,9);
    draw(81);
    gotoxy(10,13);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,17);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,21);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,25);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,29);
    printf("-------------------------------------------------------------------------------");


   /// {

    gotoxy(12,11);
    printf("SAT");
    gotoxy(23,10);
    printf("7786");
    gotoxy(23,11);
    printf("R=102");
    gotoxy(23,12);
    printf("MS");

    /// }


    gotoxy(12,15);
    printf("SUN");
    gotoxy(12,19);
    printf("MON");
    gotoxy(12,23);
    printf("TUS");
    gotoxy(12,27);
    printf("WID");
    gotoxy(12,31);
    printf("THS");
    getch();

    }



    if(key==3055){
        int j;

    printf("\n\n\n\n\n\t");
    draw(83);
    j=30;
    while(j--){
        printf("\n\t%c%c",219,219);

        if(j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            printf("         |           |           |           |          |          |           ");
            printf("%c",219);
        }
        if(j==16||j==17||j==18||j==19||j==20||j==21||j==22||j==23||j==24||j==25||j==26){
            printf("         |           |           |           |          |          |           ");
            printf("%c",219);
        }
        if(j==30){
            draw_sp(79);
            printf("%c",219);
        }
        if(j==29){
            printf("   Day:        1            2           3          4          5          6     ");
            printf("%c",219);
        }
        if(j==28){
            printf("-------------------------------------------------------------------------------");
            printf("%c",219);
        }
        char yt[12]="09.30-10.15";
        if(j==27){
            printf("Time --> |08.45-08.45|08.45-09.30|%s|10.15-11.0|11.0-11.45|11.45-12.30",yt);
            printf("%c",219);
        }
        if(j==1){
            draw(79);
            printf("%c",219);
        }
        if(j==0){
            printf("                  Institute of computer since and technology                   ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t");
    draw(83);

    gotoxy(10,9);
    draw(81);
    gotoxy(10,13);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,17);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,21);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,25);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,29);
    printf("-------------------------------------------------------------------------------");


   /// {

    gotoxy(12,11);
    printf("SAT");
    gotoxy(23,10);
    printf("7786");
    gotoxy(23,11);
    printf("R=102");
    gotoxy(23,12);
    printf("MS");

    /// }


    gotoxy(12,15);
    printf("SUN");
    gotoxy(12,19);
    printf("MON");
    gotoxy(12,23);
    printf("TUS");
    gotoxy(12,27);
    printf("WID");
    gotoxy(12,31);
    printf("THS");
    getch();

    }


    if(key==3066){
        int j;

    printf("\n\n\n\n\n\t");
    draw(83);
    j=30;
    while(j--){
        printf("\n\t%c%c",219,219);

        if(j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            printf("         |           |           |           |          |          |           ");
            printf("%c",219);
        }
        if(j==16||j==17||j==18||j==19||j==20||j==21||j==22||j==23||j==24||j==25||j==26){
            printf("         |           |           |           |          |          |           ");
            printf("%c",219);
        }
        if(j==30){
            draw_sp(79);
            printf("%c",219);
        }
        if(j==29){
            printf("   Day:        1            2           3          4          5          6     ");
            printf("%c",219);
        }
        if(j==28){
            printf("-------------------------------------------------------------------------------");
            printf("%c",219);
        }
        char yt[12]="09.30-10.15";
        if(j==27){
            printf("Time --> |08.45-08.45|08.45-09.30|%s|10.15-11.0|11.0-11.45|11.45-12.30",yt);
            printf("%c",219);
        }
        if(j==1){
            draw(79);
            printf("%c",219);
        }
        if(j==0){
            printf("                  Institute of computer since and technology                   ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t");
    draw(83);

    gotoxy(10,9);
    draw(81);
    gotoxy(10,13);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,17);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,21);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,25);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,29);
    printf("-------------------------------------------------------------------------------");


   /// {

    gotoxy(12,11);
    printf("SAT");
    gotoxy(23,10);
    printf("7786");
    gotoxy(23,11);
    printf("R=102");
    gotoxy(23,12);
    printf("MS");

    /// }


    gotoxy(12,15);
    printf("SUN");
    gotoxy(12,19);
    printf("MON");
    gotoxy(12,23);
    printf("TUS");
    gotoxy(12,27);
    printf("WID");
    gotoxy(12,31);
    printf("THS");
    getch();

    }


    if(key==3077){
        int j;

    printf("\n\n\n\n\n\t");
    draw(83);
    j=30;
    while(j--){
        printf("\n\t%c%c",219,219);

        if(j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            printf("         |           |           |           |          |          |           ");
            printf("%c",219);
        }
        if(j==16||j==17||j==18||j==19||j==20||j==21||j==22||j==23||j==24||j==25||j==26){
            printf("         |           |           |           |          |          |           ");
            printf("%c",219);
        }
        if(j==30){
            draw_sp(79);
            printf("%c",219);
        }
        if(j==29){
            printf("   Day:        1            2           3          4          5          6     ");
            printf("%c",219);
        }
        if(j==28){
            printf("-------------------------------------------------------------------------------");
            printf("%c",219);
        }
        char yt[12]="09.30-10.15";
        if(j==27){
            printf("Time --> |08.45-08.45|08.45-09.30|%s|10.15-11.0|11.0-11.45|11.45-12.30",yt);
            printf("%c",219);
        }
        if(j==1){
            draw(79);
            printf("%c",219);
        }
        if(j==0){
            printf("                  Institute of computer since and technology                   ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t");
    draw(83);

    gotoxy(10,9);
    draw(81);
    gotoxy(10,13);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,17);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,21);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,25);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,29);
    printf("-------------------------------------------------------------------------------");


   /// {

    gotoxy(12,11);
    printf("SAT");
    gotoxy(23,10);
    printf("7786");
    gotoxy(23,11);
    printf("R=102");
    gotoxy(23,12);
    printf("MS");

    /// }


    gotoxy(12,15);
    printf("SUN");
    gotoxy(12,19);
    printf("MON");
    gotoxy(12,23);
    printf("TUS");
    gotoxy(12,27);
    printf("WID");
    gotoxy(12,31);
    printf("THS");
    getch();

    }


    if(key==3088){
        int j;

    printf("\n\n\n\n\n\t");
    draw(83);
    j=30;
    while(j--){
        printf("\n\t%c%c",219,219);

        if(j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            printf("         |           |           |           |          |          |           ");
            printf("%c",219);
        }
        if(j==16||j==17||j==18||j==19||j==20||j==21||j==22||j==23||j==24||j==25||j==26){
            printf("         |           |           |           |          |          |           ");
            printf("%c",219);
        }
        if(j==30){
            draw_sp(79);
            printf("%c",219);
        }
        if(j==29){
            printf("   Day:        1            2           3          4          5          6     ");
            printf("%c",219);
        }
        if(j==28){
            printf("-------------------------------------------------------------------------------");
            printf("%c",219);
        }
        char yt[12]="09.30-10.15";
        if(j==27){
            printf("Time --> |08.45-08.45|08.45-09.30|%s|10.15-11.0|11.0-11.45|11.45-12.30",yt);
            printf("%c",219);
        }
        if(j==1){
            draw(79);
            printf("%c",219);
        }
        if(j==0){
            printf("                  Institute of computer since and technology                   ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t");
    draw(83);

    gotoxy(10,9);
    draw(81);
    gotoxy(10,13);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,17);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,21);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,25);
    printf("-------------------------------------------------------------------------------");
    gotoxy(10,29);
    printf("-------------------------------------------------------------------------------");


   /// {

    gotoxy(12,11);
    printf("SAT");
    gotoxy(23,10);
    printf("7786");
    gotoxy(23,11);
    printf("R=102");
    gotoxy(23,12);
    printf("MS");

    /// }


    gotoxy(12,15);
    printf("SUN");
    gotoxy(12,19);
    printf("MON");
    gotoxy(12,23);
    printf("TUS");
    gotoxy(12,27);
    printf("WID");
    gotoxy(12,31);
    printf("THS");
    getch();

    }
}


/// ....................................................

int result_semester(int key){

    if(key==996){
    int i=0,j=0;

    printf("\n\t\t");

     draw(50);
     while(i<20){
        j=1;
        draw_th(j);

        if(i==0){
            draw_sp(20);
            printf("SEMESTER");
            draw_sp(20);
            printf("%c",178);
        }
        if(i==1){
            draw(48);
            printf("%c",178);
        }
        if(i==3){
            printf("\t%c%c 1.1st Semester",178,177);
            draw_sp(24);
            printf("%c",178);
        }
        if(i==4){
            printf("\t%C%c 2.2nd Semester",178,177);
            draw_sp(24);
            printf("%c",178);
        }

        if(i==5){
            printf("\t%c%c 3.3rd Semester",178,177);
            draw_sp(24);
            printf("%c",178);
        }
        if(i==6){
            printf("\t%c%c 4.4th Semester",178,177);
            draw_sp(24);
            printf("%c",178);
        }
        if(i==7){
            printf("\t%c%c 5.5th Semester",178,177);
            draw_sp(24);
            printf("%c",178);
        }
        if(i==8){
            printf("\t%c%c 6.6th Semester",178,177);
            draw_sp(24);
            printf("%c",178);
        }
        if(i==9){
            printf("\t%c%c 7.7th Semester",178,177);
            draw_sp(24);
            printf("%c",178);
        }
        if(i==10){
            printf("\t%c%c 8.8th Semester",178,177);
            draw_sp(24);
            printf("%c",178);
        }


        if(i==17){
            printf("\t\t> 0.Back main menu");
            draw_sp(15);
            printf("%c",178);
        }

        if(i==18){
            draw(48);
            printf("%c",178);
        }
        if(i==19){
            printf("   Institute Of Computer Since & Technology");
            draw_sp(5);
            printf("%c",178);
        }
        if(i==2|| i==11||i==12||i==13||i==14 || i==15 || i==16 || i==20){
            draw_sp(48);
            printf("%c",178);
        }
        i++;
     }
     printf("\n\t\t");
     draw(50);

     int ok;

     gotoxy(26,17);
     printf("Please type selected number: ");
     scanf("%d",&ok);
     fflush(stdin);

     if(ok==1){
         fflush(stdin);
         system("cls");
         return 301;
     }
     if(ok==2){
         fflush(stdin);
         system("cls");
         return 302;
     }
     if(ok==3){
         fflush(stdin);
         system("cls");
         return 303;
     }
     if(ok==4){
         fflush(stdin);
         system("cls");
         return 304;
     }
     if(ok==5){
         fflush(stdin);
         system("cls");
         return 305;
     }
     if(ok==6){
         fflush(stdin);
         system("cls");
         return 306;
     }
     if(ok==7){
         fflush(stdin);
         system("cls");
         return 307;
     }
     if(ok==8){
         fflush(stdin);
         system("cls");
        return 308;
     }
     if(ok==0){
        system("cls");
        return 100;
     }

    }
}

/// ...................................................


int result_student(int key){

    /*  result student 1st semester */

        if(key==778){
    int i=0,j=0;

    printf("\n\t\t");

     draw(50);
     while(i<20){
        j=1;
        draw_th(j);

        if(i==0){
            draw_sp(16);
            printf("1ST RESULT STUDENT");
            draw_sp(14);
            printf("%c",178);
        }
        if(i==1){
            draw(48);
            printf("%c",178);
        }
        if(i==3){
            printf("\t%c%c 1.Add Student result",178,177);
            draw_sp(18);
            printf("%c",178);
        }
        if(i==5){
            printf("\t%C%c 2.View student result",178,177);
            draw_sp(17);
            printf("%c",178);
        }
        if(i==7){
            printf("\t%c%c 3.Search account");
            draw_sp(22);
            printf("%c",178);
       }

        if(i==17){
            printf("\t\t> 0.Back main menu");
            draw_sp(15);
            printf("%c",178);
        }

        if(i==18){
            draw(48);
            printf("%c",178);
        }
        if(i==19){
            printf("   Institute Of Computer Since & Technology");
            draw_sp(5);
            printf("%c",178);
        }
        if(i==2||i==4||i==6|| i==8|| i==9||i==10||i==11||i==12||i==13||i==14||i==15||i==16||i==20){
            draw_sp(48);
            printf("%c",178);
        }
        i++;
     }
     printf("\n\t\t");
     draw(50);


     int kt;

     gotoxy(26,17);
     printf("Please type selected number: ");
     scanf("%d",&kt);
     fflush(stdin);


     if(kt==1){
        system("cls");
        return 711;
     }
     if(kt==2){
        system("cls");
        return 712;
     }
     if(kt==3){
        system("cls");
        return 713;
     }
     if(kt==0){
        system("cls");
        return 900;     // back to result semester
     }
    }


    /* result student 2nd semester */

    if(key==777){
    int i=0,j=0;

    printf("\n\t\t");

     draw(50);
     while(i<20){
        j=1;
        draw_th(j);

        if(i==0){
            draw_sp(16);
            printf("2ND RESULT STUDENT");
            draw_sp(14);
            printf("%c",178);
        }
        if(i==1){
            draw(48);
            printf("%c",178);
        }
        if(i==3){
            printf("\t%c%c 1.Add Student result",178,177);
            draw_sp(18);
            printf("%c",178);
        }
        if(i==5){
            printf("\t%C%c 2.View student result",178,177);
            draw_sp(17);
            printf("%c",178);
        }
        if(i==7){
            printf("\t%c%c 3.Search account");
            draw_sp(22);
            printf("%c",178);
       }

        if(i==17){
            printf("\t\t> 0.Back main menu");
            draw_sp(15);
            printf("%c",178);
        }

        if(i==18){
            draw(48);
            printf("%c",178);
        }
        if(i==19){
            printf("   Institute Of Computer Since & Technology");
            draw_sp(5);
            printf("%c",178);
        }
        if(i==2||i==4||i==6|| i==8|| i==9||i==10||i==11||i==12||i==13||i==14||i==15||i==16||i==20){
            draw_sp(48);
            printf("%c",178);
        }
        i++;
     }
     printf("\n\t\t");
     draw(50);


     int kt;

     gotoxy(26,17);
     printf("Please type selected number: ");
     scanf("%d",&kt);
     fflush(stdin);


     if(kt==1){
        system("cls");
        return 721;
     }
     if(kt==2){
        system("cls");
        return 722;
     }
     if(kt==3){
        system("cls");
        return 723;
     }
     if(kt==0){
        system("cls");
        return 920;     // back to result semester
     }
    }


    /* result student 3rd semester */

    if(key==776){
    int i=0,j=0;

    printf("\n\t\t");

     draw(50);
     while(i<20){
        j=1;
        draw_th(j);

        if(i==0){
            draw_sp(16);
            printf("3RD RESULT STUDENT");
            draw_sp(14);
            printf("%c",178);
        }
        if(i==1){
            draw(48);
            printf("%c",178);
        }
        if(i==3){
            printf("\t%c%c 1.Add Student result",178,177);
            draw_sp(18);
            printf("%c",178);
        }
        if(i==5){
            printf("\t%C%c 2.View student result",178,177);
            draw_sp(17);
            printf("%c",178);
        }
        if(i==7){
            printf("\t%c%c 3.Search account");
            draw_sp(22);
            printf("%c",178);
       }

        if(i==17){
            printf("\t\t> 0.Back main menu");
            draw_sp(15);
            printf("%c",178);
        }

        if(i==18){
            draw(48);
            printf("%c",178);
        }
        if(i==19){
            printf("   Institute Of Computer Since & Technology");
            draw_sp(5);
            printf("%c",178);
        }
        if(i==2||i==4||i==6|| i==8|| i==9||i==10||i==11||i==12||i==13||i==14||i==15||i==16||i==20){
            draw_sp(48);
            printf("%c",178);
        }
        i++;
     }
     printf("\n\t\t");
     draw(50);


     int kt;

     gotoxy(26,17);
     printf("Please type selected number: ");
     scanf("%d",&kt);
     fflush(stdin);


     if(kt==1){
        system("cls");
        return 731;
     }
     if(kt==2){
        system("cls");
        return 732;
     }
     if(kt==3){
        system("cls");
        return 733;
     }
     if(kt==0){
        system("cls");
        return 930;     // back to result semester
     }
    }


    /* result student 4th semester */

    if(key==775){
    int i=0,j=0;

    printf("\n\t\t");

     draw(50);
     while(i<20){
        j=1;
        draw_th(j);

        if(i==0){
            draw_sp(16);
            printf("4TH RESULT STUDENT");
            draw_sp(14);
            printf("%c",178);
        }
        if(i==1){
            draw(48);
            printf("%c",178);
        }
        if(i==3){
            printf("\t%c%c 1.Add Student result",178,177);
            draw_sp(18);
            printf("%c",178);
        }
        if(i==5){
            printf("\t%C%c 2.View student result",178,177);
            draw_sp(17);
            printf("%c",178);
        }
        if(i==7){
            printf("\t%c%c 3.Search account");
            draw_sp(22);
            printf("%c",178);
       }

        if(i==17){
            printf("\t\t> 0.Back main menu");
            draw_sp(15);
            printf("%c",178);
        }

        if(i==18){
            draw(48);
            printf("%c",178);
        }
        if(i==19){
            printf("   Institute Of Computer Since & Technology");
            draw_sp(5);
            printf("%c",178);
        }
        if(i==2||i==4||i==6|| i==8|| i==9||i==10||i==11||i==12||i==13||i==14||i==15||i==16||i==20){
            draw_sp(48);
            printf("%c",178);
        }
        i++;
     }
     printf("\n\t\t");
     draw(50);


     int kt;

     gotoxy(26,17);
     printf("Please type selected number: ");
     scanf("%d",&kt);
     fflush(stdin);


     if(kt==1){
        system("cls");
        return 741;
     }
     if(kt==2){
        system("cls");
        return 742;
     }
     if(kt==3){
        system("cls");
        return 743;
     }
     if(kt==0){
        system("cls");
        return 940;     // back to result semester
     }
    }


    /* result student 5th semester */

    if(key==774){
    int i=0,j=0;

    printf("\n\t\t");

     draw(50);
     while(i<20){
        j=1;
        draw_th(j);

        if(i==0){
            draw_sp(16);
            printf("5TH RESULT STUDENT");
            draw_sp(14);
            printf("%c",178);
        }
        if(i==1){
            draw(48);
            printf("%c",178);
        }
        if(i==3){
            printf("\t%c%c 1.Add Student result",178,177);
            draw_sp(18);
            printf("%c",178);
        }
        if(i==5){
            printf("\t%C%c 2.View student result",178,177);
            draw_sp(17);
            printf("%c",178);
        }
        if(i==7){
            printf("\t%c%c 3.Search account");
            draw_sp(22);
            printf("%c",178);
       }

        if(i==17){
            printf("\t\t> 0.Back main menu");
            draw_sp(15);
            printf("%c",178);
        }

        if(i==18){
            draw(48);
            printf("%c",178);
        }
        if(i==19){
            printf("   Institute Of Computer Since & Technology");
            draw_sp(5);
            printf("%c",178);
        }
        if(i==2||i==4||i==6|| i==8|| i==9||i==10||i==11||i==12||i==13||i==14||i==15||i==16||i==20){
            draw_sp(48);
            printf("%c",178);
        }
        i++;
     }
     printf("\n\t\t");
     draw(50);


     int kt;

     gotoxy(26,17);
     printf("Please type selected number: ");
     scanf("%d",&kt);
     fflush(stdin);


     if(kt==1){
        system("cls");
        return 751;
     }
     if(kt==2){
        system("cls");
        return 752;
     }
     if(kt==3){
        system("cls");
        return 753;
     }
     if(kt==0){
        system("cls");
        return 950;     // back to result semester
     }
    }


    /* result student 6th semester */

    if(key==773){
    int i=0,j=0;

    printf("\n\t\t");

     draw(50);
     while(i<20){
        j=1;
        draw_th(j);

        if(i==0){
            draw_sp(16);
            printf("6TH RESULT STUDENT");
            draw_sp(14);
            printf("%c",178);
        }
        if(i==1){
            draw(48);
            printf("%c",178);
        }
        if(i==3){
            printf("\t%c%c 1.Add Student result",178,177);
            draw_sp(18);
            printf("%c",178);
        }
        if(i==5){
            printf("\t%C%c 2.View student result",178,177);
            draw_sp(17);
            printf("%c",178);
        }
        if(i==7){
            printf("\t%c%c 3.Search account");
            draw_sp(22);
            printf("%c",178);
       }

        if(i==17){
            printf("\t\t> 0.Back main menu");
            draw_sp(15);
            printf("%c",178);
        }

        if(i==18){
            draw(48);
            printf("%c",178);
        }
        if(i==19){
            printf("   Institute Of Computer Since & Technology");
            draw_sp(5);
            printf("%c",178);
        }
        if(i==2||i==4||i==6|| i==8|| i==9||i==10||i==11||i==12||i==13||i==14||i==15||i==16||i==20){
            draw_sp(48);
            printf("%c",178);
        }
        i++;
     }
     printf("\n\t\t");
     draw(50);


     int kt;

     gotoxy(26,17);
     printf("Please type selected number: ");
     scanf("%d",&kt);
     fflush(stdin);


     if(kt==1){
        system("cls");
        return 721;
     }
     if(kt==2){
        system("cls");
        return 722;
     }
     if(kt==3){
        system("cls");
        return 723;
     }
     if(kt==0){
        system("cls");
        return 960;     //  back to result semester
     }
    }


    /* result student 7th semester */

    if(key==772){
    int i=0,j=0;

    printf("\n\t\t");

     draw(50);
     while(i<20){
        j=1;
        draw_th(j);

        if(i==0){
            draw_sp(16);
            printf("7TH RESULT STUDENT");
            draw_sp(14);
            printf("%c",178);
        }
        if(i==1){
            draw(48);
            printf("%c",178);
        }
        if(i==3){
            printf("\t%c%c 1.Add Student result",178,177);
            draw_sp(18);
            printf("%c",178);
        }
        if(i==5){
            printf("\t%C%c 2.View student result",178,177);
            draw_sp(17);
            printf("%c",178);
        }
        if(i==7){
            printf("\t%c%c 3.Search account");
            draw_sp(22);
            printf("%c",178);
       }

        if(i==17){
            printf("\t\t> 0.Back main menu");
            draw_sp(15);
            printf("%c",178);
        }

        if(i==18){
            draw(48);
            printf("%c",178);
        }
        if(i==19){
            printf("   Institute Of Computer Since & Technology");
            draw_sp(5);
            printf("%c",178);
        }
        if(i==2||i==4||i==6|| i==8|| i==9||i==10||i==11||i==12||i==13||i==14||i==15||i==16||i==20){
            draw_sp(48);
            printf("%c",178);
        }
        i++;
     }
     printf("\n\t\t");
     draw(50);


     int kt;

     gotoxy(26,17);
     printf("Please type selected number: ");
     scanf("%d",&kt);
     fflush(stdin);


     if(kt==1){
        system("cls");
        return 721;
     }
     if(kt==2){
        system("cls");
        return 722;
     }
     if(kt==3){
        system("cls");
        return 723;
     }
     if(kt==0){
        system("cls");
        return 970;     // back to result semester
     }
    }


    /* result student 8th semester */

    if(key==771){
    int i=0,j=0;

    printf("\n\t\t");

     draw(50);
     while(i<20){
        j=1;
        draw_th(j);

        if(i==0){
            draw_sp(16);
            printf("8TH RESULT STUDENT");
            draw_sp(14);
            printf("%c",178);
        }
        if(i==1){
            draw(48);
            printf("%c",178);
        }
        if(i==3){
            printf("\t%c%c 1.Add Student result",178,177);
            draw_sp(18);
            printf("%c",178);
        }
        if(i==5){
            printf("\t%C%c 2.View student result",178,177);
            draw_sp(17);
            printf("%c",178);
        }
        if(i==7){
            printf("\t%c%c 3.Search account");
            draw_sp(22);
            printf("%c",178);
       }

        if(i==17){
            printf("\t\t> 0.Back main menu");
            draw_sp(15);
            printf("%c",178);
        }

        if(i==18){
            draw(48);
            printf("%c",178);
        }
        if(i==19){
            printf("   Institute Of Computer Since & Technology");
            draw_sp(5);
            printf("%c",178);
        }
        if(i==2||i==4||i==6|| i==8|| i==9||i==10||i==11||i==12||i==13||i==14||i==15||i==16||i==20){
            draw_sp(48);
            printf("%c",178);
        }
        i++;
     }
     printf("\n\t\t");
     draw(50);


     int kt;

     gotoxy(26,17);
     printf("Please type selected number: ");
     scanf("%d",&kt);
     fflush(stdin);


     if(kt==1){
        system("cls");
        return 721;
     }
     if(kt==2){
        system("cls");
        return 722;
     }
     if(kt==3){
        system("cls");
        return 723;
     }
     if(kt==0){
        system("cls");
        return 960;     // back to result semester
     }
    }
}


/// ...................................................


int add_result(int key){

    if(key==108){
    int j=21;

    printf("\n\t\t");
    draw(56);
    while(j--){
        printf("\n\t\t%c%c",219,219);

        if(j==21||j==20||j==19||j==18||j==17||j==16||j==15||j==14||j==13||j==12||j==11||j==10||j==9||j==8||j==7||j==6||j==5||j==4||j==3||j==2){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==22||j==23||j==24){
            draw_sp(52);
            printf("%c",219);
        }
        if(j==1){
            draw(52);
            printf("%c",219);
        }
        if(j==0){
            //system("color B");
            printf("     Institute of computer since and technology     ");
            printf("%c",219);
        }
        printf("%c",219);
    }
    printf("\n\t\t");
    draw(56);


    struct result_st{
    unsigned long int rol;
    char name[20];
    char gpa[4];
    char dipt[20];
    char res_dat[10];
}st_result;


    gotoxy(38,1);
    printf(" ADD RESULT ");
    gotoxy(20,5);
    printf("Roll number: ");
    gotoxy(20,7);
    printf("Name: ");
    gotoxy(20,9);
    printf("Total GPA: ");
    gotoxy(20,11);
    printf("Dpt: ");
    gotoxy(20,13);
    printf("Result Date: ");
    gotoxy(25,19);
    printf("Press [0] ENTER then goto main menu");

    getch();

    }
}



/// ....................................................

int main(){
    system("color 1F");

    int kal,lop,pop,ikk=0;

    /*  main_menu */

    ikk=loginsystem(1);

    /*  Admin login */

    if(ikk==1213){
        int pt=0;
        pt=login(1213);

    if(pt==111){
    int i;
   // system("color 0A");
    system("cls");
    gotoxy(22,5);
    printf("[ INSTITUTE OF COMPUTER SIENCE & TECHNOLOGY ]");
    gotoxy(38,10);
    printf("loading.....");
    gotoxy(22,12);
    for(i=0;i<45;i++){
        Sleep(60);
        printf("%c", 219);
    }
    system("cls");
ik:
       lop=0;
       lop=main_menu(1);        /// into main menu

       /* addmisstion */

ko:
    if(lop==901){
            int llp=0;
            llp=addmissiton(01);        /// into addmisstion

            if(llp==001){
                if(student_reg(001)==101){      /// into student_reg
                    goto ko;    // goto -> addmissition
                }
            }
            if(llp==002){
                if(teacher_reg(002)==102){      /// into teacher_reg
                    goto ko;    // goto -> addmisstion
                }
            }

            if(llp==12){
                goto ik;            /// goto -> main menu
            }
    }

    /* student and teacher information */

    pit:
    if(lop==902){
        int opp=0;
        opp=student_and_teacher_info(02);       /// into student and teacher information

        if(opp==0001){
            if(student_serc(0001)==110){        /// into student_serc
                goto pit;   // goto -> into student and teacher information
            }
        }
        if(opp==0002){
            if(teacher_serc(0002)==26){     /// into teacher_serc
                goto pit;   // goto -> into student and teacher information
            }
        }
        if(opp==0003){
            if(view_st(0003)==56){      /// into view_st
                goto pit;   // goto -> into student and teacher information
            }
        }
        if(opp==0004){
            if(view_te(0004)==57){     /// into view_te
                goto pit;   // goto -> into student and teacher information
            }
        }
        if(opp==0005){
            goto ik;    // goto -> into student and teacher information
        }
}


    /*  account main menu */

int it=0,io=0,ip=0,il=0;
top:
    if(lop==903){
        int ut=0;
        ut=account_main_menu(12);       /// into account_main_menu

        if(ut==915){
            it=01;
        }
        if(ut==916){
            io=02;
        }
        if(ut==917){
            ip=03;
        }
        if(ut==918){
            il=04;
        }
        if(ut==919){
            goto ik;  // goto -> main_menu
        }
    }

 int ka,ke,kp,kq,kw,kl,kh,kd;
ist:
    if(it==01){
        int tys=0;
        ka=0,ke=0,kp=0,kq=0,kw=0,kl=0,kh=0,kd=0;

        tys=semester(5);        /// into semester

        if(tys==301){
            ka=41;
        }
        if(tys==302){
            ke=42;
        }
        if(tys==303){
            kp=43;
        }
        if(tys==304){
            kq=44;
        }
        if(tys==305){
            kw=45;
        }
        if(tys==306){
            kl=46;
        }
        if(tys==307){
            kh=47;
        }
        if(tys==308){
            kd=48;
        }
        if(tys==100){
            goto top;   // goto -> account main menu
        }
    }


fst_pt:
    if(ka==41){
        int mpt=0;
        mpt=fast_semester(18);      /// into fast semester

        if(mpt==505){
                if(acc_reg(2)==101){       /// into account reg
                    goto fst_pt;        // goto -> fast semester
                }
        }
        if(mpt==506){
            if(view_acco(1)==301){  /// into account
                goto fst_pt;       // goto -> fast semester
            }
        }
        if(mpt==507){
            int l=0;
            if((l=preament(1))==1200){      /// into prayment
                goto fst_pt;    // goto -> fast semester
            }
            else if(l==1201){
                goto fst_pt;
            }
        }
        if(mpt==508){
            if(view_prayment(1)==11){      /// into view_prayment
                goto fst_pt;    // goto -> fast semester
            }
        }
        if(mpt==509){
            if(search_account(15)==990){
                goto fst_pt;       // goto -> fast semester
            }
        }
        if(mpt==500){
            goto ist;   // goto -> semester
        }
    }


sec_pt:
    if(ke==42){
        int sps=0;
        sps=secnd_semester(19);     /// into second semester

        if(sps==605){
            if(acc_reg(3)==102){    /// into account reg
                goto sec_pt;    // goto -> second semester
            }
        }
        if(sps==606){
            if(view_acco(2)==302){  /// into view account
                goto sec_pt; // goto -> second semester
            }
        }
        if(sps==607){
            int l=0;
            l=preament(2);  /// into payment op

            if(l==1300){
                goto sec_pt;    // goto -> second semester
            }
            else if(l==1301){
                goto sec_pt;    // goto --> second semester
            }
        }
        if(sps==608){
            if(view_prayment(2)==12){   /// into view payment or view due op
                goto sec_pt;    // goto -> second semester
            }
        }
        if(sps==609){
            if(search_account(25)==991){    /// into search account op
                goto sec_pt;    // goto -> second semester
            }
        }
        if(sps==1105){
            goto ist;  // goto -> semester
        }
    }



trd_pt:
    if(kp==43){
        int osp=0;
        osp=trd_semester(20);  /// into 3rd semester

        if(osp==705){
            if(acc_reg(4)==103){    /// into account reg
                goto trd_pt;    // goto -> 3rd semester
            }
        }
        if(osp==706){
            if(view_acco(3)==303){  /// into view account
                goto trd_pt;    // goto -> 3rd semester
            }
        }
        if(osp==707){
            int u=0;
            u=preament(3);  /// into payment

            if(u==1400){
                goto trd_pt;    // goto -> 3rd semester
            }
            if(u==1401){
                goto trd_pt;    // goto -> 3rd semester
            }
        }
        if(osp==708){
            if(view_prayment(3)==13){   /// into view payment
                goto trd_pt;    // goto -> 3rd semester
            }
        }
        if(osp==709){
            if(search_account(35)==992){    /// into search payment account
                goto trd_pt;    // goto -> 3rd semester
            }
        }
        if(osp==1105){
            goto ist;   // goto -> semester
        }
    }


four_pt:
    if(kq==44){
        int ttp=0;
        ttp=four_semester(21);  /// into 4th semester

        if(ttp==805){
            if(acc_reg(5)==104){    /// into account reg
                goto four_pt;   // goto -> 4th semester
            }
        }
        if(ttp==806){
            if(view_acco(4)==304){  /// into view account
                goto four_pt;   // goto -> 4th semester
            }
        }
        if(ttp==807){
            int t=0;
            t=preament(4);      /// into payment menu

            if(t==1500){
                goto four_pt;   // goto -> 4th semester
            }
            else if(t==1501){
                goto four_pt;   // goto -> 4th semester
            }
        }
        if(ttp==808){
            if(view_prayment(4)==14){   /// into view payment
                goto four_pt;   // goto -> 4th semester
            }
        }
        if(ttp==809){
            if(search_account(45)==993){    /// into search account
                goto four_pt;   // goto -> 4th semester
            }
        }
        if(ttp==1405){
            goto ist;   // goto -> semester
        }
    }



fiv_pt:
    if(kw==45){
        int fit=0;
        fit=fiv_semester(22);       /// into 5th semester

        if(fit==511){
            if(acc_reg(6)==105){    /// into account reg_ 5th
                goto fiv_pt;    // goto -> 5th semester
            }
        }
        if(fit==522){
            if(view_acco(5)==305){  /// into view account _ 5th
                goto fiv_pt;    // goto -> 5th semester
            }
        }
        if(fit==533){
            int y=0;
            y=preament(5);  /// into payment fun_5th

            if(y==1600){
                goto fiv_pt;    // goto -> 5th semester
            }
            if(y==1601){
                goto fiv_pt;    // goto -> 5th semester
            }
        }
        if(fit==544){
            if(view_prayment(5)==15){   /// into view payment
                goto fiv_pt;    // goto -> 5th semester
            }
        }
        if(fit==555){
            if(search_account(55)==994){    /// into search account
                goto fiv_pt;    // goto -> 5th semester
            }
        }
        if(fit==135){
            goto ist;   // goto -> semester
        }
    }




six_pt:
    if(kl==46){
        int stc=0;
        stc=six_semester(23);   /// into 6th semester

        if(stc==611){
            if(acc_reg(7)==106){    /// into account reg_6th
                goto six_pt;    // goto -> 6th semester
            }
        }
        if(stc==622){
            if(view_acco(6)==306){  /// into view account
                goto six_pt;    // goto -> semester
            }
        }
        if(stc==633){
            int q=0;
            q=preament(6);  /// into payment op

            if(q==1700){
                goto six_pt;    // goto -> 6th semester
            }
            if(q==1701){
                goto six_pt;    // goto -> 6th semester
            }
        }
        if(stc==644){
            if(view_prayment(6)==16){   /// into view_payment _6th
                goto six_pt;    // goto -> 6th semester
            }
        }
        if(stc==655){
            if(search_account(65)==995){    /// into 6th semester
                goto six_pt;    // goto -> 6th semester
            }
        }
        if(stc==145){
            goto ist;   // goto -> semester
        }
    }


sev_pt:
    if(kh==47){
        int stv=0;
        stv=seven_semester(24);     /// into 7th semester

        if(stv==711){
            if(acc_reg(8)==107){    /// into account reg_7th
                goto sev_pt;    // goto -> 7th semester
            }
        }
        if(stv==722){
            if(view_acco(7)==307){  /// into view account
                goto sev_pt;    // goto -> 7th semester
            }
        }
        if(stv==733){
            int ok=0;
            ok=preament(7);     /// into payment op

            if(ok==1800){
                goto sev_pt;    // goto -> 7th semester
            }
            else if(ok==1801){
                goto sev_pt;    // goto -> 7th semester
            }
        }
        if(stv==744){
            if(view_prayment(7)==17){   /// into view payment _ 7th
                goto sev_pt;    // goto -> 7th semester
            }
        }
        if(stv==788){
            if(search_account(75)==996){    /// into search account _ 7th
                goto sev_pt;    // goto -> 7th semester
            }
        }
        if(stv==155){
            goto ist;   // goto -> semester
        }
    }



eg_pt:
    if(kd==48){
        int spe=0;
        spe=eight_semester(25);     /// into 8th semester


        if(spe==811){
            if(acc_reg(9)==108){    /// into account reg_8th
                goto eg_pt;     // goto -> 8th semester
            }
        }
        if(spe==822){
            if(view_acco(8)==308){  /// into view account
                goto eg_pt;     // goto -> 8th semester
            }
        }
        if(spe==833){
            int to=0;
            to=preament(8);     /// into payment op

            if(to==1900){
                goto eg_pt;     // goto -> 8th semester
            }
            if(to==1901){
                goto eg_pt;     // goto -> 8th semester
            }
        }
        if(spe==844){
            if(view_prayment(8)==18){   /// into view payment _ 8th
                goto eg_pt;     // goto -> 8th semester
            }
        }
        if(spe==855){
            if(search_account(85)==997){    /// into search account
                goto eg_pt;     // goto -> 8th semester
            }
        }
        if(spe==165){
            goto ist;   // goto -> semester
        }
    }



    /* menage user penal */
    fflush(stdin);

meg_us:
    if(lop==904){
        int it=0;
        it=menage_user(04);     /// into menage user penal

        if(it==881){
            if(st_del_rec(13)==80){     /// into student information delete op
                goto meg_us;       // goto -> menage user
            }
        }
        if(it==882){
            if(te_del_rec(62)==81){     /// into teacher information delete op
                goto meg_us;    // goto -> menage user
            }
        }
        if(it==883){
            if(set_password(02)==35){
            system("cls");
            goto meg_us;    // goto -> menage user
            }
        }
        if(it==055){
            goto ik;    // goto -> main_menu
        }
    }

    if(lop==004){
        close_pro(006);
    }
    }
}




    /* Account login */

    else if(ikk==1214){
        int yts=0;
        yts=login(1214);

        int i;
        //system("color 0A");
        system("cls");
        gotoxy(22,5);
        printf("[ INSTITUTE OF COMPUTER SIENCE & TECHNOLOGY ]");
        gotoxy(38,10);
        printf("loading.....");
        gotoxy(22,12);
        for(i=0;i<45;i++){
            Sleep(60);
            printf("%c", 219);
        }
        system("cls");

        if(yts==121){



        int it,io,ip,il,ut;
topl:
        it=0,io=0,ip=0,il=0,ut=0;
        ut=account_main_menu(12);       /// into account_main_menu

        if(ut==915){
            it=01;
        }
        if(ut==916){
            io=02;
        }
        if(ut==917){
            ip=03;
        }
        if(ut==918){
            il=04;
        }
        if(ut==919){
            close_pro(006);
        }


 int ka,ke,kp,kq,kw,kl,kh,kd;
istl:
    if(it==01){
        int tys=0;
        ka=0,ke=0,kp=0,kq=0,kw=0,kl=0,kh=0,kd=0;

        tys=semester(5);        /// into semester

        if(tys==301){
            ka=41;
        }
        if(tys==302){
            ke=42;
        }
        if(tys==303){
            kp=43;
        }
        if(tys==304){
            kq=44;
        }
        if(tys==305){
            kw=45;
        }
        if(tys==306){
            kl=46;
        }
        if(tys==307){
            kh=47;
        }
        if(tys==308){
            kd=48;
        }
        if(tys==100){
            goto topl;   // goto -> account main menu
        }
    }


fst_pts:
    if(ka==41){
        int mpt=0;
        mpt=fast_semester(18);      /// into fast semester

        if(mpt==505){
                if(acc_reg(2)==101){       /// into account reg
                    goto fst_pts;        // goto -> fast semester
                }
        }
        if(mpt==506){
            if(view_acco(1)==301){  /// into account
                goto fst_pts;       // goto -> fast semester
            }
        }
        if(mpt==507){
            if(preament(1)==1200){      /// into prayment
                goto fst_pts;    // goto -> fast semester
            }
        }
        if(mpt==508){
            if(view_prayment(1)==11){      /// into view_prayment
                goto fst_pts;    // goto -> fast semester
            }
        }
        if(mpt==509){
            if(search_account(15)==990){
                goto fst_pts;       // goto -> fast semester
            }
        }
        if(mpt==500){
            fflush(stdin);
            goto istl;   // goto -> semester
        }
    }


sec_pts:
    if(ke==42){
        int sps=0;
        sps=secnd_semester(19);     /// into second semester

        if(sps==605){
            if(acc_reg(3)==102){    /// into account reg
                goto sec_pts;    // goto -> second semester
            }
        }
        if(sps==606){
            if(view_acco(2)==302){  /// into view account
                goto sec_pts; // goto -> second semester
            }
        }
        if(sps==607){
            int l=0;
            l=preament(2);  /// into payment op

            if(l==1300){
                goto sec_pts;    // goto -> second semester
            }
            else if(l==1301){
                goto sec_pts;    // goto --> second semester
            }
        }
        if(sps==608){
            if(view_prayment(2)==12){   /// into view payment or view due op
                goto sec_pts;    // goto -> second semester
            }
        }
        if(sps==609){
            if(search_account(25)==991){    /// into search account op
                goto sec_pts;    // goto -> second semester
            }
        }
        if(sps==1105){
            fflush(stdin);
            goto istl;  // goto -> semester
        }
    }



trd_pts:
    if(kp==43){
        int osp=0;
        osp=trd_semester(20);  /// into 3rd semester

        if(osp==705){
            if(acc_reg(4)==103){    /// into account reg
                goto trd_pts;    // goto -> 3rd semester
            }
        }
        if(osp==706){
            if(view_acco(3)==303){  /// into view account
                goto trd_pts;    // goto -> 3rd semester
            }
        }
        if(osp==707){
            int u=0;
            u=preament(3);  /// into payment

            if(u==1400){
                goto trd_pts;    // goto -> 3rd semester
            }
            if(u==1401){
                goto trd_pts;    // goto -> 3rd semester
            }
        }
        if(osp==708){
            if(view_prayment(3)==13){   /// into view payment
                goto trd_pts;    // goto -> 3rd semester
            }
        }
        if(osp==709){
            if(search_account(35)==992){    /// into search payment account
                goto trd_pts;    // goto -> 3rd semester
            }
        }
        if(osp==1105){
            fflush(stdin);
            goto istl;   // goto -> semester
        }
    }


four_pts:
    if(kq==44){
        int ttp=0;
        ttp=four_semester(21);  /// into 4th semester

        if(ttp==805){
            if(acc_reg(5)==104){    /// into account reg
                goto four_pts;   // goto -> 4th semester
            }
        }
        if(ttp==806){
            if(view_acco(4)==304){  /// into view account
                goto four_pts;   // goto -> 4th semester
            }
        }
        if(ttp==807){
            int t=0;
            t=preament(4);      /// into payment menu

            if(t==1500){
                goto four_pts;   // goto -> 4th semester
            }
            else if(t==1501){
                goto four_pts;   // goto -> 4th semester
            }
        }
        if(ttp==808){
            if(view_prayment(4)==14){   /// into view payment
                goto four_pts;   // goto -> 4th semester
            }
        }
        if(ttp==809){
            if(search_account(45)==993){    /// into search account
                goto four_pts;   // goto -> 4th semester
            }
        }
        if(ttp==1405){
            goto istl;   // goto -> semester
        }
    }



fiv_pts:
    if(kw==45){
        int fit=0;
        fit=fiv_semester(22);       /// into 5th semester

        if(fit==511){
            if(acc_reg(6)==105){    /// into account reg_ 5th
                goto fiv_pts;    // goto -> 5th semester
            }
        }
        if(fit==522){
            if(view_acco(5)==305){  /// into view account _ 5th
                goto fiv_pts;    // goto -> 5th semester
            }
        }
        if(fit==533){
            int y=0;
            y=preament(5);  /// into payment fun_5th

            if(y==1600){
                goto fiv_pts;    // goto -> 5th semester
            }
            if(y==1601){
                goto fiv_pts;    // goto -> 5th semester
            }
        }
        if(fit==544){
            if(view_prayment(5)==15){   /// into view payment
                goto fiv_pts;    // goto -> 5th semester
            }
        }
        if(fit==555){
            if(search_account(55)==994){    /// into search account
                goto fiv_pts;    // goto -> 5th semester
            }
        }
        if(fit==135){
            goto istl;   // goto -> semester
        }
    }




six_pts:
    if(kl==46){
        int stc=0;
        stc=six_semester(23);   /// into 6th semester

        if(stc==611){
            if(acc_reg(7)==106){    /// into account reg_6th
                goto six_pts;    // goto -> 6th semester
            }
        }
        if(stc==622){
            if(view_acco(6)==306){  /// into view account
                goto six_pts;    // goto -> semester
            }
        }
        if(stc==633){
            int q=0;
            q=preament(6);  /// into payment op

            if(q==1700){
                goto six_pts;    // goto -> 6th semester
            }
            if(q==1701){
                goto six_pts;    // goto -> 6th semester
            }
        }
        if(stc==644){
            if(view_prayment(6)==16){   /// into view_payment _6th
                goto six_pts;    // goto -> 6th semester
            }
        }
        if(stc==655){
            if(search_account(65)==995){    /// into 6th semester
                goto six_pts;    // goto -> 6th semester
            }
        }
        if(stc==145){
            goto istl;   // goto -> semester
        }
    }


sev_pts:
    if(kh==47){
        int stv=0;
        stv=seven_semester(24);     /// into 7th semester

        if(stv==711){
            if(acc_reg(8)==107){    /// into account reg_7th
                goto sev_pts;    // goto -> 7th semester
            }
        }
        if(stv==722){
            if(view_acco(7)==307){  /// into view account
                goto sev_pts;    // goto -> 7th semester
            }
        }
        if(stv==733){
            int ok=0;
            ok=preament(7);     /// into payment op

            if(ok==1800){
                goto sev_pts;    // goto -> 7th semester
            }
            else if(ok==1801){
                goto sev_pts;    // goto -> 7th semester
            }
        }
        if(stv==744){
            if(view_prayment(7)==17){   /// into view payment _ 7th
                goto sev_pts;    // goto -> 7th semester
            }
        }
        if(stv==788){
            if(search_account(75)==996){    /// into search account _ 7th
                goto sev_pts;    // goto -> 7th semester
            }
        }
        if(stv==155){
            goto istl;   // goto -> semester
        }
    }



eg_pts:
    if(kd==48){
        int spe=0;
        spe=eight_semester(25);     /// into 8th semester


        if(spe==811){
            if(acc_reg(9)==108){    /// into account reg_8th
                goto eg_pts;     // goto -> 8th semester
            }
        }
        if(spe==822){
            if(view_acco(8)==308){  /// into view account
                goto eg_pts;     // goto -> 8th semester
            }
        }
        if(spe==833){
            int to=0;
            to=preament(8);     /// into payment op

            if(to==1900){
                goto eg_pts;     // goto -> 8th semester
            }
            if(to==1901){
                goto eg_pts;     // goto -> 8th semester
            }
        }
        if(spe==844){
            if(view_prayment(8)==18){   /// into view payment _ 8th
                goto eg_pts;     // goto -> 8th semester
            }
        }
        if(spe==855){
            if(search_account(85)==997){    /// into search account
                goto eg_pts;     // goto -> 8th semester
            }
        }
        if(spe==165){
            goto istl;   // goto -> semester
        }
    }

        }
}




    /* Monitoring login */


    else if(ikk==1215){
        int uup=0;
        uup=login(1215);

        if(uup==131){
        int i;
        //system("color 0B");
        system("cls");
        gotoxy(22,5);
        printf("[ INSTITUTE OF COMPUTER SIENCE & TECHNOLOGY ]");
        gotoxy(38,10);
        printf("loading.....");
        gotoxy(22,12);
        for(i=0;i<45;i++){
            Sleep(60);
            printf("%c", 219);
        }
        system("cls");
ikr:
       lop=0;
       lop=main_menu(1);        /// into main menu

       /* addmisstion */

kor:
    if(lop==901){
            int llp=0;
            llp=addmissiton(01);        /// into addmisstion

            if(llp==001){
                if(student_reg(001)==101){      /// into student_reg
                    goto kor;    // goto -> addmissition
                }
            }
            if(llp==002){
                if(teacher_reg(002)==102){      /// into teacher_reg
                    goto kor;    // goto -> addmisstion
                }
            }

            if(llp==12){
                goto ikr;            /// goto -> main menu
            }
    }

    /* student and teacher information */

    pitr:
    if(lop==902){
        int opp=0;
        opp=student_and_teacher_info(02);       /// into student and teacher information

        if(opp==0001){
            if(student_serc(0001)==110){        /// into student_serc
                goto pitr;   // goto -> into student and teacher information
            }
        }
        if(opp==0002){
            if(teacher_serc(0002)==26){     /// into teacher_serc
                goto pitr;   // goto -> into student and teacher information
            }
        }
        if(opp==0003){
            if(view_st(0003)==56){      /// into view_st
                goto pitr;   // goto -> into student and teacher information
            }
        }
        if(opp==0004){
            if(view_te(0004)==57){     /// into view_te
                goto pitr;   // goto -> into student and teacher information
            }
        }
        if(opp==0005){
            goto ikr;    // goto -> into student and teacher information
        }
}


    /* menage user penal */
    fflush(stdin);

meg_usr:
    if(lop==904){
        int it=0;
        it=menage_user(04);     /// into menage user penal

        if(it==881){
            if(st_del_rec(13)==80){     /// into student information delete op
                goto meg_usr;       // goto -> menage user
            }
        }
        if(it==882){
            if(te_del_rec(62)==81){     /// into teacher information delete op
                goto meg_usr;    // goto -> menage user
            }
        }
        if(it==883){
            goto meg_usr;    // goto -> menage user
        }
        if(it==055){
            goto ikr;    // goto -> main_menu
        }
    }

    if(lop==004){
        close_pro(006);
    }
    }
}




    //add_result(108);
   // set_password(02);

   //employ_account(29);
//    employ_reg(18);
//    view_employ_account(47);
//    search_employ_account(34);

   // other_expences(110);
   //view_other_exp(88);
   //time_table_semester(519);
   //draw_table(178);
   //result_semester(996);
  // result_student(778);
    return 0;
}
