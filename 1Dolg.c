/*Цель программы - преобразование строки таким образом, чтобы сначала 
шли элементы, стоящие на четных позициях, а затем - на нечетных*/

#include <stdio.h>
#include <stdlib.h>

int numb(char *name1);

char *func(char *name1, char *name2);

int main(){
      char *name1;
      char *name2;
      name1 = (char*)malloc(sizeof(name1));
      name2 = (char*)malloc(sizeof(name2));
      scanf("%s", name1);

      *name2 = *func(name1, name2);
      printf("%s", name2);
      return 0;
}

char *func(char *name1, char *name2) {
  int j = 0;
  int i;
  int r;
for(i=0; *(name1 + i) != '\0';i++) {
        j++;
      }

for(i=0; *(name1 + i) != '\0';i++) {
    if(i % 2 == 0) {
      r = i/2;
      *(name2 + r) = *(name1 + i);
    }
    else{
      r =r + j/2;
      *(name2 + r) = *(name1 + i);
    }
  }
  return name2;
}
