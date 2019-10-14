#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
      int  k,nfan,nm,me=2,sw;
      int gwf,mwf,phff,xpsf,puff,epsf,dj,rj;
      int n,eps,puf,xps,phf,mw,gw,epsp,pufp,xpsp,phfp,mwp,gwp,epsc,pufc,xpsc,phfc,mwc,gwc;
      float x,ph,v,h,a,ca,cl,cw,ar,pr,prw,tlcs,twcs,la,arw,PUF,XPS,EPS,PHF,MIW,GLW;
      float I,Q1,U,BR,CM,HI,HO,CHI,CHO,To,Ti,Q2,UP,da,Ud,IP,EPSP,PUFP,XPSP,PHFP,MIWP,GLWP,Q3,UC,RCC,IC,EPSC,PUFC,XPSC,PHFC,MIWC,GLWC;
      float Q,Q4,UF,CON,IF,EPSF,PUFF,XPSF,PHFF,MIWF,GLWF,x1;
      float Cpm,Qc,hfg,ft,Qf,hg,Qr,Tg,Tf,Cpmm,tco,Qff,Qfan=.120,QFAN,Qwh=.300,QWH,QLIGHT,QTL,Qdesign;
      float QIf,Qv,den,vel,Hinit,arl,prl;
      printf("\t\t\t=============================");
      printf("\n\t\tMODELING TRANSPORT PHENOMENA OF COLD STORAGE\n\t\t--------------------------------------------\n\n");
      printf("\t*******   A SOFTWARE FOR DESIGNING COLD STORAGE  *******\n\n\t\t\tDesigned by: Aniket and Tuhin \n\t \t   F/ Agricultural Engineering,BCKV_2013");
         printf("\n================================================================================");
         printf("\n\n\tChoose your design- DEFAULT DESIGN (1)  or  NEW DESIGN (2) :");
         scanf("%d",&k);
         printf("\n______________________________________________________________________________");
         if(k==1)
         {printf("\nDimension of Cold Storage:\n===============================\n\tCapacity of cold storage=5000Mt.\n\tSpecific Product  Density=3.4 m3/Mt.");
         printf("\n\tHeight of cold storage=13.5m.\n\tNo. of Chamber= 4\n\tEach Chamber length=18.5 m.");
         printf("\n\tEach Chamber Width=17.01 m.\n\tAnte Room width=4.44 m\n\tAnte Room Length=34.03 m.\n\tPreCooling chamber Width=12 m.\n\tPre-cooling Chamber Length=36.7 m.\n\tTotal length of Cold Storage=46.03 m");
         printf("\n\tTotal Width of Cold Storage=41.44 m2\n\tLayout Area=1907.65 m2\n");
         printf("\t....................................\n");
         printf("\n\nHeat load Data:\n=========================");
         printf("\n(defalt:Hi=28W/mK ;Ho=7W/mK ;To=30 C; Ti=3 C;Insulation used EPS;)\n\n\tTHE STRUCTURAL- LOAD OF COLD STORAGE=56050.08 W\n");
          printf("\n(defalt:Product input/day=250 Mt; Mean sp. heat of product=3.433KJ/Kg.;\nProduct store above the freezing temp. and storage temp is 3'C )\n\n\tCHILLING LOAD =312882.875 W.");
                   printf("\n\tFREEZING LOAD=0.0 W.");
                    printf("\n\tRESPIRATION LOAD=105030.00 W");
                  printf("\n\tTHE COOLING LOAD BELOW FREEZING TEMP.=0.0 W\n\tTHE PRODUCT LOAD=323385.875 W\n.................................");
                  printf("\n\n(defalt: No.of Fan=18; No. of person working=4;)");
                   printf("\n\n\tFAN LOAD=2.16 W\n\tLIGHTING LOAD=63216.54 W");
                  printf("\n\tWORKING LOAD FOR HUMAN=1200.0W");
                  printf("\n\tCOOLING LOAD FOR ELECTRICAL APPLIANCES= 33.5 W/m2\n.........................................");
                  printf("\n\n(defalt: Outside air density=1.191Kg/m3; Air velocity=8.33m/s; Difference in enthalpy=113)");
                   printf("\n\n\tVENTILATION LOAD =25.942 W");
                   printf("\n\tINFILTRATION LOAD=5.188 W\n..........................................");
                   printf("\n\n\tTHE TOTAL HEAT LOAD=539136.0625 W");
                  
                   printf("\n\n\tTHE DESIGN HEAT LOAD OF COLD STORAGE=391.4127 KW. \n...........................................................");
                   printf("\n\n************************************END************************************");
         
         }
         else
         {
           printf("\n\n\tEnter the value of capacity of cold storage(M ton):\n" );
           scanf("%f",&x);
           printf("\t Specific Product density(m3/Mt) :\n");
           scanf("%f",&ph);
          printf(" \tHeight of cold storage(m):\n");
      scanf("%f",&h);
      if(x==5000)
      {if(ph==3.4)
      v=(5000)*3.4;
      else
      v=(5000)*ph;
      }
      else
      {if(ph==3.4)
      v=(x)*3.4;
      else
      v=(x)*ph;
      };
     
      if(h==13.5)
                { a=v/13.5;
                }
                 else
                 {a=v/h;
                 };
                
                 printf("enter the no of chamber ( take only even no of chamber ):");
                 scanf("%d",&n);
                 if(n==4)
                 ca=a/4;
                 else
                 ca=a/n;
                
                 printf("enter the lenght of each chamber(m):\n");
                 scanf("%f",&cl);
                 if(cl==18.5)
                 cw=ca/18.5;
                 else
                 cw=ca/cl;
                 printf("\t\t___________________________\n\t\tDimention of Cold Storage:\n\t\t+++++++++++++++++++++++++++");
                 printf("\n\tEach chamber width=%f m\n\tEach Chamber Length=%f m",cw,cl);
                  printf(" \n\tEach chamber area=%f m2",ca);
                   printf("\n\tTotal chamber area=%f m2\n",a);
                 ar=.12*a;
                 if(n==4)
                 {arw=ar/(.5*4*cw);}
                 else
                 arw=ar/(.5*n*cw);
                 arl=ar/arw;
                 pr=.35*a;
                 prw=12;
                 prl=pr/prw;
                 if(n==4)
                 tlcs=(2*cw)+prw;
                 else
                 tlcs=(0.5*n*cw)+prw;
                 twcs=(2*cl)+arw;
                 la=tlcs*twcs;
                 printf("\n\tPre-cooling chamber width=%f m.\n\tPre-cooling chamber length=%f m.\n\tAnte room width=%f m.\n\tAnte room length=%f m.\n\tTotal length of Cold Storage=%f m.\n\tTotal width of Cold Storage=%f m.",prw,prl,arw,arl,tlcs,twcs);

                 printf("\n\tThe Layout Area=%f m2.",la);
                 printf("\n\t-------------------------------------\n\n\n");
                 printf("****CALCULATION OF STRUCTURAL LOAD OF COLD STORAGE****\n=====================================================================");
                 printf("\n\t***    Calculation of Q and U value for External wall  ***\t");
                 printf("\n------------------------------------------------------------\n");
                 printf("\n\tenter 1(if you want to use EPS) or 0 (if not):__");
                 scanf("%d",&eps);
                 printf("\n\tenter 1(if you want to use PUF) or 0 (if not):__");
                 scanf("%d",&puf);
                  printf("\n\tenter 1(if you want to use XPS) or 0 (if not):__");
                  scanf("%d",&xps);
                   printf("\n\tenter 1(if you want to use Phenolic Foam) or 0 (if not):__");
                   scanf("%d",&phf);
                  printf("\n\tenter 1(if you want to use Mineral Wool) or 0 (if not):__");
                  scanf("%d",&mw);
                  printf("\n\tenter 1(if you want to use Glass Wool) or 0 (if not):__"); 
                  scanf("%d",&gw); 
                  EPS=eps*(.150/.036);
                  PUF=puf*(.100/.023);
                  XPS=xps*(.100/.025);
                  PHF=phf*(.100/.026);
                  MIW=mw*(.125/.033);
                  GLW=gw*(.125/0.033);
                  I=EPS+PUF+XPS+PHF+MIW+GLW;
                  BR=(.230/1.32);
                  CM=(.02/8.65);
                
                  printf("\n\tenter the value of external and internal temperature('C):");
                  scanf("%f%f",&To,&Ti);
                  printf("\n\tenter the value of Hi and Ho:");
                  scanf("%f%f",&HI,&HO);
                    CHI=(1/HI);
                  CHO=(1/HO);
                  U=1/(CHI+CHO+BR+CM+I);
      printf("\n\t\tTHE 'U' VALUE FOR EXTERNAL WALL=%f W/m^2",U);
      if(h==13.5)
      Q1=U*((2*13.5*tlcs)+(2*13.5*twcs))*(To-Ti);
      else
      Q1=U*((2*h*tlcs)+(2*h*twcs))*(To-Ti);
      printf("\n\t\tTHE HEAT-LOAD OF EXTERNAL WALL=%f W",Q1);
      printf("\n\t\t**********************************\n");
      printf("\nCalculation of Q and U value for Partition wall");
       printf("\n------------------------------------------------------------\n");
       printf("\n\tenter 1(if you want to use EPS) or 0 (if not):__");
                 scanf("%d",&epsp);
                 printf("\n\tenter 1(if you want to use PUF) or 0 (if not):__");
                 scanf("%d",&pufp);
                  printf("\n\tenter 1(if you want to use XPS) or 0 (if not):__");
                  scanf("%d",&xpsp);
                   printf("\n\tenter 1(if you want to use Phenolic Foam) or 0 (if not):__");
                   scanf("%d",&phfp);
                  printf("\n\tenter 1(if you want to use Mineral Wool) or 0 (if not):__");
                  scanf("%d",&mwp);
                  printf("\n\tenter 1(if you want to use Glass Wool) or 0 (if not):__"); 
                  scanf("%d",&gwp); 
                  EPSP=epsp*(.075/.036);
                  PUFP=pufp*(.050/.023);
                  XPSP=xpsp*(.050/.025);
                  PHFP=phfp*(.050/.026);
                  MIWP=mwp*(.050/.033);
                  GLWP=gwp*(.050/0.033);
                  IP=EPSP+PUFP+XPSP+PHFP+MIWP+GLWP;
                 
                  UP=1/(CHI+CHO+BR+CM+IP);
                  printf("\n\t\tTHE 'U' VALUE FOR PARTION WALL=%f W/m2",UP);
                  da=2*3;
                  Ud=.03;
                  if(h==13.5)
                  {
                             if(n==4)
                  Q2=((UP*((twcs*13.5*4)-(4*da)))+(4*Ud*da))*(To-Ti);
                  else
                  Q2=((UP*((twcs*13.5*n)-(n*da)))+(n*da*Ud))*(To-Ti);
                  }
                  else{
                          if(n==4)
                  Q2=((UP*((twcs*h*4)-(4*da)))+(4*da*Ud))*(To-Ti);
                  else
                  Q2=((UP*((twcs*h*n)-(n*da)))+(n*da*Ud))*(To-Ti);
                  }

                  printf("\n\t\tTHE HEAT-LOAD OF PARTITION WALL=%f W\n",Q2);
                  printf("\t\t***************************************\n");
                  
      printf("\nCalculation for Q and U value of Ceiling");
       printf("\n------------------------------------------------------------\n");
       printf("\n\tenter 1(if you want to use EPS) or 0 (if not):__");
                 scanf("%d",&epsc);
                 printf("\n\tenter 1(if you want to use PUF) or 0 (if not):__");
                 scanf("%d",&pufc);
                  printf("\n\tenter 1(if you want to use XPS) or 0 (if not):__");
                  scanf("%d",&xpsc);
                   printf("\n\tenter 1(if you want to use Phenolic Foam) or 0 (if not):__");
                   scanf("%d",&phfc);
                  printf("\n\tenter 1(if you want to use Mineral Wool) or 0 (if not):__");
                  scanf("%d",&mwc);
                  printf("\n\tenter 1(if you want to use Glass Wool) or 0 (if not):__"); 
                  scanf("%d",&gwc); 
                  EPSC=epsc*(.150/.036);
                  PUFC=pufc*(.100/.023);
                  XPSC=xpsc*(.100/.025);
                  PHFC=phfc*(.125/.026);
                  MIWC=mwc*(.125/.033);
                  GLWC=gwc*(.125/0.033);
                  IC=(EPSC+PUFC+XPSC+PHFC+MIWC+GLWC);
                 
                  RCC=.200/9;
                  UC=1/(CHI+CHO+RCC+IC);
                  printf("\n\n\t\tTHE 'U' VALUE FOR CEILING=%f W/m2\n",UC);
                  Q3=UC*a*(To-Ti);
                  printf("\n\t\tTHE HEAT-LOAD OF CEILING=%f W\n",Q3);
                    printf("\t\t***************************************\n");
                  printf("\nCalculation of Q and U value of Floor");
                   printf("\n------------------------------------------------------------\n");
                   printf("\n\tenter 1(if you want to use EPS) or 0 (if not):__");
                 scanf("%d",&epsf);
                 printf("\n\tenter 1(if you want to use PUF) or 0 (if not):__");
                 scanf("%d",&puff);
                  printf("\n\tenter 1(if you want to use XPS) or 0 (if not):__");
                  scanf("%d",&xpsf);
                   printf("\n\tenter 1(if you want to use Phenolic Foam) or 0 (if not):__");
                   scanf("%d",&phff);
                  printf("\n\tenter 1(if you want to use Mineral Wool) or 0 (if not):__");
                  scanf("%d",&mwf);
                  printf("\n\tenter 1(if you want to use Glass Wool) or 0 (if not):__"); 
                  scanf("%d",&gwf); 
                  EPSF=epsf*(.125/.036);
                  PUFF=puff*(.100/.023);
                  XPSF=xpsf*(.100/.025);
                  PHFF=phff*(.100/.026);
                  MIWF=mwf*(.100/.033);
                  GLWF=gwf*(.100/0.033);
                  IF=EPSF+PUFF+XPSF+PHFF+MIWF+GLWF;
                 
                  CON=.200/9;
                  UF=1/(CHI+CON+IF);
                  printf("\n\t\tTHE 'U' VALUE FOR FLOOR=%f W/m2",UF);
                  Q4=UF*a*(To-Ti);
                  printf("\n\t\tTHE HEAT-LOAD OF FLOOR=%f W\n",Q4);
                  Q=Q1+Q2+Q3+Q4;
                  printf("\n\n\tTHE TOTAL STRUCTURAL-LOAD OF COLD STORAGE=%f W\n\t....................................................",Q);
                  printf("\n----------------------------------------------------------------------------------\n");
                  printf("\n\n******CALCULATION OF PRODUCT LOAD******\n===================================================");
                  printf("\n Product input per day(Mt),   Mean specific heat of product(KJ/Kg) :");
                  scanf("%f%f",&x1,&Cpm);
                  Qc=((x1*1000*Cpm*(To-Ti))*1.167)*0.01157;
                  printf("Press 1(if the product store below the freezing temp) or 0(if not):");
                  scanf("%d",&dj);
                  if(dj==1)
                  {
                  printf("\n Enter latent heat of freezing, freezing time(hr): ");
                  scanf("%f%f",&hfg,&ft);
                  Qf=(dj*(x*hfg)*1.167)/ft;
                  }
                  else
                  Qf=0;
                  printf("Press 1(if the temp is 3'C)  or 0(if not):");
                  scanf("%d",&rj);
                  if(rj==1)
                  Qr=x*0.018*1000*1.167;
                  else
                  {
                  printf("\n Enter the heat generated per kg of food/hr :");
                  scanf("%f",&hg);
                  Qr=x*hg*1.167;
                  }
                 printf("Press 1(If the storage temp is below the freezing temp) or 0(if not):");
                 scanf("%d",&sw);
                 if(sw==1)
                 {
                  printf("\n Enter actual storage temperature of product, freezing temp of product, sp. heat of freezing product, cooling time(hr) : ");
                  scanf("%f%f%f%f",&Tg,&Tf,&Cpmm,&tco);
                  Qff=(x*sw*Cpmm*(Tg-Tf)*1.167)/tco;
                  }
                  else
                  Qff=0;
                   printf("\n\n\tCHILLING LOAD =%f W.",Qc);
                   printf("\n\tFREEZING LOAD=%f W.",Qf);
                    printf("\n\tRESPIRATION LOAD=%f W.",Qr);
                  printf("\n\tTHE COOLING LOAD BELOW FREEZING TEMP.=%f W",Qff);
                  printf("\n\n\n*********CALCULATION OF HEAT LOAD FROM EQUIPMENT*********\n==========================================================");
                  printf("\n\nEnter the total no of fans: ");
                  scanf("%d",&nfan);
                  QFAN=nfan*Qfan;
                  QLIGHT=33.5*la;
                  
                  printf("\nEnter no of person working: ");
                  scanf("%d",&nm);
                  QWH=nm*Qwh*1000;
                  printf("\n\n\tFAN LOAD=%f W",QFAN);
                  printf("\n\tLIGHTING LOAD=%f W",QLIGHT);
                  printf("\n\tWORKING LOAD FOR HUMAN=%f W",QWH);
                  printf("\n\tCOOLING LOAD FOR ELECTRICAL APPLIANCES= 33.5 W/m2");
                  printf("\n_________________________________________________________________________");
                  printf("\n\n*********CALCULATION OF VENTILATION LOAD  AND  INFILTRATION LOAD*********\n=========================================================");
                  printf("\nEnter Outside air Density, Air Velocity, Difference in Enthalpy:");
                  scanf("%f%f%f",&den,&vel,&Hinit);
                  Qv=me*den*vel*Hinit*0.01157;
                  printf("\n\n\tVENTILATION LOAD =%f W",Qv);
                  QIf=.20*Qv;
                  printf("\n\tINFILTRATION LOAD=%f W",QIf);
                  QTL=QIf+Qv+33.5+QWH+QLIGHT+QFAN+Qff+Qr+Qc+Qf+Q;
                  printf("\n\n\tTHE TOTAL HEAT-LOAD=%f W\n\t.................................",QTL);
                  Qdesign=(.66*1.1*QTL)/1000;
                  printf("\n\n\tDESIGN HEAT-LOAD FOR COLD STORAGE=%f KW\n\t...................................................",Qdesign);
                  
                  printf("\n\n....................................................................\n*************************************END*********************************");
                  
                  
             } 
                  
                
      getch();
      return 0;
      }
      
