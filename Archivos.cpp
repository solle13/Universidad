#include<conio.h>
#include<stdio.h>

int main(){
    FILE *fp;                       //Crea puntero para el archivo
    char nombre_archivo[32];        //Variable que contendrá el nombre del archivo.
    float a;                        //Valor tipo float que será grabado en el archivo.
    printf("\nIngrese nombre y extension del archivo.:");
    scanf("%s",nombre_archivo);     //Se ingresa nombre y extensión del archivo.
    fp = fopen(nombre_archivo,"w"); //Crea el archivo
    printf("\nIngrese un número entero o double o Float:");
    scanf("%f", &a);                //Primer número que se ingresa
    while (a >= 0){                 //Si ingresa un número negativo sale del ciclo.
        fprintf(fp, "%5.2f", a);    //Graba el valor de la variable a en el archivo.
        printf("\nIngrese un numero entero o double o Float:");
        scanf("%f", &a);            //Sigue ingresando números hasta que sea negativo
    }
    fclose(fp);                     //Cierra el archivo
    printf("\n------ Archivo creado exitosamente!! ------\n");
    fp = fopen(nombre_archivo,"r"); //Abre el archivo en modo lectura
    printf("\n------ Se abre el archivo en modo lectura!! ------\n");
    //Muestra el contenido.
    while (fscanf(fp, "%f", &a) != EOF){ //EOF (Final del archivo)
        printf("%5.2f - ", a);      //Muestra el contenido.
    }
    fclose(fp);                     //Cierra el archivo
    printf("\n\n");                 //Salto de línea.
    getch();                      //Esperamos por una tecla.
    return 0;                       //Sale del programa
}