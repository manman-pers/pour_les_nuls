#include <stdio.h>
#include <string.h>

	typedef struct id
	{	
	char nfirst[50];
	char nlast[50];
        }people;

        typedef struct date
        {
                int sday;
                int smonth;
                int syear;
        }calendar;

        struct human
        {
                people name;
                calendar hdate_birthday;
        }president;

	int main()
{
        strcpy(president.name.nfirst, "Georges");
        strcpy(president.name.nlast, "Washington");
        president.hdate_birthday.sday = 22;
        president.hdate_birthday.smonth = 2;
        president.hdate_birthday.syear = 1732;

        printf("Naissance de %s %s le %d/%d/%d\n", president.name.nfirst, president.name.nlast, president.hdate_birthday.sday, president.hdate_birthday.smonth, president.hdate_birthday.syear);

        return 0;
}
