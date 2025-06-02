#include <stdio.h>
#include <stdlib.h>

/* this takes an array of SIG_LENGTH] and returns the mean value */

#define SIG_LENGTH 320

extern double InputSignal_f32_1kHz_15kHz[int SIG_LENG];
double calc_signal_mean(double *sig_src_array, int SIG_LENGTH);
double MEAN;

int main()
{

      MEAN = calc_signal_mean (&InputSignal_f32_1kHz_15kHz[0], SIG_LENGTH);
      printf("\n\nMEAN: %f\n\n\n", MEAN);

      return 0;
}

double calc_signal_mean(double *sig_src_array,int sig_length)

{
    double _mean = 0.0;
    int i;
        for (i = 0; i < sig_length ; i++)
            {
                _mean = _mean + sig_src_array[i];
         }

    _mean = _mean / (double) sig_length;

    return _mean;
}
