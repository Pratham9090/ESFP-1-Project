
#include <stdio.h>

#include <string.h>

int main ()
{

 printf("======================================================================================================================\n");
 printf("                                                NAME: Pratham Prajapati\n"                                   );
 printf("                                                BRANCH:CS\n"                                            );
 printf("                                                ER-NO.:CS23\n"                                          );
 printf("                                                ESFP-1 PROJECT\n"                                        );
 printf("                                                Vehicle Forensic\n"                                           );
 printf("                                               For year 2022-2023\n"                                           );
 printf("=======================================================================================================================\n");

 
{

char id[50];

User:

printf("Enter your id:\n");

scanf("%s", &id);

if (strcmp(id,"admin")==0)

{

printf("Id is correct\n");

}

else

{

printf("You have enetred an invalid user id\nPlease enter id again\n");

goto User;

}

char pass[50];

pass:

printf("Enter your password: ");

scanf("%s", &pass);

if(strcmp(pass,"admin1122")==0)

{

printf("You have successly loged in.\n");

}

else

{

printf("You have entered a wrong password\nEnter your password again\n");

goto pass;

}
 int choice = -1;
    printf("\n\n\n\tINFORMATION ABOUT VEHICLE FORENSICS.\n\n\t");
   
    // Menu display
    printf("\nMENU:\n1. Abstract\n2. Vehicle condition monitoring components\n3. Electronic instruments\n4. Bluetooth Connections\n5. EXIT");
   
    // Flag variable for termination of loop
    int flag = 1;
   
    // Infinite Loop for choice input
    while(flag){
        printf("\nEnter your choice:");
        scanf("%d", &choice);
       
        // Switch statements
        switch(choice){
            case 1:
                printf("> Today, the development of the automotive industry is associated with the phenomena of electromobility, autonomous vehicles, digitisation and telematics. New vehicles contain a large number of electronic control units which process and preserve digital data on the activity and its occupants, including communication with the external environment. This data can also be used for forensic purposes, as described in this paper. Attention is also paid to current trends, problem areas and safety risks. The paper deals with sources, classification, characteristics and uses of digital information in vehicles for forensic purposes from various perspectives, paper describes main problematic issue of Digital Vehicle Forensic. The present-day development, advancement and operation of vehicles is inseparably linked with the introduction of electronic devices and digitisation. As a result of this trend, vehicles process, t transmit and save a large quantity of operational data and data connected with the activities of the vehicle occupants. This trend has a sharply rising character, especially in connection with the development of electric engines and an effort to create and put into operation entirely autonomous vehicles that do not require the active involvement of a driver in order to reach their established destination. In recent years, Smart Cars have become the trend in the development of today’s automobile industry.\n");
                break;
            case 2:
                printf("> Vehicle condition monitoring allows the driver, dispatchers and support personnel to become aware of defects or emerging problems on the vehicle. They can take proactive steps to repair the defect or to substitute the vehicle or the defective piece of equipment. Condition monitoring includes:\n");
                printf("\n 1)Engine diagnostics");
                printf("\n 2)Fuel");
				printf("\n 3)Oil");
				printf("\n 4)Brakes");
				printf("\n 5)Fluid");
				printf("\n 6)Water Levels");
				printf("\n 7)Status of ITS equipment");
				printf("\n 8)Status of fare collection equipment");
				printf("\n 9)Other information provided by the driver");
                break;
            case 3:
                printf("\nIt uses computers, modern sensing, information fusion, communication, artificial intelligence and automatic control technologies. It is a typical high-tech technology complex. The various safety devices and entertainment devices installed in the car are becoming more and more abundant. \n ");
                printf("\nCar speed information\n");
                printf("\nAccelerator/brake status\n ");
				printf("\nLocation change information\n ");
                printf("\nCollision information\n ");
				break;
			case 4:
			    printf("> All vehicles store vast amount of data. Vehicle infotainment and telematics systems store for example recent destinations, favorite locations, call logs, contact lists, pictures, videos, social media feeds, and the navigation history of everywhere the vehicle has been.\n");
				  printf("> Many systems record where a vehicle’s lights are turned on, which doors are opened and even where the vehicle is when Bluetooth devices connect.\n");
				    printf("> Once you have extracted information from a vehicle you will be able to migrate it to tools for XAMN and analyze vehicle and mobile device data together. \n");
					  
                 case 5:
                printf("THANKS FOR VISITING!!!\n");
                flag = 0;  // To terminate the loop
                break;
            default:
                printf("> Invalid Input\n");
                break;
        }
    }

return 0;
}
}

