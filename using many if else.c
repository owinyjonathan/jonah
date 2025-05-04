#include <stdio.h>
int main(){
char grade;
printf(" \nEnter grade: ");
scanf("%c", & grade);

if(grade=='A'){
printf("very good\n");

}
else if(grade=='B'){
printf("well done\n");
}
else if(grade =='C'){
printf("fairly done\n");
}
else if(grade=='D'){
printf("repeat");
}
else{
printf("that is not valid grade");

}
return 0;
}