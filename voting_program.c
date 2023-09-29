#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int admin();
void welcome();
int read_candidate();
int write_candidate();
int read_schedule();
int write_schedule();
int write_voter();
int read_voter();
int search_voter();
void delete_candidate();
void update_candidate();
void update_voter();
void delete_voter();
void change_pass();
void votecast();
int result();

void main(){
	system("color 70");
	
	int choice;			//choose the operation
	int red_flag=0;// delaration of variable for main exit
	char repeat='y';
	int success;
	while(red_flag==0)  //runs the loop until it becomes true
	{
	exit:
	system("cls");
	welcome();		//function for banner
	
	printf("\t\t\t\t\t\t\t\t\t\t1. View Schedule \n");
	printf("\t\t\t\t\t\t\t\t\t\t2. View Candidate \n");
	printf("\t\t\t\t\t\t\t\t\t\t3. View Voter Details\n");
	printf("\t\t\t\t\t\t\t\t\t\t4. Cast Vote\n");
	printf("\t\t\t\t\t\t\t\t\t\t5. Admin Settings\n");
	printf("\t\t\t\t\t\t\t\t\t\t6. Exit\n");
	printf("\t\t\t\t\t\t\t\t\t\tPlease choose the action from 1 to 6:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			system("cls");
			welcome();
			read_schedule(); //shows the schedule of election
			system("pause");
		
			break;
		case 2:
			system("cls");
			welcome();
			read_candidate();	//shows the registered candidate's list
			system("pause");
			
			break;
		case 3:
			system("cls");
			welcome();
			read_voter();		//shows the registered voter's list
			system("pause");
			break;
		case 4:
			system("cls");
			welcome();
			votecast();
			printf("Thank you for voting");		// function for to caste vote
			system("pause");
			break;
		case 5:
			system("cls");
			welcome();
			success=admin();
			if(success==1){
			
				while(red_flag==0){
					
				top:
				system("cls");
				int ch;
				
				welcome();
				printf("\n\n");
				printf("\t\t\t\t\t\t\t\t\t\t**********Admin Settings**********\n");
				printf("\t\t\t\t\t\t\t\t\t\t1. Create Schedule\n");
				printf("\t\t\t\t\t\t\t\t\t\t2. Candidate Registration \n");	
				printf("\t\t\t\t\t\t\t\t\t\t3. Edit Candidate\n");			
				printf("\t\t\t\t\t\t\t\t\t\t4. Voter Registration\n");		
				printf("\t\t\t\t\t\t\t\t\t\t5. Edit Voter\n");				
				printf("\t\t\t\t\t\t\t\t\t\t6. Search Voter Details\n");
				printf("\t\t\t\t\t\t\t\t\t\t7. Vote Result\n");
				printf("\t\t\t\t\t\t\t\t\t\t8. Exit\n");
				printf("\t\t\t\t\t\t\t\t\t\tChoose one of the above action:");
				scanf("%d",&ch);
				switch(ch){
					case 1:
						system("cls");
						printf("**********Admin Settings**********\n");
						fflush(stdin);
						write_schedule();		//function for to create schedule
						system("pause")	;						
						
						break;
					case 2:
						system("cls");
						printf("**********Admin Settings**********\n");
						fflush(stdin);
						write_candidate();		//function for to add candidate
						system("pause");
						
						break;
					case 3:
						
						while(red_flag==0)
						{
						system("cls");
						
					
						printf("**********Edit Candidate**********\n");	
						printf("1. Update Candidate\n");
						printf("2. Delete Candidate\n");
						printf("3. Exit\n");
						printf("Choose the action:");
						scanf("%d",&ch);
						switch(ch)
						{
							case 1:
								system("cls");
								fflush(stdin);
								read_candidate();
								update_candidate();		//function to update candidate details
								system("pause");
								break;
							case 2:
								system("cls");
								fflush(stdin);
								read_candidate();
								delete_candidate();
								system("pause");
								break;
							case 3:
								goto top;
								break;
							
						}
					}
						
							case 4:
								system("cls");
								printf("**********Admin Settings**********\n");
								fflush(stdin);
								write_voter();
								system("pause");
						 		break;
							case 5:
								while(red_flag==0)
							{
								system("cls");
						
								welcome();
								printf("**********Edit Voter**********\n");	
								printf("1. Update Voter detail\n");
								printf("2. Delete Voter detail\n");
								printf("3. Change Password\n");
								printf("4. Exit\n");
								printf("Choose the action:");
								scanf("%d",&ch);
								switch(ch)
								{
									case 1:
										system("cls");
										fflush(stdin);
										read_voter();
										update_voter();		//function to update voter details
										system("pause");
										
										break;
									case 2:
										system("cls");
										fflush(stdin);
										read_voter();
										delete_voter(); 	//function to delete the voter details
										system("pause");
										break;
									case 3:
										change_pass();		//function to change the password of voters
										break;
									case 4:
										goto top;
										break;
							
								}
							}
							case 6:
									system("cls");
									search_voter();		//function for to search voter
									system("pause");
									break;
							case 7:
								system("cls");
								fflush(stdin);
								result();			//function to show the winner of the election
								printf("\n");
								system("pause");
								break;
							case 8:
								goto exit;
								break;		
			     		}
			    		 }		
		 		}
		 
			break;	
		case 6:
			red_flag=1;
		 	break;	
		default:
			printf("Invalid command");
		}
}

 }
//admin log in function
int admin(void){
	printf("***********LOGIN***********\n");
   int i=1;
    while(i<=3){
    	 
    char username[15]; 
    char password[12]; 
 
 
    printf("Enter your username:\n"); 
    scanf("%s",&username); 
 
    printf("Enter your password:\n"); 
    scanf("%s",&password); 
 
    if(strcmp(username,"laxman")==0){ 
        if(strcmp(password,"123")==0){ 
 
        printf("\nWelcome.Login Success!"); 
        return 1;
 
 
        }else{ 
    		printf("\nwrong password\n"); 
		} 
    	}else
		{ 
   			 printf("\nUser doesn't exist\n"); 
		} 
		i++;
		}
	
		return 0;
	}
	//write schedule in file
	int write_schedule(){
		
		struct location{
		char constituency[20];
		char time[20];
		};
		struct location c;
		char repeat='y';
		FILE *fp;
		fp=fopen("schedule.txt","a");
		if(fp==NULL){
			printf("No such directory!");
			return 0;;
		}
		
		while(repeat=='y'){
			system("cls");
			printf("Enter the name of the constituency:\n");
			scanf("%s",c.constituency);
			printf("Enter the date(yyyy/mm/dd) in BS :\n");
			scanf("%s",c.time);
			fprintf(fp,"\n%25s %25s",c.constituency,c.time);
			printf("Want to add?(y/n)\n");
			repeat=getche();
		}
		fclose(fp);
		printf("Added successfully!");
		getch();		
	}
	//read schedule from file
	int read_schedule(){
		
		struct location{
		char constituency[20];
		char time[20];
		};
		struct location c;
		
		FILE *fp;
		printf("\t\t\t\t\t\t         \t\t\t+--------------------------------------------------------+\n");	
		printf("\t\t\t\t\t\t         \t\t\t|\tConstituency\t   |Date of Election (yyyy/mm/dd)|\n");
		printf("\t\t\t\t\t\t         \t\t\t+--------------------------------------------------------+\n");
		fp=fopen("schedule.txt","r");
		if(fp==NULL){
			printf("No such directory!");
			return 0;
		}
		while(!feof(fp)){
			fscanf(fp,"%s %s",c.constituency,c.time);
			printf("\t\t\t\t\t\t         \t\t\t|%-25s |%29s|\n",c.constituency,c.time);
		}
		printf("\t\t\t\t\t\t         \t\t\t+--------------------------------------------------------+\n");
		fclose(fp);
	}
	//welcome function
	void welcome()
	{
	printf("\t\t\t\t\t\t\t+---------------------------------------------------------------------------------------------+\n");
	printf("\t\t\t\t\t\t\t|                                Welcome to the election 2023                                 |\n");
	printf("\t\t\t\t\t\t\t+---------------------------------------------------------------------------------------------+\n");
	
	}
	
	//write or add candidate function in file
	int write_candidate()
	{
		struct candidate{
		char name[30];
		char lname[30];
		char party[40];
		char from[30];
		}n;
		
		FILE *fp;
		char repeat='y';
		int i=1;
		char line[200];
		fp=fopen("candidatelist.txt","r");
		while(fgets(line,sizeof(line),fp))
		{
			i++;
		}
	
		fp=fopen("candidatelist.txt","a");
		if(fp==NULL){
			printf("No such directory!");
			return 0;
			
		}
		
		
	   while(repeat=='y'){
	   	
	   		system("cls");
			printf("Enter the firstname of the candidate:\n");
			scanf("%s",n.name);
			printf("Enter the lastname of the candidate:\n");
			scanf("%s",n.lname);
			printf("Enter the name of the party :\n");
			scanf("%s",n.party);
			printf("Enter the location of candidate\n");
			scanf("%s",n.from);
			fprintf(fp,"%25d %25s %25s %25s %25s\n",i,n.name,n.lname,n.party,n.from);
			i++;
			
			printf("Do you want to add next(y/n):\n");
			repeat=getche();
			
			getch();
		}
		fclose(fp);
		printf("Added successfully!");
		getch();
} 
//read candidate details from file
int read_candidate(){
	
		struct candidate{
		char name[30];
		char lname[30];
		char party[40];
		char from[30];
		}n;
		
		int i;
		printf("\n\n\n");
		printf("\t\t\t\t\t\t       +------------------------------------------------------------------------------------------------+\n");	
		printf("\t\t\t\t\t\t       | Serial Number |     Name of Candidate    |      Political Party     |      Candidancy From     |\n");
		printf("\t\t\t\t\t\t       +------------------------------------------------------------------------------------------------+\n");
		FILE *fp;
		fp=fopen("candidatelist.txt","r");
		if(fp==NULL){
			printf("No such directory!");
			return 0;
		}
		while(fscanf(fp,"%d %s %s %s %s",&i,n.name,n.lname,n.party,n.from)!=EOF)
		{
		
		printf("\t\t\t\t\t\t       |%-15d|%-14s %-10s |%26s|%26s|\n",i,n.name,n.lname,n.party,n.from);
		}
		printf("\t\t\t\t\t\t       +------------------------------------------------------------------------------------------------+\n");
		fclose(fp);
}
//Register or add voter details
int write_voter(){
	
	struct voter{
	
	char name[20];
	char lname[20];
	char dob[20];
	char address[20];
	char password[30];
}v;
	char repeat='y';
	int i=1,age,var,birth,month,day;
	FILE *fp;
	char code[14]="NP00";
	char str[4];
	char line[1000];
	
	srand(time(0));
	var=rand()%100+1;		// generate random number 
	
	sprintf(str,"%d",var);  //convert integer to string
	strcat(code,str);
	
	printf("Please enter your birth date in BS:");
	scanf("%d",&birth);
	printf("Please enter the month :");
	scanf("%d",&month);
	printf("Please enter the day :");
	scanf("%d",&day);
	if(2079-birth>=18)
	{
		fp=fopen("voterlist.txt","r");
		while(fgets(line,sizeof(line),fp))		// reads the line
		{
			i++;
		}
	
		fclose(fp);
		fp=fopen("voterlist.txt","a");
		if(fp==NULL)
		{
			printf("No such directory");
			return 0;
		
		}
		system("cls");
		printf("Your voterID is %s\n",&code);
		printf("Enter your first name:\n");
		scanf("%s",v.name);
		printf("Enter your last name:\n");
		scanf("%s",v.lname);
		printf("Enter your birth date(yyyy/mm/dd) in BS:\n");
		scanf("%s",v.dob);
		printf("Enter your address:\n");
		scanf("%s",v.address);
		printf("Enter your password:\n");
		scanf("%s",v.password);
		fprintf(fp,"%20s %10s %10s %20s%20s %20s\n",code,v.name,v.lname,v.dob,v.address,v.password);
		
		printf("Added successfully!");
		getch();
	
	 	fclose(fp);
		}else{
		printf("You are not eligible to vote!");
		}
	}



int read_voter(){
	
		struct voter{
	
		char name[20];
		char lname[20];
		char dob[20];
		char address[20];
		char password[30];
		}v;
		printf("\n\n\n");
		printf("\t\t\t\t\t+-------------------------------------------------------------------------------------------------------------------------------+\n");	
		printf("\t\t\t\t\t|    Serial Number    |\t\tVoter Name       |      Date Of Birth      |         Address         |         password         |\n");
		printf("\t\t\t\t\t+-------------------------------------------------------------------------------------------------------------------------------+\n");
	
	
		char code[14];
		FILE *fp;
		fp=fopen("voterlist.txt","r");
		if(fp==NULL){
			printf("No such directory!");
			return 0;;
		}
		while(fscanf(fp," %s %s %s %s %s %s",code,v.name,v.lname,v.dob,v.address,v.password)!=EOF)
		{
			printf("\t\t\t\t\t|%-20s |%-11s%-15s|%25s|%25s|\t\t*****\t\t|\n",code,v.name,v.lname,v.dob,v.address);
		}
		printf("\t\t\t\t\t+-------------------------------------------------------------------------------------------------------------------------------+\n");
		fclose(fp);
}
int search_voter(){      // Function to search the voter
	
	struct voter{
	
	char name[20];
	char lname[20];
	char dob[20];
	char address[20];
	char password[30];
	}v;
	FILE *fp;
	
	char sn[14],code[14];
	int found=0;
	fp=fopen("voterlist.txt","r");
	printf("Enter the votecode to search: ");
	scanf("%s",&sn);

	while(fscanf(fp," %s %s %s %s %s %s",code,v.name,v.lname,v.dob,v.address,v.password)!=EOF){
		
		if(strcmp(code,sn)==0){
			found=1;
				printf("\n\n\n");
				printf("\t\t\t\t\t\t\t\t\t\t**********************Search Detail**********************\n");
				printf("\n\n");
				printf("\t\t\t\t\t\t\t\t\t\t\tSerial Number  : %s\n",code);
				printf("\t\t\t\t\t\t\t\t\t\t\tVoter Name     : %s\n",v.name);
				printf("\t\t\t\t\t\t\t\t\t\t\tLast Name      : %s\n",v.lname);
				printf("\t\t\t\t\t\t\t\t\t\t\tDateOfBirth    : %s\n",v.dob);
				printf("\t\t\t\t\t\t\t\t\t\t\tAddress        : %s\n",v.address);
				printf("\t\t\t\t\t\t\t\t\t\t\tPassword       : %s\n",v.password);
				printf("\t\t\t\t\t\t\t\t\t\t_________________________________________________________");
			
		}
	}

	if(!found){
		printf("record not found!\n");
	}
	fclose(fp);
	getch();
}
void delete_candidate(){		// function to delete the candidate
	
		struct candidate{
		char name[30];
		char lname[30];
		char party[40];
		char from[30];
		}n;
		
	FILE *fp,*fp1;
	char line[1000];
	int i,g=0,j=1,sn,found=0;
	fp=fopen("candidatelist.txt","r");
	while(fgets(line,sizeof(line),fp))
	{
		g++;      // counts the line
	}
	fclose(fp);
	printf("please enter the serial number to delete candidate: ");
	scanf("%d",&sn);
	fp=fopen("candidatelist.txt","r");
	fp1=fopen("temp1.txt","w");
	while(j<=g)
	{
		fscanf(fp,"%d%s %s %s %s",&i,n.name,n.lname,n.party,n.from);
		
		if(sn==i)
		{
			found=1;
			j++;
			continue;
			}
			else{
			
			if(found==1)
			{
				i=i-1;		//	update the line number
			}
			fprintf(fp1,"%25d%25s %25s %25s %25s\n",i,n.name,n.lname,n.party,n.from);
			j++;
	}
	}
	fclose(fp);
	fclose(fp1);


	remove("candidatelist.txt");
	rename("temp1.txt","candidatelist.txt");
	printf("Deleted successfully!");
	getch();
}


void update_candidate(){			// function to update candidate
	
		struct candidate{
		char name[30];
		char lname[30];
		char party[40];
		char from[30];
		}n;
	FILE *fp,*fp1;
	char nname[50],nlname[30],nparty[100],nfrom[50];
	char line[200];
	int i,g=0,j=1,sn,found=0;
	fp=fopen("candidatelist.txt","r");
	while(fgets(line,sizeof(line),fp))
	{
		g++;
	}
	printf("%d",g);
	fclose(fp);
	printf("please enter the serial number to update ");
	scanf("%d",&sn);
	fp=fopen("candidatelist.txt","r");
	fp1=fopen("temp1.txt","w");
	while(j<=g)
	{printf("%d",j);
		fscanf(fp,"%d%s %s %s %s",&i,n.name,n.lname,n.party,n.from);
	
		if(sn==i)
		{
			
			j++;
			printf("Enter new name\n");
			scanf("%s",&nname);
			printf("Enter lname\n");
			scanf("%s",&nlname);
			printf("Enter new party\n");
			scanf("%s",&nparty);
			printf("Enter the new address\n");
			scanf("%s",&nfrom);
			fprintf(fp1,"%25d %25s %25s %25s %25s\n",sn,nname,nlname,nparty,nfrom);
			}else{
				fprintf(fp1,"%%25d %25s %25s %25s %25s\n",i,n.name,n.lname,n.party,n.from);
				j++;
			}	
	}
	fclose(fp);
	fclose(fp1);
	remove("candidatelist.txt");
	rename("temp1.txt","candidatelist.txt");
	printf("candidate updated successfully!");
	
	getch();
}
void delete_voter(){
	struct voter{
	
	char name[20];
	char lname[20];
	char dob[20];
	char address[20];
	char password[30];
	}v;
	FILE *fp,*fp1;
	char line[300];
	int i,g=0,j=1,found=0;
	char sn[15],code[14];

	fp=fopen("voterlist.txt","r");
	while(fgets(line,sizeof(line),fp))
	{
		g++;
	}
	
	fclose(fp);
	printf("Please enter the serial number to delete voter detail:\n");
	scanf("%s",&sn);
	fp=fopen("voterlist.txt","r");
	fp1=fopen("temp.txt","w");
	while(j<=g)
	{
		fscanf(fp," %s %s %s %s %s %s",&code,v.name,v.lname,v.dob,v.address,v.password);
		
	
		if(strcmp(code,sn)==0)
		{
			
		found=1;
			j++;
			continue;
		}
			
		
		fprintf(fp1,"%20s %10s %10s %20s%20s %20s\n",code,v.name,v.lname,v.dob,v.address,v.password);
		j++;
	}

	
	fclose(fp);
	fclose(fp1);
	
	remove("voterlist.txt");
	rename("temp.txt","voterlist.txt");
	printf("Deleted successfully!");
	getch();
}
void update_voter(){		//function to update voter
	
	struct voter{
	
	char name[20];
	char lname[20];
	char dob[20];
	char address[20];
	char password[30];
	}v;
	FILE *fp,*fp1;
	char line[300];
	char sn[15],code[14];
	int g=0,j=1;
	char nname[20],lname[20],date[20],address[20],password[20];
	printf("Please enter the votercode to update the result:");
	scanf("%s",&sn);
	fp=fopen("voterlist.txt","r");
	
	while(fgets(line,sizeof(line),fp))
	{
		g++;
	}
	fclose(fp);
	fp=fopen("voterlist.txt","r");
	fp1=fopen("temp.txt","w");
	while(j<=g)
	{
		fscanf(fp," %s %s %s %s %s %s",&code,v.name,v.lname,v.dob,v.address,v.password);
		
		if(strcmp(code,sn)==0)
		{
			j++;
			printf("please enter new name:");
			scanf("%s",&nname);
			printf("please enter last name:");
			scanf("%s",&lname);
			printf("please enter new dateofbirth:");
			scanf("%s",&date);
			printf("please enter new address:");
			scanf("%s",&address);
			printf("please enter new password:");
			scanf("%s",&password);
			fprintf(fp1,"%20s %10s %10s %20s%20s %20s\n",sn,nname,lname,date,address,password);
		
		}else
		{
		fprintf(fp1,"%20s %10s %10s %20s%20s %20s\n",code,v.name,v.lname,v.dob,v.address,v.password);
		j++;
		}
	}
	fclose(fp);
	fclose(fp1);
	remove("voterlist.txt");
	rename("temp.txt","voterlist.txt");
	printf("Voter updated successfully!");
	getch();
}
void change_pass(){			//function to change the password
	
	struct voter{
	
	char name[20];
	char lname[20];
	char dob[20];
	char address[20];
	char password[30];
	}v;
	FILE *fp,*fp1;
	char line[300];
	char sn[15],code[14];
	int g=0,j=1;
	char password[20];
	printf("Please enter the votercode to update your password:");
	scanf("%s",&sn);
	fp=fopen("voterlist.txt","r");
	
	while(fgets(line,sizeof(line),fp))
	{
		g++;
	}
	fclose(fp);
	fp=fopen("voterlist.txt","r");
	fp1=fopen("temp.txt","w");
	while(j<=g)
	{
		fscanf(fp," %s %s %s %s %s %s",&code,v.name,v.lname,v.dob,v.address,v.password);
		
		if(strcmp(code,sn)==0)
		{
			j++;

			printf("please enter new password:");
			scanf("%s",&password);
			fprintf(fp1,"%20s %10s %10s %20s%20s %20s\n",sn,v.name,v.lname,v.dob,v.address,password);
		
		}else
		{
		fprintf(fp1,"%20s %10s %10s %20s%20s %20s\n",code,v.name,v.lname,v.dob,v.address,v.password);
		j++;
		}
	}
	fclose(fp);
	fclose(fp1);
	remove("voterlist.txt");
	rename("temp.txt","voterlist.txt");
	printf("password changed successfully!");
	getch();
}

void votecast(){		//function to caste vote
		struct candidate{
		char name[30];
		char lname[30];
		char party[40];
		char from[30];
		}n;
	
	struct voter{
	
	char name[20];
	char lname[20];
	char dob[20];
	char address[20];
	char password[30];
	}v;
	
	struct cast{
	int sn;
	char fname[40];
	char lname[40];
	char party[45];
	char place[45];
	}vote[1000];
	
		FILE *fp,*fp1,*fpv;
		int i=0,cast=0,lc=0,j=0;
		char votercode[14],code[14],password[10];
		printf("\n\n\n");
		printf("\t\t\t\t\t\t       +------------------------------------------------------------------------------------------------+\n");	
		printf("\t\t\t\t\t\t       | Serial Number |     Name of Candidate    |      Political Party     |      Candidancy From     |\n");
		printf("\t\t\t\t\t\t       +------------------------------------------------------------------------------------------------+\n");
		
		fp=fopen("candidatelist.txt","r");
		if(fp==NULL)
		{
			printf("No such directory!");
			
		}
		while(fscanf(fp,"%d %s %s %s %s",&i,n.name,n.lname,n.party,n.from)!=EOF)
		{
		lc++;
		printf("\t\t\t\t\t\t       |%-15d|%-14s %-10s |%26s|%26s|\n",i,n.name,n.lname,n.party,n.from);
		}
		printf("\t\t\t\t\t\t       +------------------------------------------------------------------------------------------------+\n");
		fclose(fp);
		
		int vc[lc];
		
		printf("Please enter your votercode:");
		scanf("%s",&votercode);
		printf("Please enter your password:");
		scanf("%s",&password);
		
		
		fpv=fopen("voterlist.txt","r");
		if(fpv==NULL)
		{
			printf("No such directory!");
		}
		while(fscanf(fp," %s %s %s %s %s %s",code,v.name,v.lname,v.dob,v.address,v.password)!=EOF){
		
		if(strcmp(code,votercode)==0 &&strcmp(v.password,password)==0)
		{
			printf("Enter serial number of the candidate you want to vote\n");
			scanf("%d",&cast);
		
			
		fp1=fopen("votecount.txt","r");
		if(fp1==NULL)
		{
			fp1=fopen("votecount.txt","w");
			fp=fopen("candidatelist.txt","r");
			while(fscanf(fp,"%d %s%s%s%s",&vote[j].sn,vote[j].fname,vote[j].lname,vote[j].party,vote[j].place)!=EOF)
			{
				vc[i]=0;
				if(cast==vote[j].sn)
				{
					vc[i]=vc[i]+1;
				}
				fprintf(fp1,"%d %s %s\t%d\n",vote[j].sn,vote[j].fname,vote[j].lname,vc[i]);
				i++;
				j++;
			}
			fclose(fp);
			fclose(fp1);
		}
		else{
		
			FILE *ftemp=fopen("temp.txt","w");
			while(fscanf(fp1,"%d%s%s%d",&vote[j].sn,vote[j].fname,vote[j].lname,&vc[j])!=EOF)
			{
				if(cast==vote[j].sn)
				{
					vc[j]=vc[j]+1;
				}
				fprintf(ftemp,"%d %s %s\t%d\n",vote[j].sn,vote[j].fname,vote[j].lname,vc[j]);
				j++;
			}
			fclose(ftemp);
		fclose(fp1);
			remove("votecount.txt");
			rename("temp.txt","votecount.txt");
		}
		
		}
		
	}
	
}
int result()
	{
	struct cast{
	int sn;
	char fname[40];
	char lname[40];
	char party[45];
	char place[45];
	}vote[1000];	
     FILE *fp;
     int vc[100],a=0,i,j,temp2;
     char temp1[20],temp[20];
     printf("\t\t\t\t\t\t\t\t\t|ELECTION WINNER|\n\n");
    	printf("\t\t\t\t\t\t       +-----------------------------------------------------+\n");	
		printf("\t\t\t\t\t\t       | Serial Number |      Candidate Name      | Votecount|\n");
		printf("\t\t\t\t\t\t       +-----------------------------------------------------+\n");
     fp=fopen("votecount.txt","r");
     if(fp==NULL)
     {
     	printf("No such directory!");
	 }
	 while(fscanf(fp,"%d %s%s%d",&vote[a].sn,vote[a].fname,vote[a].lname,&vc[a])!=EOF)
	{
		
		printf("\t\t\t\t\t\t       |%-15d| %-14s %-10s|%-10d|\n",vote[a].sn,vote[a].fname,vote[a].lname,vc[a]);
		a++; 
	}
	printf("\t\t\t\t\t\t       +-----------------------------------------------------+\n");
	fclose(fp);
	for(i=0;i<a;i++)
	{
		for(j=i+1;j<a;j++)
		{
		 	if(vc[i]<vc[j])
			 {
			 	//arranging the votecount in decending order using swap method
			sprintf(temp,"%s",vote[i].fname);
			sprintf(temp1,"%s",vote[i].lname);
			temp2=vc[i];
			
			sprintf(vote[i].fname,"%s",vote[j].fname);
			sprintf(vote[i].lname,"%s",vote[j].lname);
			vc[i]=vc[j];
			
			sprintf(vote[j].fname,"%s",temp);
			sprintf(vote[j].lname,"%s",temp1);
			vc[j]=temp2;
			
			}	
		}
	}
	printf("\n\t\t\t\t\t\t      The winner of the election is %s %s with %d votes!\n",vote[0].fname,vote[0].lname,vc[0]);
	
	getch();
}


  
  
	
	
	





		
	
	

	
	
	
		



