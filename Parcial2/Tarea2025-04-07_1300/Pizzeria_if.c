#include <stdio.h>
//La siguientes librearias me ayudan a que las tildes se muestren. :3
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
int main() {
    setlocale(LC_ALL, ""); //También ayuda a las tildes
    char pizza[20]; //Son cadenas
    char ingrediente[20];

    printf("¿Qué tipo de pizza le gustaría? Tenemos: vegetariana y no vegetariana. (En caso de querer la no vegetariana, escriba «no_vegetariana», por favor)\n");
    scanf("%s", pizza); //No se usa el "&" ya que es un arreglo. Tampoco se usa "%c" ya que solo lee una letra y nosotros queremos que lea toda la palabra. :D
   if (strcmp(pizza, "vegetariana") == 0){ //"strcmp" sirve para comparar si dos palabras (o frases) son iguales, lo que me permite saber que opción de pizza o ingrediente eligió el usuario. Pertenece a la librería string.h
        printf("Usted ha elegido la pizza vegetariana, para ello, le ofrecemos dos ingredientes de los cuales podrá elegir uno: pimiento o tofu. ¿Cuál desea añadir a su pedido?\n"); //No encpntré forma de que aceptara el espacio, profe, ya me estresé. :c
        scanf("%s", ingrediente);
        if (strcmp(ingrediente, "pimiento") == 0 || strcmp(ingrediente, "tofu") == 0){
            printf("Gracias por su eleccion, su pedido fue registrado como una pizza vegetariana. Los ingredientes predeterminados son el queso mozzarella y el tomate, añadido el ingrediente que usted solicitó: %s.\n", ingrediente);
        } else{
            printf("Ese ingrediente no está disponible, ¡consulte nuestra lista nuevamente!");
        }
    } else{
        if(strcmp(pizza, "no_vegetariana") == 0){
            printf("Usted ha elegido la pizza no vegetariana, para ello, le ofrecemos tres ingredientes de los cuales podrá elegir uno: pepperoni, jamón y salmón. ¿Cuál desea añadir a su pedido?\n");
            scanf("%s", ingrediente);
            if(strcmp(ingrediente, "pepperoni") == 0 || strcmp(ingrediente, "jamon") == 0 || strcmp(ingrediente, "salmon") == 0){
                printf("Gracias por su elección, su pedido fue registrado como una pizza no vegetariana. Los ingredientes predeterminados son el queso mozzarella y el tomate, añadido el ingrediente que usted solicitó: %s.", ingrediente);
            } else{
                printf("Ese ingrediente no está disponible, ¡consulte nuestra lista nuevamente!");
            }
        }
    }
    return 0;
}
