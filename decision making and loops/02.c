#include <stdio.h>
int main(){
char c;
int upper,lower;
printf("enter the character: ");
scanf("%c",&c);
upper=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
lower=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if (upper||lower){
  printf("vowel");
}
else{
  printf("consonent");
}
return 0;
}
