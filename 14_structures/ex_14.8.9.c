#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
        struct date
        {
                int sday;
                int smonth;
                int syear;
        };

	struct name
	{
		char nfirst[50];
		char nlast[50];
	};
        struct human
        {
                struct name id;
		struct date hdate_birthday;
        };
        struct human president;

        strcpy(president.id.nfirst, "Georges");
	strcpy(president.id.nlast, "Washington");
        president.hdate_birthday.sday = 22;
        president.hdate_birthday.smonth = 2;
        president.hdate_birthday.syear = 1732;

        printf("Naissance de %s %s le %d/%d/%d\n", president.id.nfirst, president.id.nlast, president.hdate_birthday.sday, president.hdate_birthday.smonth, president.hdate_birthday.syear);

        return 0;
}                                                                                                    
