
/*Agregué estas dos lineas debajo de cada scanf para que marcara las filas y las columnas correctas, ya que al momento de digitarlas 
estas se marcaban en las incorrectas, por ejemplo: ditiba fila 1, columna 1, y marcaba fila 2, columna 2. 
vi que esto se debía a que en C se comienza desde 0 y no desde 1.
*/

col=col-1;
fila=fila -1;

//A mí me tocó hacer que diera el empate. 
ganador=comprobadorGanar(ganador,matriz);
if(movimientos==9 && ganador!=1)
    {
    printf("Felicidades es empate\n");
    break;
    }
} while(ganador!=1);
} else {
system("cls");