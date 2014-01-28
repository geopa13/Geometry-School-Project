#include <iostream> // den ksero ti kanei alla einai basiko :P //
#include <cmath>   // MATHIMATIKES PRAKSEIS //
#include <windows.h>  /* entoles ton windows , to xrhsimopoihsa mexri tora gia
 to sleep */
 
/* gia na baleis xronokathisterisi bale Sleep(milliseconds); 
( prepei na einai kefaleo : Sleep kai oxi sleep ) */
int main()

{
    using namespace std;
    int e,pnts,pntsX,pntsY, paperCols,paperLines;
    float x1,x2,y1,y2,dx,dy,step,stepX,stepY;
    char ch, CylPos;
    float paperWidth,paperLength,cylRadius,imgWidth,imgHeight, imgElev,viewDist,viewHeight;
    
     /*   FILE *fp1,*fp2;                 
                                    
    char filename1[30];    //ews 30 xaraktires to onoma tou arxeiou
    char filename2[30];    //ews 30 xaraktires to onoma tou arxeiou
    printf("Give file name to read data: \n");
	scanf("%s",filename1);
    fp1=fopen(filename1,"r");
      
    printf("Give file name to write the results: \n");
	scanf("%s",filename2);
    fp2=fopen(filename2,"w");
           
    if(fp1==NULL)
           printf("Cannot open file \n");
           
    if(fp2==NULL)
           printf("Cannot open file \n");
     
    // Metafora twn arxeiwn stous pinakes
    rewind(fp1);  */
    //fscanf(fp1,"%f %f %d %d %f %c %f %f %f %f %f",&paperWidth,&paperLength,&paperCols,&paperLines,&cylRadius,&CylPos,&imgWidth,&imgHeight,&imgElev,&viewDist,&viewHeigth);
    paperCols=30; 
	paperLines=30;
    char Points[paperCols][paperLines];
    for (int i=0;i<paperLines;i++)
       for (int j=0;j<paperCols;j++)
          Points[i][j]=' ';
    
    do{
    // Main Menu //
    system ("CLS");
    cout << " " <<endl;
    cout << "Dialekste Sxima" << endl;
    Sleep(500);
    cout << " 1: Straight Line" << endl;
    Sleep(200);
    cout << " 2: Square" << endl;
    Sleep(200);
    cout << " 3: Rectangle" << endl;
    Sleep(200);
    cout << " 4: Circle" << endl;
    cout << " " << endl;
    Sleep(200);
    cout << "Other Options" << endl;
    Sleep(200);
    cout << " 5: About Developers/Coders" << endl;
    Sleep(200);
    cout << " 6: Help! " <<endl;
    Sleep(200);
    cout << " 7: Exit! " <<endl;
    cout << " " << endl;
    Sleep(200);
    cout << " Type the option you want, and then press ENTER  " ;
    cin >> e;
    
    if (e==1)
    // Entoles gia epilogh 1 ( eytheia ) //
    //Dokimastikes entoles //
    {
    cout << "Eytheia" << endl;
    cout << " " << endl;
    cout << "Give coordinates of first spot: x1 y1" << endl;
    cin >> x1>>y1;
    cout << " " << endl;
    cout << "Give coordinates of second spot: x2 y2" << endl;
    cin >> x2>>y2;
    cout << " " <<endl;
    cout << "Choose line character * # ; +" << endl;
    cin >> ch;
    cout << " " << endl;
    cout << "Choose line size " << endl;
    cin >> pnts;
	// ... calculate line parameters
	step = 1.0 / (pnts - 1);
	dx = x2 - x1;
	dy = y2 - y1;
	// ... produce and store line points
	for (int p=0;p<pnts;p++){
		int x = p * step * dx + x1;
		int y = p * step * dy + y1; 		
		Points[x][y]=ch;		
	//points.append([x, y, char])
    }
     
	for (int i=0;i<paperLines;i++){	
       for (int j=0;j<paperCols;j++)
          cout<<Points[i][j];          
       cout<<endl;        
    }
       
               
               
               
               system ("pause");
               
    } 
    else if (e==2) 
    // Entoles gia epilogh 2 ( Tetragono ) //
     //Dokimastikes entoles //
    {
    cout << "Square"  << endl;
    
               
               
               
               
               
               
    }
   else if (e==3)
    // Entoles gia epilogh 3 ( Orthogonio paralilogrammo ) //
     //Dokimastikes entoles //
     {
     cout << "Rectangle" << endl;
                    
                    
                    
                    
                    
     }
   else if (e==4)
    // Entoles gia epilogh 4 ( Kyklos ) //
     //Dokimastikes entoles //
     {
     cout << "Circle" << endl;
                    
                    
                    
                    
                    
                    
                    
     }              
     
      else if (e==5)
     // Entoles gia ta credits //
{ 
     
     system ("pause");

     
      }                
     else if (e==6)
     //Entoles gia help//
     {
    
     system ("pause");
     }
     
     else if (e==7)
     cout << " Eyxaristoume!!" << endl;
     cout << " " << endl;
     
     }while (e!=7);
     
    
    
    
     
    system("pause");
    return 0;    
    
    }
