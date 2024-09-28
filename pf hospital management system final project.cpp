#include<iostream>
#include<conio.h>
#include<string>
#include<windows.h>
using namespace std;

struct patient{
	         
			  string  name,fathername,address,diseases, gender,description,bloodgroup,phonenumber,CNIC;
	          int age,specialistroomno;
	          int choice;
	
};
 
 patient p[100];  //array for entering data
 int total=0;


void  patientdata(){
	                
	                    int choice;
	                    
	  cout<<"\t\tHow many patients data that you want to enter: ";
	  cin>>choice;
	  
	     for(int i=total;i<total+choice;i++)  {
	     	   cout<<"\t\tENTER THE GIVEN DATA OF PATIENTS"<<i+1<<endl;
	     	   cout<<"Enter Patient NAME :";
                	cin.ignore();                 //for clearing memory
                    cin>>p[i].name;
	
               cout<<"Enter Patient FATHER NAME :";
	                 cin>>p[i].fathername;
		
	           cout<<"Enter Patient ADDRESS :";
	                 cin>>p[i].address; 
	
	           cout<<"Enter Patient DISEASES:";
                     cin>>p[i].diseases;
	
	           cout<<"Enter Patient GENDER (MALE OR FEMALE) :";
                     cin>>p[i].gender;
    
               cout<<"Enter Patient DESCRIPTION :";
	                 cin>>p[i].description;
	
	           cout<<"Enter Patient BLOOD GROUP :";
                      cin>>p[i].bloodgroup;
	
               cout<<"Enter Patient  AGE :";             
	                 cin>>p[i].age;
    
                cout<<"Enter Patient PHONE NUMBER :";
                     cin>>p[i].phonenumber;

               cout<<"Enter Patient CNIC NUMBER(without dashes) :";
                     cin>>p[i].CNIC;
	
	           cout<<"Enter Patient SPECIALIST ROOM NUMBER:";
             	     cin>>p[i].specialistroomno;
	
   cout<<"\t+++++++++++++++++++++++++++++++\t"<<i+1<<endl;
	cout<<"\tTHIS PATIENT ENTERY COMPLETED \t"<<i+1<<endl;	
	     	
		 }   
		              
	   total=total+choice;                 
	
}     //patient information function


void delrecord(){
       if(total!=0){
       	               int choice;
       	        cout<<"\t\tPress 1 to delete full record"<<endl;
       	        cout<<"\t\tPress 2 to delete specific record"<<endl;
       	        cout<<"Enter your choice";
       	        cin>>choice;
       	    if(choice==1){
       	    	   cout<<"\t\tFull record is deleted...."<<endl;
			   }
       	    else if(choice==2){
       	    	    string CNIC;
            	    cout<<"\t\tEnter CNIC NUMBER of patient which you want to delete: ";
            	    cin>>CNIC;
       	    	    for(int i=0;i<total;i++){
       	    	    	    if(CNIC==p[i].CNIC){
       	    	    	    	 for(int j=i;j<total;j++){
       	    	    	    	    p[j].name=p[j+1].name;
       	    	    	    	    p[j].fathername=p[j+1].fathername;
       	    	    	    	    p[j].address=p[j+1].address;
       	    	    	    	    p[j].gender=p[j+1].gender;
       	    	    	    	    p[j].age=p[j+1].age;
       	    	    	    	    p[j].bloodgroup=p[j+1].bloodgroup;
       	    	    	    	    p[j].phonenumber=p[j+1].phonenumber;
       	    	    	    	    p[j].CNIC=p[j+1].CNIC;
									p[j].diseases=p[j+1].diseases ;   
       	    	    	    	    p[j].description=p[j+1].description;
       	    	    	    	    p[j].specialistroomno=p[j+1].specialistroomno;
       	    	    	    	    total--;
       	    	    	    	cout<<"\t\tYour required record is deleted" ;  
       	    	    	    	    
       	    	    break;
    }
             
             if(i==total-1){
           	    cout<<"\t\t No such record found in your hospital"<<endl;
		   }
    
} 
       	    	    	
	 }
	 
	}
}
     
	 
	 else{
	 	    cout<<"\t\tYou have no record in your hospital"<<endl;
	 }
	 
	 	   
}      //function for delete record


void searchlist(){ 
            if(total!=0){
            	     string CNIC;
            	     cout<<"\t\tEnter CNIC NUMBER of patient which you want to search: ";
            	     cin>>CNIC;
                     for(int i=0;i<total;i++){
                     	     if(CNIC==p[i].CNIC){
                     	     	  	     cout<<"\t\t++DETAIL OF PATIENTS IN YOUR HOSPITAL++\t"<<i+1<<endl;
	  	    	                         cout<<"Name :"<<p[i].name<<endl;	     
	 	                                 cout<<"Father Name :"<<p[i].fathername<<endl;
	 	                                 cout<<"Address :"<<p[i].address<<endl;
	 	                                 cout<<"Gender :"<<p[i].gender<<endl;
	 	                                 cout<<"Age :"<<p[i].age<<endl;
	 	                                 cout<<"Blood Group :"<<p[i].bloodgroup<<endl;
	 	                                 cout<<"Phone Number :"<<p[i].phonenumber<<endl;
			                             cout<<"CNIC Number :"<<p[i].CNIC<<endl;
			                             cout<<"Diseases :"<<p[i].diseases<<endl;
			                             cout<<"Description :"<<p[i].description<<endl;
			                             cout<<"Specialist Room Number :"<<p[i].specialistroomno<<endl;
			                             cout<<"\tABOVE PATIENT INFORMATION COMPLETED"<<i+1<<endl;
			                             
			            break;     //for breaking if condition is true
		 }
		 
           if(i==total-1){
           	    cout<<"\t\t No such record found in your hospital"<<endl;
		   }
                     		
					 }
	   }
     
	 else{
	 	    cout<<"\t\tNo record found in your hospital"<<endl;
	 }

}            //function for finding patient by CNIC record


void displaylist(){
	  if(total!=0){
	  	    for(int i=0;i<total;i++){
	  	    	     cout<<"\t\t++DETAIL OF PATIENTS IN YOUR HOSPITAL++\t"<<i+1<<endl;
	  	    	     cout<<"Name :"<<p[i].name<<endl;	     
	 	             cout<<"Father Name :"<<p[i].fathername<<endl;
	 	             cout<<"Address :"<<p[i].address<<endl;
	 	             cout<<"Gender :"<<p[i].gender<<endl;
	 	             cout<<"Age :"<<p[i].age<<endl;
	 	             cout<<"Blood Group :"<<p[i].bloodgroup<<endl;
	 	             cout<<"Phone Number :"<<p[i].phonenumber<<endl;
			         cout<<"CNIC Number :"<<p[i].CNIC<<endl;
			         cout<<"Diseases :"<<p[i].diseases<<endl;
			         cout<<"Description :"<<p[i].description<<endl;
			         cout<<"Specialist Room Number :"<<p[i].specialistroomno<<endl;
			         cout<<"\tABOVE PATIENT INFORMATION COMPLETED"<<i+1<<endl;
	  	    	     
			  }
	
	  }
	
      else{
      	   cout<<"\t\t No record found in your hospital"<<endl;  
	  }	
			 
}                         //function for display patients list


void update(){
		  if(total!=0){
		 	    string CNIC;
            	     cout<<"\t\tEnter CNIC NUMBER of patient which you want to update: ";
            	     cin>>CNIC;
            	     for(int i=0;i<total;i++){
                     	     if(CNIC==p[i].CNIC){
                     	     	         cout<<"\t\t patient previous data"<<endl;
                     	     	  	     cout<<"\t\t++DETAIL OF PATIENTS IN YOUR HOSPITAL++\t"<<i+1<<endl;
	  	    	                         cout<<"Name :"<<p[i].name<<endl;	     
	 	                                 cout<<"Father Name :"<<p[i].fathername<<endl;
	 	                                 cout<<"Address :"<<p[i].address<<endl;
	 	                                 cout<<"Gender :"<<p[i].gender<<endl;
	 	                                 cout<<"Age :"<<p[i].age<<endl;
	 	                                 cout<<"Blood Group :"<<p[i].bloodgroup<<endl;
	 	                                 cout<<"Phone Number :"<<p[i].phonenumber<<endl;
			                             cout<<"CNIC Number :"<<p[i].CNIC<<endl;
			                             cout<<"Diseases :"<<p[i].diseases<<endl;
			                             cout<<"Description :"<<p[i].description<<endl;
			                             cout<<"Specialist Room Number :"<<p[i].specialistroomno<<endl;
			                             cout<<"\tABOVE PATIENT INFORMATION COMPLETED"<<i+1<<endl;
			                             
			                             cout<<"\n\t\tEnter new data"<<endl;
			                             cout<<"Enter Patient NAME :";
                                                 	cin.ignore();                 //for clearing memory
                                                    cin>>p[i].name;	
                                         cout<<"Enter Patient FATHER NAME :";
	                                                cin>>p[i].fathername;		
	                                     cout<<"Enter Patient ADDRESS :";
	                                                cin>>p[i].address; 	
	                                     cout<<"Enter Patient DISEASES:";
                                                    cin>>p[i].diseases;
	                                     cout<<"Enter Patient GENDER (MALE OR FEMALE) :";
                                                    cin>>p[i].gender;
                                         cout<<"Enter Patient DESCRIPTION :";
	                                                cin>>p[i].description;
	                                     cout<<"Enter Patient BLOOD GROUP :";
                                                    cin>>p[i].bloodgroup;
                                         cout<<"Enter Patient  AGE :";             
	                                                cin>>p[i].age;
                                         cout<<"Enter Patient PHONE NUMBER :";
                                                    cin>>p[i].phonenumber;
                                         cout<<"Enter Patient CNIC NUMBER(without dashes) :";
                                                     cin>>p[i].CNIC;
	                                     cout<<"Enter Patient SPECIALIST ROOM NUMBER:";
             	                                    cin>>p[i].specialistroomno;
			            break;     //for breaking if condition is true
	 }
		 
           if(i==total-1){
           	    cout<<"\t\t No such record found in your hospital"<<endl;
		   }
            	     
            	     
		 }
    }
    
    
   else{
      	   cout<<"\t\tNo record found in your hospital"<<endl;  
	  }	 
    
}     //update function 



		 

int main(){

             string username,password,username1,password1;
             int option;
             
            cout<<"\n\n\t\tHOSPITAL MANAGEMENT SYSTEM";
			cout<<"\n\n\t Sign up";	
			cout<<"\n\t\tEnter username: ";
            cin>>username;
            cout<<"\n\t\tEnter password: ";
            cin>>password;
            cout<<"\n\t\tYour Acount is creating please, wait";
                  for(int i=0;i<8;i++){
            	        cout<<".";
            	        Sleep(1000);  }   //built in funtion
            	        //1000milisec = 1sec
            cout<<"\n\t\tYour Acount created sucessfully"<<endl;	        
        system("cls");   	//for next window
        
        start:
        system("cls");
            cout<<"\n\n\t\tHOSPITAL MANAGEMENT SYSTEM";
			cout<<"\n\n\t Login"<<endl;
			cout<<"username: ";
			cin>>username1;
			cout<<"password: ";
			cin>>password1;
			
			   if(username1==username&&password1==password){
			   	   system("cls");
			   	 
				 	while(1){    //1(true) infinite loop
		        
	system("cls");
	   cout<<"\n\t\t___________________________________________________________________________\n"<<endl;
	   cout<<"\t\t****************************************************************************"<<endl;
	   cout<<"\n\t\t\t\t\t\t\tWELLCOME"<<endl;
	   cout<<"\n\t\t\t\t\t\t\tTO"<<endl;
	   cout<<"\n\t\t\t\t\t\tHOSPITAL MANAGMENT SYSTEM"<<endl;
	   cout<<"\n\t\t++Which Option Do You Want To CHOOSE.Please! CHOOSE++\n"<<endl;
	   cout<<"\t\t******************************************************************************"<<endl;
	   cout<<"\t\t______________________________________________________________________________"<<endl;
	  
	   cout<<"\t\t++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n"<<endl;
	   cout<<"\t\t\t|   1>>ADD PATIENTS DETAILS |\n"<<endl;
	   cout<<"\t\t\t|   2>>UPDATE PATIENT DETAILS|\n"<<endl;
	   cout<<"\t\t\t|   3>>SEARCH PATIENT BY CINC NUMBER|\n"<<endl;
	   cout<<"\t\t\t|   4>>CHECK LIST OF PATIENT WITH FULL DETAILS|\n"<<endl;
	   cout<<"\t\t\t|   5>>DELETE PATIENTS RECORD|\n"<<endl;
	   cout<<"\t\t\t|   6>>TO LOGOUT SYSTEM|\n"<<endl;
	   cout<<"\t\t\t|   7>>EXIT THE SYSTEM|\n"<<endl;
	   cout<<"\t\t++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
cout<<"ENTER YOUR OPTION :";
cin>>option;   
system("cls");			   	   
			
		
		switch(option){
			
		case 1:
		   cout<<"\t\tPLEASE ENTER THE PATIENT DETAILS THAT ARE GIVEN BELOW"<<endl;
		   patientdata();
		   cout<<"Press any key for main menu....";
		   getch();
		   break;
		   
		   
        case 2:
        	
           update();
	       cout<<"Press any key for main menu....";
		   getch();
	        break;
	        
	        
case 3:
	    searchlist();
		cout<<"Press any key for main menu....";
		getch();
		 break;    //serch by CNIC number
		 

	case 4:
	       displaylist();
	       cout<<"Press any key for main menu....";
		   getch();
	    	break;
	    	
	    	
	case 5:
				
		   delrecord();	
	       cout<<"Press any key for main menu....";
		   getch();
	        break;
	        
	        
    case 6:
		 
		 goto start;
		 break;
		 
		    
    case 7:
	    	cout<<"PLEASE, press the ENTER to exit the system"<<endl;
			exit(1)	;
	        break;
			
	    default:
	    	cout<<"\aINVALID ENTRY"<<endl;   //\a for producing sound	   
			   	   
			   }
			   	   
	 }
			 			   	   
}
		
			
		        else if(username1!=username){
				      cout<<"incorrect username"<<endl;
				      Sleep(3000);
				      goto start;
			}
			    else if(password1!=password){
			    	  cout<<"incorrect password"<<endl;
			    	  Sleep(3000);
				      goto start;
				}
			
	return 0;
}
	
		
				   	

