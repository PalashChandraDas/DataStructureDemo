#include <stdio.h>

int main(){

int student[5] = {1, 2, 5, 8, 10}, size = 5, pos = 3, i;

//working delete:
for(i = pos-1 ; i < size-1; i++){//2,  i=3
    student[i] = student[i+1];  //{}
}

//after deleting the array:
for(i = 0; i<size-1; i++){
    printf("%d ", student[i]);
}

return 0;
}

