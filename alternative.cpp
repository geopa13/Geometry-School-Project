#include <iostream>
#include <cmath>
#include <windows.h>

int main ()
{
    using namespace std;
    int choice;
    float x1,y1,x2,y2;
    char ch;
    
    
    
    /* MAIN MENU */
    
    system("cls");
    cout << "Geometric Shapes Options" << endl;
    Sleep(200);
    cout << "1: Straight Line" << endl;
    Sleep(200);
    cout << "2: Square" << endl;
    Sleep(200);
    cout << "3: Rectangle" << endl;
    Sleep(200);
    cout << "4: Circle" << endl;
    Sleep(200);
    cout << "5: Triangle" << endl;
    cout << " " << endl;
    Sleep(100);
    cout <<"Other Options" << endl;
    Sleep(200);
    cout << "6: About Developers/Coders" << endl;
    Sleep(200);
    cout << "7: Thanks Section" << endl;
    Sleep(200);
    cout << "8: Exit" << endl;
    cout << " " << endl;
    Sleep(100);
    cout << "Type the number of the option you want";
    cout << " and press ENTER" << endl;
    cin >> choice;
    
    /* END OF MAIN MENU */
    
    
    /* Option Menu */
    
    if (choice==1)
    {
       cout <<"Straight Line" << endl;
       cout << " " << endl;
       cout << "Give the coordinates of the first spot: x1 y1" << endl;
       cin >> x1>>y1;
       cout << "Give the coordinates of the seconds spot: x2 y2" << endl;
       cin >> x2>>y2;
       cout << "Choose line character * # ; +" << endl;
       cin >> ch;
       
       
}
    
    
    
    
    
    
    
    
    
    
    
    system("pause");
    return 0;
}
