// funcion para comprobar quien gano
int comprobadorGanar(int win,char arr[][3]){

if(arr[0][0] == 'x' && arr[0][0] == arr[0][1] && arr[0][0] == arr[0][2]
|| arr[1][0] == 'x' && arr[1][0] == arr[1][1] && arr[1][0] == arr[1][2]
|| arr[2][0] == 'x' && arr[2][0] == arr[2][1] && arr[2][0] == arr[2][2]

|| arr[0][0] == 'x' && arr[0][0] == arr[1][0] && arr[0][0] == arr[2][0]
|| arr[0][1] == 'x' && arr[0][1] == arr[1][1] && arr[0][1] == arr[2][1]
|| arr[0][2] == 'x' && arr[0][2] == arr[1][2] && arr[0][2] == arr[2][2]

|| arr[0][0] == 'x' && arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2]
|| arr[0][2] == 'x' && arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0]){
win=1;
printf("Felicidades! Gano el jugador 1.\n");
}
if(arr[0][0] == 'o' && arr[0][0] == arr[0][1] && arr[0][0] == arr[0][2]
|| arr[1][0] == 'o' && arr[1][0] == arr[1][1] && arr[1][0] == arr[1][2]
|| arr[2][0] == 'o' && arr[2][0] == arr[2][1] && arr[2][0] == arr[2][2]

|| arr[0][0] == 'o' && arr[0][0] == arr[1][0] && arr[0][0] == arr[2][0]
|| arr[0][1] == 'o' && arr[0][1] == arr[1][1] && arr[0][1] == arr[2][1]
|| arr[0][2] == 'o' && arr[0][2] == arr[1][2] && arr[0][2] == arr[2][2]

|| arr[0][0] == 'o' && arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2]
|| arr[0][2] == 'o' && arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0]){
win=1;
printf("Felicidades! Gano el jugador 2.\n");
}
if (estallenaMatriz(arr)==1 && win==0){
printf("Empate, juego terminado.");

}
return win;
}
