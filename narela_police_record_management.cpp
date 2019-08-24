#include<iostream>
#include<fstream>
#include<cstdlib>
#include<conio.h>
#include<time.h>
#include<iomanip>

using namespace std;
int main()

//NOTE: RUN THE PROGRAM IN FULL SCREEN ONLY

{
char fname[20];
time_t rawtime;
struct tm * timeinfo;

time ( &rawtime );
timeinfo = localtime ( &rawtime );

//printing the welcome note
re:
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"\t\t\t\t\t@@ _____________________________________________________________________________________________________@@\n";
cout<<"\t\t\t\t\t@@|                                                    		                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                    		                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                    		                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                    		                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                               |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                               |@@\n";
cout<<"\t\t\t\t\t@@|                                               WELCOME TO                                           |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                                    |@@\n";
cout<<"\t\t\t\t\t@@|                                          POLICE STATION NARELA                                     |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                                    |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                                    |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                                    |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                                    |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                                    |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                                    |@@\n";
cout<<"\t\t\t\t\t@@|____________________________________________________________________________________________________|@@\n";
cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
system("pause");
system("cls");



int i;
int login();
login();
//giving option to the user for their choice
b:
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t  POLICE STATION NARELA \n\n";
cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t\t\t|                                           	                  |\n";
cout<<"\t\t\t\t\t\t\t\t|             1  >> Add New Criminal Record                       |\n";
cout<<"\t\t\t\t\t\t\t\t|             2  >> Add Court trial Information                   |\n";
cout<<"\t\t\t\t\t\t\t\t|             3  >> Full History of the Criminal                  |\n";
cout<<"\t\t\t\t\t\t\t\t|             4  >> Information About the POLICE STATION          |\n";
cout<<"\t\t\t\t\t\t\t\t|             5  >> Exit the portal                               |\n";
cout<<"\t\t\t\t\t\t\t\t|_________________________________________________________________|\n\n";
a:cout<<"\t\t\t\t\t\t\t\tEnter your choice: ";cin>>i;
if(i>5||i<1){cout<<"\n\n\t\t\t\t\tInvalid Choice\n";cout<<"\t\t\t\t\t\tTry again...........\n\n";goto a;} //if inputed choice is other than given choice



system("cls");

//displaying the information about the hospital........option 4
if(i==4)
{
	ifstream file;
	file.open("hos.txt");
		if(!file)
		{
		cout<<"\nError while opening the file\n";goto b;
		}
		else
		{
		    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t   ...........................Information about the POLICE STATION.............................\n\n";
		    string line;
			while(file.good())
			{
			getline(file,line);
			cout<<line<<"\n\t\t";
			}
			cout<<"\n\n\t\t";
			system("pause");
            system("cls");
			goto b;
		}
}

//Adding the record of the new criminal..................option 3
if(i==1)
{
  time_t rawtime;
  struct tm * timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  cout<<"\n\n\t\t\t\t\t\t\t\t"<< asctime (timeinfo);
  ofstream pat_file;
  char fname[20];
  cout<<"\n\n\n\nEnter the Criminals's file name : ";
  cin.ignore();
  gets(fname);
  pat_file.open(fname);
  		if(!fname)
		{
		cout<<"\nError while opening the file\n";goto b;
		}
		else
		{
                        struct Criminals_info
                        {
                            char name[20];
                            char address[100];
                            char contact[10];
                            char age[5];
                            char sex[8];
                            char blood_gp[5];
                            char crimes_list[50];
                            char id[15];
                        };

            Criminals_info ak;
            cout<<"\n********************************************************************\n";pat_file<<"\n********************************************************************\n\n";//fn1353 st
            cout<<"\nName : ";pat_file<<"Name : ";gets(ak.name);pat_file<<ak.name<<"\n";
            cout<<"\nAddress : ";pat_file<<"Address : ";gets(ak.address);pat_file<<ak.address<<"\n";
            cout<<"\nContact Number : ";pat_file<<"Contact Number : ";gets(ak.contact);pat_file<<ak.contact<<"\n";
            cout<<"\nAge : ";pat_file<<"Age : ";gets(ak.age);pat_file<<ak.age<<"\n";
            cout<<"\nSex : ";pat_file<<"Sex : ";gets(ak.sex);pat_file<<ak.sex<<"\n";
            cout<<"\nBlood Group : ";pat_file<<"Blood Group : ";gets(ak.blood_gp);pat_file<<ak.blood_gp<<"\n";
            cout<<"\n : Any Crimes done earlier :";pat_file<<"Any Crimes done earlier : ";gets(ak.crimes_list);pat_file<<ak.crimes_list<<"\n";
            cout<<"\nCriminalID : ";pat_file<<"CriminalID : ";gets(ak.id);pat_file<<ak.id<<"\n";
            cout<<"\n********************************************************************\n";pat_file<<"\n********************************************************************\n\n";
            cout<<"\nInformation Saved Successfully\n";
            }
  system("pause");
  system("cls");
  goto b;

}

//Appending Criminaldatewise.................option 2
if(i==2)
{
    fstream pat_file;
    cout<<"\n\nEnter the Criminals's file name to be opened : ";
    cin.ignore();
    gets(fname);
    system("cls");
	pat_file.open(fname, ios::in);
		if(!pat_file)
		{
		cout<<"\nError while opening the file\n";goto b;
		}
		else
		{
		    cout<<"\n\n\n\n\t\t\t\t........................................ Information about "<<fname<<" ........................................\n\n\n\n";
		    string info;
			while(pat_file.good())
			{
			getline(pat_file,info);
			cout<<info<<"\n";
			}
			cout<<"\n";
			pat_file.close();
			pat_file.open(fname, ios::out | ios::app);
            cout<<"\n";
			cout<<"Adding more information in criminal's file................on : "<<asctime (timeinfo);pat_file<<"Description of "<<asctime (timeinfo)<<"\n";
                            struct app
                            {
                                char Crime[500];
                                char Court_trial[500];
                                char judgement[500];
                                char imprisonment[30];
                                char prison[15];
                            };
            app add;
            cout<<"\nCrime : "; pat_file<<"Crimes : ";gets(add.Crime); pat_file<<add.Crime<<"\n";
            cout<<"\n court trial : "; pat_file<<"Court trial : ";gets(add.Court_trial); pat_file<<add.Court_trial<<"\n";
            cout<<"\njudgement "; pat_file<<"judgements : ";gets(add.judgement); pat_file<<add.judgement<<"\n";
            cout<<"\nimprisonment required ? : "; pat_file<<"imprisonment Required? : ";gets(add.imprisonment); pat_file<<add.imprisonment<<"\n";
            cout<<"\n Prison name  : "; pat_file<<"Type of prison : ";gets(add.prison); pat_file<<add.prison<<"\n";pat_file<<"\n*************************************************************************\n";
            cout<<"\n\n"<<add.prison<<" prison is alloted Successfully\n";
			pat_file.close();
			cout<<"\n\n";
			system("pause");
            system("cls");
			goto b;
		}
}

//For displaying the full medical history of Criminalin that hospital............option 3
if(i==3)
{
    fstream pat_file;
    cout<<"\n\nEnter the Criminal's file name to be opened : ";
    cin.ignore();
    gets(fname);
    system("cls");
	pat_file.open(fname, ios::in);
		if(!pat_file)
		{
		cout<<"\nError while opening the file\n";goto b;
		}
		else
		{
		    cout<<"\n\n\n\n\t\t\t\t........................................ Full History of "<<fname<<" ........................................\n\n\n\n";
		    string info;
			while(pat_file.good())
			{
			getline(pat_file,info);
			cout<<info<<"\n";
			}
			cout<<"\n";
        }
        system("pause");
        system("cls");
        goto b;
}

//Exiting Through the system with a Thank You note........................option 5
if(i==5)
{
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"\t\t\t\t\t\t\t\t@@ __________________________________________________________________________________________@@\n";
cout<<"\t\t\t\t\t\t\t\t@@|                                           		                                    |@@\n";
cout<<"\t\t\t\t\t\t\t\t@@|                                           		                                    |@@\n";
cout<<"\t\t\t\t\t\t\t\t@@|                                           		                                    |@@\n";
cout<<"\t\t\t\t\t\t\t\t@@|                                           		                                    |@@\n";
cout<<"\t\t\t\t\t\t\t\t@@|                                           		                                    |@@\n";
cout<<"\t\t\t\t\t\t\t\t@@|                             THANK YOU FOR USING                                         |@@\n";
cout<<"\t\t\t\t\t\t\t\t@@|                                                                                         |@@\n";
cout<<"\t\t\t\t\t\t\t\t@@|                            POLICE STATION NARELA                                        |@@\n";
cout<<"\t\t\t\t\t\t\t\t@@|                                                                                         |@@\n";
cout<<"\t\t\t\t\t\t\t\t@@|                                                                                         |@@\n";
cout<<"\t\t\t\t\t\t\t\t@@|                                                                                         |@@\n";
cout<<"\t\t\t\t\t\t\t\t@@|                                                                                         |@@\n";
cout<<"\t\t\t\t\t\t\t\t@@|                                                                                         |@@\n";
cout<<"\t\t\t\t\t\t\t\t@@|                                                                                         |@@\n";
cout<<"\t\t\t\t\t\t\t\t@@|_________________________________________________________________________________________|@@\n";
cout<<"\t\t\t\t\t\t\t\t\@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
}


cout<<"\n";

}

int login(){
   string pass ="";
   char ch;
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  NARELA POLICE STATION \n\n";
   cout<<"\t\t\t\t\t\t\t\t------------------------------";
   cout<<"\n\t\t\t\t\t\t\t\t\t     LOGIN \n";
   cout<<"\t\t\t\t\t\t\t\t------------------------------\n\n";
   cout << "\t\t\t\t\t\t\t\tEnter Password: ";
   ch = _getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "narelapolice"){
      cout << "\n\n\t\t\t\t\t\t\t\tAccess Granted! \n";
      system("PAUSE");
      system ("CLS");
   }else{
      cout << "\n\n\t\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\t\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}
