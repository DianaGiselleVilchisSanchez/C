#include <stdio.h>
int main(){
    int n;//numero de datos
    int i;//contador del ciclo de datos
    printf("¿Cuantas coordenas vas a utilizar? ");//pedir coordenadas
    scanf("%d", &n);//guardar el valor de las coordenadas que dra el usuario 
    int x[n-1];//datos de las x
    int y[n-1];//datos de las y
    char z='x';//utilizar un char para la multiplicacionde binomios
    for(i=0;i<n;i++){// iniciamos un ciclo for para que pida todas la x y las y dependiendo las que debe de dar el usuario
        printf("Dame le valor de x del binomio %d: ", i);//pide valor de las x
        scanf("%d", &x[i]);//guarda el valor de las x
        printf("Dame la valor de y del binomio %d: ", i);//pide valor de las y 
        scanf("%d", &y[i]);//guarda el valor de las y
    }//termina ciclo
    printf("\n\n");//damos dos saltos de linea para orden
    for(i=0;i<n;i++){//iniciamos un ciclo for para imprimir el valor de los binomios
        printf("x%d: %d\t\t",i, x[i]);//imprimimos las coordenadas en x
        printf("f(x%d): %d\n",i, y[i]);//imprimimos las coordenadas en y donde la y en la posicion 0 sera la primera -------------------------------------
    }//termina el ciclo
    printf("\n\n");//damos dos saltos de linea ṕara orden
    int r[n-1];//declaramos un arreglo tipo int con una unidad menor a n que es el numero de coordenadas que dara el usuario
    for(i=0; i<n-1 ; i++){//iniciamos un cliclo for para obtener la segunda --------------------------------------------------
        r[i]=((y[i+1]) - (y[i])) / ((x[i+1]) - (x[i]));//ocupamos la formula para obtenerla utilizando el balor de i para poder mas adelante incrementar o disminuir el contador y utilice el valor de esa posicion del arreglo
        printf("f(x%d,x%d)=f(x%d)-f(x%d)/x%d-x%d = (%d-%d)/(%d-%d) = %d \n", i,i+1, i+1, i,i+1,i, y[i+1], y[i], x[i+1], x[i],r[i]);//imprime la formula a utilizar y lo valores sustituidos en la misma 
    }// se cierra el ciclo for 
    printf("\n\n");//se dan dos saltos de linea para diferencia la siguiente operacion
    int res[n-1];//se declara una nueva variable para guardar la tercera y ultima ------------------------------------------------------
    for(i=0; i<n-2 ; i++){//declaramos un ciclo for para utilizar el contador y sustituir v alores mas adelante
        res[i]=((r[i+1]) - (r[i])) / ((x[i+2]) - (x[i]));//realizamos la operacion para obtener la tercera----------------------------------------------
        printf("f(x%d,x%d,x%d)=f(x%d,x%d)-f(x%d,x%d)/x%d-x%d= (%d-%d)/(%d-%d)= %d \n",i,i+1,i+2,i+1,i+2,i,i+1,i+2,i,r[i+1],r[i],x[i+2],x[i],res[i]);//imprimimos la formula y la sustitucion de valores en la misma
    }//cerramos el ciclo for
    printf("\n\n");//Damos dos saltos de linea para orden 
    int a[n-1];//se declara un arreglo para guardar los valores de todas las ------------------------------------
    a[0]=y[0];//se guarda la primera ------------- para utilizarla mas adelante con un contador
    a[1]=r[0];//se guarda la tercera -------------
    a[2]=res[0];//se guarda la tercera ------------
    
    for(i=0;i<n;i++){//iniciamos un ciclo for para imprimir todos los datos mediante un contador que aumenta la posicion de todos los arrays y mostrar los valores de cada una
        printf("x%d: %d\t\t",i, x[i]);// imprime los valores de las x
        printf("f(x%d): %d\t\t",i, y[i]);// imprime los valores de las y
        printf("a%d: %d\n", i, a[i]); // imprime los valores de a queson las ------------------
    }//cerramos el ciclo for
    printf("\n\n");//da dos saltos de linea para orden
    i=0;//volvemos a utiizar el contador de i en 0
    int resul[100];//declaramos un arreglo donde se guardaran las coordenadas que dara el programa despues de sustituir valores en la formula obtenida
    int e;//guarda el valor del rango donde se inicia 
    int s;//guarda el final del rango que quiere el usuario
    int cr;//se utiliza un contador para aumentar el rango de uno en uno hasta el limite que da el usuario
    int j=0;//se utiliza otro contador para aumentar la posicion del arreglo donde se guardaran las coordenadas resultantes
    printf("Formula: \nPn(x)=a%d+a%d(x-x%d)+a%d(x-x%d)(x-x%d)\n", i,i+1,i,i+2,i,i+1);//mostramos la formula que se debe de utilizar para la obtencion de estos valores
    printf("Sustitucion: \nPn(x)= %d + (%d) ((%c) - (%d)) + (%d) ((%c) - (%d)) ((%c) - (%d))\n",a[i],a[i+1],z,x[i],a[i+2],z,x[i],z,x[i+1]);// sustituimos los varoles con x sin sustituir a la misma por ahora sin hacer multiplicacion de binomios ya que no podemos multiplicar un int por un char y guardarlos en una variable para imprimir posteriormemte
    printf("Dame el rango inicial a utilizar de las x:");//se pide el rango inicial del cual se va a comenzar a sustituir x y obtener las coordenas a graficar
    scanf("%d", &e);//se guarda el valor incial del rango
    printf("Dame el rango final a utilizar de las x:");//se pide el valor final del rango 
    scanf("%d", &s);//se guarda el fin del rango
    printf("\n\n");//se dan dos saltos de linea
    printf("x\t\tP(x)\n");//se utiliza una tipo tabla para imprimir en orden y entendible para el usuarios los puntos que debe de graficar
    for(cr=e;cr<=s;cr++){//comenzamos un ciclo for para sustituir los valores dados del usuario en la ecuacion para obtenerlos
        resul[j]=a[i] + (a[i+1]) * (cr - x[i]) + (a[i+2]) * (cr - x[i]) * (cr - x[i+1]);//hacemos las operaciones de la formula con el valor menor del rango
        printf("%d\t\t",cr);//se imprime las x que es el rango que dio el usuario
        printf("%d\n",resul[j]);//se imprimen las y que es el valor optenido despues de sustituir cada numero del rango
        j++;//incrementamos la posicion del arreglo que guarda los valores por si se necesitan posteriormente
    }//termina el ciclo
    return 0;   
}//termian el codigo