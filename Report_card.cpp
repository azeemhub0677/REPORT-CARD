#include <iostream>
#include<string>
using namespace std;

int main ()
 {
	char name[20],sec;
	int stand;
    float english,hindi,maths,science,economics,total; 
	cout<<"D A V senior secendory school \n";

	cout<<"Annual Report card \n";

	cout<<"name:";
	cin>>name;
    
    cout<<"standard:";
    cin>>stand;

    cout<<"section:";
    cin>>sec;

	cout<<"\n\n\n";

	cout<<"    ***------YOUR DATA------***"<<endl;

    cout<<"     NAME     CLASS    SECTION"<<endl;
    cout<<"   "<<name<<"        "<<stand<<"          "<<sec<<endl;
	cout<<"\n";
	cout<<"------------------------------------";

	cout<<"\n\n\n";

	cout<<"Marks secured out of 100\n\n";

     cout<<"Enter your english marks:"<<endl;
	 cin>>english;
	 cout<<"Enter your hindi maarks:"<<endl;
	 cin>>hindi;
     cout<<"Enter your maths maarks:"<<endl;
	 cin>>maths;  
	 cout<<"Enter you science marks:"<<endl;
	 cin>>science;
	 cout<<"Enter your economics marks:"<<endl;
	 cin>>economics;

	 total=english+hindi+maths+science+economics;

	 cout<<"TOTAL:"<<total<<endl;

	 cout<<"\n\n\n\n";

    if ((total  >= 450) && (total < 500)) {
		cout<<"----------\n";
		cout<<"Grade: A";
		cout<<"\n----------\n";
	}
	else if ((total >= 400) && (total < 450)) {
		cout<<"----------\n";
		cout<<"Grade: B";
		cout<<"\n----------\n";
	}
	else if ((total >= 350 )&& (total < 400)) {
		cout<<"----------\n";
		cout<<"Graed: C";
		cout<<"\n----------\n";
	}
	else if ((total >= 300) && (total < 350)) {
		cout<<"----------\n";
		cout<<"Grade: D";
		cout<<"\n----------\n";
	}
	else if ((total >= 200 )&& (total < 300)) {
		cout<<"----------\n";
		cout<<"Grade: E";
		cout<<"\n----------\n";
	}
	else if (total > 500) {
		cout<<"----------\n";
	cout<<"Invalid marks";
	    cout<<"\n----------\n";
	}
	else {
		cout<<"----------\n";
		cout<<"Grade: F";
		cout<<"\n----------\n";
	}

	cout<<"-------------------------------------------------------\n\nGRADE ANE SE KOI MATLAB NHI TU CHUTIYA HAI CHUTIYA HI RAHE GA\n\n--------------------------------------------------------";

	return 0;
}

