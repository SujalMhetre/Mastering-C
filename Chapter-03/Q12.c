#include <stdio.h>
int main(){
   char ch;
   printf("Enter your Character :");
   scanf("%c",&ch);

   if(ch>='A' && ch<='Z'){
    printf("Entered character is in uppercase");
   }
   else if(ch>='a' && ch<='z'){
      printf("Entered character is in lowercase");
   }
   else{
    printf("character is not an alphabet");
   }

   return 0;
}