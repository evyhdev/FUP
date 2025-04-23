#include <stdio.h>

// Recebe tempo em 'segundos', converte para horas, minutos e segundos, e 
// retorna o resultado através dos parâmetros 'hor', 'min' e 'seg'.
void converte_tempo(int segundos, int *hor, int *min, int *seg){
    *hor = segundos / 3600; // Calcula o número de horas
    segundos = segundos - (*hor * 3600); // Atualiza os segundos restantes
    *min = segundos / 60;   // Calcula o número de minutos
    segundos = segundos - (*min * 60);   // Obtém os segundos restantes
    *seg = segundos;
}

int main(){
   int tempo, h, m, s;
   scanf("%d", &tempo);

   // Chama a função 'converte_tempo' para converter o valor de 'tempo' em horas
   // minutos e segundos, gravando o resultado nas variáveis 'h', 'm' e 's'.
   converte_tempo(tempo, &h, &m, &s);

   printf("%d:%d:%d", h, m, s);
   return 0;
}