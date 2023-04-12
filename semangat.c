#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct Materi{
    char deskripsi[100];
    int kesulitan;
};

void belajar(){
    struct Materi enkapsulasi,inheritance;
    strcpy(enkapsulasi.deskripsi, "Getter and Setter");
    enkapsulasi.kesulitan = 3;
    strcpy(inheritance.deskripsi, "Hubungan Is-A pada class");
    inheritance.kesulitan = 4;
    printf("Saya bisa!\n");
}

int main(){
    bool utpKelar = 0;
    while(!utpKelar)
        belajar();
    return 0;
}
