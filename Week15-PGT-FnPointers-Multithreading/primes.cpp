/*  Multithreading example to find the number of prime numbers in certain
    ranges.
    Not prime number speed optimized as we want a slow calculation to
    thread.
    Paul Talaga April 2016

    Compile as: g++ -O3 primes.cpp -lpthread
    Run as: time ./a.out
    Change lines 19 and 20 to see effect of threading on execution time.
*/

#include <iostream>
#include <pthread.h>
#include <cmath>    // For sqrt

using namespace std;

// How many threads we want and the max prime number to check!
const int NUM_THREADS = 1;
const int MAXPRIME = 10000000;

// We can only send a pointer (void*) to a thread, so pack all the
// information it needs into a struct.
struct thread_data_t{
  int thread_id;
  unsigned start_location;
  unsigned end_location;
};

// Helper function to say if a number is prime or not.
bool isPrime(unsigned number){
  for(unsigned i = 2; i < sqrt(number) + 2; i++){
    if( number % i == 0)return false;
  }
  return true;
}

// The function that will be called to start a thread.  This MUST
// accept a void* as a single parameter and return a void*.
void* calcPrimes(void* arg){
  // Extract the parameters
  thread_data_t *input;
  input = (thread_data_t*)arg;
  int id = input->thread_id;
  unsigned start = input->start_location;
  unsigned end = input->end_location;
  
  // Since these are simultaneous threads, these cout statements
  // may overlap!
  cout << "Calculating from " << start << " to " << end << endl;
  
  int count = 0;
  // So we search from start to end
  for(unsigned i = start; i <= end; i++){ 
    if(isPrime(i)){
      //cout << i << ",";   // Printing takes time, so just count
      count++;
    }
  }
  
  cout << "Count " << count << endl;
  cout << "Thread " << id << " done\n";
  
  // Notify the thread library we are done.
  pthread_exit(NULL);
}

int main(){
  // Information to get access to running threads.
  pthread_t threads[NUM_THREADS];
  
  // Information we want to send to threads.
  thread_data_t passed[NUM_THREADS];
  
  // Thread settings/type
  pthread_attr_t attr;
  pthread_attr_init(&attr);
  pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);
  
  // Count of numbers each thread will check for primeness.
  int step_size = MAXPRIME / NUM_THREADS;
  
  for(int i = 0; i < NUM_THREADS; i++){
    // Set up the custom parameters to send to the thread.
    passed[i].thread_id = i;
    passed[i].start_location = i * step_size;
    passed[i].end_location = (i + 1) * step_size - 1;
    if(i == NUM_THREADS -1)passed[i].end_location = MAXPRIME;
    
    // Spawn off a thread!
    pthread_create(&threads[i], &attr, calcPrimes, (void*)&passed[i]);
    // We can only send a pointer (void*) to the thread.  It is it's job
    // to unpack the information.
  }
  
  
  // Now wait until all threads are done.
  for(int i = 0; i < NUM_THREADS; i++){
    pthread_join(threads[i], NULL);
    cout << "Thread " << i << " done!\n";
  }
  
  pthread_attr_destroy(&attr);
  
  return 0;
}

