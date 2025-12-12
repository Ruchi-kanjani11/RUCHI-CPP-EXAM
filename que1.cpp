#include <iostream>

using namespace std;

class Movie
{
public:
    string title, genre;
    int releasedYear;

    void SetData()
    {
        cin.ignore();
        cout << "Enter Movie's Title: ";
        getline(cin, title);
        cout << "Enter Movie's Genre: ";
        cin >> genre;
        cout << "Enter The Year In Which The Movie Released: ";
        cin >> releasedYear;
    }
    void GetData()
    {
        cout<<"Movie's Title: "<<title<<endl;
        cout<<"Movie's Genre: "<<genre<<endl;
        cout<<"Movie's Released Year: "<<releasedYear<<endl;
    }
};
int main()
{
    int size;
    cout<<"Enter the number of movie's to be entered: ";
    cin>>size;
    Movie m[size];

    for(int i=0;i<size;i++)
    {
        cout<<"--------Enter "<<i+1<<" Movie's Details:--------"<<endl;
        m[i].SetData();
        cout<<endl;
    }
      for(int i=0;i<size;i++)
    {
        cout<<"--------Details of Movie Number "<<i+1<<" is:--------"<<endl;
        m[i].GetData();
        cout<<endl;
    }
    return 0;

}