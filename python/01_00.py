#!/usr/bin/python3
#Αρμένης Σπύρος inf2026013
#Δημοσθένης Χατζής inf2026234

hour1 = int(input('Ώρα = '))
minute1 = int(input('Λεπτά = '))
sec1 = int(input('Δευτερόλεπτα = '))
total_sec1 = (((hour1 * 60) + minute1) * 60 ) + sec1
print (hour1,':',minute1,':',sec1,' = ',total_sec1,' seconds')

hour2 = int(input('Ώρα = '))
minute2 = int(input('Λεπτά = '))
sec2 = int(input('Δευτερόλεπτα = '))
total_sec2 = (((hour2 * 60) + minute2) * 60 ) + sec2
print (hour2,':',minute2,':',sec2,' = ',total_sec2,' seconds')

total_sec = abs(total_sec1 - total_sec2)

minute = total_sec // 60 # ακέραια διαίρεση
sec = total_sec % 60 # υπόλοιπο διαίρεσης
hour = minute // 60 
minute = minute % 60
print('the diference is', total_sec,' = ',hour,':',minute,':',sec)
