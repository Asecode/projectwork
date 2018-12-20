#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>
using namespace std;

struct student
    {
        char Name[30];
        char Address[50];

        int ID;
        char Class[20];
        int Age;
        long double Tel;
        int Marks;
        char Grade[4];
        int courseCode;
        char courseTitle[25];
    };






int main()
{
   char choice;
     int List=0;
     int List2=0;
     int List3=0;

       cout << "Press 1 Edit/Delete/Add Student" << endl;
       cout << "Press 2 Edit/Delete/Add Staff" << endl;


       cout << endl;
       cout << "\t Select Option:";

       int choose;
       cin >> choose;

       switch(choose)
    {
        case  1 :

         cout << "You Can Edit/Add/Delete Student Records.. \n";

    do
   {
       student stu[20];

       cout << "Press 1 to Add New Record" << endl;
       cout << "Press 2 to Delete Record" << endl;
       cout << "Press 3 to Edit Record" << endl;
       cout << "Press 4 to Display Record" << endl;

       cout << endl;
       cout << "\t Select Option:";

       int Count = 0;

    int choose_1;
    cin >> choose_1;

    switch(choose_1)
    {
        case  1 :


        cout << "\n Enter the info of the student " << arr+1 << " is :" << endl;

        cout << "\t Enter the ID No. = ";
    int ID1;
    int ID2;



    cin >> ID1;

    for(int i=0; i<=List; i++){

        ID2=ID1;
    if(ID2 == stu[i].ID)
    {
        Count = 1;
         }
    }
    if(Count != 1){
        stu[List].ID=ID1;

    cout <<"\t Enter the Name = ";
    cin >> stu[List].Name;

    cout << "\t Enter the Address = ";
    cin >> stu[List].Address;

    cout << "\t Enter the Telephone no = ";
    cin >> stu[List].Tel;

    cout << "\t Enter the Class = ";
    cin >> stu[List].Class;

    cout << "\t Enter the Course_code = ";
    cin >> stu[List].courseCode;

    cout << "\t Enter the Course_title = ";
    cin >> stu[List].courseTitle;

    cout << "\t Enter the Marks = ";
    cin >>stu[List].Marks;

    cout << "\t Enter the Grade = ";
    cin >> stu[List].Grade;

    cout << "\t Enter the Age = ";
    cin >> stu[List].Age;
    List=List+1;
    }
    else
    {
        cout << "This Record Already Exists \n";
    }


            break;

        case 2:
            cout << "\n Enter the ID No. of the Student to Delete: " << endl;

            cin >> ID1;

            for(int i=0; i<=List; i++)
            {

                ID2=ID1;
            if(ID2==stu[i].ID)
            {
                stu[i].ID = 'd';
                cout << "\t Record Successfully Deleted";
                  }
            }
                    break;
        case 3:
            cout << "\n Enter the ID No. of the Student to Edit: " << endl;


            cin >>ID1;

        for(int i=0; i<=List; i++)
        {


            ID2=ID1;
        if(ID2==stu[i].ID)
        {
        cout << "\t ID No.  ";
        cout << stu[i].ID;
        cout << "\t Name = ";
        cout << stu[i].Name;
        cout << "\t Address = ";
        cout << stu[i].Address;
        cout << "\t Telephone no ";
        cout << stu[i].Tel;
        cout << "\t Class = ";
        cout << stu[i].Class;

        cout << "\t Course Code = ";
        cout << stu[i].courseCode;

        cout << "\t Course Title = ";
        cout << stu[i].courseTitle;
        cout << "\t Marks = ";
        cout <<stu[i].Marks;
        cout << "\t Grade = ";
        cout << stu[i].Grade;


    cout << "\n\t Re-Enter Info ";
            cout << "\n\t Enter the Name = ";
            cin >> stu[i].Name;

            cout << "\n\t Enter the Address = ";
            cin >> stu[i].Address;

            cout << "\n\t Enter the Telephone no = ";
            cin >> stu[i].Tel;

            cout << "\n\t Enter the Class = ";
            cin >> stu[i].Class;

            cout << "\n\t Enter the Course Code = ";
            cin >> stu[i].courseCode;

            cout << "\n\t Enter the Course Title = ";
            cin >> stu[i].courseTitle;

            cout << "\n\t Enter the Marks = ";
            cin >> stu[i].Marks;

            cout << "\n\t Enter the Grade = ";
            cin >> stu[i].Grade;

            cout << "\n\t Enter the Age = ";
            cin >> stu[i].Age;
               }

    }
    break;


        case 4:
            ofstream outf("student.txt");//creates a text file

            //print to the text file
            outf << "\n________________________________________________________________________________________________________" << endl;
            for(int i=0; i<1; i++)
            {
                outf << "ID No. ||";
                outf << " Name ||";
                outf << " Address ||";
               outf << "Tele no ||";
                outf << " Class ||";
                outf << " Course Code || ";
                outf << " Course Title || ";
                outf << " Marks || ";
                outf << " Grade ||";
            for(int k=0;k<List;k++)
            {
                if(stu[k].ID !='d')
                {
                    outf << "\n";
                      outf << " ";
                    outf << stu[k].ID;
                    outf << "   || ";
                    outf << stu[k].Name;
                    outf << " || ";
                    outf << stu[k].Address;
                    outf << "   ||  ";
                    outf << stu[k].Tel;
                    outf << "  ||  ";
                    outf << stu[k].Class;
                    outf << " ||  ";
                    outf << stu[k].courseCode;
                    outf << "       ||  ";
                    outf << stu[k].courseTitle;
                    outf << "            ||   ";
                    outf << stu[k].Marks;
                    outf << "      ||   ";
                    outf << stu[k].Grade;
                    outf << "   ||";
                }

            }
            }

            outf << "\n________________________________________________________________________________________________________\n";




            cout << "\n________________________________________________________________________________________________________" << endl;
            for(int i=0; i<1; i++)
            {
                cout << "ID No. ||";
                cout << " Name ||";
                cout << " Address ||";
                cout << "Tele no ||";
                cout << " Class ||";
                cout << " Course Code || ";
                cout << " Course Title || ";
                cout << " Marks || ";
                cout << " Grade ||";
            for(int k=0;k<List;k++)
            {
                if(stu[k].ID!='d')
                {
                    cout << "\n";
                      cout << " ";
                    cout << stu[k].ID;
                    cout << "   || ";
                    cout << stu[k].Name;
                    cout << " || ";
                    cout << stu[k].Address;
                    cout << "   ||  ";
                    cout << stu[k].Tel;
                    cout << "  ||  ";
                    cout << stu[k].Class;
                    cout << " ||  ";
                    cout << stu[k].courseCode;
                    cout << "       ||  ";
                    cout << stu[k].courseTitle;
                    cout << "            ||   ";
                    cout << stu[k].Marks;
                    cout << "      ||   ";
                    cout << stu[k].Grade;
                    cout << "   ||";
                }

            }
            }

            cout << "\n________________________________________________________________________________________________________\n";
                break;


        default:
            cout << "\t You've selected a wrong Option";
            break;
    }
          cout << "\n \n \t Do You want to Continue Again? [Y/N]";
          cin>> choice;
            }

            while(choice=='Y');


      break;

        case 2:
            cout << "You Can Edit/Add/Delete Staff Records: " << endl;

            //update/delete/edit staff records
             do
   {
       student stu[20];

       cout << "Press 1 to Add New Record" << endl;
       cout << "Press 2 to Delete Record" << endl;
       cout << "Press 3 to Edit Record" << endl;
       cout << "Press 4 to Display Record" << endl;

       cout << endl;
       cout << "\t Select Option:";

       int Count = 0;

    int choose_1;
    cin >> choose_1;

    switch(choose_1)
    {
        case  1 :


        cout << "\n Enter the info of the Staff " << List2+1 << " is :" << endl;

        cout << "\t Enter the ID No. = ";
    int ID2;
    int ID1;

    cin >> ID1;

    for(int i=0; i<=List2; i++){

        ID2=ID1;
    if(ID2 == stu[i].ID)
    {
        Count = 1;
         }
    }
    if(Count != 1){
        stu[List2].ID=ID1;

    cout <<"\t Enter the Name = ";
    cin >> stu[List2].Name;

    cout << "\t Enter the Address = ";
    cin >> stu[List2].Address;

    cout << "\t Enter the Telephone no = ";
    cin >> stu[List2].Tel;

    cout << "\t Enter the Age = ";
    cin >> stu[List2].Age;
    List2=List2+1;
    }
    else
    {
        cout << "This Record Already Exists \n";
    }


            break;

        case 2:
            cout << "\n Enter the ID No. of the Staff to Delete: " << endl;

            cin >> ID1;

            for(int i=0; i<=List2; i++)
            {

                ID2=ID1;
            if(ID2==stu[i].ID)
            {
                stu[i].ID= 'd';
                cout << "\t Record Successfully Deleted";
                  }
            }
                    break;
        case 3:
            cout << "\n Enter the ID No. of the Staff to Edit: " << endl;


            cin >>ID1;

        for(int i=0; i<=List; i++)
        {


            ID2=ID1;
        if(ID2==stu[i].ID)
        {
        cout << "\t ID No.  ";
        cout << stu[i].ID;
        cout << "\t Staff Name = ";
        cout << stu[i].Name;
        cout << "\t Address = ";
        cout << stu[i].Address;
        cout << "\t Telephone no ";
        cout << stu[i].Tel;
        cout << "\t Age ";
        cout << stu[i].Age;


    cout << "\n\t Re-Enter Info ";
            cout << "\n\t Enter the Staff ID No. = ";
            cin >> stu[i].ID;
            cout << "\n\t Enter the Staff Name = ";
            cin >> stu[i].Name;

            cout << "\n\t Enter the Address = ";
            cin >> stu[i].Address;

            cout << "\n\t Enter the Telephone no = ";
            cin >> stu[i].Tel;

            cout << "\n\t Enter the Age = ";
            cin >> stu[i].Age;
               }
        }

                break;

            case 4:
                ofstream outf("staff.txt");

         outf << "\n_________________________________________________________________________________________________________" << endl;
            for(int i=0; i<1; i++)
            {
                outf << "ID No. |";
                outf << " Name |";
                outf << " Address |";
                outf << "Tele no |";
                outf << " Age |";
            for(int k=0;k<List;k++)
            {
                if(stu[k].ID !='d')
                {
                    outf << "\n";
                    outf << " ";
                    outf << stu[k].ID;
                    outf << "   | ";
                    outf << stu[k].Name;
                    outf << " | ";
                    outf << stu[k].Address;
                    outf << "   |  ";
                    outf << stu[k].Tel;
                    outf << "  |  ";

                    outf << stu[k].Age;
                    outf << "   |";
                }

            }
            }

            outf << "\n-----------------------------------------------------------------------------------------------------------\n";


            cout << "\n_________________________________________________________________________________________________________" << endl;
            for(int i=0; i<1; i++)
            {
                cout << "ID No. |";
                cout << " Name |";
                cout << " Address |";
                cout << "Tele no |";
                cout << " Age |";
            for(int k=0;k<List;k++)
            {
                if(stu[k].ID !='d')
                {
                    cout << "\n";
                      cout << " ";
                    cout << stu[k].ID;
                    cout << "   | ";
                    cout << stu[k].Name;
                    cout << " | ";
                    cout << stu[k].Address;
                    cout << "   |  ";
                    cout << stu[k].Tel;
                    cout << "  |  ";

                    cout << stu[k].Age;
                    cout << "   |";
                }

            }
            }

            cout << "\n-----------------------------------------------------------------------------------------------------------\n";

                break;


        default:
            cout << "\t You've selected a wrong Option";
            break;
    }
          cout << "\n \n \t Do You want to Continue Again? [Y/N]";
          cin>> choice;
            }

            while(choice=='Y');

            break;




    return 0;
    getch();




    }


}
