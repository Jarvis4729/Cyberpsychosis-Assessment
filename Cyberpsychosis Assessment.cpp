#include <iostream>
#include <string>
using namespace std;

int main()
{
    string def, a, b, c, d, e;
    int KillCount;
    cout << "Hello, and welcome to the official cyberpsychosis assessment from The Arasaka Corporation." << endl;
    cout<<"First, I must ask, do you happen to know the definition of the disease known as cyberpsychosis (yes/no)? "<<endl;
    cin>>def;
    if (def == "no")
    {
        cout<<"Cyberpsychosis is a mental disorder believed to be the cause of too many cybernetic implants inside of someone, impacting their behavior and often causing violent outbursts."<<endl;
        cout<<"Now that you are aware of what cyberpsychosis is, do you think you might be suffering from it? "<<endl;
        cin >> a;
    if (a == "no")
    {
        cout << "You are not suffering from cyberpsychosis." << endl;
    }
    else if (a == "yes")
    {
        cout << "Thank you. Please, enter respond yes and no to the following questions: " << endl;
        cout<< "Do you have any cybernetic implants? (spinal, cerebral, arm, leg, etc)? "<<endl;
        cin>>b;
        if (b== "no")
        {
            cout<<"You are not suffering from cyberpsychosis. "<<endl;
        }
        else if (b == "yes")
        {
            cout<<"Are you having any negative thoughts? For example, anything depressive and/or violent? "<<endl;
            cin>>c;
            if  (c == "no")
            {
                cout<<"You are not suffering from cyberpsychosis. "<<endl;
            }
            else if (c == "yes")
            {
                cout<<"Have you committed any violent acts against others? "<<endl;
                cin>>d;
                if (d== "no")
                {
                    cout<<"You might not yet have fallen to cyberpsychosis, but we will prescribe you some omega blockers to keep your mind on track.";
                }
                else if (d == "yes")
                {
                    cout<<"Have you committed any acts of murder?"<<endl;
                    cin>>e;
                    if(e == "no")
                    {
                        cout<<"The authorities are on their way to your location, please do not resist arrest. Resistance will result in either violence, or if needed, the termination of your life. "<<endl;
                    }
                    else if (e == "yes")
                    {
                        cout<<"Enter the number of people you have murdered: "<<endl;
                        cin>>KillCount;
                        if (KillCount <=5)
                        {
                        cout<<"The authorities are on their way to your location, please do not resist arrest. Resistance will result in either violence, or if needed, the termination of your life. "<<endl;
                        }
                        else if(KillCount > 5 && KillCount <= 20)
                        {
                        cout<<"Do not resist arrest, the authorities are authorized to use deadly force. "<<endl;
                        }
                        else if(KillCount >20)
                        {
                        cout<<"The authorities are on their way to terminate you. "<<endl;
                        }
                    }
                }
            }
        }
        
    }
    }
    else if (def == "yes")
    {
        cout<<"Great, then we can already get started! Please answer all questions by typing either yes or no. "<<endl;
    cout << "Do you believe you might be suffering from the mental disorder known as cyberpsychosis? "<<endl;
    cin >> a;
    if (a == "no")
    {
        cout << "You are not suffering from cyberpsychosis." << endl;
    }
    else if (a == "yes")
    {
        cout << "Thank you. Please, enter respond yes and no to the following questions: " << endl;
        cout<< "Do you have any cybernetic implants? (spinal, cerebral, arm, leg, etc)? "<<endl;
        cin>>b;
        if (b== "no")
        {
            cout<<"You are not suffering from cyberpsychosis. "<<endl;
        }
        else if (b == "yes")
        {
            cout<<"Are you having any negative thoughts? For example, anything depressive and/or violent? "<<endl;
            cin>>c;
            if  (c == "no")
            {
                cout<<"You are not suffering from cyberpsychosis. "<<endl;
            }
            else if (c == "yes")
            {
                cout<<"Have you committed any violent acts against others? "<<endl;
                cin>>d;
                if (d== "no")
                {
                    cout<<"You might not yet have fallen to cyberpsychosis, but we will prescribe you some omega blockers to keep your mind on track.";
                }
                else if (d == "yes")
                {
                    cout<<"Have you committed any acts of murder?"<<endl;
                    cin>>e;
                    if(e == "no")
                    {
                        cout<<"The authorities are on their way to your location, please do not resist arrest. Resistance will result in either violence, or if needed, the termination of your life. "<<endl;
                    }
                    else if (e == "yes")
                    {
                        cout<<"Enter the number of people you have murdered: "<<endl;
                        cin>>KillCount;
                        if (KillCount <=5)
                        {
                        cout<<"The authorities are on their way to your location, please do not resist arrest. Resistance will result in either violence, or if needed, the termination of your life. "<<endl;
                        }
                        else if(KillCount > 5 && KillCount <= 20)
                        {
                        cout<<"Do not resist arrest, the authorities are authorized to use deadly force. "<<endl;
                        }
                        else if(KillCount >20)
                        {
                        cout<<"The authorities are on their way to terminate you. "<<endl;
                        }
                    }
                }
            }
        }
        
    }
}
    
    return 0;
}
