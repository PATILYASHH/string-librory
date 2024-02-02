#include<stdio.h>
#include<string.h>

int combine();
int lenght();
int reverce();
int copy();
int compare();
int manu();

int main()
{
int options;
  printf("Choose a option : \n\v\v");


printf("1] Combine two strings\n");
  printf("2] Mesure length of string\n");
  printf("3] Reverce a string \n");
  printf("4] Copy string to anther string \n");
  printf("3] Compare two strings \n");

 scanf("%d",&options);
  
switch(options)
  {
    case 1:
    // combne two strings 
      combine();

    break;

    
    case 2:
    //length
       lenght();

    break;

    
    case 3:
    // reverce
      reverce();

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


  strcat(s1,s2);

  printf("\v\v%s",s1);

  return 0;
}

int lenght()
{
  char s[100];

printf("enter a string to measure ");
  scanf("%s",&s);

  printf("The number of character in string is = %d",strlen(s));
  
  return 0;
}


// int reverce()
// {
//   char sr[100];

//   printf("Enter worlds for reverce ");
//   scanf("%s",&sr);

//   strrev(sr);
  
//   printf("reverced world : \n %s",sr);

//   return 0;
// }

