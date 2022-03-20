#include "Benchmark.hh"

int main (int argc, char *argv[])
{
  double time;
  double avg_time;
  int size;
  int runs;
  vec_t* list;

  if (argc!=3) {
    printf("Expecting two inputs: size, and runs");
    return 0;
  }
  size = atoi(argv[1]);
  runs = atoi(argv[2]);
  
  time = 0;

  for (int i = 0; i < runs; i++) {
    list = generate_list(size);
    time += time_execution(size,list);
    free(list);

  }
  avg_time = time/runs;


  printf("%d,%f\n",size,avg_time);
  return 0;
}

//returns the time taken to set four garbage variables from a list at random indices
double time_execution(int size, vec_t* list){

  int idx_1 = rand()%size; //randomly picks an index
  int idx_2 = rand()%size;
  int idx_3 = rand()%size;
  int idx_4 = rand()%size;
  int idx_5 = rand()%size;
  int idx_6 = rand()%size;
  int idx_7 = rand()%size;
  int idx_8 = rand()%size;
  int idx_9 = rand()%size;
  int idx_10 = rand()%size;
  int idx_11 = rand()%size;
  int idx_12 = rand()%size;
  int idx_13 = rand()%size;
  int idx_14 = rand()%size;
  int idx_15 = rand()%size;
  int idx_16 = rand()%size;
  
  clock_t start_time = clock();
  vec_t _1 = list[idx_1]; // run the code to be timed
  vec_t _2 = list[idx_2]; 
  vec_t _3 = list[idx_3]; 
  vec_t _4 = list[idx_4]; 
  vec_t _5 = list[idx_5]; 
  vec_t _6 = list[idx_6]; 
  vec_t _7 = list[idx_7]; 
  vec_t _8 = list[idx_8]; 
  vec_t _9 = list[idx_9]; 
  vec_t _10 = list[idx_10]; 
  vec_t _11 = list[idx_11]; 
  vec_t _12 = list[idx_12]; 
  vec_t _13 = list[idx_13]; 
  vec_t _14 = list[idx_14]; 
  vec_t _15 = list[idx_15]; 
  vec_t _16 = list[idx_16]; 

  clock_t end_time= clock();

  srand(start_time); //to trick compiler

  return (end_time - start_time)*CLOCKS_PER_SEC*.000000001/16; 
}

//Returns a ptr to a random list
vec_t* generate_list(int size){
  vec_t* random_list = (vec_t*)malloc(size*sizeof(vec_t)); //allocate memory for the random list

  for (int i = 0; i < size; i++) {
    random_list[i] = rand();
   
  }
  return random_list;
}
