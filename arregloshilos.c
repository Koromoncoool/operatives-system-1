#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *HelloWorld(void *id){

     long *myid = (long*) id;

     printf("Hola mundo %ld\n", *myid);

     return NULL;
}

int main(int argc, char **argv) {
int i;
int nthreads;
pthread_t *thread_array;
long *thread_ids;

if (argc !=2){
   fprintf(stderr, "usos: %s <n>\n", argv[0]);
   fprintf(stderr, " <n> es el numero de hilos\n");
   return 1;
}
nthreads = strtol(argv[1], NULL, 10);

thread_array = malloc(nthreads * sizeof(pthread_t));
thread_ids = malloc(nthreads * sizeof(long));

for (i = 0; i < nthreads; i++) {
    thread_ids[i] = i;
    pthread_create(&thread_array[i], NULL, HelloWorld, &thread_ids[i]);
}

for (i = 0; i < nthreads; i++){
    pthread_join(thread_array[i],NULL);
}

free(thread_array);
free(thread_ids);

return 0;

}
