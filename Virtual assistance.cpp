#include<iostream>
#include<windows.h>
#include<string>
#include<ctime>
using namespace std;

// this function is for greeting.
void greetme()
{
    time_t now = time(0);
    tm *time = localtime(&now);
    if(time-> tm_hour < 12)
    {
        cout << "Good Morning Master" << endl;
        string phrase = "Good Morning Master";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommond = command.c_str();
        system(charCommond);
    }
    else if(time-> tm_hour > 12 && time-> tm_hour < 16)
    {
        cout << "Good Afternoon Master" << endl;
        string phrase = "Good Afternoon Master";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommond = command.c_str();
        system(charCommond);
    }
    else if(time-> tm_hour > 16 && time-> tm_hour < 24)
    {
        cout << "Good Evening Master" << endl;
        string phrase = "Good Evening Master";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommond = command.c_str();
        system(charCommond);
    }
}

// this function will tell about date and time.
void datetime()
{
    time_t now = time(0);
    char *dt = ctime(&now);
    cout << "The date and time is: " << endl << dt << endl;

}

int main()
{
    //syatem("color 0,A");
    system("cls");   // it is used for clearing screen
    cout<<"\t\t\t*************************** W E L C O M E ******************************"<<endl;
    string phrase = "Welcome";
    string command = "espeak \"" + phrase + "\"";
    const char *charCommond = command.c_str();
    //system(charCommond);
    cout<<"\t\t\t*************************** I'M A VIRTUAL ASSISTANT ********************"<<endl;
    cout<<"\t\t\t*************************** MY NAME IS C++ *****************************"<<endl;
    cout<<"\t\t\t*************************** I'M HERE TO ASSIST YOU *********************"<<endl <<endl;

    string pass; // for password
    string query;    // in this user will give his command/query.

    while(1)
    {
        cout << "------------------------------" << endl;
        cout << "ENTER YOUR PASSWORD:" << endl;
        cout << "------------------------------" << endl;

        string phrase = "Enter your password";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommond = command.c_str();
        system(charCommond);
        cin >> pass;

        if(pass == "kk")
        {
            cout << "Correct Password" << endl;
            //greetme();
            while(1)
            {
                cout << endl <<"***************************************************************" << endl << endl;
                cout << endl << "How can i help you master......." << endl <<endl;
                string phrase = "How can i help you master";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommond = command.c_str();
                system(charCommond);

                cout << "Your Query ===> ";
                getline(cin,query);
                cout << "Result for your query ===> ";

                STARTUPINFO startinfo = {0};
                PROCESS_INFORMATION processinfo = {0};   // It handle to the newly created process

                if(query == "hi" || query == "hey" || query == "hello")
                {
                    cout << "Hello Master...." << endl;
                    string phrase = "Hello gentlemen";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommond = command.c_str();
                    system(charCommond);

                }

                else if(query == "bye" || query == "stop" || query == "quit" || query == "exit")
                {
                    cout << "Good Bye Master, have a nice day!" << endl;
                    string phrase = "Good Bye Master, have a nice day";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommond = command.c_str();
                    system(charCommond);

                    exit(0);
                }

                else if(query == "who are you" || query == "tell me about yourself")
                {
                    cout << "I am a virtual assistance created by a team of anikat, rahul and sai." << endl;
                    string phrase = "I am a virtual assistance created by a team of anikat, rahul and sai prasad.";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommond = command.c_str();
                    system(charCommond);

                }
                else if(query == "how are you" || query == "whatsup" )
                {
                    cout << "I am good master." << endl;
                    string phrase = "I am good master.";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommond = command.c_str();
                    system(charCommond);

                }

                else if(query == "time" || query == "date" || query == "what is current time" || query == "what is today's date" )
                {
                    datetime();
                }

                else if(query == "open notepad" )
                {
                    cout << "openining notepad....." << endl;
                    string phrase = "openining notepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommond = command.c_str();
                    system(charCommond);
                    CreateProcess(TEXT("C:\\Windows//notepad.exe"),NULL, NULL, NULL, FALSE,NULL,NULL,NULL,&startinfo,&processinfo);
                }
                else if(query == "open youtube" )
                {
                    cout << "openining youtube......" << endl;
                    string phrase = "openining youtube";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommond = command.c_str();
                    system(charCommond);
                    system("start https://www.youtube.com");

                }

                else if(query == "open google" )
                {
                    cout << "openining google......" << endl;
                    string phrase = "openining google";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommond = command.c_str();
                    system(charCommond);
                    system("start https://www.google.com");

                }
                else if(query == "open instagram" )
                {
                    cout << "openining instagram......" << endl;
                    string phrase = "openining instagram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommond = command.c_str();
                    system(charCommond);
                    system("start https://www.instagram.com");

                }
                else if(query == "open facebook" )
                {
                    cout << "openining facebook......" << endl;
                    string phrase = "openining facebook";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommond = command.c_str();
                    system(charCommond);
                    system("start https://www.facebook.com");

                }

                //open ums
                else if(query == "open ums" )
                {
                    cout << "openining ums......" << endl;
                    string phrase = "openining ums";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommond = command.c_str();
                    system(charCommond);
                    system("start https://ums.lpu.in/lpuums/");

                }

                // open lpu live
                else if(query == "open lpu live" || query == "open live")
                {
                    cout << "openining lpu live......" << endl;
                    string phrase = "openining lpu live";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommond = command.c_str();
                    system(charCommond);
                    system("start https://lpulive.lpu.in/");

                }

                else
                {
                    cout << "Sorry could not understand your Query please try again !!" << endl;
                    string phrase = "Sorry could not understand your Query please try again";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommond = command.c_str();
                    system(charCommond);
                }
            }
        }

        else
        {
            cout << "Wrong Password! Try Again." << endl;
            string phrase = "Wrong Password! Try Again.";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommond = command.c_str();
            system(charCommond);
        }

    }

    return 0;
}

