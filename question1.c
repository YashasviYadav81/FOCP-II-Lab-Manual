#include<stdio.h>
int main(){
    int marks;
    scanf("%d", &marks);
    switch(marks/10){
      case 10:
      printf("Grade A+\n");
      break;
      case 9:
      printf("Grade A\n");
      break;
      case 8:
      printf("Grade B+\n");
      break;
      case 7:
      printf("Grade B\n");
      break;

      default:
      printf("Fail\n");


    }

    return 0;
} 
