
///                            ************************************************************
///                            **        INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY      **
///                            ************************************************************
///                            **                                                        **
///                            **     Project Name:    ( College Management System ).    **
///                            **                                                        **
///                            **     Project Coding:  [ C ] program.                    **
///                            **                                                        **
///                            **     Project Type:    Academic Level (V1).              **
///                            **                                                        **
///                            ************************************************************
///                            **                                                        **
///                            **     Subject Name: [ COMPUTER ENGINEERING PROJECT ]     **
///                            **                                                        **
///                            ************************************************************
///                            ************************************************************




/* .H file */

#include<stdio.h>
#include<io.h>
#include<windows.h>
#include<ctype.h>
#include<time.h>


/* All structure variable */

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

struct tim_tbl{
    int semester;
    char dpt[5];
    char day[10];
    int sub_code_fast;
    int class_code_fast;
    char teacher_name_fast[5];
    int sub_code_sec;
    int class_code_sec;
    char teacher_name_sec[5];
    int sub_code_thrd;
    int class_code_thrd;
    char teacher_name_thrd[5];
    int sub_code_four;
    int class_code_four;
    char teacher_name_four[5];
    int sub_code_five;
    int class_code_five;
    char teacher_name_five[5];
    int sub_code_six;
    int class_code_six;
    char teacher_name_six[5];

}time_table[6];

struct other_time{
    char title[20];
    char dat[8];
    int time;
    char dispt[50];
}othr_ru;



/*  Goto x,y Function (scene location)  */

void gotoxy(int x,int y){
    COORD coord;
    coord.X=x;
    coord.Y=y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}


/*  Loop function write ( H ) line   */

void draw(int lth){
    int j;
    for(j=0;j<lth;j++){
        printf("%c",177);
    }

}


/*  Loop function write ( V ) line  */

void draw_two(int lth){
    int j;
    for(j=0;j<lth;j++){
        printf("%c",219);
    }

}


/*    Loop function write ( SPACE )    */

void draw_sp(int splth){
    int i;
    for(i=0;i<splth;i++){
        printf(" ");
    }
}



/*  Use function, Show Login page   */

int login_sys(){

    int i=4;

    gotoxy(8,1);
    draw(100);
    gotoxy(8,2);
    draw_two(100);
    gotoxy(8,3);
    draw(100);

    while(i<25){
        gotoxy(8,i);
        printf("%c",219);
        printf("%c",177);
        printf("%c",219);
        draw(94);
        printf("%c",219);
        printf("%c",177);
        printf("%c",219);

        i++;
    }

    i=12;
    while(i<22){

        gotoxy(15,i);
        printf("%c",219);
        draw_sp(23);
        printf("%c",219);

        i++;
    }

    i=12;
    while(i<22){

        gotoxy(46,i);
        printf("%c",219);
        draw_sp(23);
        printf("%c",219);

        i++;
    }

    i=12;
    while(i<22){

        gotoxy(76,i);
        printf("%c",219);
        draw_sp(23);
        printf("%c",219);

        i++;
    }

    i=40;
    while(i<58){

        gotoxy(i,24);
        draw_sp(18);

        i++;
    }

    //----------->>

    gotoxy(35,4);
    draw_sp(48);
    gotoxy(35,5);
    printf("[ --- WELCOME TO COLLEGE MENAGEMENT SYSTEM --- ]");
    gotoxy(35,6);
    draw_sp(48);

    gotoxy(51,9);
    printf("   LOGIN MENU   ");
    gotoxy(22,16);
    printf("1.ADMIN LOGIN");
    gotoxy(50,16);
    printf("2.ACCOUNTINT LOGIN");
    gotoxy(81,16);
    printf("3.MONITORING LOGIN");


    gotoxy(8,25);
    draw(100);
    gotoxy(8,26);
    draw_two(100);
    gotoxy(33,26);
    printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
    gotoxy(8,27);
    draw(100);


    int ik;

gp:
    ik=0;
    gotoxy(41,24);
    printf("Please Type Selected Number:  ");
    scanf("%d",&ik);

    /* If press 1 then goto admin page */
    if(ik==1){
        system("cls");
       return 1213;
    }

    /* If press 2 then goto account page */
    if(ik==2){
        system("cls");
        return 1214;
    }

    /* If press 3 then goto monitoring page */
    if(ik==3){
        system("cls");
        return 1215;
    }
    else{
        goto gp;
    }

}



/*  Use function , compare input password   */

int login_ft(){            /// login page

js:
    printf("\n\n\n\n\t\t\t");
    FILE *pas;
    int j,k=1;
    char get_pas[20],com_pas[20];

    // pas=fopen("pass.dat","r");
    // fscanf(pas,"%s",&com_pas);

        printf("\n\n\t\t\t\tPlease type administration password:\n\n\t\t\t\t\t\t");
        int i;
        gotoxy(34,8);
        printf("*******************************");
        for(i=9;i<13;i++){
        gotoxy(34,i);
        printf("*");
        printf("                             ");
        printf("*");
        }
        gotoxy(34,i);
        printf("*******************************");
        gotoxy(45,10);
        fflush(stdin);
        gets(get_pas);
        if((k=strcmp(get_pas,"12345"))== 0){
         system("cls");
         return 111;
        }
        else{
            system("cls");
            goto js;
        }

    fclose(pas);
}




/*  Show main menu page in console   */

int main_menu_function(){

    int i,gt_val;

main_mu:
    i=4;
    gotoxy(8,1);
    draw(100);
    gotoxy(8,2);
    draw_two(100);
    gotoxy(8,3);
    draw(100);

    while(i<25){
        gotoxy(8,i);
        printf("%c",219);
        printf("%c",177);
        printf("%c",219);
        draw_sp(96);
        printf("%c",219);
        i++;
    }
    i=4;
    while(i<25){
        gotoxy(65,i);
        printf("%c",177);
        printf("%c",219);

        i++;
    }
    i=66;
    while(i<108){
        gotoxy(i,4);
        printf("%c",254);
        gotoxy(i,24);
        printf("%c",254);
        i++;
    }
    gotoxy(8,25);
    draw(100);
    gotoxy(8,26);
    draw_two(100);
    gotoxy(33,26);
    printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
    gotoxy(8,27);
    draw(100);
// ---------------->>
    gotoxy(75,1);
    time_t mytime;
    mytime=time(NULL);
    printf(ctime(&mytime));
//----------------->>

    gotoxy(30,2);
    printf(" MAIN MENU ");
    gotoxy(15,5);
    printf("%c%c%c",213,205,205);
    gotoxy(15,6);
    printf("%c 1.Admission",195);
    gotoxy(15,7);
    printf("%c%c%c",213,205,205);
    gotoxy(15,8);
    printf("%c 2.Student & Teacher info",195);
    gotoxy(15,9);
    printf("%c%c%c",213,205,205);
    gotoxy(15,10);
    printf("%c 3.Accounting",195);
    gotoxy(15,11);
    printf("%c%c%c",213,205,205);
    gotoxy(15,12);
    printf("%c 4.Menage User",195);
    gotoxy(15,13);
    printf("%c%c%c",213,205,205);
    gotoxy(15,14);
    printf("%c 5.Time table",195);
    gotoxy(15,15);
    printf("%c%c%c",213,205,205);
    gotoxy(15,16);
    printf("%c 6.Result student",195);
    gotoxy(15,17);
    printf("%c%c%c",213,205,205);
    gotoxy(15,18);
    printf("%c 7.Old student & teacher",195);
    gotoxy(15,19);
    printf("%c%c%c",213,205,205);
    gotoxy(15,20);
    printf("%c",179);
    gotoxy(15,21);
    printf("%c",179);
    gotoxy(15,22);
    printf("%c",179);
    gotoxy(15,23);
    printf("%c 0.Close apps",195);


    gt_val=0;
    gotoxy(70,13);
    printf("Please type selected number:  ");
    scanf("%d",&gt_val);
    fflush(stdin);


    /*  If press 1 then goto admission penal    */
     if(gt_val==1){
        system("cls");
       return 901;
     }

     /* If press 2 Then goto Student and Teacher information penal  */
     if(gt_val==2){
        system("cls");
       return 902;
     }

     /* If press 3 Then goto Accounting penal   */
     if(gt_val==3){
        system("cls");
        return 903;
     }

     /* If press 4 Then goto Menage User penal  */
     if(gt_val==4){
        system("cls");
       return 904;
     }

     /* If press 5 Then goto Time table penal   */
     if(gt_val==5){
        system("cls");
        return 905;
     }

     /* If press 6 Then goto Result Student penal   */
     if(gt_val==6){
        system("cls");
        return 906;
     }

     /* If press 7 Then goto Old student and teacher penal  */
     if(gt_val==7){
        system("cls");
        return 907;
     }

     /*  If press 0 Then goto Close penal   */
     if(gt_val==0){
        system("cls");
        return 004;
     }
     else{
        system("cls");
        goto main_mu;
     }

    return 0;
}



/*  Into admission page,And gets input  */

int addmin(){

    int i,get_v;

addmins:

    i=4;
    gotoxy(8,1);
    draw(100);
    gotoxy(8,2);
    draw_two(100);
    gotoxy(8,3);
    draw(100);

    while(i<25){
        gotoxy(8,i);
        printf("%c",219);
        printf("%c",177);
        printf("%c",219);
        draw_sp(96);
        printf("%c",219);

        i++;
    }
    i=4;
    while(i<25){
        gotoxy(65,i);
        printf("%c",177);
        printf("%c",219);

        i++;
    }
    i=66;
    while(i<108){
        gotoxy(i,4);
        printf("%c",254);
        gotoxy(i,24);
        printf("%c",254);
        i++;
    }
    gotoxy(8,25);
    draw(100);
    gotoxy(8,26);
    draw_two(100);
    gotoxy(33,26);
    printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
    gotoxy(8,27);
    draw(100);

// ---------------->>

    gotoxy(75,1);
    time_t mytime;
    mytime=time(NULL);
    printf(ctime(&mytime));
//----------------->>

    gotoxy(30,2);
    printf(" MAIN MENU ");
    gotoxy(15,5);
    printf("%c%c%c",213,205,205);
    gotoxy(15,6);
    printf("%c <<< 1.Admission >>>",195);
    gotoxy(15,7);
    printf("%c%c%c",213,205,205);
    gotoxy(15,8);
    printf("%c 2.Student & Teacher info",195);
    gotoxy(15,9);
    printf("%c%c%c",213,205,205);
    gotoxy(15,10);
    printf("%c 3.Finance",195);
    gotoxy(15,11);
    printf("%c%c%c",213,205,205);
    gotoxy(15,12);
    printf("%c 4.Menage User",195);
    gotoxy(15,13);
    printf("%c%c%c",213,205,205);
    gotoxy(15,14);
    printf("%c 5.Time table",195);
    gotoxy(15,15);
    printf("%c%c%c",213,205,205);
    gotoxy(15,16);
    printf("%c 6.Result student",195);
    gotoxy(15,17);
    printf("%c%c%c",213,205,205);
    gotoxy(15,18);
    printf("%c 7.Old student & teacher",195);
    gotoxy(15,19);
    printf("%c%c%c",213,205,205);
    gotoxy(15,20);
    printf("%c",179);
    gotoxy(15,21);
    printf("%c",179);
    gotoxy(15,22);
    printf("%c",179);
    gotoxy(15,23);
    printf("%c 0.Close apps",195);

   /// ====>>>
    gotoxy(81,3);
    printf(" ADMISSTION ");
    gotoxy(70,8);
    printf("=> 1.Student registration");
    gotoxy(70,10);
    printf("=> 2.Employ registration");
    gotoxy(70,12);
    printf("=> 0.BACK");

    get_v=0;
    gotoxy(70,23);
    printf("Please type selected number:  ");
    scanf("%d",&get_v);
    fflush(stdin);


    /* Student reg ************************** */


     if(get_v==1){
        system("cls");

        FILE *sutd,*sutds;
        int i,lk;
        unsigned long int sub_roll=0;


                i=4;
                gotoxy(8,1);
                draw(100);
                gotoxy(8,2);
                draw_two(100);
                gotoxy(8,3);
                draw(100);

                while(i<25){
                    gotoxy(8,i);
                    printf("%c",219);
                    printf("%c",177);
                    printf("%c",219);
                    draw_sp(96);
                    printf("%c",219);

                    i++;
                }
                i=4;
                while(i<25){
                    gotoxy(65,i);
                    printf("%c",177);
                    printf("%c",219);

                    i++;
                }
                i=66;
                while(i<108){
                    gotoxy(i,4);
                    printf("%c",254);
                    gotoxy(i,24);
                    printf("%c",254);
                    i++;
                }
                gotoxy(8,25);
                draw(100);
                gotoxy(8,26);
                draw_two(100);
                gotoxy(33,26);
                printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
                gotoxy(8,27);
                draw(100);

            // ---------------->>

                gotoxy(75,1);
                time_t mytime;
                mytime=time(NULL);
                printf(ctime(&mytime));
            //----------------->>


                    sutd=fopen("student_info.dat","a");

                    gotoxy(25,2);
                    printf(" STUDENT REGISTRATION ");
                    gotoxy(15,5);
                    printf("Student id: ");
                    gotoxy(15,7);
                    printf("Student name [MAX 28W]: ");
                    gotoxy(15,9);
                    printf("Father name [MAX 28W]: ");
                    gotoxy(15,11);
                    printf("Guidance name [MAX 28W]: ");
                    gotoxy(15,13);
                    printf("Guidance number [MAX 10N]: 0");
                    gotoxy(15,15);
                    printf("Gender [M || F]: ");
                    gotoxy(15,17);
                    printf("Department [MAX 15W]: ");
                    gotoxy(15,19);
                    printf("City [MEX 18W]: ");
                    gotoxy(15,21);
                    printf("Admission year [MAX 9W]: ");
                    gotoxy(15,23);
                    printf("Student number [MAX 10N]: 0");

                    ///----------------------------------------


                    gotoxy(44,5);
                    scanf("%lu",&sut_reg.st_id);
                    sub_roll=sut_reg.st_id;
                    fflush(stdin);
                    gotoxy(44,7);
                    gets(sut_reg.name);
                    gotoxy(44,9);
                    gets(sut_reg.f_name);
                    gotoxy(44,11);
                    gets(sut_reg.g_name);
                    gotoxy(44,13);
                    scanf("%lu",&sut_reg.g_number);
                    fflush(stdin);
                    gotoxy(44,15);
                    scanf("%c",&sut_reg.gender);
                    fflush(stdin);
                    gotoxy(44,17);
                    gets(sut_reg.st_dpt);
                    gotoxy(44,19);
                    gets(sut_reg.st_city);
                    gotoxy(44,21);
                    gets(sut_reg.st_admi_yer);
                    gotoxy(44,23);
                    scanf("%lu",&sut_reg.s_number);
                    fflush(stdin);

                    fwrite(&sut_reg,sizeof(sut_reg),1,sutd);
                    fflush(sutd);
                    fclose(sutd);


                    /* Read from other sub menu ******************/

                    sutds=fopen("student_info.dat","r");

                    while(fread(&sut_reg,sizeof(sut_reg),1,sutds) != 0){
                        if(sub_roll==sut_reg.st_id){

                                gotoxy(85,3);
                                printf(" SAVE ");
                                gotoxy(70,7);
                                printf("Student id: %lu",sut_reg.st_id);
                                gotoxy(70,8);
                                printf("Student name [MAX 28W]: %s",sut_reg.name);
                                gotoxy(70,9);
                                printf("Father name [MAX 28W]: %s",sut_reg.f_name);
                                gotoxy(70,10);
                                printf("Guidance name [MAX 28W]: %s",sut_reg.g_name);
                                gotoxy(70,11);
                                printf("Guidance number [MAX 10N]: 0%lu",sut_reg.g_number);
                                gotoxy(70,12);
                                printf("Gender [M || F]: %c",sut_reg.gender);
                                gotoxy(70,13);
                                printf("Department [MAX 15W]: %s",sut_reg.st_dpt);
                                gotoxy(70,14);
                                printf("City [MEX 18W]: %s",sut_reg.st_city);
                                gotoxy(70,15);
                                printf("Admission year [MAX 9W]: %s",sut_reg.st_admi_yer);
                                gotoxy(70,16);
                                printf("Student number [MAX 10N]: 0%lu",sut_reg.s_number);
                        }
                    }
                    fclose(sutds);

                int gt_val;
        erd:
                gt_val=0;
                gotoxy(70,23);
                printf("Please type [ 0 ] Then Back:  ");
                scanf("%d",&gt_val);
                fflush(stdin);

                if(gt_val==0){
                    system("cls");
                    goto addmins;
                }
                else{
                    goto erd;
                }

     }

     /* Employ account erg *****************************************8 */

     if(get_v==2){
        system("cls");


                FILE *tc_rg;
                int g_v;
                unsigned long int emplc;


                i=4;
                gotoxy(8,1);
                draw(100);
                gotoxy(8,2);
                draw_two(100);
                gotoxy(8,3);
                draw(100);

                while(i<25){
                    gotoxy(8,i);
                    printf("%c",219);
                    printf("%c",177);
                    printf("%c",219);
                    draw_sp(96);
                    printf("%c",219);

                    i++;
                }
                i=4;
                while(i<25){
                    gotoxy(65,i);
                    printf("%c",177);
                    printf("%c",219);

                    i++;
                }
                i=66;
                while(i<108){
                    gotoxy(i,4);
                    printf("%c",254);
                    gotoxy(i,24);
                    printf("%c",254);
                    i++;
                }
                gotoxy(8,25);
                draw(100);
                gotoxy(8,26);
                draw_two(100);
                gotoxy(33,26);
                printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
                gotoxy(8,27);
                draw(100);

            // ---------------->>

                gotoxy(75,1);
                time_t mytime;
                mytime=time(NULL);
                printf(ctime(&mytime));
            //----------------->>



                gotoxy(25,2);
                printf(" EMPOLY REGISTRATION ");

                tc_rg=fopen("teacher_info.dat","a");

                gotoxy(15,5);
                printf("Employ id: ");
                gotoxy(15,7);
                printf("Employ name: ");
                gotoxy(15,9);
                printf("Gender: ");
                gotoxy(15,11);
                printf("Employ post: ");
                gotoxy(15,13);
                printf("Education: ");
                gotoxy(15,15);
                printf("Joining Department: ");
                gotoxy(15,17);
                printf("City: ");
                gotoxy(15,19);
                printf("Mobile number: 0");


                /// -------------------------------------
                        /* gets value from user */

                        gotoxy(40,5);
                        scanf("%lu",&tuc_reg.tec_id);
                        emplc=tuc_reg.tec_id;
                        fflush(stdin);
                        gotoxy(40,7);
                        gets(tuc_reg.tec_name);
                        gotoxy(40,9);
                        scanf("%c",&tuc_reg.gndr);
                        fflush(stdin);
                        gotoxy(40,11);
                        gets(tuc_reg.te_post);
                        gotoxy(40,13);
                        gets(tuc_reg.education);
                        gotoxy(40,15);
                        gets(tuc_reg.te_dpt);
                        gotoxy(40,17);
                        gets(tuc_reg.te_city);
                        gotoxy(40,19);
                        scanf("%lu",&tuc_reg.te_number);
                        fflush(stdin);


                fwrite(&tuc_reg,sizeof(tuc_reg),1,tc_rg);
                fflush(tc_rg);
                fclose(tc_rg);

                /* read from other */

                tc_rg=fopen("teacher_info.dat","r");

                while(fread(&tuc_reg,sizeof(tuc_reg),1,tc_rg) != 0){
                    if(tuc_reg.tec_id==emplc){

                        gotoxy(85,3);
                        printf(" SAVE ");
                        gotoxy(70,7);
                        printf("Employ id: %lu",tuc_reg.tec_id);
                        gotoxy(70,8);
                        printf("Employ name: %s",tuc_reg.tec_name);
                        gotoxy(70,9);
                        printf("Gender: %c",tuc_reg.gndr);
                        gotoxy(70,10);
                        printf("Employ post: %s",tuc_reg.te_post);
                        gotoxy(70,11);
                        printf("Education: %s",tuc_reg.education);
                        gotoxy(70,12);
                        printf("Joining Department: %s",tuc_reg.te_dpt);
                        gotoxy(70,13);
                        printf("City: %s",tuc_reg.te_city);
                        gotoxy(70,14);
                        printf("Mobile number: %lu",tuc_reg.te_number);

                    }
                }
                fclose(tc_rg);



                int gt_val;
        erdt:
                gt_val=0;
                gotoxy(70,23);
                printf("Please type [ 0 ] Than Back:  ");
                scanf("%d",&gt_val);
                fflush(stdin);

                if(gt_val==0){
                    system("cls");
                    goto addmins;
                }
                else{
                    goto erdt;
                }

     }


     if(get_v==0){
        system("cls");
        return 12;
     }

     else{
        system("cls");
        goto addmins;
    }

    //return 0;
}



/*  This function Use for show Student and teacher information  */

int student_and_teacher_menu(){

    int i,get_v;

s_and_t_in:

    i=4;
    gotoxy(8,1);
    draw(100);
    gotoxy(8,2);
    draw_two(100);
    gotoxy(8,3);
    draw(100);

    while(i<25){
        gotoxy(8,i);
        printf("%c",219);
        printf("%c",177);
        printf("%c",219);
        draw_sp(96);
        printf("%c",219);

        i++;
    }
    i=4;
    while(i<25){
        gotoxy(65,i);
        printf("%c",177);
        printf("%c",219);

        i++;
    }
    i=66;
    while(i<108){
        gotoxy(i,4);
        printf("%c",254);
        gotoxy(i,24);
        printf("%c",254);
        i++;
    }
    gotoxy(8,25);
    draw(100);
    gotoxy(8,26);
    draw_two(100);
    gotoxy(33,26);
    printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
    gotoxy(8,27);
    draw(100);

// ---------------->>

    gotoxy(75,1);
    time_t mytime;
    mytime=time(NULL);
    printf(ctime(&mytime));
//----------------->>


    gotoxy(30,2);
    printf(" MAIN MENU ");
    gotoxy(15,5);
    printf("%c%c%c",213,205,205);
    gotoxy(15,6);
    printf("%c 1.Admission",195);
    gotoxy(15,7);
    printf("%c%c%c",213,205,205);
    gotoxy(15,8);
    printf("%c <<< 2.Student & Teacher info >>>",195);
    gotoxy(15,9);
    printf("%c%c%c",213,205,205);
    gotoxy(15,10);
    printf("%c 3.Finance",195);
    gotoxy(15,11);
    printf("%c%c%c",213,205,205);
    gotoxy(15,12);
    printf("%c 4.Menage User",195);
    gotoxy(15,13);
    printf("%c%c%c",213,205,205);
    gotoxy(15,14);
    printf("%c 5.Time table",195);
    gotoxy(15,15);
    printf("%c%c%c",213,205,205);
    gotoxy(15,16);
    printf("%c 6.Result student",195);
    gotoxy(15,17);
    printf("%c%c%c",213,205,205);
    gotoxy(15,18);
    printf("%c 7.Old student & teacher",195);
    gotoxy(15,19);
    printf("%c%c%c",213,205,205);
    gotoxy(15,20);
    printf("%c",179);
    gotoxy(15,21);
    printf("%c",179);
    gotoxy(15,22);
    printf("%c",179);
    gotoxy(15,23);
    printf("%c 0.Close apps",195);

   /// ====>>>
    gotoxy(75,3);
    printf(" STUDENT & TEACHER INFO ");
    gotoxy(70,8);
    printf("=> 1.Search Student Information");
    gotoxy(70,10);
    printf("=> 2.Search Employ Information");
    gotoxy(70,12);
    printf("=> 3.View All Student Information");
    gotoxy(70,14);
    printf("=> 4.View All Employ Information");
    gotoxy(70,16);
    printf("=> 0.BACK");


    get_v=0;
    gotoxy(70,23);
    printf("Please type selected number:  ");
    scanf("%d",&get_v);
    fflush(stdin);


/*  If press 1 Then show Search student information function    */

     if(get_v==1){
        system("cls");

        FILE *espt_ql;
        unsigned long int gt_st_id;


            i=4;
            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>



            espt_ql=fopen("student_info.dat","r");

            gotoxy(78,3);
            printf(" SEARCH INFORMATION ");
            gotoxy(70,13);
            printf("Type Student ID: ");
            scanf("%lu",&gt_st_id);

            while(fread(&sut_reg,sizeof(sut_reg),1,espt_ql) != 0){

                    if(sut_reg.st_id==gt_st_id){

                    gotoxy(25,2);
                    printf(" STUDENT INFORMATION ");
                    gotoxy(15,5);
                    printf("Student id: %lu",sut_reg.st_id);
                    gotoxy(15,7);
                    printf("Student name : %s",sut_reg.name);
                    gotoxy(15,9);
                    printf("Father name : %s",sut_reg.f_name);
                    gotoxy(15,11);
                    printf("Guidance name : %s",sut_reg.g_name);
                    gotoxy(15,13);
                    printf("Guidance number : 0%lu",sut_reg.g_number);
                    gotoxy(15,15);
                    printf("Gender : %c",sut_reg.gender);
                    gotoxy(15,17);
                    printf("Department : %s",sut_reg.st_dpt);
                    gotoxy(15,19);
                    printf("City : %s",sut_reg.st_city);
                    gotoxy(15,21);
                    printf("Admission year : %s",sut_reg.st_admi_yer);
                    gotoxy(15,23);
                    printf("Student number : 0%lu",sut_reg.s_number);

                    }
            }
            fclose(espt_ql);



                int gt_val;
        erds:
                gt_val=0;
                gotoxy(70,23);
                printf("Please type [ 0 ] Than Back:  ");
                scanf("%d",&gt_val);
                fflush(stdin);

                if(gt_val==0){
                    system("cls");
                    goto s_and_t_in;
                }
                else{
                    goto erds;
                }

     }


     /* If press 2 Then go Search Employ Information function  */

     if(get_v==2){
        system("cls");


        FILE *empt_ql;
        unsigned long int gt_em_id;


            i=4;
            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>



            empt_ql=fopen("teacher_info.dat","r");

            gotoxy(78,3);
            printf(" SEARCH INFORMATION ");
            gotoxy(70,13);
            printf("Type Employ ID: ");
            scanf("%lu",&gt_em_id);

            while(fread(&tuc_reg,sizeof(tuc_reg),1,empt_ql) != 0){

                    if(tuc_reg.tec_id==gt_em_id){

                    gotoxy(25,2);
                    printf(" STUDENT INFORMATION ");
                    gotoxy(15,5);
                    printf("Employ id: %lu",tuc_reg.tec_id);
                    gotoxy(15,7);
                    printf("Employ name : %s",tuc_reg.tec_name);
                    gotoxy(15,9);
                    printf("Gender : %c",tuc_reg.gndr);
                    gotoxy(15,11);
                    printf("Employ post: %s",tuc_reg.te_post);
                    gotoxy(15,13);
                    printf("Education : %s",tuc_reg.education);
                    gotoxy(15,15);
                    printf("Joining Department : %s",tuc_reg.te_dpt);
                    gotoxy(15,17);
                    printf("City : %s",tuc_reg.te_city);
                    gotoxy(15,19);
                    printf("Mobile number : %lu",tuc_reg.te_number);

                    }
            }
            fclose(empt_ql);



                int gt_val;
        erdst:
                gt_val=0;
                gotoxy(15,23);
                printf("Please type [ 0 ] Than Back:  ");
                scanf("%d",&gt_val);
                fflush(stdin);

                if(gt_val==0){
                    system("cls");
                    goto s_and_t_in;
                }
                else{
                    goto erdst;
                }




     }


     /* If press 3 Then show View Student all information function */

     if(get_v==3){
        system("cls");


        FILE *view_pt;
        int ksp;

        // ---------------->>

            gotoxy(60,2);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));

        //----------------->>

            printf("\n\t\t\t\tINSTITUTE OF COMPUTER SINCE AND TECHNOLOGY");
            printf("\n\n\t\t\t\t\tVIEW ALL STUDENT INFORMATION");
            printf("\n\t\t\t\t------------------------------------------\n\n");

            view_pt=fopen("student_info.dat","r");


            while(fread(&sut_reg,sizeof(sut_reg),1,view_pt) != 0){

                                printf("\n\n\t\t|->Student id: %lu",sut_reg.st_id);
                                printf("\n\n\t\t|->Student name [MAX 28W]: %s",sut_reg.name);
                                printf("\n\n\t\t|->Father name [MAX 28W]: %s",sut_reg.f_name);
                                printf("\n\n\t\t|->Guidance name [MAX 28W]: %s",sut_reg.g_name);
                                printf("\n\n\t\t|->Guidance number [MAX 10N]: 0%lu",sut_reg.g_number);
                                printf("\n\n\t\t|->Gender [M || F]: %c",sut_reg.gender);
                                printf("\n\n\t\t|->Department [MAX 15W]: %s",sut_reg.st_dpt);
                                printf("\n\n\t\t|->City [MEX 18W]: %s",sut_reg.st_city);
                                printf("\n\n\t\t|->Admission year [MAX 9W]: %s",sut_reg.st_admi_yer);
                                printf("\n\n\t\t|->Student number [MAX 10N]: 0%lu",sut_reg.s_number);
                                printf("\n\n\t\t| ------------------------------------------------------- ");
                                printf("\n\n\n\t\t");
                    }
                    fclose(view_pt);


asv_reg:

            ksp=0;
            printf("\n\n\t\t|--- BACK Than Type [ 0 ] : ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto s_and_t_in;
            }
            else{
                goto asv_reg;
            }



     }


     /* If press 4 Then show view teacher all information function  */

     if(get_v==4){
        system("cls");


        FILE *view_st;
        int ksp;

        // ---------------->>

            gotoxy(60,2);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));

        //----------------->>

            printf("\n\t\t\t\tINSTITUTE OF COMPUTER SINCE AND TECHNOLOGY");
            printf("\n\n\t\t\t\t\tVIEW ALL TEACHER INFORMATION");
            printf("\n\t\t\t\t------------------------------------------\n\n");


            view_st=fopen("teacher_info.dat","r");


            while(fread(&tuc_reg,sizeof(tuc_reg),1,view_st) != 0){


                    printf("\n\n\t\t|->Employ id: %lu",tuc_reg.tec_id);
                    printf("\n\n\t\t|->Employ name : %s",tuc_reg.tec_name);
                    printf("\n\n\t\t|->Gender : %c",tuc_reg.gndr);
                    printf("\n\n\t\t|->Employ post: %s",tuc_reg.te_post);
                    printf("\n\n\t\t|->Education : %s",tuc_reg.education);
                    printf("\n\n\t\t|->Joining Department : %s",tuc_reg.te_dpt);
                    printf("\n\n\t\t|->City : %s",tuc_reg.te_city);
                    printf("\n\n\t\t|->Mobile number : %lu",tuc_reg.te_number);
                    printf("\n\n\t\t| ------------------------------------------------------- ");
                    printf("\n\n\n\t\t");

                    }
                    fclose(view_st);


    asa_reg:

            ksp=0;
            printf("\n\n\t\t|--- BACK Than Type [ 0 ] : ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto s_and_t_in;
            }
            else{
                goto asa_reg;
            }


     }

     /* If press 0 Then go Back */

     if(get_v==0){
        system("cls");
        return 0005;

     }
     else{
        system("cls");
        goto s_and_t_in;
     }

    return 0;
}




/*  Into Account Main menu, show in console and gets input  */

int account_main_mnu(){


    int i,gt_val;

ac_m_m:

    i=4;
    gotoxy(8,1);
    draw(100);
    gotoxy(8,2);
    draw_two(100);
    gotoxy(8,3);
    draw(100);

    while(i<25){
        gotoxy(8,i);
        printf("%c",219);
        printf("%c",177);
        printf("%c",219);
        draw_sp(96);
        printf("%c",219);

        i++;
    }
    i=4;
    while(i<25){
        gotoxy(65,i);
        printf("%c",177);
        printf("%c",219);

        i++;
    }
    i=66;
    while(i<108){
        gotoxy(i,4);
        printf("%c",254);
        gotoxy(i,24);
        printf("%c",254);
        i++;
    }
    gotoxy(8,25);
    draw(100);
    gotoxy(8,26);
    draw_two(100);
    gotoxy(33,26);
    printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
    gotoxy(8,27);
    draw(100);

// ---------------->>

    gotoxy(75,1);
    time_t mytime;
    mytime=time(NULL);
    printf(ctime(&mytime));
//----------------->>


    gotoxy(30,2);
    printf(" MAIN MENU ");
    gotoxy(15,5);
    printf("%c%c%c",213,205,205);
    gotoxy(15,6);
    printf("%c 1.Admission",195);
    gotoxy(15,7);
    printf("%c%c%c",213,205,205);
    gotoxy(15,8);
    printf("%c 2.Student & Teacher info",195);
    gotoxy(15,9);
    printf("%c%c%c",213,205,205);
    gotoxy(15,10);
    printf("%c <<< 3.Accounting >>>",195);
    gotoxy(15,11);
    printf("%c%c%c",213,205,205);
    gotoxy(15,12);
    printf("%c 4.Menage User",195);
    gotoxy(15,13);
    printf("%c%c%c",213,205,205);
    gotoxy(15,14);
    printf("%c 5.Time table",195);
    gotoxy(15,15);
    printf("%c%c%c",213,205,205);
    gotoxy(15,16);
    printf("%c 6.Result student",195);
    gotoxy(15,17);
    printf("%c%c%c",213,205,205);
    gotoxy(15,18);
    printf("%c 7.Old student & teacher",195);
    gotoxy(15,19);
    printf("%c%c%c",213,205,205);
    gotoxy(15,20);
    printf("%c",179);
    gotoxy(15,21);
    printf("%c",179);
    gotoxy(15,22);
    printf("%c",179);
    gotoxy(15,23);
    printf("%c 0.Close apps",195);

   /// ====>>>
    gotoxy(82,3);
    printf(" ACCOUNTING ");
    gotoxy(70,8);
    printf("=> 1.Student Account");
    gotoxy(70,10);
    printf("=> 2.Employ Account");
    gotoxy(70,12);
    printf("=> 3.Income");
    gotoxy(70,14);
    printf("=> 4.Expenses");


    gt_val=0;
    gotoxy(70,23);
    printf("Please type selected number:  ");
    scanf("%d",&gt_val);
    fflush(stdin);


    /*  If press 1 Then go Student Account */
     if(gt_val==1){
        system("cls");
        return 915;
     }

     /* If press 2 Then go Employ account */
     if(gt_val==2){
        system("cls");
        return 916;
     }

     /* If press 3 Then go Income menu  */
     if(gt_val==3){
        system("cls");
        return 917;
     }

     /* If press 4 Then go Expenses menu    */
     if(gt_val==4){
        system("cls");
        return 918;
     }

     /* if press 0 then go Back */
     if(gt_val==0){
        system("cls");
        return 919;
     }
     else{
        system("cls");
        goto ac_m_m;
     }
     return 0;
}




/*  into student account and gets SEMESTER */

int student_account(){


    int i,ok;

std_ac:

    i=4;
    gotoxy(8,1);
    draw(100);
    gotoxy(8,2);
    draw_two(100);
    gotoxy(8,3);
    draw(100);

    while(i<25){
        gotoxy(8,i);
        printf("%c",219);
        printf("%c",177);
        printf("%c",219);
        draw_sp(96);
        printf("%c",219);

        i++;
    }
    i=4;
    while(i<25){
        gotoxy(65,i);
        printf("%c",177);
        printf("%c",219);

        i++;
    }
    i=66;
    while(i<108){
        gotoxy(i,4);
        printf("%c",254);
        gotoxy(i,24);
        printf("%c",254);
        i++;
    }
    gotoxy(8,25);
    draw(100);
    gotoxy(8,26);
    draw_two(100);
    gotoxy(33,26);
    printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
    gotoxy(8,27);
    draw(100);

// ---------------->>

    gotoxy(75,1);
    time_t mytime;
    mytime=time(NULL);
    printf(ctime(&mytime));
//----------------->>

    gotoxy(30,2);
    printf(" ACCOUNTING ");
    gotoxy(15,5);
    printf("%c%c%c",213,205,205);
    gotoxy(15,6);
    printf("%c <<< 1.Student Account >>>",195);
    gotoxy(15,7);
    printf("%c%c%c",213,205,205);
    gotoxy(15,8);
    printf("%c 2.Employ Account",195);
    gotoxy(15,9);
    printf("%c%c%c",213,205,205);
    gotoxy(15,10);
    printf("%c 3.Income",195);
    gotoxy(15,11);
    printf("%c%c%c",213,205,205);
    gotoxy(15,12);
    printf("%c 4.Expenses",195);
    gotoxy(15,13);
    printf("%c%c%c",213,205,205);
    gotoxy(15,14);
    printf("%c",179);
    gotoxy(15,15);
    printf("%c",179);
    gotoxy(15,16);
    printf("%c",179);
    gotoxy(15,17);
    printf("%c 0.BACK",195);

   /// ====>>>
    gotoxy(78,3);
    printf(" STUDENT ACCOUNT ");
    gotoxy(70,8);
    printf("=> 1.1st Semester");
    gotoxy(70,9);
    printf("=> 2.2nd Semester");
    gotoxy(70,10);
    printf("=> 3.3rd Semester");
    gotoxy(70,11);
    printf("=> 4.4th Semester");
    gotoxy(70,12);
    printf("=> 5.5th Semester");
    gotoxy(70,13);
    printf("=> 6.6th Semester");
    gotoxy(70,14);
    printf("=> 7.7th Semester");
    gotoxy(70,15);
    printf("=> 8.8th Semester");
    gotoxy(70,17);
    printf("=> 0.BACK");

    /// =====>>

    ok=0;
    gotoxy(70,23);
    printf("Please Type Selected Number:  ");
    scanf("%d",&ok);
    fflush(stdin);

    /* if 1 then go 1st semester    */
     if(ok==1){
         fflush(stdin);
         system("cls");
         return 301;
     }

     /* if 2 then go 2nd semester   */
     if(ok==2){
         fflush(stdin);
         system("cls");
         return 302;
     }

     /* if 3 then go 3rd semester   */
     if(ok==3){
         fflush(stdin);
         system("cls");
         return 303;
     }

     /* if 4 then go 4th semester   */
     if(ok==4){
         fflush(stdin);
         system("cls");
         return 304;
     }

     /* if 5 then go 5th semester   */
     if(ok==5){
         fflush(stdin);
         system("cls");
         return 305;
     }

     /* if 6 then go 6th semester   */
     if(ok==6){
         fflush(stdin);
         system("cls");
         return 306;
     }

     /* if 7 then go 7th semester   */
     if(ok==7){
         fflush(stdin);
         system("cls");
         return 307;
     }

     /* if 8 then go 8th semester   */
     if(ok==8){
         fflush(stdin);
         system("cls");
        return 308;
     }

     if(ok==0){
        system("cls");
        return 100;
     }
     else{
        system("cls");
        goto std_ac;
     }

    return 0;
}



/* Into 1st semester, and gets input    */

int fast_sems(){


    int i,ke;

fast_pt:

    i=4;
    gotoxy(8,1);
    draw(100);
    gotoxy(8,2);
    draw_two(100);
    gotoxy(8,3);
    draw(100);

    while(i<25){
        gotoxy(8,i);
        printf("%c",219);
        printf("%c",177);
        printf("%c",219);
        draw_sp(96);
        printf("%c",219);

        i++;
    }
    i=4;
    while(i<25){
        gotoxy(65,i);
        printf("%c",177);
        printf("%c",219);

        i++;
    }
    i=66;
    while(i<108){
        gotoxy(i,4);
        printf("%c",254);
        gotoxy(i,24);
        printf("%c",254);
        i++;
    }
    gotoxy(8,25);
    draw(100);
    gotoxy(8,26);
    draw_two(100);
    gotoxy(33,26);
    printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
    gotoxy(8,27);
    draw(100);

// ---------------->>

    gotoxy(75,1);
    time_t mytime;
    mytime=time(NULL);
    printf(ctime(&mytime));
//----------------->>

    gotoxy(30,2);
    printf(" STUDENT ACCOUNT ");
    gotoxy(15,5);
    printf("%c%c%c",213,205,205);
    gotoxy(15,6);
    printf("%c <<< 1.1st Semester >>>",195);
    gotoxy(15,7);
    printf("%c%c%c",213,205,205);
    gotoxy(15,8);
    printf("%c 2.2nd Semester",195);
    gotoxy(15,9);
    printf("%c%c%c",213,205,205);
    gotoxy(15,10);
    printf("%c 3.3rd Semester",195);
    gotoxy(15,11);
    printf("%c%c%c",213,205,205);
    gotoxy(15,12);
    printf("%c 4.4th Semester",195);
    gotoxy(15,13);
    printf("%c%c%c",213,205,205);
    gotoxy(15,14);
    printf("%c 5.5th Semester",195);
    gotoxy(15,15);
    printf("%c%c%c",213,205,205);
    gotoxy(15,16);
    printf("%c 6.6th Semester",195);
    gotoxy(15,17);
    printf("%c%c%c",213,205,205);
    gotoxy(15,18);
    printf("%c 7.7th Semester",195);
    gotoxy(15,19);
    printf("%c%c%c",213,205,205);
    gotoxy(15,20);
    printf("%c 8.8th Semester",195);
    gotoxy(15,21);
    printf("%c%c%c",213,205,205);
    gotoxy(15,22);
    printf("%c",179);
    gotoxy(15,23);
    printf("%c 0.BACK",195);

   /// ====>>>
    gotoxy(80,3);
    printf(" 1ST SEMESTER ");
    gotoxy(70,8);
    printf("=> 1.Student Account Registration");
    gotoxy(70,9);
    printf("=> 2.View Student Account");
    gotoxy(70,10);
    printf("=> 3.Payment");
    gotoxy(70,11);
    printf("=> 4.View Student Dew");
    gotoxy(70,12);
    printf("=> 5.Search Account");
    gotoxy(70,14);
    printf("=> 0.BACK");

    /// =====>>

    ke=0;
    gotoxy(70,23);
    printf("Please Type Selected Number:  ");
    scanf("%d",&ke);
    fflush(stdin);

    /* If 1 then go Student account registration */

     if(ke==1){

        FILE *acount;
        int i,ksp;
        unsigned long int st_roll;
        system("cls");


            i=4;
            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>
        /* Show current Time in console */

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>


            gotoxy(28,2);
            printf(" ACCOUNT REGISTITON ");
            gotoxy(15,7);
            printf("Type roll number: ");
            gotoxy(15,9);
            printf("Name: ");
            gotoxy(15,11);
            printf("Semester: ");
            gotoxy(15,13);
            printf("Semester fee: ");
            gotoxy(15,15);
            printf("Other fee cause: ");
            gotoxy(15,17);
            printf("Other fee: ");
            gotoxy(15,19);
            printf("Total: ");



            gotoxy(40,7);
            scanf("%lu",&fee_col.roll);
            st_roll=fee_col.roll;
            fflush(stdin);
            gotoxy(40,9);
            gets(fee_col.name);
            gotoxy(40,11);
            gets(fee_col.semester);
            gotoxy(40,13);
            scanf("%f",&fee_col.sem_fee);
            fflush(stdin);
            gotoxy(40,15);
            gets(fee_col.other_cos);
            gotoxy(40,17);
            scanf("%f",&fee_col.other_fee);
            fflush(stdin);
            gotoxy(40,19);
            fee_col.total=fee_col.sem_fee+fee_col.other_fee;
            printf("%f",fee_col.total);

            acount=fopen("fast_st_account.dat","a");    // open fast_st_account file read and write mode

            fwrite(&fee_col,sizeof(fee_col),1,acount);  // Write all data in fast_st_account file, use fwrite function
            fflush(acount);
            fclose(acount);

            /* Read form file */

            acount=fopen("fast_st_account.dat","r");    // open fast_st_account file read only mode

            while(fread(&fee_col,sizeof(fee_col),1,acount) != 0){   // read all data in fast_st_account file, use fread function
                if(st_roll==fee_col.roll){

                    gotoxy(85,3);
                    printf(" SAVE ");
                    gotoxy(70,6);
                    printf("Roll number:  %lu",fee_col.roll);
                    gotoxy(70,7);
                    printf("Name:  %s",fee_col.name);
                    gotoxy(70,8);
                    printf("Semester:  %s",fee_col.semester);
                    gotoxy(70,9);
                    printf("Semester fee:  %f",fee_col.sem_fee);
                    gotoxy(70,10);
                    printf("Other expenc [text only]:  %s",fee_col.other_cos);
                    gotoxy(70,11);
                    printf("Other fee [amount]:  %f",fee_col.other_fee);
                    gotoxy(70,12);
                    printf("Total: %f",fee_col.total);
                }
            }
            fclose(acount); // close file

ac_reg:

            ksp=0;
            gotoxy(70,23);
            printf("BACK Than Type [ 0 ] :  ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto fast_pt;
            }
            else{
                goto ac_reg;
            }

     }



    /*  If 2 then go view student account function */

     if(ke==2){
     system("cls");

     FILE *acount_re;
     int ksp;

        // ---------------->>
        /* show current time in console */

            gotoxy(60,2);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));

        //----------------->>

            printf("\n\t\t\t\tINSTITUTE OF COMPUTER SINCE AND TECHNOLOGY");
            printf("\n\n\t\t\t\tVIEW SYUDENT ACCOUNT INFORMATION");
            printf("\n\t\t\t\t------------------------------------------\n\n");

            acount_re=fopen("fast_st_account.dat","r");     // open fast_st_account file read only mode


            while(fread(&fee_col,sizeof(fee_col),1,acount_re) != 0){    // read from fast_st_account file

                    printf("\n\n\t\t|-> Roll number:  %lu",fee_col.roll);
                    printf("\n\n\t\t|-> Name:  %s",fee_col.name);
                    printf("\n\n\t\t|-> Semester:  %s",fee_col.semester);
                    printf("\n\n\t\t|-> Semester fee:  %f",fee_col.sem_fee);
                    printf("\n\n\t\t|-> Other expenc [text only]:  %s",fee_col.other_cos);
                    printf("\n\n\t\t|-> Other fee [amount]:  %f",fee_col.other_fee);
                    printf("\n\n\t\t|-> Total: %f",fee_col.total);
                    printf("\n\n\t\t| ------------------------------------------------------- ");
                    printf("\n\n\n\t\t");
            }
            fclose(acount_re);  // close file


as_reg:

            ksp=0;
            printf("\n\n\t\t|--- BACK Than Type [ 0 ] : ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto fast_pt;
            }
            else{
                goto as_reg;
            }

     }



     /* If 3 then go payment page, and gets input */

     if(ke==3){
     system("cls");

            int i, o, eg;

            gotoxy(38,3);
            printf("INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY");

            gotoxy(28,5);
            for(i=0;i<60;i++){
                printf("%c",177);
            }
            for(i=0;i<8;i++){
                    printf("\n\t\t\t    %c",177);
                for(o=0;o<58;o++){
                    printf(" ");
                }
            printf("%c",177);
            }
            gotoxy(28,14);
            for(i=0;i<60;i++){
                printf("%c",177);
            }

            gotoxy(35,8);
            printf("%c If You Want Add New Payment Then Press [1]",219);
            gotoxy(35,10);
            printf("%c If You Want Edit Any Payment Then Press [2]",219);
            gotoxy(48,12);
            printf("Select Any: ");
            scanf("%d",&eg);
            fflush(stdin);


    /*   add new payment ********************************* */

        if(eg==1){
        system("cls");

            FILE *opn,*pray;
            int i=4;
            unsigned long int get_rl=0;

            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>


            gotoxy(28,2);
            printf(" ADD PAYMENT ");
            gotoxy(15,7);
            printf("Type roll number: ");
            gotoxy(15,9);
            printf("Name: ");
            gotoxy(15,11);
            printf("Date: ");
            gotoxy(15,13);
            printf("Total: ");
            gotoxy(15,15);
            printf("Now pay: ");
            gotoxy(15,17);
            printf("Dew: ");



                    opn=fopen("fast_st_account.dat","r");
                    pray=fopen("fast_pr.dat","a");

                    gotoxy(45,7);
                    scanf("%lu",&rec_fee.roll);
                    get_rl=rec_fee.roll;
                    fflush(stdin);

                    while(fread(&fee_col,sizeof(fee_col),1,opn) != 0){

                    if(rec_fee.roll==fee_col.roll ){


                    gotoxy(45,9);
                    strcpy(rec_fee.name,fee_col.name);
                    printf("%s",rec_fee.name);

                    gotoxy(45,11);
                    gets(rec_fee.date);
                    gotoxy(45,13);
                    printf("%f",fee_col.total);
                    fflush(stdin);
                    gotoxy(45,15);
                    scanf("%f",&rec_fee.recive);
                    fflush(stdin);

                    rec_fee.arrears=fee_col.total-rec_fee.recive;
                    gotoxy(45,17);
                    printf("%f",rec_fee.arrears);
                    fflush(stdin);
                    fclose(opn);

                        }
                    }

                    fwrite(&rec_fee,sizeof(rec_fee),1,pray);
                    fclose(pray);

                    /* view other sub menu */

                    pray=fopen("fast_pr.dat","r");

                    while(fread(&rec_fee,sizeof(rec_fee),1,pray) != 0){

                            if(get_rl==rec_fee.roll){

                                gotoxy(85,3);
                                printf(" SAVE ");
                                gotoxy(70,6);
                                printf("Roll number:  %lu",rec_fee.roll);
                                gotoxy(70,7);
                                printf("Name:  %s",rec_fee.name);
                                gotoxy(70,8);
                                printf("Date:  %s",rec_fee.date);
                                gotoxy(70,9);
                                printf("Total:  %f",rec_fee.total);
                                gotoxy(70,10);
                                printf("Now pay:  %f",rec_fee.recive);
                                gotoxy(70,11);
                                printf("Dew:  %f",rec_fee.arrears);
                            }
                    }

                    int k=0;
            fcs:
                    gotoxy(70,23);
                    printf("Type [ 0 ] Than BACK :");
                    scanf("%d",&k);
                    fflush(stdin);
                    if(k==0){
                        system("cls");
                        goto fast_pt;
                    }
                    else{
                        goto fcs;
                    }
            }





        /* Edit payment menu **************************************** */

        else if(eg==2){
            system("cls");

            FILE *prays;
            int i;
            unsigned long int ik_int=0;


            i=4;
            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>


            gotoxy(28,2);
            printf(" EDIT PAYMENT ");
            gotoxy(15,7);
            printf("Type roll number: ");
            gotoxy(15,9);
            printf("Name: ");
            gotoxy(15,11);
            printf("Date: ");
            gotoxy(15,13);
            printf("Total: ");
            gotoxy(15,15);
            printf("Now pay: ");
            gotoxy(15,17);
            printf("Dew: ");


                    prays=fopen("fast_pr.dat","r+");    // open fast_pr file in read and write mode

                    gotoxy(45,7);
                    scanf("%lu",&ik_int);
                    fflush(stdin);

                    while(fread(&rec_fee,sizeof(rec_fee),1,prays) != 0){    // read data in file fast_pr

                    if(ik_int==rec_fee.roll){

                    gotoxy(45,9);
                    printf("%s",rec_fee.name);
                    fflush(stdin);

                    gotoxy(45,11);
                    gets(rec_fee.date);
                    gotoxy(45,13);
                    printf("%f",rec_fee.arrears);
                    fflush(stdin);
                    gotoxy(45,15);
                    scanf("%f",&rec_fee.recive);
                    fflush(stdin);

                    rec_fee.arrears=rec_fee.arrears-rec_fee.recive;
                    gotoxy(45,17);
                    printf("%f",rec_fee.arrears);

                    fseek(prays,-sizeof(rec_fee),SEEK_CUR);     // this function move left, file pointer
                    fwrite(&rec_fee,sizeof(rec_fee),1,prays);   // then write data in file
                    fflush(prays);
                    fclose(prays);     // fast_pr file close
                    }
                    fflush(stdin);
                }

                prays=fopen("fast_pr.dat","r"); // open fast_pr file in read only mode


                while(fread(&rec_fee,sizeof(rec_fee),1,prays) != 0){

                            if(ik_int==rec_fee.roll){

                                gotoxy(85,3);
                                printf(" SAVE ");
                                gotoxy(70,6);
                                printf("Roll number:  %lu",rec_fee.roll);
                                gotoxy(70,7);
                                printf("Name:  %s",rec_fee.name);
                                gotoxy(70,8);
                                printf("Date:  %s",rec_fee.date);
                                gotoxy(70,9);
                                printf("Total:  %f",rec_fee.total);
                                gotoxy(70,10);
                                printf("Now pay:  %f",rec_fee.recive);
                                gotoxy(70,11);
                                printf("Dew:  %f",rec_fee.arrears);
                            }
                    }

                    int k=0;
            fcst:
                    gotoxy(70,23);
                    printf("Type [ 0 ] Than BACK : ");
                    scanf("%d",&k);
                    fflush(stdin);
                    if(k==0){
                        system("cls");
                        goto fast_pt;
                    }
                    else{
                        goto fcst;
                    }
            }

     }


     /* View payment token ****************************** */

     if(ke==4){
     system("cls");


     FILE *acount_re;
     int ksp;

        // ---------------->>

            gotoxy(60,7);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));

        //----------------->>

            printf("\n\t\t\t\tINSTITUTE OF COMPUTER SINCE AND TECHNOLOGY");
            printf("\n\n\t\t\t\tVIEW PAYMENT INFORMATION");
            printf("\n\t\t\t\t------------------------------------------\n\n");

            acount_re=fopen("fast_pr.dat","r");

            while(fread(&rec_fee,sizeof(rec_fee),1,acount_re) != 0){

                    printf("\n\n\t\t|-> Roll number:  %lu",rec_fee.roll);
                    printf("\n\n\t\t|-> Name:  %s",rec_fee.name);
                    printf("\n\n\t\t|-> Date:  %s",rec_fee.date);
                    printf("\n\n\t\t|-> Payment:  %f",rec_fee.recive);
                    printf("\n\n\t\t|-> Dew:  %f",rec_fee.arrears);
                    printf("\n\n\t\t| ------------------------------------------------------- ");
                    printf("\n\n\n\t\t");
            }
            fclose(acount_re);


asp_reg:

            ksp=0;
            printf("\n\n\t\t|--- BACK Than Type [ 0 ] : ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto fast_pt;
            }
            else{
                goto asp_reg;
            }

     }


     /* Search payment account **************** */


     if(ke==5){
     system("cls");


            FILE *ser_acc;
            unsigned long int se_roll=0;
            int i,ke;


            i=4;
            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>

                                ser_acc=fopen("fast_pr.dat","r");

                                gotoxy(78,3);
                                printf(" SEARCH ACCOUNT ");
                                gotoxy(70,13);
                                printf("Type Roll number:  ");
                                scanf("%lu",&se_roll);
                                fflush(stdin);

                                    while(fread(&rec_fee,sizeof(rec_fee),1,ser_acc) != 0){

                                    if(se_roll==rec_fee.roll){

                                            gotoxy(28,2);
                                            printf(" VIEW PAYMENT ");
                                            gotoxy(15,7);
                                            printf("Roll Number: %lu",rec_fee.roll);
                                            gotoxy(15,9);
                                            printf("Name: %s",rec_fee.name);
                                            gotoxy(15,11);
                                            printf("Date: %s",rec_fee.date);
                                            gotoxy(15,13);
                                            printf("Pay: %f",rec_fee.recive);
                                            gotoxy(15,15);
                                            printf("Dew: %f",rec_fee.arrears);

                                    }

                                }
                                fclose(ser_acc);
            int ksp;
    ass_reg:

            ksp=0;

            gotoxy(15,23);
            printf("BACK Than Type [ 0 ] : ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto fast_pt;
            }
            else{
                goto ass_reg;
            }

     }

     if(ke==0){
        system("cls");
       return 500;
     }
     else{
        system("cls");
        goto fast_pt;
     }

    return 0;
}



/*  into second semester, gets input    */


int sec_sems(){


    int i,ke;

sec_pt:

    i=4;
    gotoxy(8,1);
    draw(100);
    gotoxy(8,2);
    draw_two(100);
    gotoxy(8,3);
    draw(100);

    while(i<25){
        gotoxy(8,i);
        printf("%c",219);
        printf("%c",177);
        printf("%c",219);
        draw_sp(96);
        printf("%c",219);

        i++;
    }
    i=4;
    while(i<25){
        gotoxy(65,i);
        printf("%c",177);
        printf("%c",219);

        i++;
    }
    i=66;
    while(i<108){
        gotoxy(i,4);
        printf("%c",254);
        gotoxy(i,24);
        printf("%c",254);
        i++;
    }
    gotoxy(8,25);
    draw(100);
    gotoxy(8,26);
    draw_two(100);
    gotoxy(33,26);
    printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
    gotoxy(8,27);
    draw(100);

// ---------------->>

    gotoxy(75,1);
    time_t mytime;
    mytime=time(NULL);
    printf(ctime(&mytime));
//----------------->>

    gotoxy(30,2);
    printf(" STUDENT ACCOUNT ");
    gotoxy(15,5);
    printf("%c%c%c",213,205,205);
    gotoxy(15,6);
    printf("%c 1.1st Semester",195);
    gotoxy(15,7);
    printf("%c%c%c",213,205,205);
    gotoxy(15,8);
    printf("%c <<< 2.2nd Semester >>>",195);
    gotoxy(15,9);
    printf("%c%c%c",213,205,205);
    gotoxy(15,10);
    printf("%c 3.3rd Semester",195);
    gotoxy(15,11);
    printf("%c%c%c",213,205,205);
    gotoxy(15,12);
    printf("%c 4.4th Semester",195);
    gotoxy(15,13);
    printf("%c%c%c",213,205,205);
    gotoxy(15,14);
    printf("%c 5.5th Semester",195);
    gotoxy(15,15);
    printf("%c%c%c",213,205,205);
    gotoxy(15,16);
    printf("%c 6.6th Semester",195);
    gotoxy(15,17);
    printf("%c%c%c",213,205,205);
    gotoxy(15,18);
    printf("%c 7.7th Semester",195);
    gotoxy(15,19);
    printf("%c%c%c",213,205,205);
    gotoxy(15,20);
    printf("%c 8.8th Semester",195);
    gotoxy(15,21);
    printf("%c%c%c",213,205,205);
    gotoxy(15,22);
    printf("%c",179);
    gotoxy(15,23);
    printf("%c 0.BACK",195);

   /// ====>>>
    gotoxy(80,3);
    printf(" 2ND SEMESTER ");
    gotoxy(70,8);
    printf("=> 1.Student Account Registration");
    gotoxy(70,9);
    printf("=> 2.View Student Account");
    gotoxy(70,10);
    printf("=> 3.Payment");
    gotoxy(70,11);
    printf("=> 4.View Student Dew");
    gotoxy(70,12);
    printf("=> 5.Search Account");
    gotoxy(70,14);
    printf("=> 0.BACK");

    /// =====>>

    ke=0;
    gotoxy(70,23);
    printf("Please Type Selected Number:  ");
    scanf("%d",&ke);
    fflush(stdin);


     /* Second semester Student account registration */

     if(ke==1){

        FILE *acount;
        int i,ksp;
        unsigned long int st_roll;
        system("cls");


            i=4;
            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>


            gotoxy(28,2);
            printf(" ACCOUNT REGISTITON ");
            gotoxy(15,7);
            printf("Type roll number: ");
            gotoxy(15,9);
            printf("Name: ");
            gotoxy(15,11);
            printf("Semester: ");
            gotoxy(15,13);
            printf("Semester fee: ");
            gotoxy(15,15);
            printf("Other fee cause: ");
            gotoxy(15,17);
            printf("Other fee: ");
            gotoxy(15,19);
            printf("Total: ");



            gotoxy(40,7);
            scanf("%lu",&fee_col.roll);
            st_roll=fee_col.roll;
            fflush(stdin);
            gotoxy(40,9);
            gets(fee_col.name);
            gotoxy(40,11);
            gets(fee_col.semester);
            gotoxy(40,13);
            scanf("%f",&fee_col.sem_fee);
            fflush(stdin);
            gotoxy(40,15);
            gets(fee_col.other_cos);
            gotoxy(40,17);
            scanf("%f",&fee_col.other_fee);
            fflush(stdin);
            gotoxy(40,19);
            fee_col.total=fee_col.sem_fee+fee_col.other_fee;
            printf("%f",fee_col.total);

            acount=fopen("two_st_account.dat","a");     // open two_st_account in read and write mode

            fwrite(&fee_col,sizeof(fee_col),1,acount);  // write data in file
            fflush(acount);
            fclose(acount);

            /* Read form file */

            acount=fopen("two_st_account.dat","r");     // open two_st_account in read mode

            while(fread(&fee_col,sizeof(fee_col),1,acount) != 0){
                if(st_roll==fee_col.roll){

                    gotoxy(85,3);
                    printf(" SAVE ");
                    gotoxy(70,6);
                    printf("Roll number:  %lu",fee_col.roll);
                    gotoxy(70,7);
                    printf("Name:  %s",fee_col.name);
                    gotoxy(70,8);
                    printf("Semester:  %s",fee_col.semester);
                    gotoxy(70,9);
                    printf("Semester fee:  %f",fee_col.sem_fee);
                    gotoxy(70,10);
                    printf("Other expenc [text only]:  %s",fee_col.other_cos);
                    gotoxy(70,11);
                    printf("Other fee [amount]:  %f",fee_col.other_fee);
                    gotoxy(70,12);
                    printf("Total: %f",fee_col.total);
                }
            }
            fclose(acount);     // close two_st_account file

acsc_reg:

            ksp=0;
            gotoxy(70,23);
            printf("BACK Than Type [ 0 ] :  ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto sec_pt;
            }
            else{
                goto acsc_reg;
            }

     }



    /* view student account     ============== */

     if(ke==2){
     system("cls");

     FILE *acount_re;
     int ksp;

        // ---------------->>

            gotoxy(60,7);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));

        //----------------->>

            printf("\n\t\t\t\tINSTITUTE OF COMPUTER SINCE AND TECHNOLOGY");
            printf("\n\n\t\t\t\tVIEW STUDENT ACCOUNT INFORMATION");
            printf("\n\t\t\t\t------------------------------------------\n\n");

            acount_re=fopen("two_st_account.dat","r");


            while(fread(&fee_col,sizeof(fee_col),1,acount_re) != 0){

                    printf("\n\n\t\t|-> Roll number:  %lu",fee_col.roll);
                    printf("\n\n\t\t|-> Name:  %s",fee_col.name);
                    printf("\n\n\t\t|-> Semester:  %s",fee_col.semester);
                    printf("\n\n\t\t|-> Semester fee:  %f",fee_col.sem_fee);
                    printf("\n\n\t\t|-> Other expenc [text only]:  %s",fee_col.other_cos);
                    printf("\n\n\t\t|-> Other fee [amount]:  %f",fee_col.other_fee);
                    printf("\n\n\t\t|-> Total: %f",fee_col.total);
                    printf("\n\n\t\t| ------------------------------------------------------- ");
                    printf("\n\n\n\t\t");
            }
            fclose(acount_re);


asps_reg:

            ksp=0;
            printf("\n\n\t\t|--- BACK Than Type [ 0 ] : ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto sec_pt;
            }
            else{
                goto asps_reg;
            }

     }



     /* into payment page =================== */

     if(ke==3){
     system("cls");

            int i, o, eg;

            gotoxy(38,3);
            printf("INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY");

            gotoxy(28,5);
            for(i=0;i<60;i++){
                printf("%c",177);
            }
            for(i=0;i<8;i++){
                    printf("\n\t\t\t    %c",177);
                for(o=0;o<58;o++){
                    printf(" ");
                }
            printf("%c",177);
            }
            gotoxy(28,14);
            for(i=0;i<60;i++){
                printf("%c",177);
            }

            gotoxy(35,8);
            printf("%c If You Want Add New Payment Then Press [1]",219);
            gotoxy(35,10);
            printf("%c If You Want Edit Any Payment Then Press [2]",219);
            gotoxy(48,12);
            printf("Select Any: ");
            scanf("%d",&eg);
            fflush(stdin);


    /*   add new payment ********************************* */

        if(eg==1){
        system("cls");

            FILE *opn,*pray;
            int i=4;
            unsigned long int get_rl=0;

            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>


            gotoxy(28,2);
            printf(" ADD PAYMENT ");
            gotoxy(15,7);
            printf("Type roll number: ");
            gotoxy(15,9);
            printf("Name: ");
            gotoxy(15,11);
            printf("Date: ");
            gotoxy(15,13);
            printf("Total: ");
            gotoxy(15,15);
            printf("Now pay: ");
            gotoxy(15,17);
            printf("Dew: ");



                    opn=fopen("two_st_account.dat","r");
                    pray=fopen("sec_pr.dat","a");

                    gotoxy(45,7);
                    scanf("%lu",&rec_fee.roll);
                    get_rl=rec_fee.roll;
                    fflush(stdin);

                    while(fread(&fee_col,sizeof(fee_col),1,opn) != 0){

                    if(rec_fee.roll==fee_col.roll ){


                    gotoxy(45,9);
                    strcpy(rec_fee.name,fee_col.name);
                    printf("%s",rec_fee.name);

                    gotoxy(45,11);
                    gets(rec_fee.date);
                    gotoxy(45,13);
                    printf("%f",fee_col.total);
                    fflush(stdin);
                    gotoxy(45,15);
                    scanf("%f",&rec_fee.recive);
                    fflush(stdin);

                    rec_fee.arrears=fee_col.total-rec_fee.recive;
                    gotoxy(45,17);
                    printf("%f",rec_fee.arrears);
                    fflush(stdin);
                    fclose(opn);

                        }
                    }

                    fwrite(&rec_fee,sizeof(rec_fee),1,pray);
                    fclose(pray);


                    /* view other sub menu */

                    pray=fopen("sec_pr.dat","r");

                    while(fread(&rec_fee,sizeof(rec_fee),1,pray) != 0){

                            if(get_rl==rec_fee.roll){

                                gotoxy(85,3);
                                printf(" SAVE ");
                                gotoxy(70,6);
                                printf("Roll number:  %lu",rec_fee.roll);
                                gotoxy(70,7);
                                printf("Name:  %s",rec_fee.name);
                                gotoxy(70,8);
                                printf("Date:  %s",rec_fee.date);
                                gotoxy(70,9);
                                printf("Total:  %f",rec_fee.total);
                                gotoxy(70,10);
                                printf("Now pay:  %f",rec_fee.recive);
                                gotoxy(70,11);
                                printf("Dew:  %f",rec_fee.arrears);
                            }
                    }

                    int k=0;
            fcst:
                    gotoxy(70,23);
                    printf("Type [ 0 ] Than BACK :");
                    scanf("%d",&k);
                    fflush(stdin);
                    if(k==0){
                        system("cls");
                        goto sec_pt;
                    }
                    else{
                        goto fcst;
                    }
            }





        /* Edit payment menu **************************************** */

        else if(eg==2){
            system("cls");

            FILE *prays;
            int i;
            unsigned long int ik_int=0;


            i=4;
            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>


            gotoxy(28,2);
            printf(" EDIT PAYMENT ");
            gotoxy(15,7);
            printf("Type roll number: ");
            gotoxy(15,9);
            printf("Name: ");
            gotoxy(15,11);
            printf("Date: ");
            gotoxy(15,13);
            printf("Total: ");
            gotoxy(15,15);
            printf("Now pay: ");
            gotoxy(15,17);
            printf("Dew: ");


                    prays=fopen("sec_pr.dat","r+");

                    gotoxy(45,7);
                    scanf("%lu",&ik_int);
                    fflush(stdin);

                    while(fread(&rec_fee,sizeof(rec_fee),1,prays) != 0){

                    if(ik_int==rec_fee.roll){

                    gotoxy(45,9);
                    printf("%s",rec_fee.name);
                    fflush(stdin);

                    gotoxy(45,11);
                    gets(rec_fee.date);
                    gotoxy(45,13);
                    printf("%f",rec_fee.arrears);
                    fflush(stdin);
                    gotoxy(45,15);
                    scanf("%f",&rec_fee.recive);
                    fflush(stdin);

                    rec_fee.arrears=rec_fee.arrears-rec_fee.recive;
                    gotoxy(45,17);
                    printf("%f",rec_fee.arrears);

                    fseek(prays,-sizeof(rec_fee),SEEK_CUR);
                    fwrite(&rec_fee,sizeof(rec_fee),1,prays);
                    fflush(prays);
                    fclose(prays);
                    }
                    fflush(stdin);
                }


                /* Read from other sub menu */

                prays=fopen("sec_pr.dat","r");

                while(fread(&rec_fee,sizeof(rec_fee),1,prays) != 0){

                            if(ik_int==rec_fee.roll){

                                gotoxy(85,3);
                                printf(" SAVE ");
                                gotoxy(70,6);
                                printf("Roll number:  %lu",rec_fee.roll);
                                gotoxy(70,7);
                                printf("Name:  %s",rec_fee.name);
                                gotoxy(70,8);
                                printf("Date:  %s",rec_fee.date);
                                gotoxy(70,9);
                                printf("Total:  %f",rec_fee.total);
                                gotoxy(70,10);
                                printf("Now pay:  %f",rec_fee.recive);
                                gotoxy(70,11);
                                printf("Dew:  %f",rec_fee.arrears);
                            }
                    }

                    int k=0;
            fcstus:
                    gotoxy(70,23);
                    printf("Type [ 0 ] Than BACK : ");
                    scanf("%d",&k);
                    fflush(stdin);
                    if(k==0){
                        system("cls");
                        goto sec_pt;
                    }
                    else{
                        goto fcstus;
                    }
            }

     }


     /* View payment token ****************************** */

     if(ke==4){
     system("cls");


     FILE *acount_re;
     int ksp;

        // ---------------->>

            gotoxy(60,7);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));

        //----------------->>

            printf("\n\t\t\t\tINSTITUTE OF COMPUTER SINCE AND TECHNOLOGY");
            printf("\n\n\t\t\t\tVIEW PAYMENT INFORMATION");
            printf("\n\t\t\t\t------------------------------------------\n\n");

            acount_re=fopen("sec_pr.dat","r");

            while(fread(&rec_fee,sizeof(rec_fee),1,acount_re) != 0){

                    printf("\n\n\t\t|-> Roll number:  %lu",rec_fee.roll);
                    printf("\n\n\t\t|-> Name:  %s",rec_fee.name);
                    printf("\n\n\t\t|-> Date:  %s",rec_fee.date);
                    printf("\n\n\t\t|-> Payment:  %f",rec_fee.recive);
                    printf("\n\n\t\t|-> Dew:  %f",rec_fee.arrears);
                    printf("\n\n\t\t| ------------------------------------------------------- ");
                    printf("\n\n\n\t\t");
            }
            fclose(acount_re);


asp_reg:

            ksp=0;
            printf("\n\n\t\t|--- BACK Than Type [ 0 ] : ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto sec_pt;
            }
            else{
                goto asp_reg;
            }

     }


     /* Search account ****************88 */


     if(ke==5){
     system("cls");


            FILE *ser_acc;
            unsigned long int se_roll=0;
            int i,ke;


            i=4;
            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>

                                ser_acc=fopen("sec_pr.dat","r");

                                gotoxy(78,3);
                                printf(" SEARCH ACCOUNT ");
                                gotoxy(70,13);
                                printf("Type Roll number:  ");
                                scanf("%lu",&se_roll);
                                fflush(stdin);

                                    while(fread(&rec_fee,sizeof(rec_fee),1,ser_acc) != 0){

                                    if(se_roll==rec_fee.roll){

                                            gotoxy(28,2);
                                            printf(" VIEW PAYMENT ");
                                            gotoxy(15,7);
                                            printf("Roll Number: %lu",rec_fee.roll);
                                            gotoxy(15,9);
                                            printf("Name: %s",rec_fee.name);
                                            gotoxy(15,11);
                                            printf("Date: %s",rec_fee.date);
                                            gotoxy(15,13);
                                            printf("Pay: %f",rec_fee.recive);
                                            gotoxy(15,15);
                                            printf("Dew: %f",rec_fee.arrears);

                                    }

                                }
                                fclose(ser_acc);
            int ksp;
    ass_reg:

            ksp=0;

            gotoxy(15,23);
            printf("BACK Than Type [ 0 ] : ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto sec_pt;
            }
            else{
                goto ass_reg;
            }

     }




     if(ke==0){
        system("cls");
       return 1105;
     }
     else{
        system("cls");
        goto sec_pt;
     }

    return 0;
}




/* into 3rd semester ,  gets input and give output  */

int trd_sems(){


            int i,ke;

        trd_pt:

            i=4;
            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>

            gotoxy(30,2);
            printf(" STUDENT ACCOUNT ");
            gotoxy(15,5);
            printf("%c%c%c",213,205,205);
            gotoxy(15,6);
            printf("%c 1.1st Semester",195);
            gotoxy(15,7);
            printf("%c%c%c",213,205,205);
            gotoxy(15,8);
            printf("%c 2.2nd Semester",195);
            gotoxy(15,9);
            printf("%c%c%c",213,205,205);
            gotoxy(15,10);
            printf("%c <<< 3.3rd Semester >>>",195);
            gotoxy(15,11);
            printf("%c%c%c",213,205,205);
            gotoxy(15,12);
            printf("%c 4.4th Semester",195);
            gotoxy(15,13);
            printf("%c%c%c",213,205,205);
            gotoxy(15,14);
            printf("%c 5.5th Semester",195);
            gotoxy(15,15);
            printf("%c%c%c",213,205,205);
            gotoxy(15,16);
            printf("%c 6.6th Semester",195);
            gotoxy(15,17);
            printf("%c%c%c",213,205,205);
            gotoxy(15,18);
            printf("%c 7.7th Semester",195);
            gotoxy(15,19);
            printf("%c%c%c",213,205,205);
            gotoxy(15,20);
            printf("%c 8.8th Semester",195);
            gotoxy(15,21);
            printf("%c%c%c",213,205,205);
            gotoxy(15,22);
            printf("%c",179);
            gotoxy(15,23);
            printf("%c 0.BACK",195);

           /// ====>>>
            gotoxy(80,3);
            printf(" 3RD SEMESTER ");
            gotoxy(70,8);
            printf("=> 1.Student Account Registration");
            gotoxy(70,9);
            printf("=> 2.View Student Account");
            gotoxy(70,10);
            printf("=> 3.Payment");
            gotoxy(70,11);
            printf("=> 4.View Student Dew");
            gotoxy(70,12);
            printf("=> 5.Search Account");
            gotoxy(70,14);
            printf("=> 0.BACK");

            /// =====>>

            ke=0;
            gotoxy(70,23);
            printf("Please Type Selected Number:  ");
            scanf("%d",&ke);
            fflush(stdin);

             /* Student account registration */

             if(ke==1){

                FILE *acount;
                int i,ksp;
                unsigned long int st_roll;
                system("cls");


                    i=4;
                    gotoxy(8,1);
                    draw(100);
                    gotoxy(8,2);
                    draw_two(100);
                    gotoxy(8,3);
                    draw(100);

                    while(i<25){
                        gotoxy(8,i);
                        printf("%c",219);
                        printf("%c",177);
                        printf("%c",219);
                        draw_sp(96);
                        printf("%c",219);

                        i++;
                    }
                    i=4;
                    while(i<25){
                        gotoxy(65,i);
                        printf("%c",177);
                        printf("%c",219);

                        i++;
                    }
                    i=66;
                    while(i<108){
                        gotoxy(i,4);
                        printf("%c",254);
                        gotoxy(i,24);
                        printf("%c",254);
                        i++;
                    }
                    gotoxy(8,25);
                    draw(100);
                    gotoxy(8,26);
                    draw_two(100);
                    gotoxy(33,26);
                    printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
                    gotoxy(8,27);
                    draw(100);

                // ---------------->>

                    gotoxy(75,1);
                    time_t mytime;
                    mytime=time(NULL);
                    printf(ctime(&mytime));
                //----------------->>


                    gotoxy(28,2);
                    printf(" ACCOUNT REGISTITON ");
                    gotoxy(15,7);
                    printf("Type roll number: ");
                    gotoxy(15,9);
                    printf("Name: ");
                    gotoxy(15,11);
                    printf("Semester: ");
                    gotoxy(15,13);
                    printf("Semester fee: ");
                    gotoxy(15,15);
                    printf("Other fee cause: ");
                    gotoxy(15,17);
                    printf("Other fee: ");
                    gotoxy(15,19);
                    printf("Total: ");



                    gotoxy(40,7);
                    scanf("%lu",&fee_col.roll);
                    st_roll=fee_col.roll;
                    fflush(stdin);
                    gotoxy(40,9);
                    gets(fee_col.name);
                    gotoxy(40,11);
                    gets(fee_col.semester);
                    gotoxy(40,13);
                    scanf("%f",&fee_col.sem_fee);
                    fflush(stdin);
                    gotoxy(40,15);
                    gets(fee_col.other_cos);
                    gotoxy(40,17);
                    scanf("%f",&fee_col.other_fee);
                    fflush(stdin);
                    gotoxy(40,19);
                    fee_col.total=fee_col.sem_fee+fee_col.other_fee;
                    printf("%f",fee_col.total);

                    acount=fopen("three_st_account.dat","a");

                    fwrite(&fee_col,sizeof(fee_col),1,acount);
                    fflush(acount);
                    fclose(acount);

                    /* Read form file */

                    acount=fopen("three_st_account.dat","r");

                    while(fread(&fee_col,sizeof(fee_col),1,acount) != 0){
                        if(st_roll==fee_col.roll){

                            gotoxy(85,3);
                            printf(" SAVE ");
                            gotoxy(70,6);
                            printf("Roll number:  %lu",fee_col.roll);
                            gotoxy(70,7);
                            printf("Name:  %s",fee_col.name);
                            gotoxy(70,8);
                            printf("Semester:  %s",fee_col.semester);
                            gotoxy(70,9);
                            printf("Semester fee:  %f",fee_col.sem_fee);
                            gotoxy(70,10);
                            printf("Other expenc [text only]:  %s",fee_col.other_cos);
                            gotoxy(70,11);
                            printf("Other fee [amount]:  %f",fee_col.other_fee);
                            gotoxy(70,12);
                            printf("Total: %f",fee_col.total);
                        }
                    }
                    fclose(acount);

        acsct_reg:

                    ksp=0;
                    gotoxy(70,23);
                    printf("BACK Than Type [ 0 ] :  ");
                    scanf("%d",&ksp);

                    if(ksp==0){
                        system("cls");
                        goto trd_pt;
                    }
                    else{
                        goto acsct_reg;
                    }

             }



            /* view student account     ============== */

             if(ke==2){
             system("cls");

             FILE *acount_re;
             int ksp;

                // ---------------->>

                    gotoxy(60,7);
                    time_t mytime;
                    mytime=time(NULL);
                    printf(ctime(&mytime));

                //----------------->>

                    acount_re=fopen("three_st_account.dat","r");


                    while(fread(&fee_col,sizeof(fee_col),1,acount_re) != 0){

                            printf("\n\n\t\t|-> Roll number:  %lu",fee_col.roll);
                            printf("\n\n\t\t|-> Name:  %s",fee_col.name);
                            printf("\n\n\t\t|-> Semester:  %s",fee_col.semester);
                            printf("\n\n\t\t|-> Semester fee:  %f",fee_col.sem_fee);
                            printf("\n\n\t\t|-> Other expenc [text only]:  %s",fee_col.other_cos);
                            printf("\n\n\t\t|-> Other fee [amount]:  %f",fee_col.other_fee);
                            printf("\n\n\t\t|-> Total: %f",fee_col.total);
                            printf("\n\n\t\t| ------------------------------------------------------- ");
                            printf("\n\n\n\t\t");
                    }
                    fclose(acount_re);


        aspso_reg:

                    ksp=0;
                    printf("\n\n\t\t|--- BACK Than Type [ 0 ] : ");
                    scanf("%d",&ksp);

                    if(ksp==0){
                        system("cls");
                        goto trd_pt;
                    }
                    else{
                        goto aspso_reg;
                    }

             }



             /* payment op =================== */

             if(ke==3){
             system("cls");

                    int i, o, eg;

                    gotoxy(38,3);
                    printf("INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY");

                    gotoxy(28,5);
                    for(i=0;i<60;i++){
                        printf("%c",177);
                    }
                    for(i=0;i<8;i++){
                            printf("\n\t\t\t    %c",177);
                        for(o=0;o<58;o++){
                            printf(" ");
                        }
                    printf("%c",177);
                    }
                    gotoxy(28,14);
                    for(i=0;i<60;i++){
                        printf("%c",177);
                    }

                    gotoxy(35,8);
                    printf("%c If You Want Add New Payment Then Press [1]",219);
                    gotoxy(35,10);
                    printf("%c If You Want Edit Any Payment Then Press [2]",219);
                    gotoxy(48,12);
                    printf("Select Any: ");
                    scanf("%d",&eg);
                    fflush(stdin);


            /*   add new payment ********************************* */

                if(eg==1){
                system("cls");

                    FILE *opn,*pray;
                    int i=4;
                    unsigned long int get_rl=0;

                    gotoxy(8,1);
                    draw(100);
                    gotoxy(8,2);
                    draw_two(100);
                    gotoxy(8,3);
                    draw(100);

                    while(i<25){
                        gotoxy(8,i);
                        printf("%c",219);
                        printf("%c",177);
                        printf("%c",219);
                        draw_sp(96);
                        printf("%c",219);

                        i++;
                    }
                    i=4;
                    while(i<25){
                        gotoxy(65,i);
                        printf("%c",177);
                        printf("%c",219);

                        i++;
                    }
                    i=66;
                    while(i<108){
                        gotoxy(i,4);
                        printf("%c",254);
                        gotoxy(i,24);
                        printf("%c",254);
                        i++;
                    }
                    gotoxy(8,25);
                    draw(100);
                    gotoxy(8,26);
                    draw_two(100);
                    gotoxy(33,26);
                    printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
                    gotoxy(8,27);
                    draw(100);

                // ---------------->>

                    gotoxy(75,1);
                    time_t mytime;
                    mytime=time(NULL);
                    printf(ctime(&mytime));
                //----------------->>


                    gotoxy(28,2);
                    printf(" ADD PAYMENT ");
                    gotoxy(15,7);
                    printf("Type roll number: ");
                    gotoxy(15,9);
                    printf("Name: ");
                    gotoxy(15,11);
                    printf("Date: ");
                    gotoxy(15,13);
                    printf("Total: ");
                    gotoxy(15,15);
                    printf("Now pay: ");
                    gotoxy(15,17);
                    printf("Dew: ");



                            opn=fopen("three_st_account.dat","r");
                            pray=fopen("trd_pr.dat","a");

                            gotoxy(45,7);
                            scanf("%lu",&rec_fee.roll);
                            get_rl=rec_fee.roll;
                            fflush(stdin);

                            while(fread(&fee_col,sizeof(fee_col),1,opn) != 0){

                            if(rec_fee.roll==fee_col.roll ){


                            gotoxy(45,9);
                            strcpy(rec_fee.name,fee_col.name);
                            printf("%s",rec_fee.name);

                            gotoxy(45,11);
                            gets(rec_fee.date);
                            gotoxy(45,13);
                            printf("%f",fee_col.total);
                            fflush(stdin);
                            gotoxy(45,15);
                            scanf("%f",&rec_fee.recive);
                            fflush(stdin);

                            rec_fee.arrears=fee_col.total-rec_fee.recive;
                            gotoxy(45,17);
                            printf("%f",rec_fee.arrears);
                            fflush(stdin);
                            fclose(opn);

                                }
                            }

                            fwrite(&rec_fee,sizeof(rec_fee),1,pray);
                            fclose(pray);

                            /* view other sub menu */

                            pray=fopen("fast_pr.dat","r");

                            while(fread(&rec_fee,sizeof(rec_fee),1,pray) != 0){

                                    if(get_rl==rec_fee.roll){

                                        gotoxy(85,3);
                                        printf(" SAVE ");
                                        gotoxy(70,6);
                                        printf("Roll number:  %lu",rec_fee.roll);
                                        gotoxy(70,7);
                                        printf("Name:  %s",rec_fee.name);
                                        gotoxy(70,8);
                                        printf("Date:  %s",rec_fee.date);
                                        gotoxy(70,9);
                                        printf("Total:  %f",rec_fee.total);
                                        gotoxy(70,10);
                                        printf("Now pay:  %f",rec_fee.recive);
                                        gotoxy(70,11);
                                        printf("Dew:  %f",rec_fee.arrears);
                                    }
                            }

                            int k=0;
                    fcste:
                            gotoxy(70,23);
                            printf("Type [ 0 ] Than BACK :");
                            scanf("%d",&k);
                            fflush(stdin);
                            if(k==0){
                                system("cls");
                                goto trd_pt;
                            }
                            else{
                                goto fcste;
                            }
                    }





                /* Edit payment menu **************************************** */

                else if(eg==2){
                    system("cls");

                    FILE *prays;
                    int i;
                    unsigned long int ik_int=0;


                    i=4;
                    gotoxy(8,1);
                    draw(100);
                    gotoxy(8,2);
                    draw_two(100);
                    gotoxy(8,3);
                    draw(100);

                    while(i<25){
                        gotoxy(8,i);
                        printf("%c",219);
                        printf("%c",177);
                        printf("%c",219);
                        draw_sp(96);
                        printf("%c",219);

                        i++;
                    }
                    i=4;
                    while(i<25){
                        gotoxy(65,i);
                        printf("%c",177);
                        printf("%c",219);

                        i++;
                    }
                    i=66;
                    while(i<108){
                        gotoxy(i,4);
                        printf("%c",254);
                        gotoxy(i,24);
                        printf("%c",254);
                        i++;
                    }
                    gotoxy(8,25);
                    draw(100);
                    gotoxy(8,26);
                    draw_two(100);
                    gotoxy(33,26);
                    printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
                    gotoxy(8,27);
                    draw(100);

                // ---------------->>

                    gotoxy(75,1);
                    time_t mytime;
                    mytime=time(NULL);
                    printf(ctime(&mytime));
                //----------------->>


                    gotoxy(28,2);
                    printf(" EDIT PAYMENT ");
                    gotoxy(15,7);
                    printf("Type roll number: ");
                    gotoxy(15,9);
                    printf("Name: ");
                    gotoxy(15,11);
                    printf("Date: ");
                    gotoxy(15,13);
                    printf("Total: ");
                    gotoxy(15,15);
                    printf("Now pay: ");
                    gotoxy(15,17);
                    printf("Dew: ");


                            prays=fopen("trd_pr.dat","r+");

                            gotoxy(45,7);
                            scanf("%lu",&ik_int);
                            fflush(stdin);

                            while(fread(&rec_fee,sizeof(rec_fee),1,prays) != 0){

                            if(ik_int==rec_fee.roll){

                            gotoxy(45,9);
                            printf("%s",rec_fee.name);
                            fflush(stdin);

                            gotoxy(45,11);
                            gets(rec_fee.date);
                            gotoxy(45,13);
                            printf("%f",rec_fee.arrears);
                            fflush(stdin);
                            gotoxy(45,15);
                            scanf("%f",&rec_fee.recive);
                            fflush(stdin);

                            rec_fee.arrears=rec_fee.arrears-rec_fee.recive;
                            gotoxy(45,17);
                            printf("%f",rec_fee.arrears);

                            fseek(prays,-sizeof(rec_fee),SEEK_CUR);
                            fwrite(&rec_fee,sizeof(rec_fee),1,prays);
                            fflush(prays);
                            fclose(prays);
                            }
                            fflush(stdin);
                        }

                        prays=fopen("trd_pr.dat","r");


                        while(fread(&rec_fee,sizeof(rec_fee),1,prays) != 0){

                                    if(ik_int==rec_fee.roll){

                                        gotoxy(85,3);
                                        printf(" SAVE ");
                                        gotoxy(70,6);
                                        printf("Roll number:  %lu",rec_fee.roll);
                                        gotoxy(70,7);
                                        printf("Name:  %s",rec_fee.name);
                                        gotoxy(70,8);
                                        printf("Date:  %s",rec_fee.date);
                                        gotoxy(70,9);
                                        printf("Total:  %f",rec_fee.total);
                                        gotoxy(70,10);
                                        printf("Now pay:  %f",rec_fee.recive);
                                        gotoxy(70,11);
                                        printf("Dew:  %f",rec_fee.arrears);
                                    }
                            }

                            int k=0;
                    fcstr:
                            gotoxy(70,23);
                            printf("Type [ 0 ] Than BACK : ");
                            scanf("%d",&k);
                            fflush(stdin);
                            if(k==0){
                                system("cls");
                                goto trd_pt;
                            }
                            else{
                                goto fcstr;
                            }
                    }

             }


             /* View payment token ****************************** */

             if(ke==4){
             system("cls");


             FILE *acount_re;
             int ksp;

                // ---------------->>

                    gotoxy(60,7);
                    time_t mytime;
                    mytime=time(NULL);
                    printf(ctime(&mytime));

                //----------------->>

                    acount_re=fopen("trd_pr.dat","r");

                    while(fread(&rec_fee,sizeof(rec_fee),1,acount_re) != 0){

                            printf("\n\n\t\t|-> Roll number:  %lu",rec_fee.roll);
                            printf("\n\n\t\t|-> Name:  %s",rec_fee.name);
                            printf("\n\n\t\t|-> Date:  %s",rec_fee.date);
                            printf("\n\n\t\t|-> Payment:  %f",rec_fee.recive);
                            printf("\n\n\t\t|-> Dew:  %f",rec_fee.arrears);
                            printf("\n\n\t\t| ------------------------------------------------------- ");
                            printf("\n\n\n\t\t");
                    }
                    fclose(acount_re);


        aspr_reg:

                    ksp=0;
                    printf("\n\n\t\t|--- BACK Than Type [ 0 ] : ");
                    scanf("%d",&ksp);

                    if(ksp==0){
                        system("cls");
                        goto trd_pt;
                    }
                    else{
                        goto aspr_reg;
                    }

             }


             /* Search account ****************88 */


             if(ke==5){
             system("cls");


                    FILE *ser_acc;
                    unsigned long int se_roll=0;
                    int i,ke;


                    i=4;
                    gotoxy(8,1);
                    draw(100);
                    gotoxy(8,2);
                    draw_two(100);
                    gotoxy(8,3);
                    draw(100);

                    while(i<25){
                        gotoxy(8,i);
                        printf("%c",219);
                        printf("%c",177);
                        printf("%c",219);
                        draw_sp(96);
                        printf("%c",219);

                        i++;
                    }
                    i=4;
                    while(i<25){
                        gotoxy(65,i);
                        printf("%c",177);
                        printf("%c",219);

                        i++;
                    }
                    i=66;
                    while(i<108){
                        gotoxy(i,4);
                        printf("%c",254);
                        gotoxy(i,24);
                        printf("%c",254);
                        i++;
                    }
                    gotoxy(8,25);
                    draw(100);
                    gotoxy(8,26);
                    draw_two(100);
                    gotoxy(33,26);
                    printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
                    gotoxy(8,27);
                    draw(100);

                // ---------------->>

                    gotoxy(75,1);
                    time_t mytime;
                    mytime=time(NULL);
                    printf(ctime(&mytime));
                //----------------->>

                                        ser_acc=fopen("trd_pr.dat","r");

                                        gotoxy(78,3);
                                        printf(" SEARCH ACCOUNT ");
                                        gotoxy(70,13);
                                        printf("Type Roll number:  ");
                                        scanf("%lu",&se_roll);
                                        fflush(stdin);

                                            while(fread(&rec_fee,sizeof(rec_fee),1,ser_acc) != 0){

                                            if(se_roll==rec_fee.roll){

                                                    gotoxy(28,2);
                                                    printf(" VIEW PAYMENT ");
                                                    gotoxy(15,7);
                                                    printf("Roll Number: %lu",rec_fee.roll);
                                                    gotoxy(15,9);
                                                    printf("Name: %s",rec_fee.name);
                                                    gotoxy(15,11);
                                                    printf("Date: %s",rec_fee.date);
                                                    gotoxy(15,13);
                                                    printf("Pay: %f",rec_fee.recive);
                                                    gotoxy(15,15);
                                                    printf("Dew: %f",rec_fee.arrears);

                                            }

                                        }
                                        fclose(ser_acc);
                    int ksp;
            assq_reg:

                    ksp=0;

                    gotoxy(15,23);
                    printf("BACK Than Type [ 0 ] : ");
                    scanf("%d",&ksp);

                    if(ksp==0){
                        system("cls");
                        goto trd_pt;
                    }
                    else{
                        goto assq_reg;
                    }

             }



             if(ke==0){
                system("cls");
                return 1105;
             }
             else{
                system("cls");
                goto trd_pt;
             }

    return 0;
}




int four_sems(){


    int i,ke;

four_pt:

    i=4;
    gotoxy(8,1);
    draw(100);
    gotoxy(8,2);
    draw_two(100);
    gotoxy(8,3);
    draw(100);

    while(i<25){
        gotoxy(8,i);
        printf("%c",219);
        printf("%c",177);
        printf("%c",219);
        draw_sp(96);
        printf("%c",219);

        i++;
    }
    i=4;
    while(i<25){
        gotoxy(65,i);
        printf("%c",177);
        printf("%c",219);

        i++;
    }
    i=66;
    while(i<108){
        gotoxy(i,4);
        printf("%c",254);
        gotoxy(i,24);
        printf("%c",254);
        i++;
    }
    gotoxy(8,25);
    draw(100);
    gotoxy(8,26);
    draw_two(100);
    gotoxy(33,26);
    printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
    gotoxy(8,27);
    draw(100);

// ---------------->>

    gotoxy(75,1);
    time_t mytime;
    mytime=time(NULL);
    printf(ctime(&mytime));
//----------------->>

    gotoxy(30,2);
    printf(" STUDENT ACCOUNT ");
    gotoxy(15,5);
    printf("%c%c%c",213,205,205);
    gotoxy(15,6);
    printf("%c 1.1st Semester",195);
    gotoxy(15,7);
    printf("%c%c%c",213,205,205);
    gotoxy(15,8);
    printf("%c 2.2nd Semester",195);
    gotoxy(15,9);
    printf("%c%c%c",213,205,205);
    gotoxy(15,10);
    printf("%c 3.3rd Semester",195);
    gotoxy(15,11);
    printf("%c%c%c",213,205,205);
    gotoxy(15,12);
    printf("%c <<< 4.4th Semester >>>",195);
    gotoxy(15,13);
    printf("%c%c%c",213,205,205);
    gotoxy(15,14);
    printf("%c 5.5th Semester",195);
    gotoxy(15,15);
    printf("%c%c%c",213,205,205);
    gotoxy(15,16);
    printf("%c 6.6th Semester",195);
    gotoxy(15,17);
    printf("%c%c%c",213,205,205);
    gotoxy(15,18);
    printf("%c 7.7th Semester",195);
    gotoxy(15,19);
    printf("%c%c%c",213,205,205);
    gotoxy(15,20);
    printf("%c 8.8th Semester",195);
    gotoxy(15,21);
    printf("%c%c%c",213,205,205);
    gotoxy(15,22);
    printf("%c",179);
    gotoxy(15,23);
    printf("%c 0.BACK",195);

   /// ====>>>
    gotoxy(80,3);
    printf(" 4TH SEMESTER ");
    gotoxy(70,8);
    printf("=> 1.Student Account Registration");
    gotoxy(70,9);
    printf("=> 2.View Student Account");
    gotoxy(70,10);
    printf("=> 3.Payment");
    gotoxy(70,11);
    printf("=> 4.View Student Dew");
    gotoxy(70,12);
    printf("=> 5.Search Account");
    gotoxy(70,14);
    printf("=> 0.BACK");

    /// =====>>

    ke=0;
    gotoxy(70,23);
    printf("Please Type Selected Number:  ");
    scanf("%d",&ke);


     /* Student account registration */

     if(ke==1){

        FILE *acount;
        int i,ksp;
        unsigned long int st_roll;
        system("cls");


            i=4;
            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>


            gotoxy(28,2);
            printf(" ACCOUNT REGISTITON ");
            gotoxy(15,7);
            printf("Type roll number: ");
            gotoxy(15,9);
            printf("Name: ");
            gotoxy(15,11);
            printf("Semester: ");
            gotoxy(15,13);
            printf("Semester fee: ");
            gotoxy(15,15);
            printf("Other fee cause: ");
            gotoxy(15,17);
            printf("Other fee: ");
            gotoxy(15,19);
            printf("Total: ");



            gotoxy(40,7);
            scanf("%lu",&fee_col.roll);
            st_roll=fee_col.roll;
            fflush(stdin);
            gotoxy(40,9);
            gets(fee_col.name);
            gotoxy(40,11);
            gets(fee_col.semester);
            gotoxy(40,13);
            scanf("%f",&fee_col.sem_fee);
            fflush(stdin);
            gotoxy(40,15);
            gets(fee_col.other_cos);
            gotoxy(40,17);
            scanf("%f",&fee_col.other_fee);
            fflush(stdin);
            gotoxy(40,19);
            fee_col.total=fee_col.sem_fee+fee_col.other_fee;
            printf("%f",fee_col.total);

            acount=fopen("four_st_account.dat","a");

            fwrite(&fee_col,sizeof(fee_col),1,acount);
            fflush(acount);
            fclose(acount);

            /* Read form file */

            acount=fopen("four_st_account.dat","r");

            while(fread(&fee_col,sizeof(fee_col),1,acount) != 0){
                if(st_roll==fee_col.roll){

                    gotoxy(85,3);
                    printf(" SAVE ");
                    gotoxy(70,6);
                    printf("Roll number:  %lu",fee_col.roll);
                    gotoxy(70,7);
                    printf("Name:  %s",fee_col.name);
                    gotoxy(70,8);
                    printf("Semester:  %s",fee_col.semester);
                    gotoxy(70,9);
                    printf("Semester fee:  %f",fee_col.sem_fee);
                    gotoxy(70,10);
                    printf("Other expenc [text only]:  %s",fee_col.other_cos);
                    gotoxy(70,11);
                    printf("Other fee [amount]:  %f",fee_col.other_fee);
                    gotoxy(70,12);
                    printf("Total: %f",fee_col.total);
                }
            }
            fclose(acount);

acstc_reg:

            ksp=0;
            gotoxy(70,23);
            printf("BACK Than Type [ 0 ] :  ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto four_pt;
            }
            else{
                goto acstc_reg;
            }

     }



    /* view student account     ============== */

     if(ke==2){
     system("cls");

     FILE *acount_re;
     int ksp;

        // ---------------->>

            gotoxy(60,7);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));

        //----------------->>

            acount_re=fopen("four_st_account.dat","r");


            while(fread(&fee_col,sizeof(fee_col),1,acount_re) != 0){

                    printf("\n\n\t\t|-> Roll number:  %lu",fee_col.roll);
                    printf("\n\n\t\t|-> Name:  %s",fee_col.name);
                    printf("\n\n\t\t|-> Semester:  %s",fee_col.semester);
                    printf("\n\n\t\t|-> Semester fee:  %f",fee_col.sem_fee);
                    printf("\n\n\t\t|-> Other expenc [text only]:  %s",fee_col.other_cos);
                    printf("\n\n\t\t|-> Other fee [amount]:  %f",fee_col.other_fee);
                    printf("\n\n\t\t|-> Total: %f",fee_col.total);
                    printf("\n\n\t\t| ------------------------------------------------------- ");
                    printf("\n\n\n\t\t");
            }
            fclose(acount_re);


aspos_reg:

            ksp=0;
            printf("\n\n\t\t|--- BACK Than Type [ 0 ] : ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto four_pt;
            }
            else{
                goto aspos_reg;
            }

     }



     /* payment op =================== */

     if(ke==3){
     system("cls");

            int i, o, eg;

            gotoxy(38,3);
            printf("INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY");

            gotoxy(28,5);
            for(i=0;i<60;i++){
                printf("%c",177);
            }
            for(i=0;i<8;i++){
                    printf("\n\t\t\t    %c",177);
                for(o=0;o<58;o++){
                    printf(" ");
                }
            printf("%c",177);
            }
            gotoxy(28,14);
            for(i=0;i<60;i++){
                printf("%c",177);
            }

            gotoxy(35,8);
            printf("%c If You Want Add New Payment Then Press [1]",219);
            gotoxy(35,10);
            printf("%c If You Want Edit Any Payment Then Press [2]",219);
            gotoxy(48,12);
            printf("Select Any: ");
            scanf("%d",&eg);
            fflush(stdin);


    /*   add new payment ********************************* */

        if(eg==1){
        system("cls");

            FILE *opn,*pray;
            int i=4;
            unsigned long int get_rl=0;

            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>


            gotoxy(28,2);
            printf(" ADD PAYMENT ");
            gotoxy(15,7);
            printf("Type roll number: ");
            gotoxy(15,9);
            printf("Name: ");
            gotoxy(15,11);
            printf("Date: ");
            gotoxy(15,13);
            printf("Total: ");
            gotoxy(15,15);
            printf("Now pay: ");
            gotoxy(15,17);
            printf("Dew: ");



                    opn=fopen("four_st_account.dat","r");
                    pray=fopen("for_pr.dat","a");

                    gotoxy(45,7);
                    scanf("%lu",&rec_fee.roll);
                    get_rl=rec_fee.roll;
                    fflush(stdin);

                    while(fread(&fee_col,sizeof(fee_col),1,opn) != 0){

                    if(rec_fee.roll==fee_col.roll ){


                    gotoxy(45,9);
                    strcpy(rec_fee.name,fee_col.name);
                    printf("%s",rec_fee.name);

                    gotoxy(45,11);
                    gets(rec_fee.date);
                    gotoxy(45,13);
                    printf("%f",fee_col.total);
                    fflush(stdin);
                    gotoxy(45,15);
                    scanf("%f",&rec_fee.recive);
                    fflush(stdin);

                    rec_fee.arrears=fee_col.total-rec_fee.recive;
                    gotoxy(45,17);
                    printf("%f",rec_fee.arrears);
                    fflush(stdin);
                    fclose(opn);

                        }
                    }

                    fwrite(&rec_fee,sizeof(rec_fee),1,pray);
                    fclose(pray);

                    /* view other sub menu */

                    pray=fopen("for_pr.dat","r");

                    while(fread(&rec_fee,sizeof(rec_fee),1,pray) != 0){

                            if(get_rl==rec_fee.roll){

                                gotoxy(85,3);
                                printf(" SAVE ");
                                gotoxy(70,6);
                                printf("Roll number:  %lu",rec_fee.roll);
                                gotoxy(70,7);
                                printf("Name:  %s",rec_fee.name);
                                gotoxy(70,8);
                                printf("Date:  %s",rec_fee.date);
                                gotoxy(70,9);
                                printf("Total:  %f",rec_fee.total);
                                gotoxy(70,10);
                                printf("Now pay:  %f",rec_fee.recive);
                                gotoxy(70,11);
                                printf("Dew:  %f",rec_fee.arrears);
                            }
                    }

                    int k=0;
            fcstt:
                    gotoxy(70,23);
                    printf("Type [ 0 ] Than BACK :");
                    scanf("%d",&k);
                    fflush(stdin);
                    if(k==0){
                        system("cls");
                        goto four_pt;
                    }
                    else{
                        goto fcstt;
                    }
            }





        /* Edit payment menu **************************************** */

        else if(eg==2){
            system("cls");

            FILE *prays;
            int i;
            unsigned long int ik_int=0;


            i=4;
            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>


            gotoxy(28,2);
            printf(" EDIT PAYMENT ");
            gotoxy(15,7);
            printf("Type roll number: ");
            gotoxy(15,9);
            printf("Name: ");
            gotoxy(15,11);
            printf("Date: ");
            gotoxy(15,13);
            printf("Total: ");
            gotoxy(15,15);
            printf("Now pay: ");
            gotoxy(15,17);
            printf("Dew: ");


                    prays=fopen("for_pr.dat","r+");

                    gotoxy(45,7);
                    scanf("%lu",&ik_int);
                    fflush(stdin);

                    while(fread(&rec_fee,sizeof(rec_fee),1,prays) != 0){

                    if(ik_int==rec_fee.roll){

                    gotoxy(45,9);
                    printf("%s",rec_fee.name);
                    fflush(stdin);

                    gotoxy(45,11);
                    gets(rec_fee.date);
                    gotoxy(45,13);
                    printf("%f",rec_fee.arrears);
                    fflush(stdin);
                    gotoxy(45,15);
                    scanf("%f",&rec_fee.recive);
                    fflush(stdin);

                    rec_fee.arrears=rec_fee.arrears-rec_fee.recive;
                    gotoxy(45,17);
                    printf("%f",rec_fee.arrears);

                    fseek(prays,-sizeof(rec_fee),SEEK_CUR);
                    fwrite(&rec_fee,sizeof(rec_fee),1,prays);
                    fflush(prays);
                    fclose(prays);
                    }
                    fflush(stdin);
                }

                prays=fopen("for_pr.dat","r");


                while(fread(&rec_fee,sizeof(rec_fee),1,prays) != 0){

                            if(ik_int==rec_fee.roll){

                                gotoxy(85,3);
                                printf(" SAVE ");
                                gotoxy(70,6);
                                printf("Roll number:  %lu",rec_fee.roll);
                                gotoxy(70,7);
                                printf("Name:  %s",rec_fee.name);
                                gotoxy(70,8);
                                printf("Date:  %s",rec_fee.date);
                                gotoxy(70,9);
                                printf("Total:  %f",rec_fee.total);
                                gotoxy(70,10);
                                printf("Now pay:  %f",rec_fee.recive);
                                gotoxy(70,11);
                                printf("Dew:  %f",rec_fee.arrears);
                            }
                    }

                    int k=0;
            fcsts:
                    gotoxy(70,23);
                    printf("Type [ 0 ] Than BACK : ");
                    scanf("%d",&k);
                    fflush(stdin);
                    if(k==0){
                        system("cls");
                        goto four_pt;
                    }
                    else{
                        goto fcsts;
                    }
            }

     }


     /* View payment token ****************************** */

     if(ke==4){
     system("cls");


     FILE *acount_re;
     int ksp;

        // ---------------->>

            gotoxy(60,7);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));

        //----------------->>

            acount_re=fopen("for_pr.dat","r");

            while(fread(&rec_fee,sizeof(rec_fee),1,acount_re) != 0){

                    printf("\n\n\t\t|-> Roll number:  %lu",rec_fee.roll);
                    printf("\n\n\t\t|-> Name:  %s",rec_fee.name);
                    printf("\n\n\t\t|-> Date:  %s",rec_fee.date);
                    printf("\n\n\t\t|-> Payment:  %f",rec_fee.recive);
                    printf("\n\n\t\t|-> Dew:  %f",rec_fee.arrears);
                    printf("\n\n\t\t| ------------------------------------------------------- ");
                    printf("\n\n\n\t\t");
            }
            fclose(acount_re);


aasp_reg:

            ksp=0;
            printf("\n\n\t\t|--- BACK Than Type [ 0 ] : ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto four_pt;
            }
            else{
                goto aasp_reg;
            }

     }


     /* Search account ****************88 */


     if(ke==5){
     system("cls");


            FILE *ser_acc;
            unsigned long int se_roll=0;
            int i,ke;


            i=4;
            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>

                                ser_acc=fopen("for_pr.dat","r");

                                gotoxy(78,3);
                                printf(" SEARCH ACCOUNT ");
                                gotoxy(70,13);
                                printf("Type Roll number:  ");
                                scanf("%lu",&se_roll);
                                fflush(stdin);

                                    while(fread(&rec_fee,sizeof(rec_fee),1,ser_acc) != 0){

                                    if(se_roll==rec_fee.roll){

                                            gotoxy(28,2);
                                            printf(" VIEW PAYMENT ");
                                            gotoxy(15,7);
                                            printf("Roll Number: %lu",rec_fee.roll);
                                            gotoxy(15,9);
                                            printf("Name: %s",rec_fee.name);
                                            gotoxy(15,11);
                                            printf("Date: %s",rec_fee.date);
                                            gotoxy(15,13);
                                            printf("Pay: %f",rec_fee.recive);
                                            gotoxy(15,15);
                                            printf("Dew: %f",rec_fee.arrears);

                                    }

                                }
                                fclose(ser_acc);
            int ksp;
    ass_regw:

            ksp=0;

            gotoxy(15,23);
            printf("BACK Than Type [ 0 ] : ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto four_pt;
            }
            else{
                goto ass_regw;
            }

     }


     if(ke==0){
        system("cls");
        return 1405;
     }
     else{
        system("cls");
        goto four_pt;
     }
    return 0;
}




int fiv_sems(){


    int i,ke;

fiv_pt:

    i=4;
    gotoxy(8,1);
    draw(100);
    gotoxy(8,2);
    draw_two(100);
    gotoxy(8,3);
    draw(100);

    while(i<25){
        gotoxy(8,i);
        printf("%c",219);
        printf("%c",177);
        printf("%c",219);
        draw_sp(96);
        printf("%c",219);

        i++;
    }
    i=4;
    while(i<25){
        gotoxy(65,i);
        printf("%c",177);
        printf("%c",219);

        i++;
    }
    i=66;
    while(i<108){
        gotoxy(i,4);
        printf("%c",254);
        gotoxy(i,24);
        printf("%c",254);
        i++;
    }
    gotoxy(8,25);
    draw(100);
    gotoxy(8,26);
    draw_two(100);
    gotoxy(33,26);
    printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
    gotoxy(8,27);
    draw(100);

// ---------------->>

    gotoxy(75,1);
    time_t mytime;
    mytime=time(NULL);
    printf(ctime(&mytime));
//----------------->>

    gotoxy(30,2);
    printf(" STUDENT ACCOUNT ");
    gotoxy(15,5);
    printf("%c%c%c",213,205,205);
    gotoxy(15,6);
    printf("%c 1.1st Semester",195);
    gotoxy(15,7);
    printf("%c%c%c",213,205,205);
    gotoxy(15,8);
    printf("%c 2.2nd Semester",195);
    gotoxy(15,9);
    printf("%c%c%c",213,205,205);
    gotoxy(15,10);
    printf("%c 3.3rd Semester",195);
    gotoxy(15,11);
    printf("%c%c%c",213,205,205);
    gotoxy(15,12);
    printf("%c 4.4th Semester",195);
    gotoxy(15,13);
    printf("%c%c%c",213,205,205);
    gotoxy(15,14);
    printf("%c <<< 5.5th Semester >>>",195);
    gotoxy(15,15);
    printf("%c%c%c",213,205,205);
    gotoxy(15,16);
    printf("%c 6.6th Semester",195);
    gotoxy(15,17);
    printf("%c%c%c",213,205,205);
    gotoxy(15,18);
    printf("%c 7.7th Semester",195);
    gotoxy(15,19);
    printf("%c%c%c",213,205,205);
    gotoxy(15,20);
    printf("%c 8.8th Semester",195);
    gotoxy(15,21);
    printf("%c%c%c",213,205,205);
    gotoxy(15,22);
    printf("%c",179);
    gotoxy(15,23);
    printf("%c 0.BACK",195);

   /// ====>>>
    gotoxy(80,3);
    printf(" 5TH SEMESTER ");
    gotoxy(70,8);
    printf("=> 1.Student Account Registration");
    gotoxy(70,9);
    printf("=> 2.View Student Account");
    gotoxy(70,10);
    printf("=> 3.Payment");
    gotoxy(70,11);
    printf("=> 4.View Student Dew");
    gotoxy(70,12);
    printf("=> 5.Search Account");
    gotoxy(70,14);
    printf("=> 0.BACK");

    /// =====>>

    ke=0;
    gotoxy(70,23);
    printf("Please Type Selected Number:  ");
    scanf("%d",&ke);
    fflush(stdin);


     /* Student account registration */

     if(ke==1){

        FILE *acount;
        int i,ksp;
        unsigned long int st_roll;
        system("cls");


            i=4;
            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>


            gotoxy(28,2);
            printf(" ACCOUNT REGISTITON ");
            gotoxy(15,7);
            printf("Type roll number: ");
            gotoxy(15,9);
            printf("Name: ");
            gotoxy(15,11);
            printf("Semester: ");
            gotoxy(15,13);
            printf("Semester fee: ");
            gotoxy(15,15);
            printf("Other fee cause: ");
            gotoxy(15,17);
            printf("Other fee: ");
            gotoxy(15,19);
            printf("Total: ");



            gotoxy(40,7);
            scanf("%lu",&fee_col.roll);
            st_roll=fee_col.roll;
            fflush(stdin);
            gotoxy(40,9);
            gets(fee_col.name);
            gotoxy(40,11);
            gets(fee_col.semester);
            gotoxy(40,13);
            scanf("%f",&fee_col.sem_fee);
            fflush(stdin);
            gotoxy(40,15);
            gets(fee_col.other_cos);
            gotoxy(40,17);
            scanf("%f",&fee_col.other_fee);
            fflush(stdin);
            gotoxy(40,19);
            fee_col.total=fee_col.sem_fee+fee_col.other_fee;
            printf("%f",fee_col.total);

            acount=fopen("five_st_account.dat","a");

            fwrite(&fee_col,sizeof(fee_col),1,acount);
            fflush(acount);
            fclose(acount);

            /* Read form file */

            acount=fopen("five_st_account.dat","r");

            while(fread(&fee_col,sizeof(fee_col),1,acount) != 0){
                if(st_roll==fee_col.roll){

                    gotoxy(85,3);
                    printf(" SAVE ");
                    gotoxy(70,6);
                    printf("Roll number:  %lu",fee_col.roll);
                    gotoxy(70,7);
                    printf("Name:  %s",fee_col.name);
                    gotoxy(70,8);
                    printf("Semester:  %s",fee_col.semester);
                    gotoxy(70,9);
                    printf("Semester fee:  %f",fee_col.sem_fee);
                    gotoxy(70,10);
                    printf("Other expenc [text only]:  %s",fee_col.other_cos);
                    gotoxy(70,11);
                    printf("Other fee [amount]:  %f",fee_col.other_fee);
                    gotoxy(70,12);
                    printf("Total: %f",fee_col.total);
                }
            }
            fclose(acount);

acscb_reg:

            ksp=0;
            gotoxy(70,23);
            printf("BACK Than Type [ 0 ] :  ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto fiv_pt;
            }
            else{
                goto acscb_reg;
            }

     }



    /* view student account     ============== */

     if(ke==2){
     system("cls");

     FILE *acount_re;
     int ksp;

        // ---------------->>

            gotoxy(60,7);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));

        //----------------->>

            acount_re=fopen("five_st_account.dat","r");


            while(fread(&fee_col,sizeof(fee_col),1,acount_re) != 0){

                    printf("\n\n\t\t|-> Roll number:  %lu",fee_col.roll);
                    printf("\n\n\t\t|-> Name:  %s",fee_col.name);
                    printf("\n\n\t\t|-> Semester:  %s",fee_col.semester);
                    printf("\n\n\t\t|-> Semester fee:  %f",fee_col.sem_fee);
                    printf("\n\n\t\t|-> Other expenc [text only]:  %s",fee_col.other_cos);
                    printf("\n\n\t\t|-> Other fee [amount]:  %f",fee_col.other_fee);
                    printf("\n\n\t\t|-> Total: %f",fee_col.total);
                    printf("\n\n\t\t| ------------------------------------------------------- ");
                    printf("\n\n\n\t\t");
            }
            fclose(acount_re);


aspsz_reg:

            ksp=0;
            printf("\n\n\t\t|--- BACK Than Type [ 0 ] : ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto fiv_pt;
            }
            else{
                goto aspsz_reg;
            }

     }



     /* payment op =================== */

     if(ke==3){
     system("cls");

            int i, o, eg;

            gotoxy(38,3);
            printf("INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY");

            gotoxy(28,5);
            for(i=0;i<60;i++){
                printf("%c",177);
            }
            for(i=0;i<8;i++){
                    printf("\n\t\t\t    %c",177);
                for(o=0;o<58;o++){
                    printf(" ");
                }
            printf("%c",177);
            }
            gotoxy(28,14);
            for(i=0;i<60;i++){
                printf("%c",177);
            }

            gotoxy(35,8);
            printf("%c If You Want Add New Payment Then Press [1]",219);
            gotoxy(35,10);
            printf("%c If You Want Edit Any Payment Then Press [2]",219);
            gotoxy(48,12);
            printf("Select Any: ");
            scanf("%d",&eg);
            fflush(stdin);


    /*   add new payment ********************************* */

        if(eg==1){
        system("cls");

            FILE *opn,*pray;
            int i=4;
            unsigned long int get_rl=0;

            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>


            gotoxy(28,2);
            printf(" ADD PAYMENT ");
            gotoxy(15,7);
            printf("Type roll number: ");
            gotoxy(15,9);
            printf("Name: ");
            gotoxy(15,11);
            printf("Date: ");
            gotoxy(15,13);
            printf("Total: ");
            gotoxy(15,15);
            printf("Now pay: ");
            gotoxy(15,17);
            printf("Dew: ");



                    opn=fopen("five_st_account.dat","r");
                    pray=fopen("fiv_pr.dat","a");

                    gotoxy(45,7);
                    scanf("%lu",&rec_fee.roll);
                    get_rl=rec_fee.roll;
                    fflush(stdin);

                    while(fread(&fee_col,sizeof(fee_col),1,opn) != 0){

                    if(rec_fee.roll==fee_col.roll ){


                    gotoxy(45,9);
                    strcpy(rec_fee.name,fee_col.name);
                    printf("%s",rec_fee.name);

                    gotoxy(45,11);
                    gets(rec_fee.date);
                    gotoxy(45,13);
                    printf("%f",fee_col.total);
                    fflush(stdin);
                    gotoxy(45,15);
                    scanf("%f",&rec_fee.recive);
                    fflush(stdin);

                    rec_fee.arrears=fee_col.total-rec_fee.recive;
                    gotoxy(45,17);
                    printf("%f",rec_fee.arrears);
                    fflush(stdin);
                    fclose(opn);

                        }
                    }

                    fwrite(&rec_fee,sizeof(rec_fee),1,pray);
                    fclose(pray);

                    /* view other sub menu */

                    pray=fopen("fiv_pr.dat","r");

                    while(fread(&rec_fee,sizeof(rec_fee),1,pray) != 0){

                            if(get_rl==rec_fee.roll){

                                gotoxy(85,3);
                                printf(" SAVE ");
                                gotoxy(70,6);
                                printf("Roll number:  %lu",rec_fee.roll);
                                gotoxy(70,7);
                                printf("Name:  %s",rec_fee.name);
                                gotoxy(70,8);
                                printf("Date:  %s",rec_fee.date);
                                gotoxy(70,9);
                                printf("Total:  %f",rec_fee.total);
                                gotoxy(70,10);
                                printf("Now pay:  %f",rec_fee.recive);
                                gotoxy(70,11);
                                printf("Dew:  %f",rec_fee.arrears);
                            }
                    }

                    int k=0;
            fcstd:
                    gotoxy(70,23);
                    printf("Type [ 0 ] Than BACK :");
                    scanf("%d",&k);
                    fflush(stdin);
                    if(k==0){
                        system("cls");
                        goto fiv_pt;
                    }
                    else{
                        goto fcstd;
                    }
            }





        /* Edit payment menu **************************************** */

        else if(eg==2){
            system("cls");

            FILE *prays;
            int i;
            unsigned long int ik_int=0;


            i=4;
            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>


            gotoxy(28,2);
            printf(" EDIT PAYMENT ");
            gotoxy(15,7);
            printf("Type roll number: ");
            gotoxy(15,9);
            printf("Name: ");
            gotoxy(15,11);
            printf("Date: ");
            gotoxy(15,13);
            printf("Total: ");
            gotoxy(15,15);
            printf("Now pay: ");
            gotoxy(15,17);
            printf("Dew: ");


                    prays=fopen("fiv_pr.dat","r+");

                    gotoxy(45,7);
                    scanf("%lu",&ik_int);
                    fflush(stdin);

                    while(fread(&rec_fee,sizeof(rec_fee),1,prays) != 0){

                    if(ik_int==rec_fee.roll){

                    gotoxy(45,9);
                    printf("%s",rec_fee.name);
                    fflush(stdin);

                    gotoxy(45,11);
                    gets(rec_fee.date);
                    gotoxy(45,13);
                    printf("%f",rec_fee.arrears);
                    fflush(stdin);
                    gotoxy(45,15);
                    scanf("%f",&rec_fee.recive);
                    fflush(stdin);

                    rec_fee.arrears=rec_fee.arrears-rec_fee.recive;
                    gotoxy(45,17);
                    printf("%f",rec_fee.arrears);

                    fseek(prays,-sizeof(rec_fee),SEEK_CUR);
                    fwrite(&rec_fee,sizeof(rec_fee),1,prays);
                    fflush(prays);
                    fclose(prays);
                    }
                    fflush(stdin);
                }

                prays=fopen("fiv_pr.dat","r");


                while(fread(&rec_fee,sizeof(rec_fee),1,prays) != 0){

                            if(ik_int==rec_fee.roll){

                                gotoxy(85,3);
                                printf(" SAVE ");
                                gotoxy(70,6);
                                printf("Roll number:  %lu",rec_fee.roll);
                                gotoxy(70,7);
                                printf("Name:  %s",rec_fee.name);
                                gotoxy(70,8);
                                printf("Date:  %s",rec_fee.date);
                                gotoxy(70,9);
                                printf("Total:  %f",rec_fee.total);
                                gotoxy(70,10);
                                printf("Now pay:  %f",rec_fee.recive);
                                gotoxy(70,11);
                                printf("Dew:  %f",rec_fee.arrears);
                            }
                    }

                    int k=0;
            fcstrt:
                    gotoxy(70,23);
                    printf("Type [ 0 ] Than BACK : ");
                    scanf("%d",&k);
                    fflush(stdin);
                    if(k==0){
                        system("cls");
                        goto fiv_pt;
                    }
                    else{
                        goto fcstrt;
                    }
            }

     }


     /* View payment token ****************************** */

     if(ke==4){
     system("cls");


     FILE *acount_re;
     int ksp;

        // ---------------->>

            gotoxy(60,7);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));

        //----------------->>

            acount_re=fopen("fiv_pr.dat","r");

            while(fread(&rec_fee,sizeof(rec_fee),1,acount_re) != 0){

                    printf("\n\n\t\t|-> Roll number:  %lu",rec_fee.roll);
                    printf("\n\n\t\t|-> Name:  %s",rec_fee.name);
                    printf("\n\n\t\t|-> Date:  %s",rec_fee.date);
                    printf("\n\n\t\t|-> Payment:  %f",rec_fee.recive);
                    printf("\n\n\t\t|-> Dew:  %f",rec_fee.arrears);
                    printf("\n\n\t\t| ------------------------------------------------------- ");
                    printf("\n\n\n\t\t");
            }
            fclose(acount_re);


asp_regq:

            ksp=0;
            printf("\n\n\t\t|--- BACK Than Type [ 0 ] : ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto fiv_pt;
            }
            else{
                goto asp_regq;
            }

     }


     /* Search account ****************88 */


     if(ke==5){
     system("cls");


            FILE *ser_acc;
            unsigned long int se_roll=0;
            int i,ke;


            i=4;
            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>

                                ser_acc=fopen("fiv_pr.dat","r");

                                gotoxy(78,3);
                                printf(" SEARCH ACCOUNT ");
                                gotoxy(70,13);
                                printf("Type Roll number:  ");
                                scanf("%lu",&se_roll);
                                fflush(stdin);

                                    while(fread(&rec_fee,sizeof(rec_fee),1,ser_acc) != 0){

                                    if(se_roll==rec_fee.roll){

                                            gotoxy(28,2);
                                            printf(" VIEW PAYMENT ");
                                            gotoxy(15,7);
                                            printf("Roll Number: %lu",rec_fee.roll);
                                            gotoxy(15,9);
                                            printf("Name: %s",rec_fee.name);
                                            gotoxy(15,11);
                                            printf("Date: %s",rec_fee.date);
                                            gotoxy(15,13);
                                            printf("Pay: %f",rec_fee.recive);
                                            gotoxy(15,15);
                                            printf("Dew: %f",rec_fee.arrears);

                                    }

                                }
                                fclose(ser_acc);
            int ksp;
    assf_reg:

            ksp=0;

            gotoxy(15,23);
            printf("BACK Than Type [ 0 ] : ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto fiv_pt;
            }
            else{
                goto assf_reg;
            }

     }


     if(ke==0){
        system("cls");
        return 135;
     }
     else{
        system("cls");
        goto fiv_pt;
     }

    return 0;
}




int six_sems(){


    int i,ke;

six_pt:

    i=4;
    gotoxy(8,1);
    draw(100);
    gotoxy(8,2);
    draw_two(100);
    gotoxy(8,3);
    draw(100);

    while(i<25){
        gotoxy(8,i);
        printf("%c",219);
        printf("%c",177);
        printf("%c",219);
        draw_sp(96);
        printf("%c",219);

        i++;
    }
    i=4;
    while(i<25){
        gotoxy(65,i);
        printf("%c",177);
        printf("%c",219);

        i++;
    }
    i=66;
    while(i<108){
        gotoxy(i,4);
        printf("%c",254);
        gotoxy(i,24);
        printf("%c",254);
        i++;
    }
    gotoxy(8,25);
    draw(100);
    gotoxy(8,26);
    draw_two(100);
    gotoxy(33,26);
    printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
    gotoxy(8,27);
    draw(100);

// ---------------->>

    gotoxy(75,1);
    time_t mytime;
    mytime=time(NULL);
    printf(ctime(&mytime));
//----------------->>

    gotoxy(30,2);
    printf(" STUDENT ACCOUNT ");
    gotoxy(15,5);
    printf("%c%c%c",213,205,205);
    gotoxy(15,6);
    printf("%c 1.1st Semester",195);
    gotoxy(15,7);
    printf("%c%c%c",213,205,205);
    gotoxy(15,8);
    printf("%c 2.2nd Semester",195);
    gotoxy(15,9);
    printf("%c%c%c",213,205,205);
    gotoxy(15,10);
    printf("%c 3.3rd Semester",195);
    gotoxy(15,11);
    printf("%c%c%c",213,205,205);
    gotoxy(15,12);
    printf("%c 4.4th Semester",195);
    gotoxy(15,13);
    printf("%c%c%c",213,205,205);
    gotoxy(15,14);
    printf("%c 5.5th Semester",195);
    gotoxy(15,15);
    printf("%c%c%c",213,205,205);
    gotoxy(15,16);
    printf("%c <<< 6.6th Semester >>>",195);
    gotoxy(15,17);
    printf("%c%c%c",213,205,205);
    gotoxy(15,18);
    printf("%c 7.7th Semester",195);
    gotoxy(15,19);
    printf("%c%c%c",213,205,205);
    gotoxy(15,20);
    printf("%c 8.8th Semester",195);
    gotoxy(15,21);
    printf("%c%c%c",213,205,205);
    gotoxy(15,22);
    printf("%c",179);
    gotoxy(15,23);
    printf("%c 0.BACK",195);

   /// ====>>>
    gotoxy(80,3);
    printf(" 6TH SEMESTER ");
    gotoxy(70,8);
    printf("=> 1.Student Account Registration");
    gotoxy(70,9);
    printf("=> 2.View Student Account");
    gotoxy(70,10);
    printf("=> 3.Payment");
    gotoxy(70,11);
    printf("=> 4.View Student Dew");
    gotoxy(70,12);
    printf("=> 5.Search Account");
    gotoxy(70,14);
    printf("=> 0.BACK");

    /// =====>>
    ke=0;
    gotoxy(70,23);
    printf("Please Type Selected Number:  ");
    scanf("%d",&ke);
    fflush(stdin);


     /* Student account registration */

     if(ke==1){

        FILE *acount;
        int i,ksp;
        unsigned long int st_roll;
        system("cls");


            i=4;
            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>


            gotoxy(28,2);
            printf(" ACCOUNT REGISTITON ");
            gotoxy(15,7);
            printf("Type roll number: ");
            gotoxy(15,9);
            printf("Name: ");
            gotoxy(15,11);
            printf("Semester: ");
            gotoxy(15,13);
            printf("Semester fee: ");
            gotoxy(15,15);
            printf("Other fee cause: ");
            gotoxy(15,17);
            printf("Other fee: ");
            gotoxy(15,19);
            printf("Total: ");



            gotoxy(40,7);
            scanf("%lu",&fee_col.roll);
            st_roll=fee_col.roll;
            fflush(stdin);
            gotoxy(40,9);
            gets(fee_col.name);
            gotoxy(40,11);
            gets(fee_col.semester);
            gotoxy(40,13);
            scanf("%f",&fee_col.sem_fee);
            fflush(stdin);
            gotoxy(40,15);
            gets(fee_col.other_cos);
            gotoxy(40,17);
            scanf("%f",&fee_col.other_fee);
            fflush(stdin);
            gotoxy(40,19);
            fee_col.total=fee_col.sem_fee+fee_col.other_fee;
            printf("%f",fee_col.total);

            acount=fopen("six_st_account.dat","a");

            fwrite(&fee_col,sizeof(fee_col),1,acount);
            fflush(acount);
            fclose(acount);

            /* Read form file */

            acount=fopen("six_st_account.dat","r");

            while(fread(&fee_col,sizeof(fee_col),1,acount) != 0){
                if(st_roll==fee_col.roll){

                    gotoxy(85,3);
                    printf(" SAVE ");
                    gotoxy(70,6);
                    printf("Roll number:  %lu",fee_col.roll);
                    gotoxy(70,7);
                    printf("Name:  %s",fee_col.name);
                    gotoxy(70,8);
                    printf("Semester:  %s",fee_col.semester);
                    gotoxy(70,9);
                    printf("Semester fee:  %f",fee_col.sem_fee);
                    gotoxy(70,10);
                    printf("Other expenc [text only]:  %s",fee_col.other_cos);
                    gotoxy(70,11);
                    printf("Other fee [amount]:  %f",fee_col.other_fee);
                    gotoxy(70,12);
                    printf("Total: %f",fee_col.total);
                }
            }
            fclose(acount);

acsccs_reg:

            ksp=0;
            gotoxy(70,23);
            printf("BACK Than Type [ 0 ] :  ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto six_pt;
            }
            else{
                goto acsccs_reg;
            }

     }



    /* view student account     ============== */

     if(ke==2){
     system("cls");

     FILE *acount_re;
     int ksp;

        // ---------------->>

            gotoxy(60,7);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));

        //----------------->>

            acount_re=fopen("six_st_account.dat","r");


            while(fread(&fee_col,sizeof(fee_col),1,acount_re) != 0){

                    printf("\n\n\t\t|-> Roll number:  %lu",fee_col.roll);
                    printf("\n\n\t\t|-> Name:  %s",fee_col.name);
                    printf("\n\n\t\t|-> Semester:  %s",fee_col.semester);
                    printf("\n\n\t\t|-> Semester fee:  %f",fee_col.sem_fee);
                    printf("\n\n\t\t|-> Other expenc [text only]:  %s",fee_col.other_cos);
                    printf("\n\n\t\t|-> Other fee [amount]:  %f",fee_col.other_fee);
                    printf("\n\n\t\t|-> Total: %f",fee_col.total);
                    printf("\n\n\t\t| ------------------------------------------------------- ");
                    printf("\n\n\n\t\t");
            }
            fclose(acount_re);


aspssc_reg:

            ksp=0;
            printf("\n\n\t\t|--- BACK Than Type [ 0 ] : ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto six_pt;
            }
            else{
                goto aspssc_reg;
            }

     }



     /* payment op =================== */

     if(ke==3){
     system("cls");

            int i, o, eg;

            gotoxy(38,3);
            printf("INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY");

            gotoxy(28,5);
            for(i=0;i<60;i++){
                printf("%c",177);
            }
            for(i=0;i<8;i++){
                    printf("\n\t\t\t    %c",177);
                for(o=0;o<58;o++){
                    printf(" ");
                }
            printf("%c",177);
            }
            gotoxy(28,14);
            for(i=0;i<60;i++){
                printf("%c",177);
            }

            gotoxy(35,8);
            printf("%c If You Want Add New Payment Then Press [1]",219);
            gotoxy(35,10);
            printf("%c If You Want Edit Any Payment Then Press [2]",219);
            gotoxy(48,12);
            printf("Select Any: ");
            scanf("%d",&eg);
            fflush(stdin);


    /*   add new payment ********************************* */

        if(eg==1){
        system("cls");

            FILE *opn,*pray;
            int i=4;
            unsigned long int get_rl=0;

            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>


            gotoxy(28,2);
            printf(" ADD PAYMENT ");
            gotoxy(15,7);
            printf("Type roll number: ");
            gotoxy(15,9);
            printf("Name: ");
            gotoxy(15,11);
            printf("Date: ");
            gotoxy(15,13);
            printf("Total: ");
            gotoxy(15,15);
            printf("Now pay: ");
            gotoxy(15,17);
            printf("Dew: ");



                    opn=fopen("six_st_account.dat","r");
                    pray=fopen("six_pr.dat","a");

                    gotoxy(45,7);
                    scanf("%lu",&rec_fee.roll);
                    get_rl=rec_fee.roll;
                    fflush(stdin);

                    while(fread(&fee_col,sizeof(fee_col),1,opn) != 0){

                    if(rec_fee.roll==fee_col.roll ){


                    gotoxy(45,9);
                    strcpy(rec_fee.name,fee_col.name);
                    printf("%s",rec_fee.name);

                    gotoxy(45,11);
                    gets(rec_fee.date);
                    gotoxy(45,13);
                    printf("%f",fee_col.total);
                    fflush(stdin);
                    gotoxy(45,15);
                    scanf("%f",&rec_fee.recive);
                    fflush(stdin);

                    rec_fee.arrears=fee_col.total-rec_fee.recive;
                    gotoxy(45,17);
                    printf("%f",rec_fee.arrears);
                    fflush(stdin);
                    fclose(opn);

                        }
                    }

                    fwrite(&rec_fee,sizeof(rec_fee),1,pray);
                    fclose(pray);

                    /* view other sub menu */

                    pray=fopen("six_pr.dat","r");

                    while(fread(&rec_fee,sizeof(rec_fee),1,pray) != 0){

                            if(get_rl==rec_fee.roll){

                                gotoxy(85,3);
                                printf(" SAVE ");
                                gotoxy(70,6);
                                printf("Roll number:  %lu",rec_fee.roll);
                                gotoxy(70,7);
                                printf("Name:  %s",rec_fee.name);
                                gotoxy(70,8);
                                printf("Date:  %s",rec_fee.date);
                                gotoxy(70,9);
                                printf("Total:  %f",rec_fee.total);
                                gotoxy(70,10);
                                printf("Now pay:  %f",rec_fee.recive);
                                gotoxy(70,11);
                                printf("Dew:  %f",rec_fee.arrears);
                            }
                    }

                    int k=0;
            fcsto:
                    gotoxy(70,23);
                    printf("Type [ 0 ] Than BACK :");
                    scanf("%d",&k);
                    fflush(stdin);
                    if(k==0){
                        system("cls");
                        goto six_pt;
                    }
                    else{
                        goto fcsto;
                    }
            }





        /* Edit payment menu **************************************** */

        else if(eg==2){
            system("cls");

            FILE *prays;
            int i;
            unsigned long int ik_int=0;


            i=4;
            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>


            gotoxy(28,2);
            printf(" EDIT PAYMENT ");
            gotoxy(15,7);
            printf("Type roll number: ");
            gotoxy(15,9);
            printf("Name: ");
            gotoxy(15,11);
            printf("Date: ");
            gotoxy(15,13);
            printf("Total: ");
            gotoxy(15,15);
            printf("Now pay: ");
            gotoxy(15,17);
            printf("Dew: ");


                    prays=fopen("six_pr.dat","r+");

                    gotoxy(45,7);
                    scanf("%lu",&ik_int);
                    fflush(stdin);

                    while(fread(&rec_fee,sizeof(rec_fee),1,prays) != 0){

                    if(ik_int==rec_fee.roll){

                    gotoxy(45,9);
                    printf("%s",rec_fee.name);
                    fflush(stdin);

                    gotoxy(45,11);
                    gets(rec_fee.date);
                    gotoxy(45,13);
                    printf("%f",rec_fee.arrears);
                    fflush(stdin);
                    gotoxy(45,15);
                    scanf("%f",&rec_fee.recive);
                    fflush(stdin);

                    rec_fee.arrears=rec_fee.arrears-rec_fee.recive;
                    gotoxy(45,17);
                    printf("%f",rec_fee.arrears);

                    fseek(prays,-sizeof(rec_fee),SEEK_CUR);
                    fwrite(&rec_fee,sizeof(rec_fee),1,prays);
                    fflush(prays);
                    fclose(prays);
                    }
                    fflush(stdin);
                }

                prays=fopen("six_pr.dat","r");


                while(fread(&rec_fee,sizeof(rec_fee),1,prays) != 0){

                            if(ik_int==rec_fee.roll){

                                gotoxy(85,3);
                                printf(" SAVE ");
                                gotoxy(70,6);
                                printf("Roll number:  %lu",rec_fee.roll);
                                gotoxy(70,7);
                                printf("Name:  %s",rec_fee.name);
                                gotoxy(70,8);
                                printf("Date:  %s",rec_fee.date);
                                gotoxy(70,9);
                                printf("Total:  %f",rec_fee.total);
                                gotoxy(70,10);
                                printf("Now pay:  %f",rec_fee.recive);
                                gotoxy(70,11);
                                printf("Dew:  %f",rec_fee.arrears);
                            }
                    }

                    int k=0;
            fcstv:
                    gotoxy(70,23);
                    printf("Type [ 0 ] Than BACK : ");
                    scanf("%d",&k);
                    fflush(stdin);
                    if(k==0){
                        system("cls");
                        goto six_pt;
                    }
                    else{
                        goto fcstv;
                    }
            }

     }


     /* View payment token ****************************** */

     if(ke==4){
     system("cls");


     FILE *acount_re;
     int ksp;

        // ---------------->>

            gotoxy(60,7);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));

        //----------------->>

            acount_re=fopen("six_pr.dat","r");

            while(fread(&rec_fee,sizeof(rec_fee),1,acount_re) != 0){

                    printf("\n\n\t\t|-> Roll number:  %lu",rec_fee.roll);
                    printf("\n\n\t\t|-> Name:  %s",rec_fee.name);
                    printf("\n\n\t\t|-> Date:  %s",rec_fee.date);
                    printf("\n\n\t\t|-> Payment:  %f",rec_fee.recive);
                    printf("\n\n\t\t|-> Dew:  %f",rec_fee.arrears);
                    printf("\n\n\t\t| ------------------------------------------------------- ");
                    printf("\n\n\n\t\t");
            }
            fclose(acount_re);


asp_regj:

            ksp=0;
            printf("\n\n\t\t|--- BACK Than Type [ 0 ] : ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto six_pt;
            }
            else{
                goto asp_regj;
            }

     }


     /* Search account ****************88 */


     if(ke==5){
     system("cls");


            FILE *ser_acc;
            unsigned long int se_roll=0;
            int i,ke;


            i=4;
            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>

                                ser_acc=fopen("six_pr.dat","r");

                                gotoxy(78,3);
                                printf(" SEARCH ACCOUNT ");
                                gotoxy(70,13);
                                printf("Type Roll number:  ");
                                scanf("%lu",&se_roll);
                                fflush(stdin);

                                    while(fread(&rec_fee,sizeof(rec_fee),1,ser_acc) != 0){

                                    if(se_roll==rec_fee.roll){

                                            gotoxy(28,2);
                                            printf(" VIEW PAYMENT ");
                                            gotoxy(15,7);
                                            printf("Roll Number: %lu",rec_fee.roll);
                                            gotoxy(15,9);
                                            printf("Name: %s",rec_fee.name);
                                            gotoxy(15,11);
                                            printf("Date: %s",rec_fee.date);
                                            gotoxy(15,13);
                                            printf("Pay: %f",rec_fee.recive);
                                            gotoxy(15,15);
                                            printf("Dew: %f",rec_fee.arrears);

                                    }

                                }
                                fclose(ser_acc);
            int ksp;
    assws_reg:

            ksp=0;

            gotoxy(15,23);
            printf("BACK Than Type [ 0 ] : ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto six_pt;
            }
            else{
                goto assws_reg;
            }

     }


     if(ke==0){
        system("cls");
        return 145;

     }
     else{
        system("cls");
        goto six_pt;
     }
     return 0;

}





int sev_sems(){


    int i,ke;

sev_pt:

    i=4;
    gotoxy(8,1);
    draw(100);
    gotoxy(8,2);
    draw_two(100);
    gotoxy(8,3);
    draw(100);

    while(i<25){
        gotoxy(8,i);
        printf("%c",219);
        printf("%c",177);
        printf("%c",219);
        draw_sp(96);
        printf("%c",219);

        i++;
    }
    i=4;
    while(i<25){
        gotoxy(65,i);
        printf("%c",177);
        printf("%c",219);

        i++;
    }
    i=66;
    while(i<108){
        gotoxy(i,4);
        printf("%c",254);
        gotoxy(i,24);
        printf("%c",254);
        i++;
    }
    gotoxy(8,25);
    draw(100);
    gotoxy(8,26);
    draw_two(100);
    gotoxy(33,26);
    printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
    gotoxy(8,27);
    draw(100);

// ---------------->>

    gotoxy(75,1);
    time_t mytime;
    mytime=time(NULL);
    printf(ctime(&mytime));
//----------------->>

    gotoxy(30,2);
    printf(" STUDENT ACCOUNT ");
    gotoxy(15,5);
    printf("%c%c%c",213,205,205);
    gotoxy(15,6);
    printf("%c 1.1st Semester",195);
    gotoxy(15,7);
    printf("%c%c%c",213,205,205);
    gotoxy(15,8);
    printf("%c 2.2nd Semester",195);
    gotoxy(15,9);
    printf("%c%c%c",213,205,205);
    gotoxy(15,10);
    printf("%c 3.3rd Semester",195);
    gotoxy(15,11);
    printf("%c%c%c",213,205,205);
    gotoxy(15,12);
    printf("%c 4.4th Semester",195);
    gotoxy(15,13);
    printf("%c%c%c",213,205,205);
    gotoxy(15,14);
    printf("%c 5.5th Semester",195);
    gotoxy(15,15);
    printf("%c%c%c",213,205,205);
    gotoxy(15,16);
    printf("%c 6.6th Semester",195);
    gotoxy(15,17);
    printf("%c%c%c",213,205,205);
    gotoxy(15,18);
    printf("%c <<< 7.7th Semester >>>",195);
    gotoxy(15,19);
    printf("%c%c%c",213,205,205);
    gotoxy(15,20);
    printf("%c 8.8th Semester",195);
    gotoxy(15,21);
    printf("%c%c%c",213,205,205);
    gotoxy(15,22);
    printf("%c",179);
    gotoxy(15,23);
    printf("%c 0.BACK",195);

   /// ====>>>
    gotoxy(80,3);
    printf(" 7TH SEMESTER ");
    gotoxy(70,8);
    printf("=> 1.Student Account Registration");
    gotoxy(70,9);
    printf("=> 2.View Student Account");
    gotoxy(70,10);
    printf("=> 3.Payment");
    gotoxy(70,11);
    printf("=> 4.View Student Dew");
    gotoxy(70,12);
    printf("=> 5.Search Account");
    gotoxy(70,14);
    printf("=> 0.BACK");

    /// =====>>
    ke=0;
    gotoxy(70,23);
    printf("Please Type Selected Number:  ");
     scanf("%d",&ke);
     fflush(stdin);

      /* Student account registration */

     if(ke==1){

        FILE *acount;
        int i,ksp;
        unsigned long int st_roll;
        system("cls");


            i=4;
            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>


            gotoxy(28,2);
            printf(" ACCOUNT REGISTITON ");
            gotoxy(15,7);
            printf("Type roll number: ");
            gotoxy(15,9);
            printf("Name: ");
            gotoxy(15,11);
            printf("Semester: ");
            gotoxy(15,13);
            printf("Semester fee: ");
            gotoxy(15,15);
            printf("Other fee cause: ");
            gotoxy(15,17);
            printf("Other fee: ");
            gotoxy(15,19);
            printf("Total: ");



            gotoxy(40,7);
            scanf("%lu",&fee_col.roll);
            st_roll=fee_col.roll;
            fflush(stdin);
            gotoxy(40,9);
            gets(fee_col.name);
            gotoxy(40,11);
            gets(fee_col.semester);
            gotoxy(40,13);
            scanf("%f",&fee_col.sem_fee);
            fflush(stdin);
            gotoxy(40,15);
            gets(fee_col.other_cos);
            gotoxy(40,17);
            scanf("%f",&fee_col.other_fee);
            fflush(stdin);
            gotoxy(40,19);
            fee_col.total=fee_col.sem_fee+fee_col.other_fee;
            printf("%f",fee_col.total);

            acount=fopen("seven_st_account.dat","a");

            fwrite(&fee_col,sizeof(fee_col),1,acount);
            fflush(acount);
            fclose(acount);

            /* Read form file */

            acount=fopen("seven_st_account.dat","r");

            while(fread(&fee_col,sizeof(fee_col),1,acount) != 0){
                if(st_roll==fee_col.roll){

                    gotoxy(85,3);
                    printf(" SAVE ");
                    gotoxy(70,6);
                    printf("Roll number:  %lu",fee_col.roll);
                    gotoxy(70,7);
                    printf("Name:  %s",fee_col.name);
                    gotoxy(70,8);
                    printf("Semester:  %s",fee_col.semester);
                    gotoxy(70,9);
                    printf("Semester fee:  %f",fee_col.sem_fee);
                    gotoxy(70,10);
                    printf("Other expenc [text only]:  %s",fee_col.other_cos);
                    gotoxy(70,11);
                    printf("Other fee [amount]:  %f",fee_col.other_fee);
                    gotoxy(70,12);
                    printf("Total: %f",fee_col.total);
                }
            }
            fclose(acount);

acscrd_reg:

            ksp=0;
            gotoxy(70,23);
            printf("BACK Than Type [ 0 ] :  ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto sev_pt;
            }
            else{
                goto acscrd_reg;
            }

     }



    /* view student account     ============== */

     if(ke==2){
     system("cls");

     FILE *acount_re;
     int ksp;

        // ---------------->>

            gotoxy(60,7);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));

        //----------------->>

            acount_re=fopen("seven_st_account.dat","r");


            while(fread(&fee_col,sizeof(fee_col),1,acount_re) != 0){

                    printf("\n\n\t\t|-> Roll number:  %lu",fee_col.roll);
                    printf("\n\n\t\t|-> Name:  %s",fee_col.name);
                    printf("\n\n\t\t|-> Semester:  %s",fee_col.semester);
                    printf("\n\n\t\t|-> Semester fee:  %f",fee_col.sem_fee);
                    printf("\n\n\t\t|-> Other expenc [text only]:  %s",fee_col.other_cos);
                    printf("\n\n\t\t|-> Other fee [amount]:  %f",fee_col.other_fee);
                    printf("\n\n\t\t|-> Total: %f",fee_col.total);
                    printf("\n\n\t\t| ------------------------------------------------------- ");
                    printf("\n\n\n\t\t");
            }
            fclose(acount_re);


aspssf_reg:

            ksp=0;
            printf("\n\n\t\t|--- BACK Than Type [ 0 ] : ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto sev_pt;
            }
            else{
                goto aspssf_reg;
            }

     }



     /* payment op =================== */

     if(ke==3){
     system("cls");

            int i, o, eg;

            gotoxy(38,3);
            printf("INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY");

            gotoxy(28,5);
            for(i=0;i<60;i++){
                printf("%c",177);
            }
            for(i=0;i<8;i++){
                    printf("\n\t\t\t    %c",177);
                for(o=0;o<58;o++){
                    printf(" ");
                }
            printf("%c",177);
            }
            gotoxy(28,14);
            for(i=0;i<60;i++){
                printf("%c",177);
            }

            gotoxy(35,8);
            printf("%c If You Want Add New Payment Then Press [1]",219);
            gotoxy(35,10);
            printf("%c If You Want Edit Any Payment Then Press [2]",219);
            gotoxy(48,12);
            printf("Select Any: ");
            scanf("%d",&eg);
            fflush(stdin);


    /*   add new payment ********************************* */

        if(eg==1){
        system("cls");

            FILE *opn,*pray;
            int i=4;
            unsigned long int get_rl=0;

            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>


            gotoxy(28,2);
            printf(" ADD PAYMENT ");
            gotoxy(15,7);
            printf("Type roll number: ");
            gotoxy(15,9);
            printf("Name: ");
            gotoxy(15,11);
            printf("Date: ");
            gotoxy(15,13);
            printf("Total: ");
            gotoxy(15,15);
            printf("Now pay: ");
            gotoxy(15,17);
            printf("Dew: ");



                    opn=fopen("seven_st_account.dat","r");
                    pray=fopen("sev_pr.dat","a");

                    gotoxy(45,7);
                    scanf("%lu",&rec_fee.roll);
                    get_rl=rec_fee.roll;
                    fflush(stdin);

                    while(fread(&fee_col,sizeof(fee_col),1,opn) != 0){

                    if(rec_fee.roll==fee_col.roll ){


                    gotoxy(45,9);
                    strcpy(rec_fee.name,fee_col.name);
                    printf("%s",rec_fee.name);

                    gotoxy(45,11);
                    gets(rec_fee.date);
                    gotoxy(45,13);
                    printf("%f",fee_col.total);
                    fflush(stdin);
                    gotoxy(45,15);
                    scanf("%f",&rec_fee.recive);
                    fflush(stdin);

                    rec_fee.arrears=fee_col.total-rec_fee.recive;
                    gotoxy(45,17);
                    printf("%f",rec_fee.arrears);
                    fflush(stdin);
                    fclose(opn);

                        }
                    }

                    fwrite(&rec_fee,sizeof(rec_fee),1,pray);
                    fclose(pray);

                    /* view other sub menu */

                    pray=fopen("sev_pr.dat","r");

                    while(fread(&rec_fee,sizeof(rec_fee),1,pray) != 0){

                            if(get_rl==rec_fee.roll){

                                gotoxy(85,3);
                                printf(" SAVE ");
                                gotoxy(70,6);
                                printf("Roll number:  %lu",rec_fee.roll);
                                gotoxy(70,7);
                                printf("Name:  %s",rec_fee.name);
                                gotoxy(70,8);
                                printf("Date:  %s",rec_fee.date);
                                gotoxy(70,9);
                                printf("Total:  %f",rec_fee.total);
                                gotoxy(70,10);
                                printf("Now pay:  %f",rec_fee.recive);
                                gotoxy(70,11);
                                printf("Dew:  %f",rec_fee.arrears);
                            }
                    }

                    int k=0;
            fcstn:
                    gotoxy(70,23);
                    printf("Type [ 0 ] Than BACK :");
                    scanf("%d",&k);
                    fflush(stdin);
                    if(k==0){
                        system("cls");
                        goto sev_pt;
                    }
                    else{
                        goto fcstn;
                    }
            }





        /* Edit payment menu **************************************** */

        else if(eg==2){
            system("cls");

            FILE *prays;
            int i;
            unsigned long int ik_int=0;


            i=4;
            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>


            gotoxy(28,2);
            printf(" EDIT PAYMENT ");
            gotoxy(15,7);
            printf("Type roll number: ");
            gotoxy(15,9);
            printf("Name: ");
            gotoxy(15,11);
            printf("Date: ");
            gotoxy(15,13);
            printf("Total: ");
            gotoxy(15,15);
            printf("Now pay: ");
            gotoxy(15,17);
            printf("Dew: ");


                    prays=fopen("sev_pr.dat","r+");

                    gotoxy(45,7);
                    scanf("%lu",&ik_int);
                    fflush(stdin);

                    while(fread(&rec_fee,sizeof(rec_fee),1,prays) != 0){

                    if(ik_int==rec_fee.roll){

                    gotoxy(45,9);
                    printf("%s",rec_fee.name);
                    fflush(stdin);

                    gotoxy(45,11);
                    gets(rec_fee.date);
                    gotoxy(45,13);
                    printf("%f",rec_fee.arrears);
                    fflush(stdin);
                    gotoxy(45,15);
                    scanf("%f",&rec_fee.recive);
                    fflush(stdin);

                    rec_fee.arrears=rec_fee.arrears-rec_fee.recive;
                    gotoxy(45,17);
                    printf("%f",rec_fee.arrears);

                    fseek(prays,-sizeof(rec_fee),SEEK_CUR);
                    fwrite(&rec_fee,sizeof(rec_fee),1,prays);
                    fflush(prays);
                    fclose(prays);
                    }
                    fflush(stdin);
                }

                prays=fopen("sev_pr.dat","r");


                while(fread(&rec_fee,sizeof(rec_fee),1,prays) != 0){

                            if(ik_int==rec_fee.roll){

                                gotoxy(85,3);
                                printf(" SAVE ");
                                gotoxy(70,6);
                                printf("Roll number:  %lu",rec_fee.roll);
                                gotoxy(70,7);
                                printf("Name:  %s",rec_fee.name);
                                gotoxy(70,8);
                                printf("Date:  %s",rec_fee.date);
                                gotoxy(70,9);
                                printf("Total:  %f",rec_fee.total);
                                gotoxy(70,10);
                                printf("Now pay:  %f",rec_fee.recive);
                                gotoxy(70,11);
                                printf("Dew:  %f",rec_fee.arrears);
                            }
                    }

                    int k=0;
            fcstm:
                    gotoxy(70,23);
                    printf("Type [ 0 ] Than BACK : ");
                    scanf("%d",&k);
                    fflush(stdin);
                    if(k==0){
                        system("cls");
                        goto sev_pt;
                    }
                    else{
                        goto fcstm;
                    }
            }

     }


     /* View payment token ****************************** */

     if(ke==4){
     system("cls");


     FILE *acount_re;
     int ksp;

        // ---------------->>

            gotoxy(60,7);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));

        //----------------->>

            acount_re=fopen("sev_pr.dat","r");

            while(fread(&rec_fee,sizeof(rec_fee),1,acount_re) != 0){

                    printf("\n\n\t\t|-> Roll number:  %lu",rec_fee.roll);
                    printf("\n\n\t\t|-> Name:  %s",rec_fee.name);
                    printf("\n\n\t\t|-> Date:  %s",rec_fee.date);
                    printf("\n\n\t\t|-> Payment:  %f",rec_fee.recive);
                    printf("\n\n\t\t|-> Dew:  %f",rec_fee.arrears);
                    printf("\n\n\t\t| ------------------------------------------------------- ");
                    printf("\n\n\n\t\t");
            }
            fclose(acount_re);


asp_regx:

            ksp=0;
            printf("\n\n\t\t|--- BACK Than Type [ 0 ] : ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto sev_pt;
            }
            else{
                goto asp_regx;
            }

     }


     /* Search account ****************88 */


     if(ke==5){
     system("cls");


            FILE *ser_acc;
            unsigned long int se_roll=0;
            int i,ke;


            i=4;
            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>

                                ser_acc=fopen("sev_pr.dat","r");

                                gotoxy(78,3);
                                printf(" SEARCH ACCOUNT ");
                                gotoxy(70,13);
                                printf("Type Roll number:  ");
                                scanf("%lu",&se_roll);
                                fflush(stdin);

                                    while(fread(&rec_fee,sizeof(rec_fee),1,ser_acc) != 0){

                                    if(se_roll==rec_fee.roll){

                                            gotoxy(28,2);
                                            printf(" VIEW PAYMENT ");
                                            gotoxy(15,7);
                                            printf("Roll Number: %lu",rec_fee.roll);
                                            gotoxy(15,9);
                                            printf("Name: %s",rec_fee.name);
                                            gotoxy(15,11);
                                            printf("Date: %s",rec_fee.date);
                                            gotoxy(15,13);
                                            printf("Pay: %f",rec_fee.recive);
                                            gotoxy(15,15);
                                            printf("Dew: %f",rec_fee.arrears);

                                    }

                                }
                                fclose(ser_acc);
            int ksp;
    assxs_reg:

            ksp=0;

            gotoxy(15,23);
            printf("BACK Than Type [ 0 ] : ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto sev_pt;
            }
            else{
                goto assxs_reg;
            }

     }




     if(ke==0){
        system("cls");
        return 155;
     }
     else{
        system("cls");
        goto sev_pt;
     }

    return 0;
}




int eght_sems(){


    int i,ke;

egh_pt:

    i=4;
    gotoxy(8,1);
    draw(100);
    gotoxy(8,2);
    draw_two(100);
    gotoxy(8,3);
    draw(100);

    while(i<25){
        gotoxy(8,i);
        printf("%c",219);
        printf("%c",177);
        printf("%c",219);
        draw_sp(96);
        printf("%c",219);

        i++;
    }
    i=4;
    while(i<25){
        gotoxy(65,i);
        printf("%c",177);
        printf("%c",219);

        i++;
    }
    i=66;
    while(i<108){
        gotoxy(i,4);
        printf("%c",254);
        gotoxy(i,24);
        printf("%c",254);
        i++;
    }
    gotoxy(8,25);
    draw(100);
    gotoxy(8,26);
    draw_two(100);
    gotoxy(33,26);
    printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
    gotoxy(8,27);
    draw(100);

// ---------------->>

    gotoxy(75,1);
    time_t mytime;
    mytime=time(NULL);
    printf(ctime(&mytime));
//----------------->>

    gotoxy(30,2);
    printf(" STUDENT ACCOUNT ");
    gotoxy(15,5);
    printf("%c%c%c",213,205,205);
    gotoxy(15,6);
    printf("%c 1.1st Semester",195);
    gotoxy(15,7);
    printf("%c%c%c",213,205,205);
    gotoxy(15,8);
    printf("%c 2.2nd Semester",195);
    gotoxy(15,9);
    printf("%c%c%c",213,205,205);
    gotoxy(15,10);
    printf("%c 3.3rd Semester",195);
    gotoxy(15,11);
    printf("%c%c%c",213,205,205);
    gotoxy(15,12);
    printf("%c 4.4th Semester",195);
    gotoxy(15,13);
    printf("%c%c%c",213,205,205);
    gotoxy(15,14);
    printf("%c 5.5th Semester",195);
    gotoxy(15,15);
    printf("%c%c%c",213,205,205);
    gotoxy(15,16);
    printf("%c 6.6th Semester",195);
    gotoxy(15,17);
    printf("%c%c%c",213,205,205);
    gotoxy(15,18);
    printf("%c 7.7th Semester",195);
    gotoxy(15,19);
    printf("%c%c%c",213,205,205);
    gotoxy(15,20);
    printf("%c <<< 8.8th Semester >>>",195);
    gotoxy(15,21);
    printf("%c%c%c",213,205,205);
    gotoxy(15,22);
    printf("%c",179);
    gotoxy(15,23);
    printf("%c 0.BACK",195);

   /// ====>>>
    gotoxy(80,3);
    printf(" 8TH SEMESTER ");
    gotoxy(70,8);
    printf("=> 1.Student Account Registration");
    gotoxy(70,9);
    printf("=> 2.View Student Account");
    gotoxy(70,10);
    printf("=> 3.Payment");
    gotoxy(70,11);
    printf("=> 4.View Student Dew");
    gotoxy(70,12);
    printf("=> 5.Search Account");
    gotoxy(70,14);
    printf("=> 0.BACK");

    /// =====>>

    ke=0;
    gotoxy(70,23);
    printf("Please Type Selected Number:  ");
    scanf("%d",&ke);
    fflush(stdin);


     /* Student account registration */

     if(ke==1){

        FILE *acount;
        int i,ksp;
        unsigned long int st_roll;
        system("cls");


            i=4;
            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>


            gotoxy(28,2);
            printf(" ACCOUNT REGISTITON ");
            gotoxy(15,7);
            printf("Type roll number: ");
            gotoxy(15,9);
            printf("Name: ");
            gotoxy(15,11);
            printf("Semester: ");
            gotoxy(15,13);
            printf("Semester fee: ");
            gotoxy(15,15);
            printf("Other fee cause: ");
            gotoxy(15,17);
            printf("Other fee: ");
            gotoxy(15,19);
            printf("Total: ");



            gotoxy(40,7);
            scanf("%lu",&fee_col.roll);
            st_roll=fee_col.roll;
            fflush(stdin);
            gotoxy(40,9);
            gets(fee_col.name);
            gotoxy(40,11);
            gets(fee_col.semester);
            gotoxy(40,13);
            scanf("%f",&fee_col.sem_fee);
            fflush(stdin);
            gotoxy(40,15);
            gets(fee_col.other_cos);
            gotoxy(40,17);
            scanf("%f",&fee_col.other_fee);
            fflush(stdin);
            gotoxy(40,19);
            fee_col.total=fee_col.sem_fee+fee_col.other_fee;
            printf("%f",fee_col.total);

            acount=fopen("eight_st_account.dat","a");

            fwrite(&fee_col,sizeof(fee_col),1,acount);
            fflush(acount);
            fclose(acount);

            /* Read form file */

            acount=fopen("eight_st_account.dat","r");

            while(fread(&fee_col,sizeof(fee_col),1,acount) != 0){
                if(st_roll==fee_col.roll){

                    gotoxy(85,3);
                    printf(" SAVE ");
                    gotoxy(70,6);
                    printf("Roll number:  %lu",fee_col.roll);
                    gotoxy(70,7);
                    printf("Name:  %s",fee_col.name);
                    gotoxy(70,8);
                    printf("Semester:  %s",fee_col.semester);
                    gotoxy(70,9);
                    printf("Semester fee:  %f",fee_col.sem_fee);
                    gotoxy(70,10);
                    printf("Other expenc [text only]:  %s",fee_col.other_cos);
                    gotoxy(70,11);
                    printf("Other fee [amount]:  %f",fee_col.other_fee);
                    gotoxy(70,12);
                    printf("Total: %f",fee_col.total);
                }
            }
            fclose(acount);

acsccm_reg:

            ksp=0;
            gotoxy(70,23);
            printf("BACK Than Type [ 0 ] :  ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto egh_pt;
            }
            else{
                goto acsccm_reg;
            }

     }



    /* view student account     ============== */

     if(ke==2){
     system("cls");

     FILE *acount_re;
     int ksp;

        // ---------------->>

            gotoxy(60,7);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));

        //----------------->>

            acount_re=fopen("eight_st_account.dat","r");


            while(fread(&fee_col,sizeof(fee_col),1,acount_re) != 0){

                    printf("\n\n\t\t|-> Roll number:  %lu",fee_col.roll);
                    printf("\n\n\t\t|-> Name:  %s",fee_col.name);
                    printf("\n\n\t\t|-> Semester:  %s",fee_col.semester);
                    printf("\n\n\t\t|-> Semester fee:  %f",fee_col.sem_fee);
                    printf("\n\n\t\t|-> Other expenc [text only]:  %s",fee_col.other_cos);
                    printf("\n\n\t\t|-> Other fee [amount]:  %f",fee_col.other_fee);
                    printf("\n\n\t\t|-> Total: %f",fee_col.total);
                    printf("\n\n\t\t| ------------------------------------------------------- ");
                    printf("\n\n\n\t\t");
            }
            fclose(acount_re);


aspssn_reg:

            ksp=0;
            printf("\n\n\t\t|--- BACK Than Type [ 0 ] : ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto egh_pt;
            }
            else{
                goto aspssn_reg;
            }

     }



     /* payment op =================== */

     if(ke==3){
     system("cls");

            int i, o, eg;

            gotoxy(38,3);
            printf("INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY");

            gotoxy(28,5);
            for(i=0;i<60;i++){
                printf("%c",177);
            }
            for(i=0;i<8;i++){
                    printf("\n\t\t\t    %c",177);
                for(o=0;o<58;o++){
                    printf(" ");
                }
            printf("%c",177);
            }
            gotoxy(28,14);
            for(i=0;i<60;i++){
                printf("%c",177);
            }

            gotoxy(35,8);
            printf("%c If You Want Add New Payment Then Press [1]",219);
            gotoxy(35,10);
            printf("%c If You Want Edit Any Payment Then Press [2]",219);
            gotoxy(48,12);
            printf("Select Any: ");
            scanf("%d",&eg);
            fflush(stdin);


    /*   add new payment ********************************* */

        if(eg==1){
        system("cls");

            FILE *opn,*pray;
            int i=4;
            unsigned long int get_rl=0;

            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>


            gotoxy(28,2);
            printf(" ADD PAYMENT ");
            gotoxy(15,7);
            printf("Type roll number: ");
            gotoxy(15,9);
            printf("Name: ");
            gotoxy(15,11);
            printf("Date: ");
            gotoxy(15,13);
            printf("Total: ");
            gotoxy(15,15);
            printf("Now pay: ");
            gotoxy(15,17);
            printf("Dew: ");



                    opn=fopen("eight_st_account.dat","r");
                    pray=fopen("egh_pr.dat","a");

                    gotoxy(45,7);
                    scanf("%lu",&rec_fee.roll);
                    get_rl=rec_fee.roll;
                    fflush(stdin);

                    while(fread(&fee_col,sizeof(fee_col),1,opn) != 0){

                    if(rec_fee.roll==fee_col.roll ){


                    gotoxy(45,9);
                    strcpy(rec_fee.name,fee_col.name);
                    printf("%s",rec_fee.name);

                    gotoxy(45,11);
                    gets(rec_fee.date);
                    gotoxy(45,13);
                    printf("%f",fee_col.total);
                    fflush(stdin);
                    gotoxy(45,15);
                    scanf("%f",&rec_fee.recive);
                    fflush(stdin);

                    rec_fee.arrears=fee_col.total-rec_fee.recive;
                    gotoxy(45,17);
                    printf("%f",rec_fee.arrears);
                    fflush(stdin);
                    fclose(opn);

                        }
                    }

                    fwrite(&rec_fee,sizeof(rec_fee),1,pray);
                    fclose(pray);

                    /* view other sub menu */

                    pray=fopen("egh_pr.dat","r");

                    while(fread(&rec_fee,sizeof(rec_fee),1,pray) != 0){

                            if(get_rl==rec_fee.roll){

                                gotoxy(85,3);
                                printf(" SAVE ");
                                gotoxy(70,6);
                                printf("Roll number:  %lu",rec_fee.roll);
                                gotoxy(70,7);
                                printf("Name:  %s",rec_fee.name);
                                gotoxy(70,8);
                                printf("Date:  %s",rec_fee.date);
                                gotoxy(70,9);
                                printf("Total:  %f",rec_fee.total);
                                gotoxy(70,10);
                                printf("Now pay:  %f",rec_fee.recive);
                                gotoxy(70,11);
                                printf("Dew:  %f",rec_fee.arrears);
                            }
                    }

                    int k=0;
            fcstg:
                    gotoxy(70,23);
                    printf("Type [ 0 ] Than BACK :");
                    scanf("%d",&k);
                    fflush(stdin);
                    if(k==0){
                        system("cls");
                        goto egh_pt;
                    }
                    else{
                        goto fcstg;
                    }
            }





        /* Edit payment menu **************************************** */

        else if(eg==2){
            system("cls");

            FILE *prays;
            int i;
            unsigned long int ik_int=0;


            i=4;
            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>


            gotoxy(28,2);
            printf(" EDIT PAYMENT ");
            gotoxy(15,7);
            printf("Type roll number: ");
            gotoxy(15,9);
            printf("Name: ");
            gotoxy(15,11);
            printf("Date: ");
            gotoxy(15,13);
            printf("Total: ");
            gotoxy(15,15);
            printf("Now pay: ");
            gotoxy(15,17);
            printf("Dew: ");


                    prays=fopen("egh_pr.dat","r+");

                    gotoxy(45,7);
                    scanf("%lu",&ik_int);
                    fflush(stdin);

                    while(fread(&rec_fee,sizeof(rec_fee),1,prays) != 0){

                    if(ik_int==rec_fee.roll){

                    gotoxy(45,9);
                    printf("%s",rec_fee.name);
                    fflush(stdin);

                    gotoxy(45,11);
                    gets(rec_fee.date);
                    gotoxy(45,13);
                    printf("%f",rec_fee.arrears);
                    fflush(stdin);
                    gotoxy(45,15);
                    scanf("%f",&rec_fee.recive);
                    fflush(stdin);

                    rec_fee.arrears=rec_fee.arrears-rec_fee.recive;
                    gotoxy(45,17);
                    printf("%f",rec_fee.arrears);

                    fseek(prays,-sizeof(rec_fee),SEEK_CUR);
                    fwrite(&rec_fee,sizeof(rec_fee),1,prays);
                    fflush(prays);
                    fclose(prays);
                    }
                    fflush(stdin);
                }

                prays=fopen("egh_pr.dat","r");


                while(fread(&rec_fee,sizeof(rec_fee),1,prays) != 0){

                            if(ik_int==rec_fee.roll){

                                gotoxy(85,3);
                                printf(" SAVE ");
                                gotoxy(70,6);
                                printf("Roll number:  %lu",rec_fee.roll);
                                gotoxy(70,7);
                                printf("Name:  %s",rec_fee.name);
                                gotoxy(70,8);
                                printf("Date:  %s",rec_fee.date);
                                gotoxy(70,9);
                                printf("Total:  %f",rec_fee.total);
                                gotoxy(70,10);
                                printf("Now pay:  %f",rec_fee.recive);
                                gotoxy(70,11);
                                printf("Dew:  %f",rec_fee.arrears);
                            }
                    }

                    int k=0;
            fcsth:
                    gotoxy(70,23);
                    printf("Type [ 0 ] Than BACK : ");
                    scanf("%d",&k);
                    fflush(stdin);
                    if(k==0){
                        system("cls");
                        goto egh_pt;
                    }
                    else{
                        goto fcsth;
                    }
            }

     }


     /* View payment token ****************************** */

     if(ke==4){
     system("cls");


     FILE *acount_re;
     int ksp;

        // ---------------->>

            gotoxy(60,7);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));

        //----------------->>

            acount_re=fopen("egh_pr.dat","r");

            while(fread(&rec_fee,sizeof(rec_fee),1,acount_re) != 0){

                    printf("\n\n\t\t|-> Roll number:  %lu",rec_fee.roll);
                    printf("\n\n\t\t|-> Name:  %s",rec_fee.name);
                    printf("\n\n\t\t|-> Date:  %s",rec_fee.date);
                    printf("\n\n\t\t|-> Payment:  %f",rec_fee.recive);
                    printf("\n\n\t\t|-> Dew:  %f",rec_fee.arrears);
                    printf("\n\n\t\t| ------------------------------------------------------- ");
                    printf("\n\n\n\t\t");
            }
            fclose(acount_re);


asppe_reg:

            ksp=0;
            printf("\n\n\t\t|--- BACK Than Type [ 0 ] : ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto egh_pt;
            }
            else{
                goto asppe_reg;
            }

     }


     /* Search account ****************88 */


     if(ke==5){
     system("cls");


            FILE *ser_acc;
            unsigned long int se_roll=0;
            int i,ke;


            i=4;
            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>

                                ser_acc=fopen("egh_pr.dat","r");

                                gotoxy(78,3);
                                printf(" SEARCH ACCOUNT ");
                                gotoxy(70,13);
                                printf("Type Roll number:  ");
                                scanf("%lu",&se_roll);
                                fflush(stdin);

                                    while(fread(&rec_fee,sizeof(rec_fee),1,ser_acc) != 0){

                                    if(se_roll==rec_fee.roll){

                                            gotoxy(28,2);
                                            printf(" VIEW PAYMENT ");
                                            gotoxy(15,7);
                                            printf("Roll Number: %lu",rec_fee.roll);
                                            gotoxy(15,9);
                                            printf("Name: %s",rec_fee.name);
                                            gotoxy(15,11);
                                            printf("Date: %s",rec_fee.date);
                                            gotoxy(15,13);
                                            printf("Pay: %f",rec_fee.recive);
                                            gotoxy(15,15);
                                            printf("Dew: %f",rec_fee.arrears);

                                    }

                                }
                                fclose(ser_acc);
            int ksp;
    assef_reg:

            ksp=0;

            gotoxy(15,23);
            printf("BACK Than Type [ 0 ] : ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto egh_pt;
            }
            else{
                goto assef_reg;
            }

     }




     if(ke==0){
        system("cls");
        return 165;
     }
     else{
        system("cls");
        goto egh_pt;
     }

    return 0;
}




int employe_ac(){

    int i;

emp_rept:

    i=4;
    gotoxy(8,1);
    draw(100);
    gotoxy(8,2);
    draw_two(100);
    gotoxy(8,3);
    draw(100);

    while(i<25){
        gotoxy(8,i);
        printf("%c",219);
        printf("%c",177);
        printf("%c",219);
        draw_sp(96);
        printf("%c",219);

        i++;
    }
    i=4;
    while(i<25){
        gotoxy(65,i);
        printf("%c",177);
        printf("%c",219);

        i++;
    }
    i=66;
    while(i<108){
        gotoxy(i,4);
        printf("%c",254);
        gotoxy(i,24);
        printf("%c",254);
        i++;
    }
    gotoxy(8,25);
    draw(100);
    gotoxy(8,26);
    draw_two(100);
    gotoxy(33,26);
    printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
    gotoxy(8,27);
    draw(100);

// ---------------->>

    gotoxy(75,1);
    time_t mytime;
    mytime=time(NULL);
    printf(ctime(&mytime));
//----------------->>

    gotoxy(30,2);
    printf(" ACCOUNTING ");
    gotoxy(15,5);
    printf("%c%c%c",213,205,205);
    gotoxy(15,6);
    printf("%c 1.Student Account",195);
    gotoxy(15,7);
    printf("%c%c%c",213,205,205);
    gotoxy(15,8);
    printf("%c <<< 2.Employ Account >>>",195);
    gotoxy(15,9);
    printf("%c%c%c",213,205,205);
    gotoxy(15,10);
    printf("%c 3.Income",195);
    gotoxy(15,11);
    printf("%c%c%c",213,205,205);
    gotoxy(15,12);
    printf("%c 4.Expenses",195);
    gotoxy(15,13);
    printf("%c%c%c",213,205,205);
    gotoxy(15,14);
    printf("%c",179);
    gotoxy(15,15);
    printf("%c",179);
    gotoxy(15,16);
    printf("%c",179);
    gotoxy(15,17);
    printf("%c 0.BACK",195);

   /// ====>>>
    gotoxy(79,3);
    printf(" EMPLOY ACCOUNT ");
    gotoxy(70,8);
    printf("=> 1.Employ Account Registration");
    gotoxy(70,9);
    printf("=> 2.View Employ Account");
    gotoxy(70,10);
    printf("=> 3.Search Employ Account");
    gotoxy(70,13);
    printf("=> 0.BACK");

    /// =====>>

    int h;
gpt:
    h=0;
    gotoxy(70,23);
    printf("Please Type Selected Number:  ");
    scanf("%d",&h);
    fflush(stdin);




    if(h==1){
    system("cls");

    FILE *emp_reg;
    unsigned long int yts_r;


            i=4;
            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>


                    gotoxy(25,2);
                    printf(" ACCOUNT REGISTITION ");
                    gotoxy(15,5);
                    printf("Reg number: ");
                    gotoxy(15,7);
                    printf("Name: ");
                    gotoxy(15,9);
                    printf("Post: ");
                    gotoxy(15,11);
                    printf("Date: ");
                    gotoxy(15,13);
                    printf("Total: ");
                    gotoxy(15,15);
                    printf("Now pay: ");
                    gotoxy(15,17);
                    printf("Dew: ");

                    emp_reg=fopen("employ_account.dat","a");

                        gotoxy(35,5);
                        scanf("%lu",&empt_reg.epl);
                        yts_r=empt_reg.epl;
                        fflush(stdin);
                        gotoxy(35,7);
                        gets(empt_reg.name);
                        gotoxy(35,9);
                        gets(empt_reg.post);
                        gotoxy(35,11);
                        gets(empt_reg.date);
                        gotoxy(35,13);
                        scanf("%f",&empt_reg.toatl);
                        fflush(stdin);
                        gotoxy(35,15);
                        scanf("%f",&empt_reg.recive);
                        fflush(stdin);

                        empt_reg.arrears=empt_reg.toatl-empt_reg.recive;
                        gotoxy(35,17);
                        printf("%f",empt_reg.arrears);
                        fflush(stdin);

                    fwrite(&empt_reg,sizeof(empt_reg),1,emp_reg);
                    fflush(emp_reg);
                    fclose(emp_reg);


                    /*  read from other sub menu    */


                    emp_reg=fopen("employ_account.dat","r");

                    while(fread(&empt_reg,sizeof(empt_reg),1,emp_reg) != 0){
                            if(yts_r==empt_reg.epl){
                                    gotoxy(85,3);
                                    printf(" SAVE ");
                                    gotoxy(70,7);
                                    printf("Reg number: %lu",empt_reg.epl);
                                    gotoxy(70,8);
                                    printf("Name: %s",empt_reg.name);
                                    gotoxy(70,9);
                                    printf("Post: %s",empt_reg.post);
                                    gotoxy(70,10);
                                    printf("Date: %s",empt_reg.date);
                                    gotoxy(70,11);
                                    printf("Total: %f",empt_reg.toatl);
                                    gotoxy(70,12);
                                    printf("Now pay: %f",empt_reg.recive);
                                    gotoxy(70,13);
                                    printf("Dew: %f",empt_reg.arrears);
                            }
                    }


            int ksp;
    assfy_reg:

            ksp=0;

            gotoxy(70,23);
            printf("BACK Than Type [ 0 ] : ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto emp_rept;
            }
            else{
                goto assfy_reg;
            }


    }



    if(h==2){
    system("cls");

            FILE *view_empl;

            printf("\n\t\t\t\tINSTITUTE OF COMPUTER SINCE AND TECHNOLOGY");
            printf("\n\t\t\t\t==========================================");
            printf("\n\t\t\t\t\t   VIEW EMPLOY ACCOUNT");
            printf("\n\t\t\t\t\t   -------------------\n\n\n");

            view_empl=fopen("employ_account.dat","r");

            while(fread(&empt_reg,sizeof(empt_reg),1,view_empl) != 0){

                    printf("\n\n\t\t|->Reg number: %lu",empt_reg.epl);
                    printf("\n\n\t\t|->Name: %s",empt_reg.name);
                    printf("\n\n\t\t|->Post: %s",empt_reg.post);
                    printf("\n\n\t\t|->Date: %s",empt_reg.date);
                    printf("\n\n\t\t|->Total: %f",empt_reg.toatl);
                    printf("\n\n\t\t|->Now pay: %f",empt_reg.recive);
                    printf("\n\n\t\t|->Dew: %f",empt_reg.arrears);
                    printf("\n\n\t\t| ------------------------------------------------------- ");
                    printf("\n\n\n\t\t");


            }
            fclose(view_empl);

            int it;
    rt:
            it=2;
            printf("\n\n\t\t\t| -Back ---->  PRESS [ 0 ] & ENTER:  ");
            scanf("%d",&it);
            fflush(stdin);
            if(it==0){
                goto emp_rept;
            }
            else{
                goto rt;
            }
    }



    if(h==3){
    system("cls");

    FILE *viw_emp;
    unsigned long int compit;


            i=4;
            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>

        viw_emp=fopen("employ_account.dat","r");

                    gotoxy(78,3);
                    printf(" SEARCH ACCOUNT ");
                    gotoxy(70,13);
                    printf("Type reg number:  ");
                    scanf("%lu",&compit);
                    fflush(stdin);

                            while(fread(&empt_reg,sizeof(empt_reg),1,viw_emp) != 0){

                            if(compit==empt_reg.epl){

                                    gotoxy(25,2);
                                    printf(" VIEW ACCOUNT ");
                                    gotoxy(15,7);
                                    printf("Name: %s",empt_reg.name);
                                    gotoxy(15,9);
                                    printf("Post: %s",empt_reg.post);
                                    gotoxy(15,11);
                                    printf("Date: %s",empt_reg.date);
                                    gotoxy(15,13);
                                    printf("Total: %f",empt_reg.toatl);
                                    gotoxy(15,15);
                                    printf("Now pay: %f",empt_reg.recive);
                                    gotoxy(15,17);
                                    printf("Dew: %f",empt_reg.arrears);

                                    }
                                }
                            fclose(viw_emp);


            int ksp;
    assfs_reg:

            ksp=0;

            gotoxy(15,23);
            printf("BACK Than Type [ 0 ] : ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto emp_rept;
            }
            else{
                goto assfs_reg;
            }
    }


    if(h==0){
        system("cls");
        return 390;
    }

}



int income_menu(){

    int i=4;

    gotoxy(8,1);
    draw(100);
    gotoxy(8,2);
    draw_two(100);
    gotoxy(8,3);
    draw(100);

    while(i<25){
        gotoxy(8,i);
        printf("%c",219);
        printf("%c",177);
        printf("%c",219);
        draw_sp(96);
        printf("%c",219);

        i++;
    }
    i=4;
    while(i<25){
        gotoxy(65,i);
        printf("%c",177);
        printf("%c",219);

        i++;
    }
    i=66;
    while(i<108){
        gotoxy(i,4);
        printf("%c",254);
        gotoxy(i,24);
        printf("%c",254);
        i++;
    }
    gotoxy(8,25);
    draw(100);
    gotoxy(8,26);
    draw_two(100);
    gotoxy(33,26);
    printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
    gotoxy(8,27);
    draw(100);

// ---------------->>

    gotoxy(75,1);
    time_t mytime;
    mytime=time(NULL);
    printf(ctime(&mytime));
//----------------->>

    gotoxy(30,2);
    printf(" ACCOUNTING ");
    gotoxy(15,5);
    printf("%c%c%c",213,205,205);
    gotoxy(15,6);
    printf("%c 1.Student Account",195);
    gotoxy(15,7);
    printf("%c%c%c",213,205,205);
    gotoxy(15,8);
    printf("%c 2.Employ Account",195);
    gotoxy(15,9);
    printf("%c%c%c",213,205,205);
    gotoxy(15,10);
    printf("%c <<< 3.Income >>>",195);
    gotoxy(15,11);
    printf("%c%c%c",213,205,205);
    gotoxy(15,12);
    printf("%c 4.Expenses",195);
    gotoxy(15,13);
    printf("%c%c%c",213,205,205);
    gotoxy(15,14);
    printf("%c",179);
    gotoxy(15,15);
    printf("%c",179);
    gotoxy(15,16);
    printf("%c",179);
    gotoxy(15,17);
    printf("%c 0.BACK",195);

   /// ====>>>
    gotoxy(84,3);
    printf(" INCOME ");
    gotoxy(70,8);
    printf("=> 1.Income sec");
    gotoxy(70,9);
    printf("=> 2.Income sec");
    gotoxy(70,10);
    printf("=> 3.Income sec");
    gotoxy(70,13);
    printf("=> 0.BACK");

    /// =====>>

    gotoxy(70,23);
    int ft;
    printf("Please Type Selected Number:  ");
pps:
    ft=0;
    scanf("%d",&ft);

    if(ft==1){
        system("cls");
        return 881;
    }

    if(ft==0){
        system("cls");
        return 883;
    }

    else{
        system("cls");
        goto pps;
    }

}



int expenses_menu(){

    int i=4;

    gotoxy(8,1);
    draw(100);
    gotoxy(8,2);
    draw_two(100);
    gotoxy(8,3);
    draw(100);

    while(i<25){
        gotoxy(8,i);
        printf("%c",219);
        printf("%c",177);
        printf("%c",219);
        draw_sp(96);
        printf("%c",219);

        i++;
    }
    i=4;
    while(i<25){
        gotoxy(65,i);
        printf("%c",177);
        printf("%c",219);

        i++;
    }
    i=66;
    while(i<108){
        gotoxy(i,4);
        printf("%c",254);
        gotoxy(i,24);
        printf("%c",254);
        i++;
    }
    gotoxy(8,25);
    draw(100);
    gotoxy(8,26);
    draw_two(100);
    gotoxy(33,26);
    printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
    gotoxy(8,27);
    draw(100);

// ---------------->>

    gotoxy(75,1);
    time_t mytime;
    mytime=time(NULL);
    printf(ctime(&mytime));
//----------------->>

    gotoxy(30,2);
    printf(" ACCOUNTING ");
    gotoxy(15,5);
    printf("%c%c%c",213,205,205);
    gotoxy(15,6);
    printf("%c 1.Student Account",195);
    gotoxy(15,7);
    printf("%c%c%c",213,205,205);
    gotoxy(15,8);
    printf("%c 2.Employ Account",195);
    gotoxy(15,9);
    printf("%c%c%c",213,205,205);
    gotoxy(15,10);
    printf("%c 3.Income",195);
    gotoxy(15,11);
    printf("%c%c%c",213,205,205);
    gotoxy(15,12);
    printf("%c <<< 4.Expenses >>>",195);
    gotoxy(15,13);
    printf("%c%c%c",213,205,205);
    gotoxy(15,14);
    printf("%c",179);
    gotoxy(15,15);
    printf("%c",179);
    gotoxy(15,16);
    printf("%c",179);
    gotoxy(15,17);
    printf("%c 0.BACK",195);

   /// ====>>>
    gotoxy(84,3);
    printf(" EXPENSES ");
    gotoxy(70,8);
    printf("=> 1.Expenses sec");
    gotoxy(70,9);
    printf("=> 2.Expenses sec");
    gotoxy(70,10);
    printf("=> 3.Expenses sec");
    gotoxy(70,13);
    printf("=> 0.BACK");

    /// =====>>
    gotoxy(70,23);
    int ks;
    printf("Please Type Selected Number:  ");
utp:
    ks=0;
    scanf("%d",&ks);


    if(ks==1){
        system("cls");
        return 771;
    }

    if(ks==0){
        system("cls");
        return 773;
    }

    else{
        system("cls");
        goto utp;
    }
}


/*  menage user */

int menage_us(int sttp){

if(sttp==22){
    int i;

meng_us:

    i=4;
    gotoxy(8,1);
    draw(100);
    gotoxy(8,2);
    draw_two(100);
    gotoxy(8,3);
    draw(100);

    while(i<25){
        gotoxy(8,i);
        printf("%c",219);
        printf("%c",177);
        printf("%c",219);
        draw_sp(96);
        printf("%c",219);

        i++;
    }
    i=4;
    while(i<25){
        gotoxy(65,i);
        printf("%c",177);
        printf("%c",219);

        i++;
    }
    i=66;
    while(i<108){
        gotoxy(i,4);
        printf("%c",254);
        gotoxy(i,24);
        printf("%c",254);
        i++;
    }
    gotoxy(8,25);
    draw(100);
    gotoxy(8,26);
    draw_two(100);
    gotoxy(33,26);
    printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
    gotoxy(8,27);
    draw(100);

// ---------------->>

    gotoxy(75,1);
    time_t mytime;
    mytime=time(NULL);
    printf(ctime(&mytime));
//----------------->>


    gotoxy(30,2);
    printf(" MAIN MENU ");
    gotoxy(15,5);
    printf("%c%c%c",213,205,205);
    gotoxy(15,6);
    printf("%c 1.Addmission",195);
    gotoxy(15,7);
    printf("%c%c%c",213,205,205);
    gotoxy(15,8);
    printf("%c 2.Student & Teacher info",195);
    gotoxy(15,9);
    printf("%c%c%c",213,205,205);
    gotoxy(15,10);
    printf("%c 3.Accounting",195);
    gotoxy(15,11);
    printf("%c%c%c",213,205,205);
    gotoxy(15,12);
    printf("%c <<< 4.Menage User >>>",195);
    gotoxy(15,13);
    printf("%c%c%c",213,205,205);
    gotoxy(15,14);
    printf("%c 5.Time table",195);
    gotoxy(15,15);
    printf("%c%c%c",213,205,205);
    gotoxy(15,16);
    printf("%c 6.Result student",195);
    gotoxy(15,17);
    printf("%c%c%c",213,205,205);
    gotoxy(15,18);
    printf("%c 7.Old student & teacher",195);
    gotoxy(15,19);
    printf("%c%c%c",213,205,205);
    gotoxy(15,20);
    printf("%c",179);
    gotoxy(15,21);
    printf("%c",179);
    gotoxy(15,22);
    printf("%c",179);
    gotoxy(15,23);
    printf("%c 0.Close apps",195);

   /// ====>>>
    gotoxy(82,3);
    printf(" MENAGE USER ");
    gotoxy(70,8);
    printf("=> 1.Delete Student Information");
    gotoxy(70,10);
    printf("=> 2.Delete Employ Information");
    gotoxy(70,12);
    printf("=> 3.Set Admin password");
    gotoxy(70,14);
    printf("=> 4.Set Account password");
    gotoxy(70,16);
    printf("=> 3.Set Monitoring password");

    /// ===>>>

    int scg;

    scg=0;
    gotoxy(70,23);
    printf("Please Type Selected Number:  ");
    scanf("%d",&scg);
    fflush(stdin);

    /* Delete Student information */

    if(scg==1){
    system("cls");


    FILE *dl_file,*re_file,*wrt_dte;
    unsigned long int ik;
    char cha;

     int i=4;

    gotoxy(8,1);
    draw(100);
    gotoxy(8,2);
    draw_two(100);
    gotoxy(8,3);
    draw(100);

    while(i<25){
        gotoxy(8,i);
        printf("%c",219);
        printf("%c",177);
        printf("%c",219);
        draw_sp(96);
        printf("%c",219);

        i++;
    }
    i=4;
    while(i<25){
        gotoxy(65,i);
        printf("%c",177);
        printf("%c",219);

        i++;
    }
    i=66;
    while(i<108){
        gotoxy(i,4);
        printf("%c",254);
        gotoxy(i,24);
        printf("%c",254);
        i++;
    }
    gotoxy(8,25);
    draw(100);
    gotoxy(8,26);
    draw_two(100);
    gotoxy(33,26);
    printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
    gotoxy(8,27);
    draw(100);

// ---------------->>

    gotoxy(75,1);
    time_t mytime;
    mytime=time(NULL);
    printf(ctime(&mytime));
//----------------->>



    dl_file=fopen("student_info.dat","r");
    re_file=fopen("dlt.dat","w");

    gotoxy(80,3);
    printf(" SEARCH INFORMATION ");
    gotoxy(70,13);
    printf("Type student [ROLL] number: ");
    scanf("%lu",&ik);
    fflush(stdin);

    while(fread(&sut_reg,sizeof(sut_reg),1,dl_file) != 0){

    if(sut_reg.st_id==ik){

            gotoxy(25,2);
            printf(" DELETE INFORMATION ");
            gotoxy(15,5);
            printf("Student [REG] number: < %lu >",sut_reg.st_id);
            gotoxy(15,7);
            printf("Student name: [ %s ]",sut_reg.name);
            gotoxy(15,9);
            printf("Father name: [ %s ]",sut_reg.f_name);
            gotoxy(15,11);
            printf("Guidance name: [ %s ]",sut_reg.g_name);
            gotoxy(15,13);
            printf("Guidance number: | 0%lu |",sut_reg.g_number);
            gotoxy(15,15);
            printf("Gander: [ %c ]",sut_reg.gender);
            gotoxy(15,17);
            printf("Department: [ %s ]",sut_reg.st_dpt);
            gotoxy(15,19);
            printf("City: [ %s ]",sut_reg.st_city);
            gotoxy(15,21);
            printf("Admission year: [ %s ]",sut_reg.st_admi_yer);
            gotoxy(15,23);
            printf("Student number: | 0%lu |",sut_reg.s_number);

    wrt_dte=fopen("reco.dat","a");
    fwrite(&sut_reg,sizeof(sut_reg),1,wrt_dte);
    fflush(wrt_dte);
    fclose(wrt_dte);
    continue;
    }
        fwrite(&sut_reg,sizeof(sut_reg),1,re_file);
        fflush(re_file);
        fclose(re_file);
    }
    fclose(dl_file);
    remove("student_info.dat");
    rename("dlt.dat","student_info.dat");


            int ksp;
    acscb_regr:

            ksp=0;
            gotoxy(70,23);
            printf("BACK Than Type [ 0 ] :  ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto meng_us;
            }
            else{
                goto acscb_regr;
            }


    }



    /*  Delete Employ Information   */

    if(scg==2){
    system("cls");

    FILE *dl_fil,*re_fil,*wrt_dt;
    unsigned long int ik;
    int i=4;

    gotoxy(8,1);
    draw(100);
    gotoxy(8,2);
    draw_two(100);
    gotoxy(8,3);
    draw(100);

    while(i<25){
        gotoxy(8,i);
        printf("%c",219);
        printf("%c",177);
        printf("%c",219);
        draw_sp(96);
        printf("%c",219);

        i++;
    }
    i=4;
    while(i<25){
        gotoxy(65,i);
        printf("%c",177);
        printf("%c",219);

        i++;
    }
    i=66;
    while(i<108){
        gotoxy(i,4);
        printf("%c",254);
        gotoxy(i,24);
        printf("%c",254);
        i++;
    }
    gotoxy(8,25);
    draw(100);
    gotoxy(8,26);
    draw_two(100);
    gotoxy(33,26);
    printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
    gotoxy(8,27);
    draw(100);

// ---------------->>

    gotoxy(75,1);
    time_t mytime;
    mytime=time(NULL);
    printf(ctime(&mytime));
//----------------->>

        dl_fil=fopen("teacher_info.dat","r");       //  open teacher info file
        re_fil=fopen("dlte.dat","w");               //  open delete file


        gotoxy(80,3);
        printf(" SEARCH INFORMATION ");
        gotoxy(70,13);
        printf("Please type Employ id: ");
        scanf("%lu",&ik);
        fflush(stdin);


    while(fread(&tuc_reg,sizeof(tuc_reg),1,dl_fil) != 0){

    if(tuc_reg.tec_id==ik){

                        gotoxy(25,2);
                        printf(" DELETE INFORMATION ");
                        gotoxy(15,7);
                        printf("Employ id: %lu",tuc_reg.tec_id);
                        gotoxy(15,9);
                        printf("Employ name: %s",tuc_reg.tec_name);
                        gotoxy(15,11);
                        printf("Gender: %c",tuc_reg.gndr);
                        gotoxy(15,13);
                        printf("Employ post: %s",tuc_reg.te_post);
                        gotoxy(15,15);
                        printf("Education: %s",tuc_reg.education);
                        gotoxy(15,17);
                        printf("Joining Department: %s",tuc_reg.te_dpt);
                        gotoxy(15,19);
                        printf("City: %s",tuc_reg.te_city);
                        gotoxy(15,21);
                        printf("Mobile number: %lu",tuc_reg.te_number);


                        wrt_dt=fopen("reco_te.dat","a");    // open recovery file
                        fwrite(&tuc_reg,sizeof(tuc_reg),1,wrt_dt);
                        fflush(wrt_dt);
                        fclose(wrt_dt);
                        continue;
                }

                fwrite(&tuc_reg,sizeof(tuc_reg),1,re_fil);
                fflush(re_fil);
                fclose(re_fil);
            }

            fclose(dl_fil);

    remove("teacher_info.dat");
    rename("dlte.dat","teacher_info.dat");


            int ksp;
    acscb_rreg:

            ksp=0;
            gotoxy(70,23);
            printf("BACK Than Type [ 0 ] :  ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto meng_us;
            }
            else{
                goto acscb_rreg;
            }

    }



    /*  Set main system password   */

    if(scg==3){
        system("cls");

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
            gotoxy(35,2);
            printf(" ADMIN SET PASSWORD ");
            gotoxy(23,13);
            printf("[ INSTITUTE OF COMPUTER SIENCE & TECHNOLOGY ]");
            gotoxy(20,4);
            printf("Please type new password:\t");
            gotoxy(30,5);
            gets(get_pass);


            opfile=fopen("pass.txt","w");
            fprintf(opfile,"%s",get_pass);
            fflush(opfile);
            fclose(opfile);

            gotoxy(30,8);
            printf("......SAVE PASSWORD......");
            gotoxy(30,9);
            printf("-------------------------");

            int k;
    st_p:
            k=0;
            gotoxy(30,11);
            printf("Go To Back [ 0 ] AND Enter: ");
            scanf("%d",&k);
            if(k==0){
                system("cls");
                goto meng_us;
            }
            else{
                goto st_p;
            }
    }



    if(scg==0){
        system("cls");
        return 055;
    }
}


/* monitoring login */

if(sttp==23){


            int i;

        meng_usp:

                i=4;
                gotoxy(8,1);
                draw(100);
                gotoxy(8,2);
                draw_two(100);
                gotoxy(8,3);
                draw(100);

                while(i<25){
                    gotoxy(8,i);
                    printf("%c",219);
                    printf("%c",177);
                    printf("%c",219);
                    draw_sp(96);
                    printf("%c",219);

                    i++;
                }
                i=4;
                while(i<25){
                    gotoxy(65,i);
                    printf("%c",177);
                    printf("%c",219);

                    i++;
                }
                i=66;
                while(i<108){
                    gotoxy(i,4);
                    printf("%c",254);
                    gotoxy(i,24);
                    printf("%c",254);
                    i++;
                }
                gotoxy(8,25);
                draw(100);
                gotoxy(8,26);
                draw_two(100);
                gotoxy(33,26);
                printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
                gotoxy(8,27);
                draw(100);

            // ---------------->>

                gotoxy(75,1);
                time_t mytime;
                mytime=time(NULL);
                printf(ctime(&mytime));
            //----------------->>


                gotoxy(30,2);
                printf(" MAIN MENU ");
                gotoxy(15,5);
                printf("%c%c%c",213,205,205);
                gotoxy(15,6);
                printf("%c 1.Addmission",195);
                gotoxy(15,7);
                printf("%c%c%c",213,205,205);
                gotoxy(15,8);
                printf("%c 2.Student & Teacher info",195);
                gotoxy(15,9);
                printf("%c%c%c",213,205,205);
                gotoxy(15,10);
                printf("%c 3.Accounting",195);
                gotoxy(15,11);
                printf("%c%c%c",213,205,205);
                gotoxy(15,12);
                printf("%c <<< 4.Menage User >>>",195);
                gotoxy(15,13);
                printf("%c%c%c",213,205,205);
                gotoxy(15,14);
                printf("%c 5.Time table",195);
                gotoxy(15,15);
                printf("%c%c%c",213,205,205);
                gotoxy(15,16);
                printf("%c 6.Result student",195);
                gotoxy(15,17);
                printf("%c%c%c",213,205,205);
                gotoxy(15,18);
                printf("%c 7.Old student & teacher",195);
                gotoxy(15,19);
                printf("%c%c%c",213,205,205);
                gotoxy(15,20);
                printf("%c",179);
                gotoxy(15,21);
                printf("%c",179);
                gotoxy(15,22);
                printf("%c",179);
                gotoxy(15,23);
                printf("%c 0.Close apps",195);

               /// ====>>>
                gotoxy(82,3);
                printf(" MENAGE USER ");
                gotoxy(70,8);
                printf("=> 1.Delete Student Information <=");
                gotoxy(70,10);
                printf("=> 2.Delete Employ Information <=");
                gotoxy(70,12);
                printf("=> 3.Set Admin password");
                gotoxy(70,14);
                printf("=> 4.Set Account password");
                gotoxy(70,16);
                printf("=> 5.Set Monitoring password");

                /// ===>>>

                int scg;

                scg=0;
                gotoxy(70,23);
                printf("Please Type Selected Number:  ");
                scanf("%d",&scg);
                fflush(stdin);

                /* Delete Student information */

                if(scg==1){
                system("cls");


                FILE *dl_file,*re_file,*wrt_dte;
                unsigned long int ik;
                char cha;

                 int i=4;

                gotoxy(8,1);
                draw(100);
                gotoxy(8,2);
                draw_two(100);
                gotoxy(8,3);
                draw(100);

                while(i<25){
                    gotoxy(8,i);
                    printf("%c",219);
                    printf("%c",177);
                    printf("%c",219);
                    draw_sp(96);
                    printf("%c",219);

                    i++;
                }
                i=4;
                while(i<25){
                    gotoxy(65,i);
                    printf("%c",177);
                    printf("%c",219);

                    i++;
                }
                i=66;
                while(i<108){
                    gotoxy(i,4);
                    printf("%c",254);
                    gotoxy(i,24);
                    printf("%c",254);
                    i++;
                }
                gotoxy(8,25);
                draw(100);
                gotoxy(8,26);
                draw_two(100);
                gotoxy(33,26);
                printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
                gotoxy(8,27);
                draw(100);

            // ---------------->>

                gotoxy(75,1);
                time_t mytime;
                mytime=time(NULL);
                printf(ctime(&mytime));
            //----------------->>



                dl_file=fopen("student_info.dat","r");
                re_file=fopen("dlt.dat","w");

                gotoxy(80,3);
                printf(" SEARCH INFORMATION ");
                gotoxy(70,13);
                printf("Type student [ROLL] number: ");
                scanf("%lu",&ik);
                fflush(stdin);

                while(fread(&sut_reg,sizeof(sut_reg),1,dl_file) != 0){

                if(sut_reg.st_id==ik){

                        gotoxy(25,2);
                        printf(" DELETE INFORMATION ");
                        gotoxy(15,5);
                        printf("Student [REG] number: < %lu >",sut_reg.st_id);
                        gotoxy(15,7);
                        printf("Student name: [ %s ]",sut_reg.name);
                        gotoxy(15,9);
                        printf("Father name: [ %s ]",sut_reg.f_name);
                        gotoxy(15,11);
                        printf("Guidance name: [ %s ]",sut_reg.g_name);
                        gotoxy(15,13);
                        printf("Guidance number: | 0%lu |",sut_reg.g_number);
                        gotoxy(15,15);
                        printf("Gander: [ %c ]",sut_reg.gender);
                        gotoxy(15,17);
                        printf("Department: [ %s ]",sut_reg.st_dpt);
                        gotoxy(15,19);
                        printf("City: [ %s ]",sut_reg.st_city);
                        gotoxy(15,21);
                        printf("Admission year: [ %s ]",sut_reg.st_admi_yer);
                        gotoxy(15,23);
                        printf("Student number: | 0%lu |",sut_reg.s_number);

                wrt_dte=fopen("reco.dat","a");
                fwrite(&sut_reg,sizeof(sut_reg),1,wrt_dte);
                fflush(wrt_dte);
                fclose(wrt_dte);
                continue;
                }
                    fwrite(&sut_reg,sizeof(sut_reg),1,re_file);
                    fflush(re_file);
                    fclose(re_file);
                }
                fclose(dl_file);
                remove("student_info.dat");
                rename("dlt.dat","student_info.dat");


                        int ksp;
                acscb_regrp:

                        ksp=0;
                        gotoxy(70,23);
                        printf("BACK Than Type [ 0 ] :  ");
                        scanf("%d",&ksp);

                        if(ksp==0){
                            system("cls");
                            goto meng_usp;
                        }
                        else{
                            goto acscb_regrp;
                        }


                }



                /*  Delete Employ Information   */

                if(scg==2){
                system("cls");

                FILE *dl_fil,*re_fil,*wrt_dt;
                unsigned long int ik;
                int i=4;

                gotoxy(8,1);
                draw(100);
                gotoxy(8,2);
                draw_two(100);
                gotoxy(8,3);
                draw(100);

                while(i<25){
                    gotoxy(8,i);
                    printf("%c",219);
                    printf("%c",177);
                    printf("%c",219);
                    draw_sp(96);
                    printf("%c",219);

                    i++;
                }
                i=4;
                while(i<25){
                    gotoxy(65,i);
                    printf("%c",177);
                    printf("%c",219);

                    i++;
                }
                i=66;
                while(i<108){
                    gotoxy(i,4);
                    printf("%c",254);
                    gotoxy(i,24);
                    printf("%c",254);
                    i++;
                }
                gotoxy(8,25);
                draw(100);
                gotoxy(8,26);
                draw_two(100);
                gotoxy(33,26);
                printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
                gotoxy(8,27);
                draw(100);

            // ---------------->>

                gotoxy(75,1);
                time_t mytime;
                mytime=time(NULL);
                printf(ctime(&mytime));
            //----------------->>

                    dl_fil=fopen("teacher_info.dat","r");       //  open teacher info file
                    re_fil=fopen("dlte.dat","w");               //  open delete file


                    gotoxy(80,3);
                    printf(" SEARCH INFORMATION ");
                    gotoxy(70,13);
                    printf("Please type Employ id: ");
                    scanf("%lu",&ik);
                    fflush(stdin);


                while(fread(&tuc_reg,sizeof(tuc_reg),1,dl_fil) != 0){

                if(tuc_reg.tec_id==ik){

                                    gotoxy(25,2);
                                    printf(" DELETE INFORMATION ");
                                    gotoxy(15,7);
                                    printf("Employ id: %lu",tuc_reg.tec_id);
                                    gotoxy(15,9);
                                    printf("Employ name: %s",tuc_reg.tec_name);
                                    gotoxy(15,11);
                                    printf("Gender: %c",tuc_reg.gndr);
                                    gotoxy(15,13);
                                    printf("Employ post: %s",tuc_reg.te_post);
                                    gotoxy(15,15);
                                    printf("Education: %s",tuc_reg.education);
                                    gotoxy(15,17);
                                    printf("Joining Department: %s",tuc_reg.te_dpt);
                                    gotoxy(15,19);
                                    printf("City: %s",tuc_reg.te_city);
                                    gotoxy(15,21);
                                    printf("Mobile number: %lu",tuc_reg.te_number);


                                    wrt_dt=fopen("reco_te.dat","a");    // open recovery file
                                    fwrite(&tuc_reg,sizeof(tuc_reg),1,wrt_dt);
                                    fflush(wrt_dt);
                                    fclose(wrt_dt);
                                    continue;
                            }

                            fwrite(&tuc_reg,sizeof(tuc_reg),1,re_fil);
                            fflush(re_fil);
                            fclose(re_fil);
                        }

                        fclose(dl_fil);

                remove("teacher_info.dat");
                rename("dlte.dat","teacher_info.dat");


                        int ksp;
                acscb_rregp:

                        ksp=0;
                        gotoxy(70,23);
                        printf("BACK Than Type [ 0 ] :  ");
                        scanf("%d",&ksp);

                        if(ksp==0){
                            system("cls");
                            goto meng_usp;
                        }
                        else{
                            goto acscb_rregp;
                        }

                }

                if(scg==0){
                system("cls");
                return 056;
                }

                else{
                    system("cls");
                    goto meng_usp;
                }

}
}


/*  Time - Table function   */

int time_tbl(){


    char day_fast[5];
    char day_sec[5];
    char day_thrd[5];
    char day_four[5];
    char day_five[5];
    char day_six[5];

    int i;

time_table_s:

    i=4;
    gotoxy(8,1);
    draw(100);
    gotoxy(8,2);
    draw_two(100);
    gotoxy(8,3);
    draw(100);

    while(i<25){
        gotoxy(8,i);
        printf("%c",219);
        printf("%c",177);
        printf("%c",219);
        draw_sp(96);
        printf("%c",219);

        i++;
    }
    i=4;
    while(i<25){
        gotoxy(65,i);
        printf("%c",177);
        printf("%c",219);

        i++;
    }
    i=66;
    while(i<108){
        gotoxy(i,4);
        printf("%c",254);
        gotoxy(i,24);
        printf("%c",254);
        i++;
    }
    gotoxy(8,25);
    draw(100);
    gotoxy(8,26);
    draw_two(100);
    gotoxy(33,26);
    printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
    gotoxy(8,27);
    draw(100);

// ---------------->>

    gotoxy(75,1);
    time_t mytime;
    mytime=time(NULL);
    printf(ctime(&mytime));
//----------------->>


    gotoxy(30,2);
    printf(" MAIN MENU ");
    gotoxy(15,5);
    printf("%c%c%c",213,205,205);
    gotoxy(15,6);
    printf("%c 1.Addmission",195);
    gotoxy(15,7);
    printf("%c%c%c",213,205,205);
    gotoxy(15,8);
    printf("%c 2.Student & Teacher info",195);
    gotoxy(15,9);
    printf("%c%c%c",213,205,205);
    gotoxy(15,10);
    printf("%c 3.Accounting",195);
    gotoxy(15,11);
    printf("%c%c%c",213,205,205);
    gotoxy(15,12);
    printf("%c  4.Menage User",195);
    gotoxy(15,13);
    printf("%c%c%c",213,205,205);
    gotoxy(15,14);
    printf("%c <<< 5.Time table >>>",195);
    gotoxy(15,15);
    printf("%c%c%c",213,205,205);
    gotoxy(15,16);
    printf("%c 6.Result student",195);
    gotoxy(15,17);
    printf("%c%c%c",213,205,205);
    gotoxy(15,18);
    printf("%c 7.Old student & teacher",195);
    gotoxy(15,19);
    printf("%c%c%c",213,205,205);
    gotoxy(15,20);
    printf("%c",179);
    gotoxy(15,21);
    printf("%c",179);
    gotoxy(15,22);
    printf("%c",179);
    gotoxy(15,23);
    printf("%c 0.BACK",195);

   /// ====>>>
    gotoxy(82,3);
    printf(" TIME TABLE ");
    gotoxy(70,8);
    printf("=> 1.Add Class Routine");
    gotoxy(70,10);
    printf("=> 2.Show Class Routine");
    gotoxy(70,12);
    printf("=> 3.Add Other Routine");
    gotoxy(70,14);
    printf("=> 4.Show Other Routine");
    gotoxy(70,17);
    printf("=> 0.BACK");

    /// ===>>>

    gotoxy(70,23);
    printf("Please Type Selected Number:  ");
    int is;
hps:
    is=0;
    scanf("%d",&is);
    fflush(stdin);


    if(is==1){
    system("cls");

    FILE *wr_time;
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


    wr_time=fopen("time_table.dat","a");

    gotoxy(10,2);
    printf("Semester: ");
    scanf("%d",&time_table[0].semester);
    time_table[1].semester=time_table[0].semester;
    time_table[2].semester=time_table[0].semester;
    time_table[3].semester=time_table[0].semester;
    time_table[4].semester=time_table[0].semester;
    time_table[5].semester=time_table[0].semester;
    fflush(stdin);

    gotoxy(80,2);
    printf("Dpt: ");
    gets(time_table[0].dpt);
    strcpy(time_table[1].dpt,time_table[0].dpt);
    strcpy(time_table[2].dpt,time_table[0].dpt);
    strcpy(time_table[3].dpt,time_table[0].dpt);
    strcpy(time_table[4].dpt,time_table[0].dpt);
    strcpy(time_table[5].dpt,time_table[0].dpt);

/// {

    gotoxy(12,11);
    gets(time_table[0].day);
    strcpy(day_fast,time_table[0].day);

    gotoxy(23,10);
    scanf("%d",&time_table[0].sub_code_fast);
    fflush(stdin);
    gotoxy(23,11);
    scanf("%d",&time_table[0].class_code_fast);
    fflush(stdin);
    gotoxy(23,12);
    gets(time_table[0].teacher_name_fast);

    gotoxy(35,10);
    scanf("%d",&time_table[0].sub_code_sec);
    fflush(stdin);
    gotoxy(35,11);
    scanf("%d",&time_table[0].class_code_sec);
    fflush(stdin);
    gotoxy(35,12);
    gets(time_table[0].teacher_name_sec);

    gotoxy(47,10);
    scanf("%d",&time_table[0].sub_code_thrd);
    fflush(stdin);
    gotoxy(47,11);
    scanf("%d",&time_table[0].class_code_thrd);
    fflush(stdin);
    gotoxy(47,12);
    gets(time_table[0].teacher_name_thrd);

    gotoxy(59,10);
    scanf("%d",&time_table[0].sub_code_four);
    fflush(stdin);
    gotoxy(59,11);
    scanf("%d",&time_table[0].class_code_four);
    fflush(stdin);
    gotoxy(59,12);
    gets(time_table[0].teacher_name_four);

    gotoxy(71,10);
    scanf("%d",&time_table[0].sub_code_five);
    fflush(stdin);
    gotoxy(71,11);
    scanf("%d",&time_table[0].class_code_five);
    fflush(stdin);
    gotoxy(71,12);
    gets(time_table[0].teacher_name_five);


    gotoxy(83,10);
    scanf("%d",&time_table[0].sub_code_six);
    fflush(stdin);
    gotoxy(83,11);
    scanf("%d",&time_table[0].class_code_six);
    fflush(stdin);
    gotoxy(83,12);
    gets(time_table[0].teacher_name_six);

    fwrite(&time_table[0],sizeof(time_table[0]),1,wr_time);
    fflush(wr_time);

/// }

///{

    gotoxy(12,15);
    gets(time_table[1].day);
    strcpy(day_sec,time_table[1].day);

    gotoxy(23,14);
    scanf("%d",&time_table[1].sub_code_fast);
    fflush(stdin);
    gotoxy(23,15);
    scanf("%d",&time_table[1].class_code_fast);
    fflush(stdin);
    gotoxy(23,16);
    gets(time_table[1].teacher_name_fast);

    gotoxy(35,14);
    scanf("%d",&time_table[1].sub_code_sec);
    fflush(stdin);
    gotoxy(35,15);
    scanf("%d",&time_table[1].class_code_sec);
    fflush(stdin);
    gotoxy(35,16);
    gets(time_table[1].teacher_name_sec);

    gotoxy(47,14);
    scanf("%d",&time_table[1].sub_code_thrd);
    fflush(stdin);
    gotoxy(47,15);
    scanf("%d",&time_table[1].class_code_thrd);
    fflush(stdin);
    gotoxy(47,16);
    gets(time_table[1].teacher_name_thrd);

    gotoxy(59,14);
    scanf("%d",&time_table[1].sub_code_four);
    fflush(stdin);
    gotoxy(59,15);
    scanf("%d",&time_table[1].class_code_four);
    fflush(stdin);
    gotoxy(59,16);
    gets(time_table[1].teacher_name_four);

    gotoxy(71,14);
    scanf("%d",&time_table[1].sub_code_five);
    fflush(stdin);
    gotoxy(71,15);
    scanf("%d",&time_table[1].class_code_five);
    fflush(stdin);
    gotoxy(71,16);
    gets(time_table[1].teacher_name_five);


    gotoxy(83,14);
    scanf("%d",&time_table[1].sub_code_six);
    fflush(stdin);
    gotoxy(83,15);
    scanf("%d",&time_table[1].class_code_six);
    fflush(stdin);
    gotoxy(83,16);
    gets(time_table[1].teacher_name_six);


    fwrite(&time_table[1],sizeof(time_table[1]),1,wr_time);
    fflush(wr_time);

/// }

/// {


    gotoxy(12,19);
    gets(time_table[2].day);
    strcpy(day_thrd,time_table[2].day);

    gotoxy(23,18);
    scanf("%d",&time_table[2].sub_code_fast);
    fflush(stdin);
    gotoxy(23,19);
    scanf("%d",&time_table[2].class_code_fast);
    fflush(stdin);
    gotoxy(23,20);
    gets(time_table[2].teacher_name_fast);

    gotoxy(35,18);
    scanf("%d",&time_table[2].sub_code_sec);
    fflush(stdin);
    gotoxy(35,19);
    scanf("%d",&time_table[2].class_code_sec);
    fflush(stdin);
    gotoxy(35,20);
    gets(time_table[2].teacher_name_sec);

    gotoxy(47,18);
    scanf("%d",&time_table[2].sub_code_thrd);
    fflush(stdin);
    gotoxy(47,19);
    scanf("%d",&time_table[2].class_code_thrd);
    fflush(stdin);
    gotoxy(47,20);
    gets(time_table[2].teacher_name_thrd);

    gotoxy(59,18);
    scanf("%d",&time_table[2].sub_code_four);
    fflush(stdin);
    gotoxy(59,19);
    scanf("%d",&time_table[2].class_code_four);
    fflush(stdin);
    gotoxy(59,20);
    gets(time_table[2].teacher_name_four);

    gotoxy(71,18);
    scanf("%d",&time_table[2].sub_code_five);
    fflush(stdin);
    gotoxy(71,19);
    scanf("%d",&time_table[2].class_code_five);
    fflush(stdin);
    gotoxy(71,20);
    gets(time_table[2].teacher_name_five);


    gotoxy(83,18);
    scanf("%d",&time_table[2].sub_code_six);
    fflush(stdin);
    gotoxy(83,19);
    scanf("%d",&time_table[2].class_code_six);
    fflush(stdin);
    gotoxy(83,20);
    gets(time_table[2].teacher_name_six);


    fwrite(&time_table[2],sizeof(time_table[2]),1,wr_time);
    fflush(wr_time);

/// }
/// {

    gotoxy(12,23);
    gets(time_table[3].day);
    strcpy(day_four,time_table[3].day);

    gotoxy(23,22);
    scanf("%d",&time_table[3].sub_code_fast);
    fflush(stdin);
    gotoxy(23,23);
    scanf("%d",&time_table[3].class_code_fast);
    fflush(stdin);
    gotoxy(23,24);
    gets(time_table[3].teacher_name_fast);

    gotoxy(35,22);
    scanf("%d",&time_table[3].sub_code_sec);
    fflush(stdin);
    gotoxy(35,23);
    scanf("%d",&time_table[3].class_code_sec);
    fflush(stdin);
    gotoxy(35,24);
    gets(time_table[3].teacher_name_sec);

    gotoxy(47,22);
    scanf("%d",&time_table[3].sub_code_thrd);
    fflush(stdin);
    gotoxy(47,23);
    scanf("%d",&time_table[3].class_code_thrd);
    fflush(stdin);
    gotoxy(47,24);
    gets(time_table[3].teacher_name_thrd);

    gotoxy(59,22);
    scanf("%d",&time_table[3].sub_code_four);
    fflush(stdin);
    gotoxy(59,23);
    scanf("%d",&time_table[3].class_code_four);
    fflush(stdin);
    gotoxy(59,24);
    gets(time_table[3].teacher_name_four);

    gotoxy(71,22);
    scanf("%d",&time_table[3].sub_code_five);
    fflush(stdin);
    gotoxy(71,23);
    scanf("%d",&time_table[3].class_code_five);
    fflush(stdin);
    gotoxy(71,24);
    gets(time_table[3].teacher_name_five);


    gotoxy(83,22);
    scanf("%d",&time_table[3].sub_code_six);
    fflush(stdin);
    gotoxy(83,23);
    scanf("%d",&time_table[3].class_code_six);
    fflush(stdin);
    gotoxy(83,24);
    gets(time_table[3].teacher_name_six);

    fwrite(&time_table[3],sizeof(time_table[3]),1,wr_time);
    fflush(wr_time);

/// }
///{

    gotoxy(12,27);
    gets(time_table[4].day);
    strcpy(day_five,time_table[4].day);

    gotoxy(23,26);
    scanf("%d",&time_table[4].sub_code_fast);
    fflush(stdin);
    gotoxy(23,27);
    scanf("%d",&time_table[4].class_code_fast);
    fflush(stdin);
    gotoxy(23,28);
    gets(time_table[4].teacher_name_fast);

    gotoxy(35,26);
    scanf("%d",&time_table[4].sub_code_sec);
    fflush(stdin);
    gotoxy(35,27);
    scanf("%d",&time_table[4].class_code_sec);
    fflush(stdin);
    gotoxy(35,28);
    gets(time_table[4].teacher_name_sec);

    gotoxy(47,26);
    scanf("%d",&time_table[4].sub_code_thrd);
    fflush(stdin);
    gotoxy(47,27);
    scanf("%d",&time_table[4].class_code_thrd);
    fflush(stdin);
    gotoxy(47,28);
    gets(time_table[4].teacher_name_thrd);

    gotoxy(59,26);
    scanf("%d",&time_table[4].sub_code_four);
    fflush(stdin);
    gotoxy(59,27);
    scanf("%d",&time_table[4].class_code_four);
    fflush(stdin);
    gotoxy(59,28);
    gets(time_table[4].teacher_name_four);

    gotoxy(71,26);
    scanf("%d",&time_table[4].sub_code_five);
    fflush(stdin);
    gotoxy(71,27);
    scanf("%d",&time_table[4].class_code_five);
    fflush(stdin);
    gotoxy(71,28);
    gets(time_table[4].teacher_name_five);


    gotoxy(83,26);
    scanf("%d",&time_table[4].sub_code_six);
    fflush(stdin);
    gotoxy(83,27);
    scanf("%d",&time_table[4].class_code_six);
    fflush(stdin);
    gotoxy(83,28);
    gets(time_table[4].teacher_name_six);

    fwrite(&time_table[4],sizeof(time_table[4]),1,wr_time);
    fflush(wr_time);


///}

/// {

    gotoxy(12,31);
    gets(time_table[5].day);
    strcpy(day_six,time_table[5].day);

    gotoxy(23,30);
    scanf("%d",&time_table[5].sub_code_fast);
    fflush(stdin);
    gotoxy(23,31);
    scanf("%d",&time_table[5].class_code_fast);
    fflush(stdin);
    gotoxy(23,32);
    gets(time_table[5].teacher_name_fast);

    gotoxy(35,30);
    scanf("%d",&time_table[5].sub_code_sec);
    fflush(stdin);
    gotoxy(35,31);
    scanf("%d",&time_table[5].class_code_sec);
    fflush(stdin);
    gotoxy(35,32);
    gets(time_table[5].teacher_name_sec);

    gotoxy(47,30);
    scanf("%d",&time_table[5].sub_code_thrd);
    fflush(stdin);
    gotoxy(47,31);
    scanf("%d",&time_table[5].class_code_thrd);
    fflush(stdin);
    gotoxy(47,32);
    gets(time_table[5].teacher_name_thrd);

    gotoxy(59,30);
    scanf("%d",&time_table[5].sub_code_four);
    fflush(stdin);
    gotoxy(59,31);
    scanf("%d",&time_table[5].class_code_four);
    fflush(stdin);
    gotoxy(59,32);
    gets(time_table[5].teacher_name_four);

    gotoxy(71,30);
    scanf("%d",&time_table[5].sub_code_five);
    fflush(stdin);
    gotoxy(71,31);
    scanf("%d",&time_table[5].class_code_five);
    fflush(stdin);
    gotoxy(71,32);
    gets(time_table[5].teacher_name_five);


    gotoxy(83,30);
    scanf("%d",&time_table[5].sub_code_six);
    fflush(stdin);
    gotoxy(83,31);
    scanf("%d",&time_table[5].class_code_six);
    fflush(stdin);
    gotoxy(83,32);
    gets(time_table[5].teacher_name_six);


    fwrite(&time_table[5],sizeof(time_table[5]),1,wr_time);
    fflush(wr_time);
    fclose(wr_time);



            int ap;
    tys:

            ap=1;
            gotoxy(41,35);
            printf("Back -> Type [0] & [ ENTER ]: ");
            scanf("%d",&ap);

            if(ap==0){
                system("cls");
                goto time_table_s;
            }
            else{
                goto tys;
            }


/// }


    }





    if(is==2){
    system("cls");

    FILE *wr_time;
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

//    wr_time=fopen("time_table.dat","r");
//
    int get_semester;
    char get_dpt[5];


    gotoxy(10,2);
    printf("Semester: ");
    scanf("%d",&get_semester);
    fflush(stdin);

    gotoxy(80,2);
    printf("Dpt: ");
    gets(get_dpt);


//    while(fread(&time_table[0],sizeof(time_table[0]),1,wr_time) != 0){

    //if(time_table[0].semester==get_semester /*&& strcmp(time_table[0].dpt,get_dpt) == 0 && strcmp(time_table[0].day,day_fast) == 0 */){

/*      Fast day-- Saturday     */

    gotoxy(12,11);
    printf("SAT");

    gotoxy(23,10);
    printf("5852");
    gotoxy(23,11);
    printf("R-403");
    gotoxy(23,12);
    printf("MS");


    gotoxy(35,10);
    printf("8572");
    gotoxy(35,11);
    printf("R-403");
    gotoxy(35,12);
    printf("KB");

    gotoxy(47,10);
    printf("6678");
    gotoxy(47,11);
    printf("SW/L-3");
    gotoxy(47,12);
    printf("LB");

    gotoxy(59,10);
    printf("6678");
    gotoxy(59,11);
    printf("SW/L-3");
    gotoxy(59,12);
    printf("LB");


    /*      second day -- Sunday    */


    gotoxy(12,15);
    printf("SUN");

//    gotoxy(23,10);
//    printf("5852");
//    gotoxy(23,11);
//    printf("R-403");
//    gotoxy(23,12);
//    printf("MS");
//
//
//    gotoxy(35,10);
//    printf("8572");
//    gotoxy(35,11);
//    printf("R-403");
//    gotoxy(35,12);
//    printf("KB");

    gotoxy(47,14);
    printf("6672");
    gotoxy(47,15);
    printf("R-403");
    gotoxy(47,16);
    printf("LB");

    gotoxy(59,14);
    printf("5852");
    gotoxy(59,15);
    printf("R-403");
    gotoxy(59,16);
    printf("MS");


    gotoxy(70,14);
    printf("6671");
    gotoxy(70,15);
    printf("SW/L-2");
    gotoxy(70,16);
    printf("ZH");


    gotoxy(81,14);
    printf("6671");
    gotoxy(81,15);
    printf("SW/L-2");
    gotoxy(81,16);
    printf("ZH");


    /* three day ---- Monday    */



    gotoxy(12,19);
    printf("MON");

    gotoxy(23,18);
    printf("6671");
    gotoxy(23,19);
    printf("R-403");
    gotoxy(23,20);
    printf("ZH");


    gotoxy(35,18);
    printf("5853");
    gotoxy(35,19);
    printf("R-403");
    gotoxy(35,20);
    printf("SS");

    gotoxy(47,18);
    printf("6673");
    gotoxy(47,19);
    printf("SW/L-2");
    gotoxy(47,20);
    printf("SM");

    gotoxy(59,18);
    printf("6673");
    gotoxy(59,19);
    printf("SW/L-2");
    gotoxy(59,20);
    printf("SM");


//    gotoxy(70,14);
//    printf("6671");
//    gotoxy(70,15);
//    printf("SW/L-2");
//    gotoxy(70,16);
//    printf("ZH");
//
//
//    gotoxy(81,14);
//    printf("6671");
//    gotoxy(81,15);
//    printf("SW/L-2");
//    gotoxy(81,16);
//    printf("ZH");



    /*      Four  day  ---- Tuesday     */


    gotoxy(12,23);
    printf("TUE");

    gotoxy(23,22);
    printf("6673");
    gotoxy(23,23);
    printf("R-403");
    gotoxy(23,24);
    printf("SM");


    gotoxy(35,22);
    printf("6672");
    gotoxy(35,23);
    printf("R-403");
    gotoxy(35,24);
    printf("LB");

    gotoxy(47,22);
    printf("8572");
    gotoxy(47,23);
    printf("R-403");
    gotoxy(47,24);
    printf("KB");

//    gotoxy(59,14);
//    printf("6673");
//    gotoxy(59,15);
//    printf("SW/L-2");
//    gotoxy(59,16);
//    printf("SM");

//    gotoxy(70,14);
//    printf("6671");
//    gotoxy(70,15);
//    printf("SW/L-2");
//    gotoxy(70,16);
//    printf("ZH");
//
//
//    gotoxy(81,14);
//    printf("6671");
//    gotoxy(81,15);
//    printf("SW/L-2");
//    gotoxy(81,16);
//    printf("ZH");


    /*     Five day --- Wednesday       */


    gotoxy(12,27);
    printf("WED");

    gotoxy(23,26);
    printf("6673");
    gotoxy(23,27);
    printf("R-403");
    gotoxy(23,28);
    printf("SM");


    gotoxy(35,26);
    printf("5853");
    gotoxy(35,27);
    printf("R-403");
    gotoxy(35,28);
    printf("SS");

    gotoxy(47,26);
    printf("8572");
    gotoxy(47,27);
    printf("SW/L-1");
    gotoxy(47,28);
    printf("KB");

    gotoxy(59,26);
    printf("8572");
    gotoxy(59,27);
    printf("SW/L-1");
    gotoxy(59,28);
    printf("KB");

//    gotoxy(70,14);
//    printf("6671");
//    gotoxy(70,15);
//    printf("SW/L-2");
//    gotoxy(70,16);
//    printf("ZH");
//
//
//    gotoxy(81,14);
//    printf("6671");
//    gotoxy(81,15);
//    printf("SW/L-2");
//    gotoxy(81,16);
//    printf("ZH");



/*      Six day --- Thursday    */


    gotoxy(12,31);
    printf("THU");

    gotoxy(23,30);
    printf("6672");
    gotoxy(23,31);
    printf("SW/L-3");
    gotoxy(23,32);
    printf("LB");


    gotoxy(35,30);
    printf("6672");
    gotoxy(35,31);
    printf("SW/L-3");
    gotoxy(35,32);
    printf("LB");

    gotoxy(47,30);
    printf("6671");
    gotoxy(47,31);
    printf("R-403");
    gotoxy(47,32);
    printf("ZH");

    gotoxy(59,30);
    printf("6673");
    gotoxy(59,31);
    printf("R-403");
    gotoxy(59,32);
    printf("SM");

//    gotoxy(70,14);
//    printf("6671");
//    gotoxy(70,15);
//    printf("SW/L-2");
//    gotoxy(70,16);
//    printf("ZH");
//
//
//    gotoxy(81,14);
//    printf("6671");
//    gotoxy(81,15);
//    printf("SW/L-2");
//    gotoxy(81,16);
//    printf("ZH");

            int ap;
    aps:

            ap=1;
            gotoxy(41,35);
            printf("Back -> Type [0] & [ ENTER ]: ");
            scanf("%d",&ap);

            if(ap==0){
                system("cls");
                goto time_table_s;
            }
            else{
                goto aps;
            }


 //   }


    }




    if(is==3){

        system("cls");
        FILE *or_si;
        int j,o;

        gotoxy(16,2);
        for(j=0;j<80;j++){
            printf("%c",219);
        }
        for(j=0;j<21;j++){
                printf("\n\t\t%c",219);
            for(o=0;o<78;o++){
                printf(" ");
            }
        printf("%c",219);
        }
        printf("\n\t\t");
            for(j=0;j<80;j++){
            printf("%c",219);
        }
        gotoxy(33,24);
        printf("[ INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY ]");
        gotoxy(20,2);
        printf(" ADD OTHER ROUTINE ");


        int k=4;
        gotoxy(20,4);
        for(j=0;j<70;j++){
            printf("%c",45);
        }
        for(j=0;j<2;j++){
                gotoxy(20,++k);
                printf("%c",45);
            for(o=0;o<68;o++){
                printf(" ");
            }
        printf("%c",45);
        }
        gotoxy(20,k);
            for(j=0;j<70;j++){
            printf("%c",45);
        }

        gotoxy(22,5);
        printf("Title: ");

        k=k+2;
        gotoxy(20,k);
        for(j=0;j<70;j++){
            printf("%c",45);
        }
        for(j=0;j<2;j++){
                gotoxy(20,++k);
                printf("%c",45);
            for(o=0;o<68;o++){
                printf(" ");
            }
        printf("%c",45);
        }
        gotoxy(20,k);
            for(j=0;j<70;j++){
            printf("%c",45);
        }
        gotoxy(22,9);
        printf("Date: ");
        gotoxy(60,9);
        printf("Time: ");



        k=k+2;
        gotoxy(18,k);
        for(j=0;j<75;j++){
            printf("%c",45);
        }
        for(j=0;j<10;j++){
                gotoxy(18,++k);
                printf("%c",45);
            for(o=0;o<73;o++){
                printf(" ");
            }
        printf("%c",45);
        }
        gotoxy(18,k);
            for(j=0;j<75;j++){
            printf("%c",45);
        }
        gotoxy(50,13);
        printf("Disposition:");



        or_si=fopen("other_si.dat","a");

        gotoxy(30,5);
        gets(othr_ru.title);
        gotoxy(30,9);
        gets(othr_ru.dat);
        gotoxy(66,9);
        scanf("%d",&othr_ru.time);
        fflush(stdin);
        gotoxy(20,15);
        gets(othr_ru.dispt);

        fwrite(&othr_ru,sizeof(othr_ru),1,or_si);
        fclose(or_si);



            int ap;
    gggs:

            ap=1;
            gotoxy(41,21);
            printf("Back -> Type [0] & [ ENTER ]: ");
            scanf("%d",&ap);

            if(ap==0){
                system("cls");
                goto time_table_s;
            }
            else{
                goto gggs;
            }



    }




    if(is==4){

        system("cls");
        FILE *or_sti;


        printf("\n\t\t\t\t\tINSTITUTE OF COMPUTER SINCE AND TECHNOLOGY\n\n");
        printf("\t\t\t\t\t\t\tOther Routing\n");
        printf("\t\t\t\t\t------------------------------------------\n\n");


        or_sti=fopen("other_si.dat","r");

        while(fread(&othr_ru,sizeof(othr_ru),1,or_sti) != 0){


              printf("\n\n\n\t\t\t");
              printf("Title:  %s",othr_ru.title);
              printf("\n\t\t\t");
              printf("Date:  %s",othr_ru.dat);
              printf("\n\t\t\t");
              printf("Time:  %d",othr_ru.time);
              printf("\n\t\t\t");
              printf("Disposition:  %s",othr_ru.dispt);
              printf("\n\t\t");
              printf("|------------------------------------------------------");

            }

            int ap;
    ggs:

            ap=1;
            printf("\n\n\t\t\tBack -> Type [0] & [ ENTER ]: ");
            scanf("%d",&ap);

            if(ap==0){
                system("cls");
                goto time_table_s;
            }
            else{
                goto ggs;
            }
    }


    if(is==0){
        system("cls");
        return 3030;
    }

}




int result_std(){

    int i;
eps:

    i=4;
    gotoxy(8,1);
    draw(100);
    gotoxy(8,2);
    draw_two(100);
    gotoxy(8,3);
    draw(100);

    while(i<25){
        gotoxy(8,i);
        printf("%c",219);
        printf("%c",177);
        printf("%c",219);
        draw_sp(96);
        printf("%c",219);

        i++;
    }
    i=4;
    while(i<25){
        gotoxy(65,i);
        printf("%c",177);
        printf("%c",219);

        i++;
    }
    i=66;
    while(i<108){
        gotoxy(i,4);
        printf("%c",254);
        gotoxy(i,24);
        printf("%c",254);
        i++;
    }
    gotoxy(8,25);
    draw(100);
    gotoxy(8,26);
    draw_two(100);
    gotoxy(33,26);
    printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
    gotoxy(8,27);
    draw(100);

// ---------------->>

    gotoxy(75,1);
    time_t mytime;
    mytime=time(NULL);
    printf(ctime(&mytime));
//----------------->>


    gotoxy(30,2);
    printf(" MAIN MENU ");
    gotoxy(15,5);
    printf("%c%c%c",213,205,205);
    gotoxy(15,6);
    printf("%c 1.Addmission",195);
    gotoxy(15,7);
    printf("%c%c%c",213,205,205);
    gotoxy(15,8);
    printf("%c 2.Student & Teacher info",195);
    gotoxy(15,9);
    printf("%c%c%c",213,205,205);
    gotoxy(15,10);
    printf("%c 3.Accounting",195);
    gotoxy(15,11);
    printf("%c%c%c",213,205,205);
    gotoxy(15,12);
    printf("%c  4.Menage User",195);
    gotoxy(15,13);
    printf("%c%c%c",213,205,205);
    gotoxy(15,14);
    printf("%c 5.Time table",195);
    gotoxy(15,15);
    printf("%c%c%c",213,205,205);
    gotoxy(15,16);
    printf("%c <<< 6.Result student >>>",195);
    gotoxy(15,17);
    printf("%c%c%c",213,205,205);
    gotoxy(15,18);
    printf("%c 7.Old student & teacher",195);
    gotoxy(15,19);
    printf("%c%c%c",213,205,205);
    gotoxy(15,20);
    printf("%c",179);
    gotoxy(15,21);
    printf("%c",179);
    gotoxy(15,22);
    printf("%c",179);
    gotoxy(15,23);
    printf("%c 0.BACK",195);

   /// ====>>>
    gotoxy(79,3);
    printf(" RESULT STUDENT ");
    gotoxy(70,8);
    printf("=> 1.Add Student Result");
    gotoxy(70,10);
    printf("=> 2.Show Student result");
    gotoxy(70,12);
    printf("=> 3.Search Student result");
    gotoxy(70,15);
    printf("=> 0.BACK");

    /// ===>>>

    gotoxy(70,23);
    printf("Please Type Selected Number:  ");
    int sps=0;
    scanf("%d",&sps);
    fflush(stdin);


    if(sps==1){
        system("cls");
        FILE *rts_d;

            int i=4;

            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>

            gotoxy(25,2);
            printf(" ADD STUDENT RESULT ");
            gotoxy(15,5);
            printf("Roll Number: ");
            gotoxy(15,7);
            printf("Student Name: ");
            gotoxy(15,9);
            printf("Exm GPA: ");
            gotoxy(15,11);
            printf("Student Department: ");
            gotoxy(15,13);
            printf("Result Date: ");

            // ====================>

            rts_d=fopen("result_std.dat","a");
            unsigned long int aps=0;

            gotoxy(36,5);
            scanf("%lu",&st_result.rol);
            aps=st_result.rol;
            fflush(stdin);
            gotoxy(36,7);
            gets(st_result.name);
            gotoxy(36,9);
            gets(st_result.gpa);
            gotoxy(36,11);
            gets(st_result.dipt);
            gotoxy(36,13);
            gets(st_result.res_dat);

            fwrite(&st_result,sizeof(st_result),1,rts_d);
            fflush(rts_d);
            fclose(rts_d);

            /* other side */
            rts_d=fopen("result_std.dat","r");

            while(fread(&st_result,sizeof(st_result),1,rts_d) != 0){
                if(st_result.rol==aps){

                            gotoxy(82,3);
                            printf(" SAVE ");
                            gotoxy(70,5);
                            printf("Roll Number: %lu",st_result.rol);
                            gotoxy(70,6);
                            printf("Student Name: %s",st_result.name);
                            gotoxy(70,7);
                            printf("Exm GPA: %s",st_result.gpa);
                            gotoxy(70,8);
                            printf("Student Department: %s",st_result.dipt);
                            gotoxy(70,9);
                            printf("Result Date: %s",st_result.res_dat);
                }
        }
    gotoxy(70,23);
    printf("0 & ENTER-> goto back: ");
    int u;
sd:
    u=0;
    scanf("%d",&u);
    fflush(stdin);

    if(u==0){
        system("cls");
       goto eps;
    }
    else{
        goto sd;
    }
}


        /*  if type 2 */


        if(sps==2){

                system("cls");
                FILE *vie_f;

                // ---------------->>

                    gotoxy(75,1);
                    time_t mytime;
                    mytime=time(NULL);
                    printf(ctime(&mytime));
                //----------------->>


                                    vie_f=fopen("result_std.dat","r");

                                    printf("\n\t\t\tTINSTITUTE OF COMPUTER SINCE & TECHNOLOGY\n");
                                    printf("\t\t\t\t\tVIEW INFOEMATION\n\n");

                                    while(fread(&st_result,sizeof(st_result),1,vie_f) != 0){

                                                    printf("\n\n\n\t\t\tRoll Number: %lu",st_result.rol);
                                                    printf("\n\t\t\tStudent Name: %s",st_result.name);
                                                    printf("\n\t\t\tExm GPA: %s",st_result.gpa);
                                                    printf("\n\t\t\tStudent Department: %s",st_result.dipt);
                                                    printf("\n\t\t\tResult Date: %s",st_result.res_dat);
                                                    printf("\n\t\t--------------------------------------------");
                                }

                            printf("\n\t\t0 & ENTER-> goto back: ");
                            int u;
                        sdf:
                            u=0;
                            scanf("%d",&u);
                            fflush(stdin);

                            if(u==0){
                                system("cls");
                               goto eps;
                            }
                            else{
                                goto sdf;
                            }
                    }


                /* if type 3 */

                    if(sps==3){
                        system("cls");
                        FILE *stp_f;

                                    int i=4;

                                    gotoxy(8,1);
                                    draw(100);
                                    gotoxy(8,2);
                                    draw_two(100);
                                    gotoxy(8,3);
                                    draw(100);

                                    while(i<25){
                                        gotoxy(8,i);
                                        printf("%c",219);
                                        printf("%c",177);
                                        printf("%c",219);
                                        draw_sp(96);
                                        printf("%c",219);

                                        i++;
                                    }
                                    i=4;
                                    while(i<25){
                                        gotoxy(65,i);
                                        printf("%c",177);
                                        printf("%c",219);

                                        i++;
                                    }
                                    i=66;
                                    while(i<108){
                                        gotoxy(i,4);
                                        printf("%c",254);
                                        gotoxy(i,24);
                                        printf("%c",254);
                                        i++;
                                    }
                                    gotoxy(8,25);
                                    draw(100);
                                    gotoxy(8,26);
                                    draw_two(100);
                                    gotoxy(33,26);
                                    printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
                                    gotoxy(8,27);
                                    draw(100);

                                // ---------------->>

                                    gotoxy(75,1);
                                    time_t mytime;
                                    mytime=time(NULL);
                                    printf(ctime(&mytime));
                                //----------------->>



                                    stp_f=fopen("result_std.dat","r");
                                    unsigned long int sec_roll=0;

                                    gotoxy(77,3);
                                    printf(" SEARCH INFORMATION ");
                                    gotoxy(70,15);
                                    printf("Type Roll Number: ");
                                    scanf("%lu",&sec_roll);
                                    fflush(stdin);


                                    while(fread(&st_result,sizeof(st_result),1,stp_f) != 0){
                                        if(st_result.rol==sec_roll){

                                                    gotoxy(25,2);
                                                    printf(" VIEW INFOEMATION ");
                                                    gotoxy(15,5);
                                                    printf("Roll Number: %lu",st_result.rol);
                                                    gotoxy(15,6);
                                                    printf("Student Name: %s",st_result.name);
                                                    gotoxy(15,7);
                                                    printf("Exm GPA: %s",st_result.gpa);
                                                    gotoxy(15,8);
                                                    printf("Student Department: %s",st_result.dipt);
                                                    gotoxy(15,9);
                                                    printf("Result Date: %s",st_result.res_dat);
                                        }
                                }

                            gotoxy(15,23);
                            printf("0 & ENTER-> goto back: ");
                            int u;
                        sdp:
                            u=0;
                            scanf("%d",&u);
                            fflush(stdin);

                            if(u==0){
                                system("cls");
                               goto eps;
                            }
                            else{
                                goto sdp;
                            }

            }


            /* if type 0 */

            if(sps==0){
                return 3404;
            }

}





int old_teacher_and_std(){

    int i;
    FILE *get_fil;

ol_t_s:

    i=4;
    gotoxy(8,1);
    draw(100);
    gotoxy(8,2);
    draw_two(100);
    gotoxy(8,3);
    draw(100);

    while(i<25){
        gotoxy(8,i);
        printf("%c",219);
        printf("%c",177);
        printf("%c",219);
        draw_sp(96);
        printf("%c",219);

        i++;
    }
    i=4;
    while(i<25){
        gotoxy(65,i);
        printf("%c",177);
        printf("%c",219);

        i++;
    }
    i=66;
    while(i<108){
        gotoxy(i,4);
        printf("%c",254);
        gotoxy(i,24);
        printf("%c",254);
        i++;
    }
    gotoxy(8,25);
    draw(100);
    gotoxy(8,26);
    draw_two(100);
    gotoxy(33,26);
    printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
    gotoxy(8,27);
    draw(100);

// ---------------->>

    gotoxy(75,1);
    time_t mytime;
    mytime=time(NULL);
    printf(ctime(&mytime));
//----------------->>


    gotoxy(30,2);
    printf(" MAIN MENU ");
    gotoxy(15,5);
    printf("%c%c%c",213,205,205);
    gotoxy(15,6);
    printf("%c 1.Addmission",195);
    gotoxy(15,7);
    printf("%c%c%c",213,205,205);
    gotoxy(15,8);
    printf("%c 2.Student & Teacher info",195);
    gotoxy(15,9);
    printf("%c%c%c",213,205,205);
    gotoxy(15,10);
    printf("%c 3.Accounting",195);
    gotoxy(15,11);
    printf("%c%c%c",213,205,205);
    gotoxy(15,12);
    printf("%c 4.Menage User",195);
    gotoxy(15,13);
    printf("%c%c%c",213,205,205);
    gotoxy(15,14);
    printf("%c 5.Time table",195);
    gotoxy(15,15);
    printf("%c%c%c",213,205,205);
    gotoxy(15,16);
    printf("%c 6.Result student",195);
    gotoxy(15,17);
    printf("%c%c%c",213,205,205);
    gotoxy(15,18);
    printf("%c <<< 7.Old student & teacher >>>",195);
    gotoxy(15,19);
    printf("%c%c%c",213,205,205);
    gotoxy(15,20);
    printf("%c",179);
    gotoxy(15,21);
    printf("%c",179);
    gotoxy(15,22);
    printf("%c",179);
    gotoxy(15,23);
    printf("%c 0.Close apps",195);

   /// ====>>>
    gotoxy(75,3);
    printf(" OLD STUDENT & TRACHER ");
    gotoxy(70,8);
    printf("=> 1.Show Student Information");
    gotoxy(70,10);
    printf("=> 2.Search Student Information");
    gotoxy(70,12);
    printf("=> 3.Show Employ Information");
    gotoxy(70,14);
    printf("=> 4.Search Employ Information");
    gotoxy(70,16);
    printf("=> 0.BACK");

    /// ===>>>

    int pis=0;

    gotoxy(70,23);
    printf("Please Type Selected Number:  ");
    scanf("%d",&pis);
    fflush(stdin);


    /* view old student information */

    if(pis==1){
    system("cls");

        FILE *view_pt;
        int ksp;

        printf("\n\n\t\t\tINSTITUTE OF COMPUTER SINCE & TECHNOLOGY ");
        printf("\n\t\t\t\tOLD STUDENT INFORMATION\n\n");
        printf("\n\t\t\t\t-----------------------\n");

        // ---------------->>

            gotoxy(60,7);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));

        //----------------->>

            view_pt=fopen("reco.dat","r");


            while(fread(&sut_reg,sizeof(sut_reg),1,view_pt) != 0){

                                printf("\n\n\t\t|->Student id: %lu",sut_reg.st_id);
                                printf("\n\n\t\t|->Student name [MAX 28W]: %s",sut_reg.name);
                                printf("\n\n\t\t|->Father name [MAX 28W]: %s",sut_reg.f_name);
                                printf("\n\n\t\t|->Guidance name [MAX 28W]: %s",sut_reg.g_name);
                                printf("\n\n\t\t|->Guidance number [MAX 10N]: 0%lu",sut_reg.g_number);
                                printf("\n\n\t\t|->Gender [M || F]: %c",sut_reg.gender);
                                printf("\n\n\t\t|->Department [MAX 15W]: %s",sut_reg.st_dpt);
                                printf("\n\n\t\t|->City [MEX 18W]: %s",sut_reg.st_city);
                                printf("\n\n\t\t|->Admission year [MAX 9W]: %s",sut_reg.st_admi_yer);
                                printf("\n\n\t\t|->Student number [MAX 10N]: 0%lu",sut_reg.s_number);
                                printf("\n\n\t\t| ------------------------------------------------------- ");
                                printf("\n\n\n\t\t");
                    }
                    fclose(view_pt);


asv_regt:

            ksp=0;
            printf("\n\n\t\t|--- BACK Than Type [ 0 ] : ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto ol_t_s;
            }
            else{
                goto asv_regt;
            }
    }


    /* search old student information */



    if(pis==2){
        system("cls");

        FILE *espt_ql;
        unsigned long int gt_st_id;


            i=4;
            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>



            espt_ql=fopen("reco.dat","r");

            gotoxy(78,3);
            printf(" SEARCH INFORMATION ");
            gotoxy(70,13);
            printf("Type Student ID: ");
            scanf("%lu",&gt_st_id);

            while(fread(&sut_reg,sizeof(sut_reg),1,espt_ql) != 0){

                    if(sut_reg.st_id==gt_st_id){

                    gotoxy(25,2);
                    printf(" STUDENT INFORMATION ");
                    gotoxy(15,5);
                    printf("Student id: %lu",sut_reg.st_id);
                    gotoxy(15,7);
                    printf("Student name : %s",sut_reg.name);
                    gotoxy(15,9);
                    printf("Father name : %s",sut_reg.f_name);
                    gotoxy(15,11);
                    printf("Guidance name : %s",sut_reg.g_name);
                    gotoxy(15,13);
                    printf("Guidance number : 0%lu",sut_reg.g_number);
                    gotoxy(15,15);
                    printf("Gender : %c",sut_reg.gender);
                    gotoxy(15,17);
                    printf("Department : %s",sut_reg.st_dpt);
                    gotoxy(15,19);
                    printf("City : %s",sut_reg.st_city);
                    gotoxy(15,21);
                    printf("Admission year : %s",sut_reg.st_admi_yer);
                    gotoxy(15,23);
                    printf("Student number : 0%lu",sut_reg.s_number);

                    }
            }
            fclose(espt_ql);



                int gt_val;
        erdss:
                gt_val=0;
                gotoxy(70,23);
                printf("Please type [ 0 ] Than Back:  ");
                scanf("%d",&gt_val);
                fflush(stdin);

                if(gt_val==0){
                    system("cls");
                    goto ol_t_s;
                }
                else{
                    goto erdss;
                }

     }


     /* view old employ account */


    if(pis==3){
    system("cls");


         FILE *view_st;
        int ksp;

        // ---------------->>

            gotoxy(60,7);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));

        //----------------->>

            view_st=fopen("reco_te.dat","r");


            while(fread(&tuc_reg,sizeof(tuc_reg),1,view_st) != 0){


                    printf("\n\n\t\t|->Employ id: %lu",tuc_reg.tec_id);
                    printf("\n\n\t\t|->Employ name : %s",tuc_reg.tec_name);
                    printf("\n\n\t\t|->Gender : %c",tuc_reg.gndr);
                    printf("\n\n\t\t|->Employ post: %s",tuc_reg.te_post);
                    printf("\n\n\t\t|->Education : %s",tuc_reg.education);
                    printf("\n\n\t\t|->Joining Department : %s",tuc_reg.te_dpt);
                    printf("\n\n\t\t|->City : %s",tuc_reg.te_city);
                    printf("\n\n\t\t|->Mobile number : %lu",tuc_reg.te_number);
                    printf("\n\n\t\t| ------------------------------------------------------- ");
                    printf("\n\n\n\t\t");

                    }
                    fclose(view_st);


    asai_reg:

            ksp=0;
            printf("\n\n\t\t|--- BACK Than Type [ 0 ] : ");
            scanf("%d",&ksp);

            if(ksp==0){
                system("cls");
                goto ol_t_s;
            }
            else{
                goto asai_reg;
            }

    }



    /* search employ old account */

     if(pis==4){
        system("cls");


        FILE *empt_ql;
        unsigned long int gt_em_id;


            i=4;
            gotoxy(8,1);
            draw(100);
            gotoxy(8,2);
            draw_two(100);
            gotoxy(8,3);
            draw(100);

            while(i<25){
                gotoxy(8,i);
                printf("%c",219);
                printf("%c",177);
                printf("%c",219);
                draw_sp(96);
                printf("%c",219);

                i++;
            }
            i=4;
            while(i<25){
                gotoxy(65,i);
                printf("%c",177);
                printf("%c",219);

                i++;
            }
            i=66;
            while(i<108){
                gotoxy(i,4);
                printf("%c",254);
                gotoxy(i,24);
                printf("%c",254);
                i++;
            }
            gotoxy(8,25);
            draw(100);
            gotoxy(8,26);
            draw_two(100);
            gotoxy(33,26);
            printf("[  INSTITUTE OF COMPUTER SINCE AND TECHNOLOGY  ]");
            gotoxy(8,27);
            draw(100);

        // ---------------->>

            gotoxy(75,1);
            time_t mytime;
            mytime=time(NULL);
            printf(ctime(&mytime));
        //----------------->>



            empt_ql=fopen("reco_te.dat","r");

            gotoxy(78,3);
            printf(" SEARCH INFORMATION ");
            gotoxy(70,13);
            printf("Type Employ ID: ");
            scanf("%lu",&gt_em_id);

            while(fread(&tuc_reg,sizeof(tuc_reg),1,empt_ql) != 0){

                    if(tuc_reg.tec_id==gt_em_id){

                    gotoxy(25,2);
                    printf(" STUDENT INFORMATION ");
                    gotoxy(15,5);
                    printf("Employ id: %lu",tuc_reg.tec_id);
                    gotoxy(15,7);
                    printf("Employ name : %s",tuc_reg.tec_name);
                    gotoxy(15,9);
                    printf("Gender : %c",tuc_reg.gndr);
                    gotoxy(15,11);
                    printf("Employ post: %s",tuc_reg.te_post);
                    gotoxy(15,13);
                    printf("Education : %s",tuc_reg.education);
                    gotoxy(15,15);
                    printf("Joining Department : %s",tuc_reg.te_dpt);
                    gotoxy(15,17);
                    printf("City : %s",tuc_reg.te_city);
                    gotoxy(15,19);
                    printf("Mobile number : %lu",tuc_reg.te_number);

                    }
            }
            fclose(empt_ql);



                int gt_val;
        erdstt:
                gt_val=0;
                gotoxy(15,23);
                printf("Please type [ 0 ] Than Back:  ");
                scanf("%d",&gt_val);
                fflush(stdin);

                if(gt_val==0){
                    system("cls");
                    goto ol_t_s;
                }
                else{
                    goto erdstt;
                }

     }



     if(pis==0){
        system("cls");
        return 203;
     }

}




int close_pro(int key){
    if(key==006){

     int i,j,o;
     char as[41]={" paulanik112@gmail.com "};
     char ap[41]={" Collage Management System "};
     char aw[41]={" paulanik.wb@gmail.com "};

    /* Fast table draw */

    gotoxy(24,2);
    for(j=0;j<60;j++){
        printf("%c",177);
    }
    for(j=0;j<3;j++){
            printf("\n\t\t\t%c",178);
        for(o=0;o<58;o++){
            printf(" ");
        }
    printf("%c",178);
    }
    printf("\n\t\t\t");
        for(j=0;j<60;j++){
        printf("%c",177);
    }
    gotoxy(32,4);
    printf("[ INSTITUTE OF COMPUTER SIENCE & TECHNOLOGY ]");

    /* second table draw */

    gotoxy(24,9);
    for(j=0;j<60;j++){
        printf("%c",177);
    }
    for(j=0;j<10;j++){
            printf("\n\t\t\t%c",178);
        for(o=0;o<58;o++){
            printf(" ");
        }
    printf("%c",178);
    }
    printf("\n\t\t\t");
        for(j=0;j<60;j++){
        printf("%c",177);
    }

    /* Write loop show name */

    gotoxy(48,9);
    printf(" Good Bey! ");
    gotoxy(27,11);
    printf("Developer:");


    gotoxy(33,13);
    for(i=0;i<41;i++){
        Sleep(60);
        printf("%c", ap[i]);
    }

    gotoxy(33,14);
    for(i=0;i<41;i++){
        Sleep(60);
        printf("%c", as[i]);
    }

    gotoxy(33,15);
    for(i=0;i<41;i++){
        Sleep(60);
        printf("%c", aw[i]);
    }

    /*
    gotoxy(33,16);
    for(i=0;i<41;i++){
    Sleep(60);
    printf("%c", at[i]);
    }

    gotoxy(33,17);
    for(i=0;i<41;i++){
    Sleep(60);
    printf("%c", ay[i]);
    }

    gotoxy(33,18);
    for(i=0;i<41;i++){
    Sleep(60);
    printf("%c", ar[i]);
    }
*/

    gotoxy(36,20);
    printf(" Closing College Management System ");
    printf("\n\n\n");
    return 0;
    }
}





int main(){


    mkdir("reg_info");
    mkdir("st_acc");
    mkdir("te_acc");
    mkdir("sost_dd");
    //system("color 1F");
    //system("color 3f");
    //system("color DF");


    int kal,lop,pop,ikk=0;


    ikk=login_sys();

    /// Admin login ----------

     if(ikk==1213){
        int pt=0;
        pt=login_ft();


    if(pt==111){
    int i;

    system("cls");
    gotoxy(34,5);
    printf("[ INSTITUTE OF COMPUTER SIENCE & TECHNOLOGY ]");
    gotoxy(52,10);
    printf("loading.....");
    gotoxy(34,12);
    for(i=0;i<45;i++){
        Sleep(50);
        printf("%c", 219);
    }
    system("cls");

ik:
       lop=0;
       lop=main_menu_function();        /// into main menu

       /* addmisstion */

ko:
    if(lop==901){
            int llp=0;
            llp=addmin();        /// into addmisstion

            if(llp==12){
                goto ik;            /// goto -> main menu
            }
    }

    /* student and teacher information */

    pit:
    if(lop==902){
        int opp=0;
        opp=student_and_teacher_menu();       /// into student and teacher information

        if(opp==0005){
            goto ik;    // goto -> into student and teacher information
        }
}


    /*  account main menu */

int it=0,ut;
top:
    if(lop==903){
        ut=0;
        ut=account_main_mnu();       /// into account_main_menu

        if(ut==919){
            goto ik;  // goto -> main_menu
        }
    }

 int ka,ke,kp,kq,kw,kl,kh,kd;
ist:
    if(ut==915){
        int tys=0;
        ka=0,ke=0,kp=0,kq=0,kw=0,kl=0,kh=0,kd=0;

        tys=student_account();        /// into semester

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



    if(ka==41){      /// into fast semester

        if(fast_sems()==500){
            goto ist;   // goto -> semester
        }
    }



    if(ke==42){     /// into second semester

        if(sec_sems()==1105){
            goto ist;  // goto -> semester
        }
    }




    if(kp==43){  /// into 3rd semester

        if(trd_sems()==1105){
            goto ist;   // goto -> semester
        }
    }


    if(kq==44){   /// into 4th semester

        if(four_sems()==1405){
            goto ist;   // goto -> semester
        }
    }



    if(kw==45){       /// into 5th semester

        if(fiv_sems()==135){
            goto ist;   // goto -> semester
        }
    }




    if(kl==46){ /// into 6th semester

        if(six_sems()==145){
            goto ist;   // goto -> semester
        }
    }



    if(kh==47){     /// into 7th semester

        if(sev_sems()==155){
            goto ist;   // goto -> semester
        }
    }



    if(kd==48){   /// into 8th semester

        if(eght_sems()==165){
            goto ist;   // goto -> semester
        }
    }



    if(ut==916){
        if(employe_ac()==390){
            goto top;
        }
    }

    if(ut==917){
        int r=0;
        r=income_menu();

        if(r==881){
            fflush(stdin);
            system("cls");
            if(student_account()==100){
                goto top;
            }
        }
        if(r==883){
            goto top;
        }
    }


    fflush(stdin);
    if(ut==918){
        int t=0;
        t=expenses_menu();
        if(t==771){
            if(employe_ac()==390){
                goto top;
            }
        }
        if(t==773){
            goto top;
        }
    }




    /* menage user penal */
    fflush(stdin);

    if(lop==904){
    /// into menage user penal

        if(menage_us(22)==055){
            goto ik;    // goto -> main_menu
        }
    }


    /* Time table function */
    fflush(stdin);
    if(lop==905){
        if(time_tbl()==3030){
            goto ik;
        }
    }

    /* result student function */
    fflush(stdin);
    if(lop==906){
        if(result_std()==3404){
            goto ik;
        }
    }


    /* old student and teacher */
    if(lop==907){
        if(old_teacher_and_std()==203){
            goto ik;
        }
    }

    if(lop==004){
        close_pro(006);
        return 0;
    }
    }
}




    fflush(stdin);
    /// Account login   ------------

    if(ikk==1214){
        system("cls");

        int ps=0;
        ps=login_ft();

            if(ps==111){
            int i;

            system("cls");
            gotoxy(34,5);
            printf("[ INSTITUTE OF COMPUTER SIENCE & TECHNOLOGY ]");
            gotoxy(52,10);
            printf("loading.....");
            gotoxy(34,12);
            for(i=0;i<45;i++){
                Sleep(50);
                printf("%c", 219);
            }
            system("cls");



            int it=0,io=0,ip=0,il=0,ut=0;
            topl:

                    ut=0;
                    ut=account_main_mnu();       /// into account_main_menu

                    if(ut==915){
                        it=01;
                    }


                    fflush(stdin);
                    if(ut==916){
                        if(employe_ac()==390){
                            goto topl;
                        }
                    }



                    if(ut==917){
                        int r=0;
                        r=income_menu();

                        if(r==881){
                            fflush(stdin);
                            system("cls");
                            if(student_account()==100){
                                goto topl;
                            }
                        }
                        if(r==883){
                            goto topl;
                        }
                    }


                    fflush(stdin);
                    if(ut==918){
                        int t=0;
                        t=expenses_menu();
                        if(t==771){
                            if(employe_ac()==390){
                                goto topl;
                            }
                        }
                        if(t==773){
                            goto topl;
                        }
                    }


                    if(ut==919){
                        close_pro(006);
                        return 0;
                    }

            int ka,ke,kp,kq,kw,kl,kh,kd;
            istt:
                if(it==01){
                    int tys=0;
                    ka=0,ke=0,kp=0,kq=0,kw=0,kl=0,kh=0,kd=0;

                    tys=student_account();        /// into semester

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



                if(ka==41){      /// into fast semester

                    if(fast_sems()==500){
                        goto istt;   // goto -> semester
                    }
                }



                if(ke==42){     /// into second semester

                    if(sec_sems()==1105){
                        goto istt;  // goto -> semester
                    }
                }




                if(kp==43){  /// into 3rd semester

                    if(trd_sems()==1105){
                        goto istt;   // goto -> semester
                    }
                }


                if(kq==44){   /// into 4th semester

                    if(four_sems()==1405){
                        goto istt;   // goto -> semester
                    }
                }



                if(kw==45){       /// into 5th semester

                    if(fiv_sems()==135){
                        goto istt;   // goto -> semester
                    }
                }




                if(kl==46){ /// into 6th semester

                    if(six_sems()==145){
                        goto istt;   // goto -> semester
                    }
                }



                if(kh==47){     /// into 7th semester

                    if(sev_sems()==155){
                        goto istt;   // goto -> semester
                    }
                }



                if(kd==48){   /// into 8th semester

                    if(eght_sems()==165){
                        goto istt;   // goto -> semester
                    }
                }

    }
}





///  Monitoring login  ------------


    if(ikk==1215){


                    int sp=0;
                    sp=login_ft();

                        if(sp==111){
                        int i;

                        system("cls");
                        gotoxy(34,5);
                        printf("[ INSTITUTE OF COMPUTER SIENCE & TECHNOLOGY ]");
                        gotoxy(52,10);
                        printf("loading.....");
                        gotoxy(34,12);
                        for(i=0;i<45;i++){
                            Sleep(50);
                            printf("%c", 219);
                        }
                        system("cls");

                int lope;
            iks:
                lope=0;
                lope=main_menu_function();        /// into main menu


            /* into addmisstion function */

                if(lope==901){
                        int iip=0;
                        iip=addmin();        /// into addmisstion

                        if(iip==12){
                            goto iks;            /// goto -> main menu
                        }
                }

                /* student and teacher information */


                if(lope==902){
                    int oppe=0;
                    oppe=student_and_teacher_menu();       /// into student and teacher information

                    if(oppe==0005){
                        goto iks;    // goto -> into student and teacher information
                    }
            }




            /* menage user penal */

                fflush(stdin);

                if(lope==904){
                /// into menage user penal

                    if(menage_us(23)==056){
                        goto iks;    // goto -> main_menu
                    }
                }

                /* Time table function */

                fflush(stdin);
                if(lope==905){
                    if(time_tbl()==3030){
                        goto iks;
                    }
                }

                /* result student function */

                fflush(stdin);
                if(lope==906){
                    if(result_std()==3404){
                        goto iks;
                    }
                }


                /* old student and teacher */

                if(lope==907){
                    if(old_teacher_and_std()==203){
                        goto iks;
                    }
                }

                if(lope==004){
                    close_pro(006);
                    return 0;
                }

                else{
                    system("cls");
                    goto iks;
                }

                        }
    }




/* All function , using in this program */

/*
{

         login_sys();

          result_std();
          time_tbl();
          Expenses_menu();

          income_menu();
          employe_ac();
          main_menu_function();
         addmin();
          student_and_teacher_menu();
          menage_us();
          account_main_mnu();
          student_account();

            fast_sems();
            sec_sems();
            trd_sems();
            four_sems();
            fiv_sems();
            six_sems();
            sev_sems();
            eght_sems();

 }  */

    return 0;
}
