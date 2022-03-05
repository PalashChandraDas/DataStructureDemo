
#include <stdio.h>

int main(){

float student[6], value = 125.2565;
int size=5, pos=3, i;

printf("Enter your elements that you store: ");
for(i = 0; i<size; i++){
    scanf("%f", &student[i]);
}
//working here...
for(i = size-1; i>=pos-1; i--){
    student[i+1] = student[i];
}
student[pos-1] = value; //insert value in position

printf("The new array is: ");
for(i = 0; i<=size; i++){
    printf("%f ", student[i]);
}

printf("\n");

return 0;
}
