#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;
void randomarray(double* x, int N)
{
    for (int i = 0; i < N; i++) 
    {
            x[i]= (double)rand() / (double)RAND_MAX; //erzeugt zahlen zwischen 0 und 1.0 
    }
}
    
void meanvar (double& mean, double& var, double* x, int N) 
{
    for (int i = 0; i < N; i++) 
    {
       mean += (x[i])/N;
    }
    for (int i = 0; i < N; i++) 
    {
        var += pow((x[i] - mean),2)/N;
    }
}

int main()
{
   srand(time(NULL)); //Seedvalue fuer Zufallsgenerator
   const int N = 100;
   double p[N];
   double mean, var;
    
   randomarray(p, N);
   meanvar(mean, var, p, N);
   
    for (int i = 0; i < N; i++) 
    {
        cout << p[i] << endl;
    }
    
   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;

   return 0;
}
