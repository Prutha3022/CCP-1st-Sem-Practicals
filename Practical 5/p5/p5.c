#include <stdio.h>


void main()
{
    float population, nwomen, nmen, nlm, nlw;
    float lmp, lwp, wp, mp;
    population = 1441981744;
    wp = 0.484;
    mp = 100 - 0.484;
    nwomen = wp*population;
    nmen = mp*population;
    lmp = 0.8095;
    lwp = 0.6284;
    nlm = lmp*nmen;
    nlw = lwp*nwomen;
    printf("\nOut of the total population of %f", population);
    printf("\nTotal number of women are: %f", nwomen);
    printf("\nTotal number of men are: %f", nmen);
    printf("\nTotal number of Literate women are: %f", nlw);
    printf("\nTotal number of Literate men are: %f", nlm);
}
