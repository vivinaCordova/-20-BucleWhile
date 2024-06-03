// 1 suma de los digitos de un numero
#include <stdio.h>
int main() {
    //la variable n, almacena el valor, y la variable suma parte desde 0
    // con for avance la variable sum almacera ese valor
    int n=12567, sum=0;
    printf("la suma de %d\n", n);
   //wuile tiene la condicionn de que n es difernte de cero
   //la actualizacion de la variable sum mas el residua de n y 10 
   // se imprime sum en pantalla 
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    printf("%d\n", sum);
    return 0;
}
// 2 el inverso de un numero 
#include <stdio.h>
int main() {
    //la variable n, almacena el valor que ingresara el usuario
    // i se declara fuera del comando 
    //se define a la variable i, d es variable de almacenamiento
    int n, i = 0, d;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    //el comando for esta condicionado para que n,sea diferente de 0
    //la variable d almacena el residuo de la valiable n dividido entre 10;
    //la variable i almacena la multiplicacion de i por 10 + d
    while (n != 0) {
        d = n % 10;
        i = i* 10 + d;
        n /= 10;
    }//printf muestra en pantalla la variable i 
    printf("El inverso del número es: %d\n", i);
    return 0;
}
//3 potencia por sumas sucesivas
#include<stdio.h>
int main(){
    //dos varible a y b que almacenaran el valor que ingresa el usuario
    //a base y b exponente, mientra r en  la cual se almacenara la suma total o potencia total
    //se declara  la variable i fuera de el comando 
    int a,b,i, r=1;
    printf("ingrese numer\ningrese base, espacio y exponente ");
    scanf("%d %d", &a, &b);
    //el bucle wuile tiene la condicion de que mientra y sea menor que b el prorama continua 
    // en wuile el aumente nose encuentra en la condicion
    while (i<b){
        i++;
        //la variable r , va a multiplicar el segundo numero ingresado por el usuario
        //y esta almacenara el valor para precentarlo cuando la condicion sea falsa
        //esta variable sera a que precentara la potencia total
        //en esta es la respeticion de cuantas veses se multiplicara el a
        r=r*a;
    }
    //precenta en pantalla r 
    printf("\n=%d", r);
    return 0;
}
// 4 radicacion mediante restas sucesivas 
#include <stdio.h>
int main() {
    // n es el valor ingresado por el usuario
    // r es una variable que almacena y expotara la radicion 
    int n
    int r = 0;
    printf("Ingrese el número: ");
    scanf("%d", &n);
     //el wuile esta condicionado para que n sea mayor o igual a 0, y la variable r se actuatilizara(aumentando)
    //el almacera la resta de i multiplicado 3 veses 
    //con un aumento de r
    //i++: la actualizacion hara una disminucion hasta que la condicion de wuile se cumpla 
    while (n >= 0) {
        n -= (r * r * r);
        r++;
    }
    //decrese por que es una suma
    r--;
    printf("%d", r);
    return 0;
}
// 5 serie fibonacion
#include<stdio.h>
int main (){
    int n, a=0, b=1, c, i=2;
    printf("serie fibonacci\ningrese numero:");
    scanf("%d", &n);
    printf("%d %d ",a,b);
    while (i<n){
        c=a+b;
        printf("%d ", c);
        if (i<n-1){
            a=b;
            b=c;
        }
         i++;
    }
    return 0;
}
// 6 factorial de un numero
#include <stdio.h>
int main (){
    int n, i=1,f=1 ;
    printf("ingrese un numero ");
    scanf("%d", &n);
    while (i<n){
        i++;
        f*=i;
    }
    printf(" %d", f);
    return 0;
}
// 7 suma de una serie aritmetica 
#include <stdio.h>
int main (){
    //n variable ingresada por el usuario 
    //i variable para la condion, que se define fuera del comando 
    //sum es la suma de la serie 
    int n, i=1,sum=0 ;
    printf("ingrese un numero ");
    scanf("%d", &n);
    //wuile se condiciona por que n tiene que ser igual a i 
    //imprimo la serie
    //sum es una actualizacion de la suma a i
    //con una actualisacion
    //imprimo la suma, fuera del comando 
        printf("%d ",i);
        sum+=i;
        i++;
    }
    printf(" %d", sum);
    return 0;
}
//8 producto de una serie geometrica
#include<stdio.h>
int main (){
    //
    int a, r=2, n=2, mul=1;
    printf("producto de una serie geometrica desde 2 con razon 2\ningrese los terminos que desea multiplicar: ");
    scanf("%d", &a);
    for(int i=n; i <= a; i++){
        //se define la variable m , 
        //que almacenara la suma de 1 mas i y se actualizara conformese cumpla la condicion 
        mul*=i;
        //la variable mul multiplica y almacenara el valor de multiplicaion, de m 
        //imprimira mul que es la multiplicacion de todos los valores multiplicasdos por la razon
        printf("%d ", i);
    }
    printf("\n%d", mul);
    return 0;
}
//9 numero de digitos de un numero 
#include <stdio.h>
int main() {
    int n, c = 0;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    //la condicion de for es mientra n sea diferente de 0
    //asignara a n y la divicion de n entre y 10 
    //con una actualizacion o aumento 
    while (n != 0) {
        n /= 10;
        c++;
    }
    printf("El número tiene %d dígitos.\n", c);
    return 0;
}
//10 verificar si un numero es primo
#include <stdio.h>
int main() {
    //p variable que almacena el numero primo 
    //el valor ingresado por el usuario
    int n, p = 1;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    //ocupo el comando if con al condicion de que si  n es menor que i
    //la variable p es igual a 0, por lo tanto no hay numero primos
    //esto esta condicionado con el fin de n tiene que ser mayor que 1 
    // en el caso de que esto no se cumpa , else , continuara con el coma
    if (n <= 1) {
        p = 0;
    } else {
        int i = 2;
         //la variable i parte desde el 2 hasta que la el numero ingresado por el usuario dividido entre 2
        //y la operacion logica && la variable p, se aumenta 
        // hace uso de el comando if, con la condicion de que el residuo de n y i sea igual a 0
        //p es igual a 0 
        while (i <= n / 2 && p) {
            if (n % i == 0) {
                p = 0;
            }
            i++;
        }
    }
    //el comado if, condiciona que si p es igual a cero el numero es primo 
     // si no, else, el numero no es primo 
    if (p)
        printf("%d es un número primo.\n", n);
    else
        printf("%d no es un número primo.\n", n);
    return 0;
}

// 11 el maximo comun divisor 
#include <stdio.h>
int main() {
    //se solicitara al usuario ingresar dos numeros
    //el primer termino se almacenara en a
    //el segundo termino se alamcenara en b
    int a, b, mcd;
    printf("Ingrese el primer número: ");
    scanf("%d", &a);
    printf("Ingrese el segundo número: ");
    scanf("%d", &b);
     //el comando wuile tiene la unica condicion de que el segundo termino no sea igual de 0
    // se define otra variable t, la cual toma la variable b y la almacena
    // b es igualel residuo de a y b 
    // a toma y almacena la variable t
    // hasta que se cumpla la condicion de for
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    mcd = a;
    printf("El Máximo Común Divisor (MCD) es: %d\n", mcd);
    return 0;
}
// 12 sumar los numeros imapares hasta  de n 
#include<stdio.h>
int main(){
    int n, i=1, sum=0;
    printf("ingrese numero ");
    scanf("%d", &n);
    //la condcion de wuile parte desde el 1 hasta el valor ingresado por el usuario
    // con una actualizacion o aumento de 2, dando solo numero impares
    //la variable sum, suma la variable j , y actualiza, almacenando todo los valores
    //y almacena el total de la suma de los numeros
    while (i<=n){
        printf("%d ", i);
        sum+=i;
        i+=2;
    }
    printf("\n %d", sum);
    return 0;
}
//13 sumar los numeros pares hasta n
#include<stdio.h>
int main(){
    int n, i=2, sum=0;
    printf("ingrese numero ");
    scanf("%d", &n);
     //el comando wuile tiene la  parte deje la variable i con un valor incial de 2 hasta el valor ingreso por el usuario n
    // con un aumento suma y actualizacion de 2, para obtner numeros pares
    // sum, precenta la suma de los numeros pares
    while (i<=n){
        printf("%d ", i);
        sum+=i;
        i+=2;
    }
    printf("\n%d", sum);
    return 0;
}
//14 suma de los cuadrados de los primeros n numeros 
#include<stdio.h>
int main (){
    int n,i=1, r=0;
    printf("potencia mediante sumas sucesivas\ningrese: ");
    scanf(" %d",&n);
    //la variable r suma y actualiza el valor de la multiplicacion de el valor de la variable y ñpor si misma 
    //precenta la serie con la variable i
    //y la suma con la variable r

    while (i <= n){
        printf("%d^2  ",i);
        r+= i*i;
        i++;
    }
    printf("=  %d", r);
    return 0;
}
//15 suma de los cubos de los primeros n numeros 
#include<stdio.h>
int main (){
    int n,i=1, r=0;
    printf("potencia mediante sumas sucesivas\ningrese: ");
    scanf(" %d",&n);
    //el bucle esta condicionado con la variable i igual 1 hasta el valor ingresado por el usuario 
    //la variable se suma y se actualizara, 
    //la variable r almacena la multiplicacion i multiplicada 3 veses
    //la serie se precenta con i
    //la suma de la seie se precenta con r
    while (i <= n){
        printf("%d^3  ",i);
        r+= i*i*i;
        i++;
    }
    printf("=  %d", r);
    return 0;
}
//16 suma de una serie de numeros fracionarios
#include<stdio.h>
int main(){
    int n, i=1, sum=0;
    printf("ingrese numero ");
    scanf("%d", &n);
    //el bucle esta condicionado con la variable i con  valor de 1 hasta
    //n que es el valor que ingresa el usuario 
    //sum, suma y actualiza el valor de i 
    //el motivo por el que se le aumenta el uno a la variable 
    //la serie se imprime con  sum
    while (i<=n){
        printf("1/%d + ", i);
        sum+=i;
        i++;
    }
    printf("\n= 1/%d", sum);
    return 0;
}

//17 produto de una serie de numeros fraccionarios 
#include<stdio.h>
int main(){
    int n, i=1, mul=1, r=1;
    printf("ingrese numero ");
    scanf("%d", &n);
    printf("%d * ", r);
    //el wuiñe parte desde el i con un valor de uno hasta n con el valor que el usuario ingresa
    //la variable mul actualiza la multiplicacion de la variable i por 1
    //hasta que se complete la condicon de for
    //en la funcion printh se imprime con 1/ para que el numerador sea constante 
    //se multitiplica i * i para que el digito ingresado por el usuario sean correcta 
    //i imprime la serie
    // mul imprime el producto de la serie de fracciones 
    while (i<=n){
        printf("1/%d * ", i);
        mul*=i;
        i++;
    }
    printf("\n= 1/%d", mul);
    return 0;
}
// 18 contar numeros primos hasta n
#include <stdio.h>
int main() {
    int n, cont = 0, i = 2;
    printf("Contador de números primos\nIngrese el número ");
    scanf("%d", &n);
    while (i < n) {
        int j = 2, p = 1;
        while (j <= i / 2 && p == 1) {
            if (i % j == 0) {
                p = 0;
            }
            j++;
        }
        if (p == 1) {
            printf("%d ", i);
            cont++;
        }
        i++;
    }
    printf("\nHay %d números primos hasta %d.\n", cont, n);
    return 0;
}
//19 calcular el n-esimo numero trianguanlar
#include<stdio.h>
int main (){
    int n,i=1, sum=0;
    printf("potencia mediante sumas sucesivas\ningrese: ");
    scanf(" %d",&n);
     //dowuile  parte dede la variable i con valor de 1, hasta el valor que el usuario ingrese
    //se imprime i para la serie, pero sumando 1, un arreglo para imprimir la serie correctamente en pantallas
    //sum, actualiza y almacenal la suma de i mas 1, dentro le variable 
    //i exporta la serie
    //sum, es la suma de la serie 

    while (i <= n){
        printf("%d + ",i);
        sum+=i;
        i++;
    }
    printf("\n%d",sum);
    return 0;
}
// 20 calcular la suma de los factoriales de los primeros  n numeros
#include <stdio.h>
int main() {
    int n, f=1, sum=0, i=1;
    printf("calcual la suma de los factoriale de n numeros\n ingrese numero;");
    scanf("%d", &n);
    //el comando wuile parte desde i con valor 1 hasta el valor ingresado por el usuario 
    //f actualiza cada suma de i por uno, 
    //f precenta la serie 
    //sum actualiza y suma f
    //sum precenta la suma de los valores factoriales
    while(i<=n){
        f*=i*1;
        printf("%d ", f);
        i++;
        sum=sum+f;
    }
    printf("= %d", sum);
    return 0;
}
