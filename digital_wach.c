 #include<stdio.h>
 #include<conio.h>
 #include<time.h>
 #include<windows.h>
 int main()
 {
     int hour,minute,sec;
     hour=minute=sec=0;
     while(1)
     {
         system("cls");
         printf("The time is = %02d : %02d : %02d\n",hour,minute,sec);//time in HH:MM:SS format.
         fflush(stdout);
         sec++;
         if(sec==60)
         {
             minute += 1;
             sec=0;
         } 
         if(minute==60)
         {
             hour += 1;
             minute=0;
         }
         if(hour==24)
         {
             hour=0;
             minute=0;
             sec =0;
         }

         sleep(1);//sleef for 1 sec.
     }
 return 0;
 }