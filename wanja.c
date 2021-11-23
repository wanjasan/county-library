/*
Project:library system
Author:Titus Njiru
Date:11/23/2021
Compiler:GNC
Language:GCC
License:MIT
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int menu();//prototype
void execute-action(int action);
void close()

int main()

int  action;
action=menu();
execute-action(action);
return 0;




void execute-action(int action);
printf("your selected action %d,"action);
}
int menu()//header//prototype

//body int action;
do{

printf("/t county library/n");
printf("welcome Mr.Titus Njiru/n");
printf("what would you like to do?\n");
printf("1.View user\n");
printf("2.Add new user\n");
printf("3.edit user\n");
printf("4.Delete user/n");
printf("5."change password\n");
printf("6.log out\n");
printf("7Exit system\n");
printf("8elected action 1-7/n");


scanf("%d,&action"\);
printf("invalid action!!!Try again/n");

while(action<1|| action>7);
return action;

void execute-action(int action) {
}switch(action)
case 1:
printf("list of users");
break;
case 2:
printf("Add new user/n");
break;
case3:
printf("Editing user/n");
break;
case 4:
printf("Deleting user/n");
break;
case 5:
printf("changing password/n");
break;
case 6:
printf("You have been logged out/n");
break;
case 7:
printf("close/n");
break;

default:
printf("invalid action/n");



void close()
printf("Thanks for using the system/n")
printf("created by Titus Njiru/n");
printf("Bye/n");
sleep(2000);
exit(0);
}
