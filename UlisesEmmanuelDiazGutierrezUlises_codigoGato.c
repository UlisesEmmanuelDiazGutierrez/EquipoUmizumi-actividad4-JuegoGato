//---------------------------------------------------------------------------------------------------------
// funcion para mostrar la tabla Ulises Emmanuel Diaz Gutierrez
void mostrarTabla(char arr[][3]){
printf("\033[H\033[J");
printf("Juego del gato!\n");
for(i=0; i<3; i++){
for(j=0; j<3; j++){
printf("[%c]", matriz[i][j]);
}
printf("\n");
}
}

