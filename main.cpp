#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool IsLoggedIn()
{
    string username, password, un, pw;

    cout <<"Enter school I.D: "; cin>> username;
    cout<< "Enter password: "; cin>> password;

    ifstream read(username + ".txt");
    getline(read, un);
    getline(read, pw);

    if (un == username && pw == password)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int choice;

    cout<<" \n1: Sign up\n2: Login\nYour choice: "; cin>> choice;
    if (choice == 1)
    {
        string username, password;

        cout<<"Enter your school I.D: "; cin>> username;
        cout<<"Select a password: "; cin>> password;

        ofstream file;
        file.open(username + ".txt");
        file << username <<endl <<password;
        file.close();

        main();
    }
        else if (choice == 2)
        {
            bool status = IsLoggedIn();

            if (!status)
            {
                cout <<"False Login!" <<endl;
                system("PAUSE");
                return 0;
            }
            else
            {
                int course, nOne, nTwo, nThree, nFour, nFive;
                cout<<"Successful Login!\n\n" <<endl;
                cout<<"Welcome. Select your course.\n1. Computer Science. \n2. Information Technology\n";
                cin>>course;

                if (course == 1)
                {
                    cout<<"Enter the marks for your modules." <<endl;
                    cout<<"DCIT101: ";
                    cin>>nOne;
                    if (nOne >= 90)
                {
                    cout<<"Your grade is A.";
                }
                else if (nOne >= 80 && nOne < 90  )
                {
                    cout<<"Your grade is B.";
                }
                 else if (nOne >= 70 && nOne < 80  )
                {
                    cout<<"Your grade is C.";
                }
                 else if (nOne >= 60 && nOne < 70  )
                {
                    cout<<"Your grade is D.";
                }
                 else if (nOne <= 59 )
                {
                    cout<<"Your grade is F.";
                }

                    cout<<"\nDCIT103: ";
                    cin>>nTwo;
                    if (nTwo >= 90)
                {
                    cout<<"Your grade is A.";
                }
                else if (nTwo >= 80 && nTwo < 90  )
                {
                    cout<<"Your grade is B.";
                }
                 else if (nTwo >= 70 && nTwo < 80  )
                {
                    cout<<"Your grade is C.";
                }
                 else if (nTwo >= 60 && nTwo < 70  )
                {
                    cout<<"Your grade is D.";
                }
                 else if (nTwo <= 59 )
                {
                    cout<<"Your grade is F.";
                }
                    cout<<"\nMATH121: ";
                    cin>>nThree;
                    if (nThree >= 90)
                {
                    cout<<"Your grade is A.";
                }
                else if (nThree >= 80 && nThree < 90  )
                {
                    cout<<"Your grade is B.";
                }
                 else if (nThree >= 70 && nThree < 80  )
                {
                    cout<<"Your grade is C.";
                }
                 else if (nThree >= 60 && nThree < 70  )
                {
                    cout<<"Your grade is D.";
                }
                 else if (nThree <= 59 )
                {
                    cout<<"Your grade is F.";
                }
                    cout<<"\nMATH123: ";
                    cin>>nFour;
                    if (nFour >= 90)
                {
                    cout<<"Your grade is A.";
                }
                else if (nFour >= 80 && nFour < 90  )
                {
                    cout<<"Your grade is B.";
                }
                 else if (nFour >= 70 && nFour < 80  )
                {
                    cout<<"Your grade is C.";
                }
                 else if (nFour >= 60 && nFour < 70  )
                {
                    cout<<"Your grade is D.";
                }
                 else if (nFour <= 59 )
                {
                    cout<<"Your grade is F.";
                }
                    cout<<"\nSTAT111: ";
                    cin>>nFive;
                    if (nFive >= 90)
                {
                    cout<<"Your grade is A.";
                }
                else if (nFive >= 80 && nFive < 90  )
                {
                    cout<<"Your grade is B.";
                }
                 else if (nFive >= 70 && nFive < 80  )
                {
                    cout<<"Your grade is C.";
                }
                 else if (nFive >= 60 && nFive < 70  )
                {
                    cout<<"Your grade is D.";
                }
                 else if (nFive <= 59 )
                {
                    cout<<"Your grade is F.";
                }

                }
                else if (course == 2)
                {
                    cout<<"Enter the marks for your modules." <<endl;
                    cout<<"DCIT101: ";
                    cin>>nOne;
                    if (nOne >= 90)
                {
                    cout<<"Your grade is A.";
                }
                else if (nOne >= 80 && nOne < 90  )
                {
                    cout<<"Your grade is B.";
                }
                 else if (nOne >= 70 && nOne < 80  )
                {
                    cout<<"Your grade is C.";
                }
                 else if (nOne >= 60 && nOne < 70  )
                {
                    cout<<"Your grade is D.";
                }
                 else if (nOne <= 59 )
                {
                    cout<<"Your grade is F.";
                }

                    cout<<"\nDCIT103: ";
                    cin>>nTwo;
                    if (nTwo >= 90)
                {
                    cout<<"Your grade is A.";
                }
                else if (nTwo >= 80 && nTwo < 90  )
                {
                    cout<<"Your grade is B.";
                }
                 else if (nTwo >= 70 && nTwo < 80  )
                {
                    cout<<"Your grade is C.";
                }
                 else if (nTwo >= 60 && nTwo < 70  )
                {
                    cout<<"Your grade is D.";
                }
                 else if (nTwo <= 59 )
                {
                    cout<<"Your grade is F.";
                }
                    cout<<"\nDCIT105: ";
                    cin>>nThree;
                    if (nThree >= 90)
                {
                    cout<<"Your grade is A.";
                }
                else if (nThree >= 80 && nThree < 90  )
                {
                    cout<<"Your grade is B.";
                }
                 else if (nThree >= 70 && nThree < 80  )
                {
                    cout<<"Your grade is C.";
                }
                 else if (nThree >= 60 && nThree < 70  )
                {
                    cout<<"Your grade is D.";
                }
                 else if (nThree <= 59 )
                {
                    cout<<"Your grade is F.";
                }
                    cout<<"\nECON101: ";
                    cin>>nFour;
                    if (nFour >= 90)
                {
                    cout<<"Your grade is A.";
                }
                else if (nFour >= 80 && nFour < 90  )
                {
                    cout<<"Your grade is B.";
                }
                 else if (nFour >= 70 && nFour < 80  )
                {
                    cout<<"Your grade is C.";
                }
                 else if (nFour >= 60 && nFour < 70  )
                {
                    cout<<"Your grade is D.";
                }
                 else if (nFour <= 59 )
                {
                    cout<<"Your grade is F.";
                }
                    cout<<"\nSTAT111: ";
                    cin>>nFive;
                    if (nFive >= 90)
                {
                    cout<<"Your grade is A.";
                }
                else if (nFive >= 80 && nFive < 90  )
                {
                    cout<<"Your grade is B.";
                }
                 else if (nFive >= 70 && nFive < 80  )
                {
                    cout<<"Your grade is C.";
                }
                 else if (nFive >= 60 && nFive < 70  )
                {
                    cout<<"Your grade is D.";
                }
                 else if (nFive <= 59 )
                {
                    cout<<"Your grade is F.";
                }
                }
                else
                {
                    cout<<"The value you entered is not valid. ";
                }


                return 1;
            }
        }
        else
        {
            cout<<"An error has occurred. Press any key to quit";
        }

    return 0;
}
