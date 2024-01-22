#include<stdio.h>

int main() {

//while-Schleife:

  int arr[] = {6, 9, 18, 37, 4, 23, 27, 16, 1, 30, 22, 7, 10, 25, 3, 2, 35, 11, 19, 28};    // 20 Elemente (0-19)
  int i = 0;                                                                                // Initialize index i an Stelle 0 -> startet bei 0

  while(i < 20) {
    printf("%i\n", arr[i]);                                                                 // Access element at index i in arr and print
    i++;
  }

//for-Schleife:

  int arr[] = {6, 9, 18, 37, 4, 23, 27, 16, 1, 30, 22, 7, 10, 25, 3, 2, 35, 11, 19, 28};    // 20 Elemente (0-19)

  for(int i = 0; i < 20; i++) {
    printf("%i\n", arr[i]);                                                                 // Access element at index i in arr and print
  }


//Übung

  int arr[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 20, 22, 26, 28, 29};
  int arr2[100];

  // Elemente des 1. Arrays ausdrucken
  for (int i = 0; i < 20; i++) {
    printf("%i\n", arr[i]);
  }
  // Elemente zum 2. Array hinzufügen ab der Zahl 4 an Stelle 0
  for (int x = 0; x < 100; x++) {
    arr2[x] = x + 4;
    printf("%i\n", arr2[x]);
  }
}
