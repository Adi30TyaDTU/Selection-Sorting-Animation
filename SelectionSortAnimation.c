#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#ifdef _WIN32
#include <windows.h>
#else
#define CLEAR_SCREEN "\033[H\033[J"
#endif
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\x1b[34m"
void clearScreen() {
#ifdef _WIN32
system("cls");
#else
printf(CLEAR_SCREEN);
#endif
}
void DISPLAY(int array[], int length,int x,int y,int j, int p) {
clearScreen();
printf("\n");
for(int k=0; k<length; k++){
if( k<p){ printf(GREEN " %03d " RESET, array[k]);
}
else if (k==x || k==y){ printf(RED" %03d " RESET, array[k]);
}
else{ printf(" %03d ",array[k]);
}
}
printf("\n");
for(int k=0; k<length; k++){
if (k==j){ printf(" ^");
}
else { printf("     ");
}
}
sleep(1);
}
void SWAP(int array[], int x,int y,int length){
int n=y-x+1;
int n1=n;
while(n){
int k=n1-n;
n--;
clearScreen();
for (int i=0; i<length; i++){
if(i==x+k ){
printf(RED " %03d " RESET, array[x]);

}
else { printf(" ", array[i]);
}
}
printf("\n");
for (int i=0; i<length; i++){
if(i==x || i==y){
printf(" ", array[i]);
}
else { printf(" %03d ", array[i]);
}
}
printf("\n");
for (int i=0; i<length; i++){
if(i==y-k ){
printf(RED " %03d " RESET, array[y]);
}
else { printf(" ", array[i]);
}
}
sleep(1);}
}
void SELECTION_SORT(int array[], int length) {
for (int i = 0; i < length - 1; i++){
int m=INT_MAX;
int min_index;
for (int j=i; j<length; j++){
if (array[j]<m){ m=array[j];
min_index=j;

}

DISPLAY(array,length,i,min_index,j,i);
}
SWAP(array,i,min_index,length);
int temp = array[i];
array[i] = array[min_index];
array[min_index] = temp;
}
}
int main() {
int n;
printf("Enter the number of elements: ");
scanf("%d", &n);
int arr[n] ;
for (int i=0; i<n; i++){
scanf("%03d", &arr[i]);
}
int size = sizeof(arr) / sizeof(arr[0]);
SELECTION_SORT(arr, size);
DISPLAY(arr,size,0,0,size-1,size);
printf("\n");

printf(BLUE "Thanks for Watching our simulated Selection Sort, Hope you liked it :)" RESET);
printf("\n ");
return 0;
}
