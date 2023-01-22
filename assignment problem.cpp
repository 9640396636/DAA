#include <stdio.h>




int main() {


    
    char choice[2+1];
    int STOP=0;
    int count=0,hour,weekends=0,
    weekdays=0,invalidD=0,atwork=0,
    asleep=0,offwork=0,invalidH=0;
    
    OUTPUT("Program Two CSE 1030 Alexander Hollis email csp01\n\n");
    
    while(count <5) {


        OUTPUT("Enter day of week (S M T W R F A): ");
        choice[0]=getchar();
        choice[1]=getchar();
        printf("You selected: %c",&choice[0]);        
        




            
            if(choice[0] == 'S' || choice[0]=='A')
            {
                OUTPUT("\nIt's the weekend!\n");
                weekends++;
                count++;
            }
            
            else
            {
            
            if(choice[0]=='M' || choice[0]=='T' || choice[0]=='W' || choice[0]=='R' || choice[0]=='F')
            {
                while(STOP == 0)
                {
                OUTPUT("Enter hour (0-23): ");
                scanf("%d",&hour);
                if(hour >= 0 && hour <=23)
                {
                    if(hour >=8 && hour <=17) 
                    {    
                        OUTPUT("\nShould be at work.\n");
                        atwork++;
                    }
                    else
                       if(hour >= 0 && hour < 8)
                       {
                           OUTPUT("\nStill Asleep.\n");
                           asleep++;
                       }
                       else 
                       {
                           OUTPUT("\nOff Work\n");
                           offwork++;
                       }
                count++;
                STOP =1;
                }
                else
                {
                    OUTPUT("\nInvalid hour entered. Try Again.\n");
                    invalidH++;
                }
                }
                weekdays++;
            }
            else if(choice[0] !='S' || choice[0] !='A')
            {
                OUTPUT("Invalid Day!\n");
                invalidD++;
            }
            }
                
            fflush(stdin);
        }


    return 0;


    }