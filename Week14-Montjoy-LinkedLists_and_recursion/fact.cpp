

#include <iostream>
#include <iomanip>

using namespace std;

double LoopFact(unsigned N){
  if(N <= 1) 
    return 1;

  double Fact = 1;

  for(double I = N; I > 1; I--)
    Fact *= I;

  return Fact;
}

double recusiveFact(unsigned N){
  if(N > 1)
    return(N*recusiveFact(N-1));
  return 1;
}

int main(){

  timespec tS;
  tS.tv_sec = 0;
  tS.tv_nsec = 0;
  clock_settime(CLOCK_PROCESS_CPUTIME_ID, &tS);
  cout <<  LoopFact(0) << endl;
  cout <<  LoopFact(1) << endl;
  cout <<  LoopFact(2) << endl;
  cout <<  LoopFact(3) << endl;
  cout <<  LoopFact(4) << endl;
  cout <<  LoopFact(5) << endl;
  cout <<  LoopFact(6) << endl;
  cout <<  LoopFact(7) << endl;
  cout <<  LoopFact(8) << endl;
  cout <<  fixed << setprecision(0) << LoopFact(9) << endl;
  cout <<  fixed << setprecision(0) << LoopFact(10) << endl;
  cout <<  fixed << setprecision(0) << LoopFact(11) << endl;
  clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tS);
  cout << "Time taken is: Seconds " << tS.tv_sec << " and nano seconds " << tS.tv_nsec << endl;

  tS.tv_sec = 0;
  tS.tv_nsec = 0;
  clock_settime(CLOCK_PROCESS_CPUTIME_ID, &tS);
  cout <<  recusiveFact(0) << endl;
  cout <<  recusiveFact(1) << endl;
  cout <<  recusiveFact(2) << endl;
  cout <<  recusiveFact(3) << endl;
  cout <<  recusiveFact(4) << endl;
  cout <<  recusiveFact(5) << endl;
  cout <<  recusiveFact(6) << endl;
  cout <<  recusiveFact(7) << endl;
  cout <<  recusiveFact(8) << endl;
  cout <<  fixed << setprecision(0) << recusiveFact(9) << endl;
  cout <<  fixed << setprecision(0) << recusiveFact(10) << endl;
  cout <<  fixed << setprecision(0) << recusiveFact(11) << endl;
  clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tS);
  cout << "Time taken is: Seconds " << tS.tv_sec << " and nano seconds " << tS.tv_nsec << endl;
}
