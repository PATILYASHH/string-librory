#include<stdio.h>
#include<string.h>

int combine();
int lenght();
int reverce();
int copy();
int compare();

int main()
{
int options;
  printf("Choose a option : \n\v\v");


printf("1] Combine two strings\n");
  printf("2] Mesure length of string\n");
  printf("3] Reverce a string \n");
  printf("4] Copy string to anther string \n");
  printf("3] Compare two strings \n");

 sacnf("%d",&options);
  
switch(options)
  {
    case 1:
    // combne two strings 
      combine();

    break;

    
    case 2:
    // 
    break;

    
    case 3:
    // 
    break;
  
    case 4:
    // 
    break;


    case 5:
    // 
    break;


    case 6:
    // 
    break;


    default:
    // 
    break;
  }
  
  return 0;
}

int combine()
{
  char s1[100];
  char s2[100];

  printf("Enter value of sring 1 :");
  scanf("%s",&s1);

  printf("Enter value of sring 2 :");
  scanf("%s",&s2);

  printf("s1 = %s1 \n s2 = %s2");

  strcat(s1,s2);

  printf("%s",s1);
}
