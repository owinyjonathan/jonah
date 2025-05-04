#include <stdio.h>
int main(){
char grade;


printf("\nEnter a grade: ");
scanf("%c",& grade);
clrscr:
switch(grade){
case'A':
printf("perfectly done\n");
break;


case 'B':
printf("you are almost there\n");
break;

case'C':
printf("work harder\n");
break;

case'D':
printf("triple your effort\n");
break;

case'E':
printf("your last warning\n");
break;

case'F':
printf("you have failed\n");
break;

case'G':
printf("next time better\n");
break;

}

return 0;
}