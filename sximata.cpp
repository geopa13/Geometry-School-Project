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
    cout << "========== Dialekste Sxima ==========" << endl;
    Sleep(1000);
    cout << " 1: Eytheia" << endl;
    Sleep(500);
    cout << " 2: Tetragono" << endl;
    Sleep(500);
    cout << " 3: Orthogonio Paralilogrammo" << endl;
    Sleep(500);
    cout << " 4: Kuklos" << endl;
    cout << " " << endl;
    Sleep(500);
    cout << "========== Other Options ==========" << endl;
    Sleep(500);
    cout << " 5: Credit Section" << endl;
    Sleep(500);
    cout << " 6: Help! " <<endl;
    Sleep(500);
    cout << " 7: Exit! " <<endl;
    cout << " " << endl;
    Sleep(500);
    cout << " Doste thn epilogh sas  " ;
    cin >> e;
    
    if (e==1)
    // Entoles gia epilogh 1 ( eytheia ) //
    //Dokimastikes entoles //
    {
    cout << "Eytheia" << endl;
    cout << "Doste prwto shmeio: x1 y1" << endl;
    cin >> x1>>y1;
    cout << "Doste deytero shmeio: x2 y2" << endl;
    cin >> x2>>y2;
    cout << "Dialekste xarakthra grammhs * # ; +" << endl;
    cin >> ch;
    cout << "Dwste megethos grammhs " << endl;
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
       
               
               
               
               
               
    } 
    else if (e==2) 
    // Entoles gia epilogh 2 ( Tetragono ) //
     //Dokimastikes entoles //
    {
    cout << "Tetragono"  << endl;
               
               
               
               
               
               
    }
   else if (e==3)
    // Entoles gia epilogh 3 ( Orthogonio paralilogrammo ) //
     //Dokimastikes entoles //
     {
     cout << "Orthogonio paralilogrammo" << endl;
                    
                    
                    
                    
                    
     }
   else if (e==4)
    // Entoles gia epilogh 4 ( Kyklos ) //
     //Dokimastikes entoles //
     {
     cout << "Kyklos" << endl;
                    
                    
                    
                    
                    
                    
                    
     }              
     
      else if (e==5)
     // Entoles gia ta credits //
{ 
     cout << " " << endl;
     Sleep(500);
     cout << "            ========== Programming and Coding ==========" << endl;
     cout << " " << endl;
     Sleep(500);
     cout << "                    Kathigitis: Antonis Neiros" << endl;
     Sleep(500);
     cout << "                    Mathiis: Panagiotis Vasilaros" << endl;
     Sleep(500);
     cout << "                    Mathitis: Giorgos Lafiatis" <<endl;
     Sleep(500);
     cout << "                    Mathitis: Giorgos Papapanagiotou" << endl;
     cout << " " << endl;
     Sleep(500);
     cout << "                    ========== Designing ==========" << endl;
     Sleep(500);
     cout << "                      Mathitis: Giorgos Lafiatis" << endl;
     cout << " " << endl;
     system ("pause");

     
      }                
     else if (e==6)
     //Entoles gia help//
     {
     cout << " " << endl;
     cout << "If you need help , contact us via e-mail : example@example.com";
     cout << " " << endl;
     cout << " " << endl;
     system ("pause");
     }
     
     else if (e==7)
     cout << " Eyxaristoume!!" << endl;
     cout << " " << endl;
     
     }while (e!=7);
     
    
    
    
     
    system("pause");
    return 0;    
    
    }
    
    
    
