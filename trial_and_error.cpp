#include <iostream>
#include <fstream>
using namespace std;

//static int bill;

class hospital_info
{
public:
    void print_hospital_info()
    {
        ifstream file;
        file.open("hos.txt");
        if (!file)
        {
            cout << "\nError while opening the file\n" /*;goto b*/;
        }
        else
        {
            cout << "\n\n\n\n\n\n\n\t\t\t\t\t   ...........................Information about the Hospital.............................\n\n";
            string line;
            while (file.good())
            {
                getline(file, line);
                cout << line << "\n\t\t";
            }
            cout << "\n\n\t\t";
            system("pause");
            system("cls");
            //  goto b;
        }
    }
};

class patient_info_ : public hospital_info
{

public:
    string first_name, middle_name, last_name, address, gender, blood_group, age, contact;
    // long int age, contact_number;

    void patient_info_input()
    {
        cout << "\t________";
        cout << endl
             << endl
             << "\t  REGISTRATION FORM";
        cout << endl
             << "\t________";

        cout << endl
             << endl
             << "First name :";
        cin >> first_name;

        cout << endl
             << "Middle name :";
        cin >> middle_name;

        cout << endl
             << "Last name :";
        cin >> last_name;

        cout << endl
             << "Address :";
        cin >> address;

        cout << endl
             << "Gender :";
        cin >> gender;

    c:
        cout << endl
             << "Contact number :";
        cin >> contact;

        if (contact.length() != 10)
        {
            cout << "Kindly Enter Correct Contact Number" << endl;
            goto c;
        }

        cout << endl
             << "Blood group :";
        cin >> blood_group;

        cout << endl
             << "Age :";
        cin >> age;

        // ofstream MyFile("patient_info.txt");
        // ofstream out("patient_info.txt"); // Write operation
        // out << "name : " << first_name << " " << middle_name << " " << last_name
        //     << endl
        //     << "Address : " << address << endl
        //     << "gender : " << gender << endl
        //     << "Mobile Number : " << contact << endl
        //     << "gender : " << gender << endl
        //     << "Blood Group : " << blood_group << endl
        //     << "age : " << age << endl;
    }

    void opd_ward_input()
    {
        int length;
        ifstream filestr;

        filestr.open("OPD_Ward_1.txt", ios::binary); // open your file
        filestr.seekg(0, ios::end);                  // put the "cursor" at the end of the file
        length = filestr.tellg();                    // find the position of the cursor
        filestr.close();                             // close your file

        if (length == 0)
        {
            // Store Date in file
            cout << "OPD Ward 1 is allocated to " << first_name;
            ofstream out("OPD_Ward_1.txt"); // Write operation
            out << "name : " << first_name << " " << middle_name << " " << last_name
                << endl
                << "Address : " << address << endl
                << "gender : " << gender << endl
                << "Mobile Number : " << contact << endl
                << "gender : " << gender << endl
                << "Blood Group : " << blood_group << endl
                << "age : " << age << endl;
        }
        else
        {
            // cout << "This File is OPD_Ward_1.txt not empty!" << endl;
            int length;
            ifstream filestr;

            filestr.open("OPD_Ward_2.txt", ios::binary); // open your file
            filestr.seekg(0, ios::end);                  // put the "cursor" at the end of the file
            length = filestr.tellg();                    // find the position of the cursor
            filestr.close();                             // close your file

            if (length == 0)
            {
                // Store Date in file
                cout << "OPD Ward 2 is allocated to " << first_name;
                ofstream out("OPD_Ward_2.txt"); // Write operation
                out << "name : " << first_name << " " << middle_name << " " << last_name
                    << endl
                    << "Address : " << address << endl
                    << "gender : " << gender << endl
                    << "Mobile Number : " << contact << endl
                    << "gender : " << gender << endl
                    << "Blood Group : " << blood_group << endl
                    << "age : " << age << endl;
            }
            else
            {
                // cout << "This File is OPD_Ward_2.txt not empty!" << endl;
                int length;
                ifstream filestr;

                filestr.open("OPD_Ward_3.txt", ios::binary); // open your file
                filestr.seekg(0, ios::end);                  // put the "cursor" at the end of the file
                length = filestr.tellg();                    // find the position of the cursor
                filestr.close();                             // close your file

                if (length == 0)
                {
                    // Store Date in file
                    cout << "OPD Ward 3 is allocated to " << first_name;
                    ofstream out("OPD_Ward_3.txt"); // Write operation
                    out << "name : " << first_name << " " << middle_name << " " << last_name
                        << endl
                        << "Address : " << address << endl
                        << "gender : " << gender << endl
                        << "Mobile Number : " << contact << endl
                        << "gender : " << gender << endl
                        << "Blood Group : " << blood_group << endl
                        << "age : " << age << endl;
                }
                else
                {
                    // cout << "This File is OPD_Ward_3.txt not empty!" << endl;
                    int length;
                    ifstream filestr;

                    filestr.open("OPD_Ward_4.txt", ios::binary); // open your file
                    filestr.seekg(0, ios::end);                  // put the "cursor" at the end of the file
                    length = filestr.tellg();                    // find the position of the cursor
                    filestr.close();                             // close your file

                    if (length == 0)
                    {
                        // Store Date in file
                        cout << "OPD Ward 4 is allocated to " << first_name;
                        ofstream out("OPD_Ward_4.txt"); // Write operation
                        out << "name : " << first_name << " " << middle_name << " " << last_name
                            << endl
                            << "Address : " << address << endl
                            << "gender : " << gender << endl
                            << "Mobile Number : " << contact << endl
                            << "gender : " << gender << endl
                            << "Blood Group : " << blood_group << endl
                            << "age : " << age << endl;
                    }
                    else
                    {
                        // cout << "This File is OPD_Ward_4.txt not empty!" << endl;
                        int length;
                        ifstream filestr;

                        filestr.open("OPD_Ward_5.txt", ios::binary); // open your file
                        filestr.seekg(0, ios::end);                  // put the "cursor" at the end of the file
                        length = filestr.tellg();                    // find the position of the cursor
                        filestr.close();                             // close your file

                        if (length == 0)
                        {
                            // Store Date in file
                            cout << "OPD Ward 5 is allocated to " << first_name;
                            ofstream out("OPD_Ward_5.txt"); // Write operation
                            out << "name : " << first_name << " " << middle_name << " " << last_name
                                << endl
                                << "Address : " << address << endl
                                << "gender : " << gender << endl
                                << "Mobile Number : " << contact << endl
                                << "gender : " << gender << endl
                                << "Blood Group : " << blood_group << endl
                                << "age : " << age << endl;
                        }
                        else
                        {
                            cout << "OPD Ward is Full!" << endl;
                        }
                    }
                }
            }
        }
    }

    void general_ward_input()
    {
        int length;
        ifstream filestr;

        filestr.open("general_Ward_1.txt", ios::binary); // open your file
        filestr.seekg(0, ios::end);                      // put the "cursor" at the end of the file
        length = filestr.tellg();                        // find the position of the cursor
        filestr.close();                                 // close your file

        if (length == 0)
        {
            // Store Date in file
            cout << "General Ward 1 is allocated to " << first_name;
            ofstream out("general_Ward_1.txt"); // Write operation
            out << "name : " << first_name << " " << middle_name << " " << last_name
                << endl
                << "Address : " << address << endl
                << "gender : " << gender << endl
                << "Mobile Number : " << contact << endl
                << "gender : " << gender << endl
                << "Blood Group : " << blood_group << endl
                << "age : " << age << endl;
        }
        else
        {
            // cout << "This File is general_Ward_1.txt not empty!" << endl;
            int length;
            ifstream filestr;

            filestr.open("general_Ward_2.txt", ios::binary); // open your file
            filestr.seekg(0, ios::end);                      // put the "cursor" at the end of the file
            length = filestr.tellg();                        // find the position of the cursor
            filestr.close();                                 // close your file

            if (length == 0)
            {
                // Store Date in file
                cout << "General Ward 1 is allocated to " << first_name;
                ofstream out("general_Ward_2.txt"); // Write operation
                out << "name : " << first_name << " " << middle_name << " " << last_name
                    << endl
                    << "Address : " << address << endl
                    << "gender : " << gender << endl
                    << "Mobile Number : " << contact << endl
                    << "gender : " << gender << endl
                    << "Blood Group : " << blood_group << endl
                    << "age : " << age << endl;
            }
            else
            {
                // cout << "This File is general_Ward_2.txt not empty!" << endl;
                int length;
                ifstream filestr;

                filestr.open("general_Ward_3.txt", ios::binary); // open your file
                filestr.seekg(0, ios::end);                      // put the "cursor" at the end of the file
                length = filestr.tellg();                        // find the position of the cursor
                filestr.close();                                 // close your file

                if (length == 0)
                {
                    // Store Date in file
                    cout << "General Ward 3 is allocated to " << first_name;
                    ofstream out("general_Ward_3.txt"); // Write operation
                    out << "name : " << first_name << " " << middle_name << " " << last_name
                        << endl
                        << "Address : " << address << endl
                        << "gender : " << gender << endl
                        << "Mobile Number : " << contact << endl
                        << "gender : " << gender << endl
                        << "Blood Group : " << blood_group << endl
                        << "age : " << age << endl;
                }
                else
                {
                    // cout << "This File is general_Ward_3.txt not empty!" << endl;
                    int length;
                    ifstream filestr;

                    filestr.open("general_Ward_4.txt", ios::binary); // open your file
                    filestr.seekg(0, ios::end);                      // put the "cursor" at the end of the file
                    length = filestr.tellg();                        // find the position of the cursor
                    filestr.close();                                 // close your file

                    if (length == 0)
                    {
                        // Store Date in file
                        cout << "General Ward 4 is allocated to " << first_name;
                        ofstream out("general_Ward_4.txt"); // Write operation
                        out << "name : " << first_name << " " << middle_name << " " << last_name
                            << endl
                            << "Address : " << address << endl
                            << "gender : " << gender << endl
                            << "Mobile Number : " << contact << endl
                            << "gender : " << gender << endl
                            << "Blood Group : " << blood_group << endl
                            << "age : " << age << endl;
                    }
                    else
                    {
                        // cout << "This File is general_Ward_4.txt not empty!" << endl;
                        int length;
                        ifstream filestr;

                        filestr.open("general_Ward_5.txt", ios::binary); // open your file
                        filestr.seekg(0, ios::end);                      // put the "cursor" at the end of the file
                        length = filestr.tellg();                        // find the position of the cursor
                        filestr.close();                                 // close your file

                        if (length == 0)
                        {
                            // Store Date in file
                            cout << "General Ward 5 is allocated to " << first_name;
                            ofstream out("general_Ward_5.txt"); // Write operation
                            out << "name : " << first_name << " " << middle_name << " " << last_name
                                << endl
                                << "Address : " << address << endl
                                << "gender : " << gender << endl
                                << "Mobile Number : " << contact << endl
                                << "gender : " << gender << endl
                                << "Blood Group : " << blood_group << endl
                                << "age : " << age << endl;
                        }
                        else
                        {
                            cout << "general Ward is Full!" << endl;
                        }
                    }
                }
            }
        }
    }

    void emergency_ward_input()
    {
        int length;
        ifstream filestr;

        filestr.open("Emergency_Ward_1.txt", ios::binary); // open your file
        filestr.seekg(0, ios::end);                        // put the "cursor" at the end of the file
        length = filestr.tellg();                          // find the position of the cursor
        filestr.close();                                   // close your file

        if (length == 0)
        {
            // Store Date in file
            cout << "Emergency Ward 1 is allocated to " << first_name;
            ofstream out("Emergency_Ward_1.txt"); // Write operation
            out << "name : " << first_name << " " << middle_name << " " << last_name
                << endl
                << "Address : " << address << endl
                << "gender : " << gender << endl
                << "Mobile Number : " << contact << endl
                << "gender : " << gender << endl
                << "Blood Group : " << blood_group << endl
                << "age : " << age << endl;
        }
        else
        {
            // cout << "This File is Emergency_Ward_1.txt not empty!" << endl;
            int length;
            ifstream filestr;

            filestr.open("Emergency_Ward_2.txt", ios::binary); // open your file
            filestr.seekg(0, ios::end);                        // put the "cursor" at the end of the file
            length = filestr.tellg();                          // find the position of the cursor
            filestr.close();                                   // close your file

            if (length == 0)
            {
                // Store Date in file
                cout << "Emergency Ward 2 is allocated to " << first_name;
                ofstream out("Emergency_Ward_2.txt"); // Write operation
                out << "name : " << first_name << " " << middle_name << " " << last_name
                    << endl
                    << "Address : " << address << endl
                    << "gender : " << gender << endl
                    << "Mobile Number : " << contact << endl
                    << "gender : " << gender << endl
                    << "Blood Group : " << blood_group << endl
                    << "age : " << age << endl;
            }
            else
            {
                // cout << "This File is Emergency_Ward_2.txt not empty!" << endl;
                int length;
                ifstream filestr;

                filestr.open("Emergency_Ward_3.txt", ios::binary); // open your file
                filestr.seekg(0, ios::end);                        // put the "cursor" at the end of the file
                length = filestr.tellg();                          // find the position of the cursor
                filestr.close();                                   // close your file

                if (length == 0)
                {
                    // Store Date in file
                    cout << "Emergency Ward 3 is allocated to " << first_name;
                    ofstream out("Emergency_Ward_3.txt"); // Write operation
                    out << "name : " << first_name << " " << middle_name << " " << last_name
                        << endl
                        << "Address : " << address << endl
                        << "gender : " << gender << endl
                        << "Mobile Number : " << contact << endl
                        << "gender : " << gender << endl
                        << "Blood Group : " << blood_group << endl
                        << "age : " << age << endl;
                }
                else
                {
                    // cout << "This File is Emergency_Ward_3.txt not empty!" << endl;
                    int length;
                    ifstream filestr;

                    filestr.open("Emergency_Ward_4.txt", ios::binary); // open your file
                    filestr.seekg(0, ios::end);                        // put the "cursor" at the end of the file
                    length = filestr.tellg();                          // find the position of the cursor
                    filestr.close();                                   // close your file

                    if (length == 0)
                    {
                        // Store Date in file
                        cout << "Emergency Ward 4 is allocated to " << first_name;
                        ofstream out("Emergency_Ward_4.txt"); // Write operation
                        out << "name : " << first_name << " " << middle_name << " " << last_name
                            << endl
                            << "Address : " << address << endl
                            << "gender : " << gender << endl
                            << "Mobile Number : " << contact << endl
                            << "gender : " << gender << endl
                            << "Blood Group : " << blood_group << endl
                            << "age : " << age << endl;
                    }
                    else
                    {
                        // cout << "This File is Emergency_Ward_4.txt not empty!" << endl;
                        int length;
                        ifstream filestr;

                        filestr.open("Emergency_Ward_5.txt", ios::binary); // open your file
                        filestr.seekg(0, ios::end);                        // put the "cursor" at the end of the file
                        length = filestr.tellg();                          // find the position of the cursor
                        filestr.close();                                   // close your file

                        if (length == 0)
                        {
                            // Store Date in file
                            cout << "Emergency Ward 5 is allocated to " << first_name;
                            ofstream out("Emergency_Ward_5.txt"); // Write operation
                            out << "name : " << first_name << " " << middle_name << " " << last_name
                                << endl
                                << "Address : " << address << endl
                                << "gender : " << gender << endl
                                << "Mobile Number : " << contact << endl
                                << "gender : " << gender << endl
                                << "Blood Group : " << blood_group << endl
                                << "age : " << age << endl;
                        }
                        else
                        {
                            cout << "Emergency Ward is Full!" << endl;
                        }
                    }
                }
            }
        }
    }

    void icu_ward_input()
    {
        int length;
        ifstream filestr;

        filestr.open("ICU_Ward_1.txt", ios::binary); // open your file
        filestr.seekg(0, ios::end);                  // put the "cursor" at the end of the file
        length = filestr.tellg();                    // find the position of the cursor
        filestr.close();                             // close your file

        if (length == 0)
        {
            // Store Date in file
            cout<<"ICU Ward 1 is allocated to "<<first_name;
            ofstream out("ICU_Ward_1.txt"); // Write operation
            out << "name : " << first_name << " " << middle_name << " " << last_name
                << endl
                << "Address : " << address << endl
                << "gender : " << gender << endl
                << "Mobile Number : " << contact << endl
                << "gender : " << gender << endl
                << "Blood Group : " << blood_group << endl
                << "age : " << age << endl;
        }
        else
        {
            // cout << "This File is ICU_Ward_1.txt not empty!" << endl;
            int length;
            ifstream filestr;

            filestr.open("ICU_Ward_2.txt", ios::binary); // open your file
            filestr.seekg(0, ios::end);                  // put the "cursor" at the end of the file
            length = filestr.tellg();                    // find the position of the cursor
            filestr.close();                             // close your file

            if (length == 0)
            {
                // Store Date in file
                cout<<"ICU Ward 2 is allocated to "<<first_name;
                ofstream out("ICU_Ward_2.txt"); // Write operation
                out << "name : " << first_name << " " << middle_name << " " << last_name
                    << endl
                    << "Address : " << address << endl
                    << "gender : " << gender << endl
                    << "Mobile Number : " << contact << endl
                    << "gender : " << gender << endl
                    << "Blood Group : " << blood_group << endl
                    << "age : " << age << endl;
            }
            else
            {
                // cout << "This File is ICU_Ward_2.txt not empty!" << endl;
                int length;
                ifstream filestr;

                filestr.open("ICU_Ward_3.txt", ios::binary); // open your file
                filestr.seekg(0, ios::end);                  // put the "cursor" at the end of the file
                length = filestr.tellg();                    // find the position of the cursor
                filestr.close();                             // close your file

                if (length == 0)
                {
                    // Store Date in file
                    cout<<"ICU Ward 3 is allocated to "<<first_name;
                    ofstream out("ICU_Ward_3.txt"); // Write operation
                    out << "name : " << first_name << " " << middle_name << " " << last_name
                        << endl
                        << "Address : " << address << endl
                        << "gender : " << gender << endl
                        << "Mobile Number : " << contact << endl
                        << "gender : " << gender << endl
                        << "Blood Group : " << blood_group << endl
                        << "age : " << age << endl;
                }
                else
                {
                    // cout << "This File is ICU_Ward_3.txt not empty!" << endl;
                    int length;
                    ifstream filestr;

                    filestr.open("ICU_Ward_4.txt", ios::binary); // open your file
                    filestr.seekg(0, ios::end);                  // put the "cursor" at the end of the file
                    length = filestr.tellg();                    // find the position of the cursor
                    filestr.close();                             // close your file

                    if (length == 0)
                    {
                        // Store Date in file
                        cout<<"ICU Ward 4 is allocated to "<<first_name;
                        ofstream out("ICU_Ward_4.txt"); // Write operation
                        out << "name : " << first_name << " " << middle_name << " " << last_name
                            << endl
                            << "Address : " << address << endl
                            << "gender : " << gender << endl
                            << "Mobile Number : " << contact << endl
                            << "gender : " << gender << endl
                            << "Blood Group : " << blood_group << endl
                            << "age : " << age << endl;
                    }
                    else
                    {
                        // cout << "This File is ICU_Ward_4.txt not empty!" << endl;
                        int length;
                        ifstream filestr;

                        filestr.open("ICU_Ward_5.txt", ios::binary); // open your file
                        filestr.seekg(0, ios::end);                  // put the "cursor" at the end of the file
                        length = filestr.tellg();                    // find the position of the cursor
                        filestr.close();                             // close your file

                        if (length == 0)
                        {
                            // Store Date in file
                            cout<<"ICU Ward 5 is allocated to "<<first_name;
                            ofstream out("ICU_Ward_5.txt"); // Write operation
                            out << "name : " << first_name << " " << middle_name << " " << last_name
                                << endl
                                << "Address : " << address << endl
                                << "gender : " << gender << endl
                                << "Mobile Number : " << contact << endl
                                << "gender : " << gender << endl
                                << "Blood Group : " << blood_group << endl
                                << "age : " << age << endl;
                        }
                        else
                        {
                            cout << "ICU Ward is Full!" << endl;
                        }
                    }
                }
            }
        }
    }

    void morgue_ward_input()
    {
        int length;
        ifstream filestr;

        filestr.open("Morgue_Ward_1.txt", ios::binary); // open your file
        filestr.seekg(0, ios::end);                     // put the "cursor" at the end of the file
        length = filestr.tellg();                       // find the position of the cursor
        filestr.close();                                // close your file

        if (length == 0)
        {
            // Store Date in file
            cout<<"Morgue Ward 1 is allocated to "<<first_name;
            ofstream out("Morgue_Ward_1.txt"); // Write operation
            out << "name : " << first_name << " " << middle_name << " " << last_name
                << endl
                << "Address : " << address << endl
                << "gender : " << gender << endl
                << "Mobile Number : " << contact << endl
                << "gender : " << gender << endl
                << "Blood Group : " << blood_group << endl
                << "age : " << age << endl;
        }
        else
        {
            // cout << "This File is Morgue_Ward_1.txt not empty!" << endl;
            int length;
            ifstream filestr;

            filestr.open("Morgue_Ward_2.txt", ios::binary); // open your file
            filestr.seekg(0, ios::end);                     // put the "cursor" at the end of the file
            length = filestr.tellg();                       // find the position of the cursor
            filestr.close();                                // close your file

            if (length == 0)
            {
                // Store Date in file
                cout<<"Morgue Ward 2 is allocated to "<<first_name;
                ofstream out("Morgue_Ward_2.txt"); // Write operation
                out << "name : " << first_name << " " << middle_name << " " << last_name
                    << endl
                    << "Address : " << address << endl
                    << "gender : " << gender << endl
                    << "Mobile Number : " << contact << endl
                    << "gender : " << gender << endl
                    << "Blood Group : " << blood_group << endl
                    << "age : " << age << endl;
            }
            else
            {
                // cout << "This File is Morgue_Ward_2.txt not empty!" << endl;
                int length;
                ifstream filestr;

                filestr.open("Morgue_Ward_3.txt", ios::binary); // open your file
                filestr.seekg(0, ios::end);                     // put the "cursor" at the end of the file
                length = filestr.tellg();                       // find the position of the cursor
                filestr.close();                                // close your file

                if (length == 0)
                {
                    // Store Date in file
                    cout<<"Morgue Ward 3 is allocated to "<<first_name;
                    ofstream out("Morgue_Ward_3.txt"); // Write operation
                    out << "name : " << first_name << " " << middle_name << " " << last_name
                        << endl
                        << "Address : " << address << endl
                        << "gender : " << gender << endl
                        << "Mobile Number : " << contact << endl
                        << "gender : " << gender << endl
                        << "Blood Group : " << blood_group << endl
                        << "age : " << age << endl;
                }
                else
                {
                    // cout << "This File is Morgue_Ward_3.txt not empty!" << endl;
                    int length;
                    ifstream filestr;

                    filestr.open("Morgue_Ward_4.txt", ios::binary); // open your file
                    filestr.seekg(0, ios::end);                     // put the "cursor" at the end of the file
                    length = filestr.tellg();                       // find the position of the cursor
                    filestr.close();                                // close your file

                    if (length == 0)
                    {
                        // Store Date in file
                        cout<<"Morgue Ward 4 is allocated to "<<first_name;
                        ofstream out("Morgue_Ward_4.txt"); // Write operation
                        out << "name : " << first_name << " " << middle_name << " " << last_name
                            << endl
                            << "Address : " << address << endl
                            << "gender : " << gender << endl
                            << "Mobile Number : " << contact << endl
                            << "gender : " << gender << endl
                            << "Blood Group : " << blood_group << endl
                            << "age : " << age << endl;
                    }
                    else
                    {
                        // cout << "This File is Morgue_Ward_4.txt not empty!" << endl;
                        int length;
                        ifstream filestr;

                        filestr.open("Morgue_Ward_5.txt", ios::binary); // open your file
                        filestr.seekg(0, ios::end);                     // put the "cursor" at the end of the file
                        length = filestr.tellg();                       // find the position of the cursor
                        filestr.close();                                // close your file

                        if (length == 0)
                        {
                            // Store Date in file
                            cout<<"Morgue Ward 5 is allocated to "<<first_name;
                            ofstream out("Morgue_Ward_5.txt"); // Write operation
                            out << "name : " << first_name << " " << middle_name << " " << last_name
                                << endl
                                << "Address : " << address << endl
                                << "gender : " << gender << endl
                                << "Mobile Number : " << contact << endl
                                << "gender : " << gender << endl
                                << "Blood Group : " << blood_group << endl
                                << "age : " << age << endl;
                        }
                        else
                        {
                            cout << "Morgue Ward is Full!" << endl;
                        }
                    }
                }
            }
        }
    }
    // void print_patient_info()
    // {
    //     ifstream file;
    //     file.open("patient_info.txt");
    //     if (!file)
    //     {
    //         cout << "\nError while opening the file\n" /*;goto b*/;
    //     }
    //     else
    //     {
    //         cout << "\n\n\n\n\n\n\n\t\t\t\t\t   ...........................Information of the patient .............................\n\n";
    //         string line;
    //         while (file.good())
    //         {
    //             getline(file, line);
    //             cout << line << "\n";
    //         }
    //         cout << "\n\n\t\t";
    //         system("pause");

    //         system("cls");
    //         //  goto b;
    //     }
    // }
};

class Doctor_allocation : public patient_info_
{
public:
    void Select_doctor()
    {
        int condition;

        cout << "\t ********" << endl;
        cout << "\t   DOCTORS ALLOCATION" << endl;
        cout << "\t ********" << endl;

        cout << endl
             << "1. Normal Patients";
        cout << endl
             << "2. Critical Patients";
        cout << endl
             << "3. Skin disease Patients";
        cout << endl
             << "4. Heart disease Patients";

        cout << endl
             << endl
             << "Enter condition=";
        cin >> condition;

        switch (condition)
        {
        case 1:
            cout << "Dr.Nogja" << endl;
            cout << "Timing:10AM-6PM" << endl;
            cout << "Degree:MBBS,MD,MS";
            break;

        case 2:
            cout << "Dr.MorlaWar (#Topper)" << endl;
            cout << "Timing:11AM-3PM" << endl;
            cout << "Degree:MD";
            break;

        case 3:
            cout << "Dr.Korke" << endl;
            cout << "Timing:09AM-2PM" << endl;
            cout << "Degree:MBBS,MD,Dermatologist";
            break;

        case 4:
            cout << "Dr.Kale" << endl;
            cout << "Timing:10AM-4PM" << endl;
            cout << "Degree:MBBS,MD";
            break;

        default:
        {
            cout << "Press any key to continue....";
        }
        }
    }
};

class billing : public Doctor_allocation
{
public:
    int ward_exp, treatment_charge, total_bill = 0, reg_fee;

    void bill()
    {
        cout << endl
             << "\t________";
        cout << endl
             << endl
             << "\t\tBILLING ";
        cout << endl
             << "\t________";

        cout << endl
             << endl
             << "Registration fees:";
        cin >> reg_fee;

        cout << "Treatment charges :";
        cin >> treatment_charge;

        cout << "Ward charges :";
        cin >> ward_exp;
    }

    void calculate_bill()
    {
        total_bill = reg_fee + ward_exp + treatment_charge;

        cout << endl
             << "Total bill :" << total_bill << " rs";
    }
};

class staff_info
{
private :
long int password=1234567890;
public :
int choose;
char enter ;

void enter_password()
{
cout<<"\n\nEnter password : ";
cin>>password;

if(password==1234567890)
{
cout<<"\n\n1.Doctors";
cout<<"\n2.Surgeon";
cout<<"\n3.Dentist";
cout<<"\n4.Pharmacist";
cout<<"\n5.Nurses";

cout<<"\n\nEnter your choice:";
cin>>choose;

switch(choose)
{
case 1:
cout<<"\n\nDoctors :"<<endl;
cout<<"\nDr.V.A.Nogja \t\tMBBS,MD,MS \t\tMale \t\t\t 40";
cout<<"\nDr.S.S.Morlawar \t\tMD  \t\tFemale \t\t 48";
cout<<"\nDr.P.B.Korke \t\tMBBS,MD, Dermatologist \t\tFemale \t\t 42";
cout<<"\nDr.K.D.Kale \t\tMBBS,MD \t\tFemale \t\t 45";
cout<<"\nDr.A.T.Pandhre \t\tMS \t\tMale \t\t 38";
cout<<"\nDr.P.Miniyar \t\tMBBS,MD \t\tMale \t\t 36\n";
            system("pause");
            system("cls");
break;

case 2:
cout<<"\n\nSurgeon :"<<endl;
cout<<"\nDr.L.Panchal \t\tMBBS \t\tMale \t\t 40";
cout<<"\nDr.T.Shaikh \t\tMBBS  \t\tMale \t\t 48";
cout<<"\nDr.G.M.Patil \t\tMBBS  \t\tMale \t\t 42";
cout<<"\nDr.P.Maske \t\tMBBS \t\tMale \t\t 45";
cout<<"\nDr.R.Mohite\t\tMBBS \t\tFemale \t\t 38\n";
            system("pause");
            system("cls");
break;

case 3 :
cout<<"\n\nDentist :"<<endl;
cout<<"\nDr.A.Chavan \t\tBDS \t\tMale \t\t 40";
cout<<"\nDr.S.Rankhamb \t\tBDS  \t\tFemale \t\t 32\n";
            system("pause");
            system("cls");
break;

case 4:
cout<<"\n\nPharmacist:"<<endl;
cout<<"\nDr.P.Naruka \t\tPharm D  \t\tFemale \t\t 28";
cout<<"\nDr.S.Shinde \t\tPharm D  \t\tFemale \t\t 32\n";
            system("pause");
            system("cls");
break;

case 5:
cout<<"\n\nNurses : ";
cout<<"\nM.Jain \t\tPN \t\tFemale \t\t24";
cout<<"\nS.Sonavane \t\tASN \t\tFemale \t\t25";
cout<<"\nS.Tapdiya \t\tBSN \t\tMale \t\t23";
cout<<"\nN.Jadhav \t\tMSN \t\tMale \t\t23\n";
            system("pause");
            system("cls");
break;

default:
cout<<"\nEnter correct choice please !";
break;
}
}
else
{
cout<<"\nEnter correct password please!";
}
}
};

void print_data(){
    string search;
    int offset;
    string line;
    cout << "Enter the Patient name for getting his/her information : ";
    cin >> search;
    int out = 0;

    ifstream Myfile;
    Myfile.open("OPD_Ward_1.txt");
    while (!Myfile.eof())
    {
        getline(Myfile, line);
        if ((offset = line.find(search, 0)) != string::npos)
        {
            // cout << "The word has been found " << search << endl;
            out = 1;
        }
    }
    Myfile.close();
    if (out == 1)
    {
        ifstream fin("OPD_Ward_1.txt");
        char c;
        while (!fin.eof())
        {
            fin.get(c);
            cout << c;
        }
        fin.close();
    }
    else
    {
        ifstream Myfile;
        Myfile.open("OPD_Ward_2.txt");
        while (!Myfile.eof())
        {
            getline(Myfile, line);
            if ((offset = line.find(search, 0)) != string::npos)
            {
                // cout << "The word has been found " << search << endl;
                out = 1;
            }
        }
        Myfile.close();
        if (out == 1)
        {
            ifstream fin("OPD_Ward_2.txt");
            char c;
            while (!fin.eof())
            {
                fin.get(c);
                cout << c;
            }
            fin.close();
        }
        else
        {
            ifstream Myfile;
            Myfile.open("OPD_Ward_3.txt");
            while (!Myfile.eof())
            {
                getline(Myfile, line);
                if ((offset = line.find(search, 0)) != string::npos)
                {
                    // cout << "The word has been found " << search << endl;
                    out = 1;
                }
            }
            Myfile.close();
            if (out == 1)
            {
                ifstream fin("OPD_Ward_3.txt");
                char c;
                while (!fin.eof())
                {
                    fin.get(c);
                    cout << c;
                }
                fin.close();
            }
            else
            {
                ifstream Myfile;
                Myfile.open("OPD_Ward_4.txt");
                while (!Myfile.eof())
                {
                    getline(Myfile, line);
                    if ((offset = line.find(search, 0)) != string::npos)
                    {
                        // cout << "The word has been found " << search << endl;
                        out = 1;
                    }
                } 
                Myfile.close();
                if (out == 1)
                {
                    ifstream fin("OPD_Ward_4.txt");
                    char c;
                    while (!fin.eof())
                    {
                        fin.get(c);
                        cout << c;
                    }
                    fin.close();
                }
                else
                {
                    ifstream Myfile;
                    Myfile.open("OPD_Ward_5.txt");
                    while (!Myfile.eof())
                    {
                        getline(Myfile, line);
                        if ((offset = line.find(search, 0)) != string::npos)
                        {
                            // cout << "The word has been found " << search << endl;
                            out = 1;
                        }
                    }
                    Myfile.close();
                    if (out == 1)
                    {
                        ifstream fin("OPD_Ward_5.txt");
                        char c;
                        while (!fin.eof())
                        {
                            fin.get(c);
                            cout << c;
                        }
                        fin.close();
                    }
                    else
                    {
                        ifstream Myfile;
                        Myfile.open("Emergency_Ward_1.txt");
                        while (!Myfile.eof())
                        {
                            getline(Myfile, line);
                            if ((offset = line.find(search, 0)) != string::npos)
                            {
                                // cout << "The word has been found " << search << endl;
                                out = 1;
                            }
                        }
                        Myfile.close();
                        if (out == 1)
                        {
                            ifstream fin("Emergency_Ward_1.txt");
                            char c;
                            while (!fin.eof())
                            {
                                fin.get(c);
                                cout << c;
                            }
                            fin.close();
                        }
                        else
                        {
                            ifstream Myfile;
                            Myfile.open("Emergency_Ward_2.txt");
                            while (!Myfile.eof())
                            {
                                getline(Myfile, line);
                                if ((offset = line.find(search, 0)) != string::npos)
                                {
                                    // cout << "The word has been found " << search << endl;
                                    out = 1;
                                }
                            }
                            Myfile.close();
                            if (out == 1)
                            {
                                ifstream fin("Emergency_Ward_2.txt");
                                char c;
                                while (!fin.eof())
                                {
                                    fin.get(c);
                                    cout << c;
                                }
                                fin.close();
                            }
                            else
                            {
                                ifstream Myfile;
                                Myfile.open("Emergency_Ward_3.txt");
                                while (!Myfile.eof())
                                {
                                    getline(Myfile, line);
                                    if ((offset = line.find(search, 0)) != string::npos)
                                    {
                                        // cout << "The word has been found " << search << endl;
                                        out = 1;
                                    }
                                }
                                Myfile.close();
                                if (out == 1)
                                {
                                    ifstream fin("Emergency_Ward_3.txt");
                                    char c;
                                    while (!fin.eof())
                                    {
                                        fin.get(c);
                                        cout << c;
                                    }
                                    fin.close();
                                }
                                else
                                {
                                    ifstream Myfile;
                                    Myfile.open("Emergency_Ward_4.txt");
                                    while (!Myfile.eof())
                                    {
                                        getline(Myfile, line);
                                        if ((offset = line.find(search, 0)) != string::npos)
                                        {
                                            // cout << "The word has been found " << search << endl;
                                            out = 1;
                                        }
                                    }
                                    Myfile.close();
                                    if (out == 1)
                                    {
                                        ifstream fin("Emergency_Ward_4.txt");
                                        char c;
                                        while (!fin.eof())
                                        {
                                            fin.get(c);
                                            cout << c;
                                        }
                                        fin.close();
                                    }
                                    else
                                    {
                                        ifstream Myfile;
                                        Myfile.open("Emergency_Ward_5.txt");
                                        while (!Myfile.eof())
                                        {
                                            getline(Myfile, line);
                                            if ((offset = line.find(search, 0)) != string::npos)
                                            {
                                                // cout << "The word has been found " << search << endl;
                                                out = 1;
                                            }
                                        }
                                        Myfile.close();
                                        if (out == 1)
                                        {
                                            ifstream fin("Emergency_Ward_4.txt");
                                            char c;
                                            while (!fin.eof())
                                            {
                                                fin.get(c);
                                                cout << c;
                                            }
                                            fin.close();
                                        }
                                        else
                                        {
                                            ifstream Myfile;
                                            Myfile.open("general_Ward_1.txt");
                                            while (!Myfile.eof())
                                            {
                                                getline(Myfile, line);
                                                if ((offset = line.find(search, 0)) != string::npos)
                                                {
                                                    // cout << "The word has been found " << search << endl;
                                                    out = 1;
                                                }
                                            }
                                            Myfile.close();
                                            if (out == 1)
                                            {
                                                ifstream fin("general_Ward_1.txt");
                                                char c;
                                                while (!fin.eof())
                                                {
                                                    fin.get(c);
                                                    cout << c;
                                                }
                                                fin.close();
                                            }
                                            else
                                            {
                                                Myfile.open("general_Ward_2.txt");
                                                while (!Myfile.eof())
                                                {
                                                    getline(Myfile, line);
                                                    if ((offset = line.find(search, 0)) != string::npos)
                                                    {
                                                        // cout << "The word has been found " << search << endl;
                                                        out = 1;
                                                    }
                                                }
                                                Myfile.close();
                                                if (out == 1)
                                                {
                                                    ifstream fin("general_Ward_2.txt");
                                                    char c;
                                                    while (!fin.eof())
                                                    {
                                                        fin.get(c);
                                                        cout << c;
                                                    }
                                                    fin.close();
                                                }
                                                else
                                                {
                                                    Myfile.open("general_Ward_3.txt");
                                                    while (!Myfile.eof())
                                                    {
                                                        getline(Myfile, line);
                                                        if ((offset = line.find(search, 0)) != string::npos)
                                                        {
                                                            // cout << "The word has been found " << search << endl;
                                                            out = 1;
                                                        }
                                                    }
                                                    Myfile.close();
                                                    if (out == 1)
                                                    {
                                                        ifstream fin("general_Ward_3.txt");
                                                        char c;
                                                        while (!fin.eof())
                                                        {
                                                            fin.get(c);
                                                            cout << c;
                                                        }
                                                        fin.close();
                                                    }
                                                    else
                                                    {
                                                        Myfile.open("general_Ward_4.txt");
                                                        while (!Myfile.eof())
                                                        {
                                                            getline(Myfile, line);
                                                            if ((offset = line.find(search, 0)) != string::npos)
                                                            {
                                                                // cout << "The word has been found " << search << endl;
                                                                out = 1;
                                                            }
                                                        }
                                                        Myfile.close();
                                                        if (out == 1)
                                                        {
                                                            ifstream fin("general_Ward_4.txt");
                                                            char c;
                                                            while (!fin.eof())
                                                            {
                                                                fin.get(c);
                                                                cout << c;
                                                            }
                                                            fin.close();
                                                        }
                                                        else
                                                        {
                                                            Myfile.open("general_Ward_5.txt");
                                                            while (!Myfile.eof())
                                                            {
                                                                getline(Myfile, line);
                                                                if ((offset = line.find(search, 0)) != string::npos)
                                                                {
                                                                    // cout << "The word has been found " << search << endl;
                                                                    out = 1;
                                                                }
                                                            }
                                                            Myfile.close();
                                                            if (out == 1)
                                                            {
                                                                ifstream fin("general_Ward_5.txt");
                                                                char c;
                                                                while (!fin.eof())
                                                                {
                                                                    fin.get(c);
                                                                    cout << c;
                                                                }
                                                                fin.close();
                                                            }
                                                            else
                                                            {
                                                                Myfile.open("ICU_Ward_1.txt");
                                                                while (!Myfile.eof())
                                                                {
                                                                    getline(Myfile, line);
                                                                    if ((offset = line.find(search, 0)) != string::npos)
                                                                    {
                                                                        // cout << "The word has been found " << search << endl;
                                                                        out = 1;
                                                                    }
                                                                }
                                                                Myfile.close();
                                                                if (out == 1)
                                                                {
                                                                    ifstream fin("ICU_Ward_1.txt");
                                                                    char c;
                                                                    while (!fin.eof())
                                                                    {
                                                                        fin.get(c);
                                                                        cout << c;
                                                                    }
                                                                    fin.close();
                                                                }
                                                                else
                                                                {
                                                                    Myfile.open("ICU_Ward_2.txt");
                                                                    while (!Myfile.eof())
                                                                    {
                                                                        getline(Myfile, line);
                                                                        if ((offset = line.find(search, 0)) != string::npos)
                                                                        {
                                                                            // cout << "The word has been found " << search << endl;
                                                                            out = 1;
                                                                        }
                                                                    }
                                                                    Myfile.close();
                                                                    if (out == 1)
                                                                    {
                                                                        ifstream fin("ICU_Ward_2.txt");
                                                                        char c;
                                                                        while (!fin.eof())
                                                                        {
                                                                            fin.get(c);
                                                                            cout << c;
                                                                        }
                                                                        fin.close();
                                                                    }
                                                                    else
                                                                    {
                                                                        Myfile.open("ICU_Ward_3.txt");
                                                                        while (!Myfile.eof())
                                                                        {
                                                                            getline(Myfile, line);
                                                                            if ((offset = line.find(search, 0)) != string::npos)
                                                                            {
                                                                                // cout << "The word has been found " << search << endl;
                                                                                out = 1;
                                                                            }
                                                                        }
                                                                        Myfile.close();
                                                                        if (out == 1)
                                                                        {
                                                                            ifstream fin("ICU_Ward_3.txt");
                                                                            char c;
                                                                            while (!fin.eof())
                                                                            {
                                                                                fin.get(c);
                                                                                cout << c;
                                                                            }
                                                                            fin.close();
                                                                        }
                                                                        else
                                                                        {
                                                                            Myfile.open("ICU_Ward_4.txt");
                                                                            while (!Myfile.eof())
                                                                            {
                                                                                getline(Myfile, line);
                                                                                if ((offset = line.find(search, 0)) != string::npos)
                                                                                {
                                                                                    // cout << "The word has been found " << search << endl;
                                                                                    out = 1;
                                                                                }
                                                                            }
                                                                            Myfile.close();
                                                                            if (out == 1)
                                                                            {
                                                                                ifstream fin("ICU_Ward_4.txt");
                                                                                char c;
                                                                                while (!fin.eof())
                                                                                {
                                                                                    fin.get(c);
                                                                                    cout << c;
                                                                                }
                                                                                fin.close();
                                                                            }
                                                                            else
                                                                            {
                                                                                Myfile.open("ICU_Ward_5.txt");
                                                                                while (!Myfile.eof())
                                                                                {
                                                                                    getline(Myfile, line);
                                                                                    if ((offset = line.find(search, 0)) != string::npos)
                                                                                    {
                                                                                        // cout << "The word has been found " << search << endl;
                                                                                        out = 1;
                                                                                    }
                                                                                }
                                                                                Myfile.close();
                                                                                if (out == 1)
                                                                                {
                                                                                    ifstream fin("ICU_Ward_5.txt");
                                                                                    char c;
                                                                                    while (!fin.eof())
                                                                                    {
                                                                                        fin.get(c);
                                                                                        cout << c;
                                                                                    }
                                                                                    fin.close();
                                                                                }
                                                                                else
                                                                                {
                                                                                    Myfile.open("Morgue_Ward_1.txt");
                                                                                    while (!Myfile.eof())
                                                                                    {
                                                                                        getline(Myfile, line);
                                                                                        if ((offset = line.find(search, 0)) != string::npos)
                                                                                        {
                                                                                            // cout << "The word has been found " << search << endl;
                                                                                            out = 1;
                                                                                        }
                                                                                    }
                                                                                    Myfile.close();
                                                                                    if (out == 1)
                                                                                    {
                                                                                        ifstream fin("Morgue_Ward_1.txt");
                                                                                        char c;
                                                                                        while (!fin.eof())
                                                                                        {
                                                                                            fin.get(c);
                                                                                            cout << c;
                                                                                        }
                                                                                        fin.close();
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        Myfile.open("Morgue_Ward_2.txt");
                                                                                        while (!Myfile.eof())
                                                                                        {
                                                                                            getline(Myfile, line);
                                                                                            if ((offset = line.find(search, 0)) != string::npos)
                                                                                            {
                                                                                                // cout << "The word has been found " << search << endl;
                                                                                                out = 1;
                                                                                            }
                                                                                        }
                                                                                        Myfile.close();
                                                                                        if (out == 1)
                                                                                        {
                                                                                            ifstream fin("Morgue_Ward_2.txt");
                                                                                            char c;
                                                                                            while (!fin.eof())
                                                                                            {
                                                                                                fin.get(c);
                                                                                                cout << c;
                                                                                            }
                                                                                            fin.close();
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                            Myfile.open("Morgue_Ward_3.txt");
                                                                                            while (!Myfile.eof())
                                                                                            {
                                                                                                getline(Myfile, line);
                                                                                                if ((offset = line.find(search, 0)) != string::npos)
                                                                                                {
                                                                                                    // cout << "The word has been found " << search << endl;
                                                                                                    out = 1;
                                                                                                }
                                                                                            }
                                                                                            Myfile.close();
                                                                                            if (out == 1)
                                                                                            {
                                                                                                ifstream fin("Morgue_Ward_3.txt");
                                                                                                char c;
                                                                                                while (!fin.eof())
                                                                                                {
                                                                                                    fin.get(c);
                                                                                                    cout << c;
                                                                                                }
                                                                                                fin.close();
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                                Myfile.open("Morgue_Ward_4.txt");
                                                                                                while (!Myfile.eof())
                                                                                                {
                                                                                                    getline(Myfile, line);
                                                                                                    if ((offset = line.find(search, 0)) != string::npos)
                                                                                                    {
                                                                                                        // cout << "The word has been found " << search << endl;
                                                                                                        out = 1;
                                                                                                    }
                                                                                                }
                                                                                                Myfile.close();
                                                                                                if (out == 1)
                                                                                                {
                                                                                                    ifstream fin("Morgue_Ward_4.txt");
                                                                                                    char c;
                                                                                                    while (!fin.eof())
                                                                                                    {
                                                                                                        fin.get(c);
                                                                                                        cout << c;
                                                                                                    }
                                                                                                    fin.close();
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                    Myfile.open("Morgue_Ward_5.txt");
                                                                                                    while (!Myfile.eof())
                                                                                                    {
                                                                                                        getline(Myfile, line);
                                                                                                        if ((offset = line.find(search, 0)) != string::npos)
                                                                                                        {
                                                                                                            // cout << "The word has been found " << search << endl;
                                                                                                            out = 1;
                                                                                                        }
                                                                                                    }
                                                                                                    Myfile.close();
                                                                                                    if (out == 1)
                                                                                                    {
                                                                                                        ifstream fin("Morgue_Ward_5.txt");
                                                                                                        char c;
                                                                                                        while (!fin.eof())
                                                                                                        {
                                                                                                            fin.get(c);
                                                                                                            cout << c;
                                                                                                        }
                                                                                                        fin.close();
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void discharge(){
    string search;
    int offset;
    string line;
    cout << "Enter the Patient name for Discharge : ";
    cin >> search;
    int out = 0;

    ifstream Myfile;
    Myfile.open("OPD_Ward_1.txt");
    while (!Myfile.eof())
    {
        getline(Myfile, line);
        if ((offset = line.find(search, 0)) != string::npos)
        {
            out = 1;
        }
    }
    Myfile.close();
    if (out == 1)
    {
        ofstream file("OPD_Ward_1.txt");
        file << "";
        void close();
    }
    else
    {
        ifstream Myfile;
        Myfile.open("OPD_Ward_2.txt");
        while (!Myfile.eof())
        {
            getline(Myfile, line);
            if ((offset = line.find(search, 0)) != string::npos)
            {
                // cout << "The word has been found " << search << endl;
                out = 1;
            }
        }
        Myfile.close();
        if (out == 1)
        {
            ofstream file("OPD_Ward_2.txt");
            file << "";
            void close();
        }
        else
        {
            ifstream Myfile;
            Myfile.open("OPD_Ward_3.txt");
            while (!Myfile.eof())
            {
                getline(Myfile, line);
                if ((offset = line.find(search, 0)) != string::npos)
                {
                    // cout << "The word has been found " << search << endl;
                    out = 1;
                }
            }
            Myfile.close();
            if (out == 1)
            {
                ofstream file("OPD_Ward_3.txt");
                file << "";
                void close();
            }
            else
            {
                ifstream Myfile;
                Myfile.open("OPD_Ward_4.txt");
                while (!Myfile.eof())
                {
                    getline(Myfile, line);
                    if ((offset = line.find(search, 0)) != string::npos)
                    {
                        // cout << "The word has been found " << search << endl;
                        out = 1;
                    }
                }
                Myfile.close();
                if (out == 1)
                {
                    ofstream file("OPD_Ward_4.txt");
                    file << "";
                    void close();
                }
                else
                {
                    ifstream Myfile;
                    Myfile.open("OPD_Ward_5.txt");
                    while (!Myfile.eof())
                    {
                        getline(Myfile, line);
                        if ((offset = line.find(search, 0)) != string::npos)
                        {
                            // cout << "The word has been found " << search << endl;
                            out = 1;
                        }
                    }
                    Myfile.close();
                    if (out == 1)
                    {
                        ofstream file("OPD_Ward_5.txt");
                        file << "";
                        void close();
                    }
                    else
                    {
                        ifstream Myfile;
                        Myfile.open("Emergency_Ward_1.txt");
                        while (!Myfile.eof())
                        {
                            getline(Myfile, line);
                            if ((offset = line.find(search, 0)) != string::npos)
                            {
                                // cout << "The word has been found " << search << endl;
                                out = 1;
                            }
                        }
                        Myfile.close();
                        if (out == 1)
                        {
                            ofstream file("Emergency_Ward_1.txt");
                            file << "";
                            void close();
                        }
                        else
                        {
                            ifstream Myfile;
                            Myfile.open("Emergency_Ward_2.txt");
                            while (!Myfile.eof())
                            {
                                getline(Myfile, line);
                                if ((offset = line.find(search, 0)) != string::npos)
                                {
                                    // cout << "The word has been found " << search << endl;
                                    out = 1;
                                }
                            }
                            Myfile.close();
                            if (out == 1)
                            {
                                ofstream file("Emergency_Ward_2.txt");
                                file << "";
                                void close();
                            }
                            else
                            {
                                ifstream Myfile;
                                Myfile.open("Emergency_Ward_3.txt");
                                while (!Myfile.eof())
                                {
                                    getline(Myfile, line);
                                    if ((offset = line.find(search, 0)) != string::npos)
                                    {
                                        // cout << "The word has been found " << search << endl;
                                        out = 1;
                                    }
                                }
                                Myfile.close();
                                if (out == 1)
                                {
                                    ofstream file("Emergency_Ward_3.txt");
                                    file << "";
                                    void close();
                                }
                                else
                                {
                                    ifstream Myfile;
                                    Myfile.open("Emergency_Ward_4.txt");
                                    while (!Myfile.eof())
                                    {
                                        getline(Myfile, line);
                                        if ((offset = line.find(search, 0)) != string::npos)
                                        {
                                            // cout << "The word has been found " << search << endl;
                                            out = 1;
                                        }
                                    }
                                    Myfile.close();
                                    if (out == 1)
                                    {
                                        ofstream file("Emergency_Ward_4.txt");
                                        file << "";
                                        void close();
                                    }
                                    else
                                    {
                                        ifstream Myfile;
                                        Myfile.open("Emergency_Ward_5.txt");
                                        while (!Myfile.eof())
                                        {
                                            getline(Myfile, line);
                                            if ((offset = line.find(search, 0)) != string::npos)
                                            {
                                                // cout << "The word has been found " << search << endl;
                                                out = 1;
                                            }
                                        }
                                        Myfile.close();
                                        if (out == 1)
                                        {
                                            ofstream file("Emergency_Ward_5.txt");
                                            file << "";
                                            void close();
                                        }
                                        else
                                        {
                                            ifstream Myfile;
                                            Myfile.open("general_Ward_1.txt");
                                            while (!Myfile.eof())
                                            {
                                                getline(Myfile, line);
                                                if ((offset = line.find(search, 0)) != string::npos)
                                                {
                                                    // cout << "The word has been found " << search << endl;
                                                    out = 1;
                                                }
                                            }
                                            Myfile.close();
                                            if (out == 1)
                                            {
                                                ofstream file("general_Ward_1.txt");
                                                file << "";
                                                void close();
                                            }
                                            else
                                            {
                                                Myfile.open("general_Ward_2.txt");
                                                while (!Myfile.eof())
                                                {
                                                    getline(Myfile, line);
                                                    if ((offset = line.find(search, 0)) != string::npos)
                                                    {
                                                        // cout << "The word has been found " << search << endl;
                                                        out = 1;
                                                    }
                                                }
                                                Myfile.close();
                                                if (out == 1)
                                                {
                                                    ofstream file("general_Ward_2.txt");
                                                    file << "";
                                                    void close();
                                                }
                                                else
                                                {
                                                    Myfile.open("general_Ward_3.txt");
                                                    while (!Myfile.eof())
                                                    {
                                                        getline(Myfile, line);
                                                        if ((offset = line.find(search, 0)) != string::npos)
                                                        {
                                                            // cout << "The word has been found " << search << endl;
                                                            out = 1;
                                                        }
                                                    }
                                                    Myfile.close();
                                                    if (out == 1)
                                                    {
                                                        ofstream file("general_Ward_3.txt");
                                                        file << "";
                                                        void close();
                                                    }
                                                    else
                                                    {
                                                        Myfile.open("general_Ward_4.txt");
                                                        while (!Myfile.eof())
                                                        {
                                                            getline(Myfile, line);
                                                            if ((offset = line.find(search, 0)) != string::npos)
                                                            {
                                                                // cout << "The word has been found " << search << endl;
                                                                out = 1;
                                                            }
                                                        }
                                                        Myfile.close();
                                                        if (out == 1)
                                                        {
                                                            ofstream file("general_Ward_4.txt");
                                                            file << "";
                                                            void close();
                                                        }
                                                        else
                                                        {
                                                            Myfile.open("general_Ward_5.txt");
                                                            while (!Myfile.eof())
                                                            {
                                                                getline(Myfile, line);
                                                                if ((offset = line.find(search, 0)) != string::npos)
                                                                {
                                                                    // cout << "The word has been found " << search << endl;
                                                                    out = 1;
                                                                }
                                                            }
                                                            Myfile.close();
                                                            if (out == 1)
                                                            {
                                                                ofstream file("general_Ward_5.txt");
                                                                file << "";
                                                                void close();
                                                            }
                                                            else
                                                            {
                                                                Myfile.open("ICU_Ward_1.txt");
                                                                while (!Myfile.eof())
                                                                {
                                                                    getline(Myfile, line);
                                                                    if ((offset = line.find(search, 0)) != string::npos)
                                                                    {
                                                                        // cout << "The word has been found " << search << endl;
                                                                        out = 1;
                                                                    }
                                                                }
                                                                Myfile.close();
                                                                if (out == 1)
                                                                {
                                                                    ofstream file("ICU_Ward_1.txt");
                                                                    file << "";
                                                                    void close();
                                                                }
                                                                else
                                                                {
                                                                    Myfile.open("ICU_Ward_2.txt");
                                                                    while (!Myfile.eof())
                                                                    {
                                                                        getline(Myfile, line);
                                                                        if ((offset = line.find(search, 0)) != string::npos)
                                                                        {
                                                                            // cout << "The word has been found " << search << endl;
                                                                            out = 1;
                                                                        }
                                                                    }
                                                                    Myfile.close();
                                                                    if (out == 1)
                                                                    {
                                                                        ofstream file("ICU_Ward_2.txt");
                                                                        file << "";
                                                                        void close();
                                                                    }
                                                                    else
                                                                    {
                                                                        Myfile.open("ICU_Ward_3.txt");
                                                                        while (!Myfile.eof())
                                                                        {
                                                                            getline(Myfile, line);
                                                                            if ((offset = line.find(search, 0)) != string::npos)
                                                                            {
                                                                                // cout << "The word has been found " << search << endl;
                                                                                out = 1;
                                                                            }
                                                                        }
                                                                        Myfile.close();
                                                                        if (out == 1)
                                                                        {
                                                                            ofstream file("ICU_Ward_3.txt");
                                                                            file << "";
                                                                            void close();
                                                                        }
                                                                        else
                                                                        {
                                                                            Myfile.open("ICU_Ward_4.txt");
                                                                            while (!Myfile.eof())
                                                                            {
                                                                                getline(Myfile, line);
                                                                                if ((offset = line.find(search, 0)) != string::npos)
                                                                                {
                                                                                    // cout << "The word has been found " << search << endl;
                                                                                    out = 1;
                                                                                }
                                                                            }
                                                                            Myfile.close();
                                                                            if (out == 1)
                                                                            {
                                                                                ofstream file("ICU_Ward_4.txt");
                                                                                file << "";
                                                                                void close();
                                                                            }
                                                                            else
                                                                            {
                                                                                Myfile.open("ICU_Ward_5.txt");
                                                                                while (!Myfile.eof())
                                                                                {
                                                                                    getline(Myfile, line);
                                                                                    if ((offset = line.find(search, 0)) != string::npos)
                                                                                    {
                                                                                        // cout << "The word has been found " << search << endl;
                                                                                        out = 1;
                                                                                    }
                                                                                }
                                                                                Myfile.close();
                                                                                if (out == 1)
                                                                                {
                                                                                    ofstream file("ICU_Ward_5.txt");
                                                                                    file << "";
                                                                                    void close();
                                                                                }
                                                                                else
                                                                                {
                                                                                    Myfile.open("Morgue_Ward_1.txt");
                                                                                    while (!Myfile.eof())
                                                                                    {
                                                                                        getline(Myfile, line);
                                                                                        if ((offset = line.find(search, 0)) != string::npos)
                                                                                        {
                                                                                            // cout << "The word has been found " << search << endl;
                                                                                            out = 1;
                                                                                        }
                                                                                    }
                                                                                    Myfile.close();
                                                                                    if (out == 1)
                                                                                    {
                                                                                        ofstream file("Morgue_Ward_1.txt");
                                                                                        file << "";
                                                                                        void close();
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        Myfile.open("Morgue_Ward_2.txt");
                                                                                        while (!Myfile.eof())
                                                                                        {
                                                                                            getline(Myfile, line);
                                                                                            if ((offset = line.find(search, 0)) != string::npos)
                                                                                            {
                                                                                                // cout << "The word has been found " << search << endl;
                                                                                                out = 1;
                                                                                            }
                                                                                        }
                                                                                        Myfile.close();
                                                                                        if (out == 1)
                                                                                        {
                                                                                            ofstream file("Morgue_Ward_2.txt");
                                                                                            file << "";
                                                                                            void close();
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                            Myfile.open("Morgue_Ward_3.txt");
                                                                                            while (!Myfile.eof())
                                                                                            {
                                                                                                getline(Myfile, line);
                                                                                                if ((offset = line.find(search, 0)) != string::npos)
                                                                                                {
                                                                                                    // cout << "The word has been found " << search << endl;
                                                                                                    out = 1;
                                                                                                }
                                                                                            }
                                                                                            Myfile.close();
                                                                                            if (out == 1)
                                                                                            {
                                                                                                ofstream file("Morgue_Ward_3.txt");
                                                                                                file << "";
                                                                                                void close();
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                                Myfile.open("Morgue_Ward_4.txt");
                                                                                                while (!Myfile.eof())
                                                                                                {
                                                                                                    getline(Myfile, line);
                                                                                                    if ((offset = line.find(search, 0)) != string::npos)
                                                                                                    {
                                                                                                        // cout << "The word has been found " << search << endl;
                                                                                                        out = 1;
                                                                                                    }
                                                                                                }
                                                                                                Myfile.close();
                                                                                                if (out == 1)
                                                                                                {
                                                                                                    ofstream file("Morgue_Ward_4.txt");
                                                                                                    file << "";
                                                                                                    void close();
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                    Myfile.open("Morgue_Ward_5.txt");
                                                                                                    while (!Myfile.eof())
                                                                                                    {
                                                                                                        getline(Myfile, line);
                                                                                                        if ((offset = line.find(search, 0)) != string::npos)
                                                                                                        {
                                                                                                            // cout << "The word has been found " << search << endl;
                                                                                                            out = 1;
                                                                                                        }
                                                                                                    }
                                                                                                    Myfile.close();
                                                                                                    if (out == 1)
                                                                                                    {
                                                                                                        fstream file("Morgue_Ward_5.txt");
                                                                                                    file << "";
                                                                                                    void close();
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    system("pause");
}

int main()
{
    cout << "\n \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
    cout << "\n      |-- Appolo Star Hospital --|";
    cout << "\n  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n";

    billing w;
    staff_info s;

    int choice;

m:
    cout << "\n\n\n\n\n1.hospital_info";
    cout<<"\n2.Staff Info";
    cout << "\n3.patient_info";
    cout << "\n4.Doctor_allocation";
    cout << "\n5.Billing";
    cout << "\n6.Discharge";
    cout << "\n7.Exit";

    cout << "\n\nEnter your choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        w.print_hospital_info();
        break;

    case 2:
        s.enter_password();
        break;

    case 3:
    {

        cout << "\n\n1.Enter Patient Information";
        cout << "\n2.View Patient Information";
        cout << "\n\nSelect Your choice : ";
        int select_1;
        cin >> select_1;

        switch (select_1)
        {
        case 1:
            w.patient_info_input();
            {
                cout << "_________________________________";
                cout << "\n\n Select ward to allocate" << endl;
                cout << "_________________________________";

                cout << "\n\n1.OPD wards " << endl;
                cout << "2.General Ward" << endl;
                cout << "3.Emergency" << endl;
                cout << "4.ICU wards" << endl;
                cout << "5.Morgue";
                int ward_no;
                cout << "\n\nSelect ward_no : ";
                cin >> ward_no;

                switch (ward_no)
                {
                case 1:
                    w.opd_ward_input();
                    break;

                case 2:
                    s.enter_password();
                    break;\

                case 3:
                    w.general_ward_input();
                    break;

                case 4:
                    w.emergency_ward_input();
                    break;

                case 5:
                    w.icu_ward_input();
                    break;

                case 6:
                    w.morgue_ward_input();
                    break;

                default:
                    cout << "Invalid Choice" << endl;
                    break;
                }
            }
            break;

        case 2:
            print_data();
            break;
        }
    }
    break;

    case 4:
        w.Select_doctor();
        break;

    case 5:
        w.bill();
        w.calculate_bill();

    case 6:
        discharge();

    case 7:
        exit(0);
        break;

    default:

        cout << "\nPlease enter correct choice";
        break;
    }
    goto m;
    return 0;
}
