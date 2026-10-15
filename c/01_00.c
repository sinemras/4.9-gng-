/* 
inf2026101 Βλάσσης Κωστάντης
inf2026013 Αρμένης Σπύρος
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int hour1, minute1, sec1, total_sec1;
	scanf("%i %i %i",&hour1,&minute1,&sec1);
	total_sec1 = (((hour1 * 60) + minute1) * 60 ) + sec1;
	printf("%i:%i:%i = %i \n",hour1,minute1,sec1,total_sec1);
	
	int hour2, minute2, sec2, total_sec2;	
	scanf("%i %i %i",&hour2,&minute2,&sec2);
	total_sec2 = (((hour2 * 60) + minute2) * 60 ) + sec2;
	printf("%i:%i:%i = %i \n",hour2,minute2,sec2,total_sec2);
	int hour, minute, sec, total_sec;
	
	total_sec = abs(total_sec1 - total_sec2);
	
	minute = total_sec / 60 ;
	sec = total_sec % 60 ;
	hour = minute / 60;
	minute = minute % 60;
	printf("%i = %i:%i:%i \n",total_sec,hour,minute,sec);
	return 0;
}
