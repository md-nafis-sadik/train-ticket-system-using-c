#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ax[14][30], ay[14][50], az[14][167], a=0, b, c, d, e, f, g, h, i, j, l,m,n,o,p,q,r,s,t,x,y,z,u,v,ab=0,cd=0,ef=0,gh,ij,kl;

    for(i=0;i<14;i++)
    {for(j=0;j<30;j++)
    ax[i][j]=0;}

    for(i=0;i<14;i++)
    {for(j=0;j<50;j++)
    ay[i][j]=0;}

    for(i=0;i<14;i++)
    {for(j=0;j<167;j++)
    az[i][j]=0;}


    for(;;)
    {
        printf("<----- Welcome to Tiger Express Ticket Management System --->\n\n");
        printf("Enter today's date (Day Month Year): ");
        scanf("%d %d %d",&l,&m,&n);
        printf("--------------------------------------------------\n");
        printf("Enter Journey date (Day Month Year): ");
        scanf("%d %d %d",&o,&p,&q);
        printf("\n");




        if(ab<=l)
         gh=l-ab;
        else
         {gh=(l+30)-ab;
         cd=cd-1;}

        if(cd<=m)
         ij=m-cd;
        else
         {ij=(m+12)-cd;
         ef=ef-1;}

         kl=n-ef;

         ab=l; cd=m; ef=n;




        if((gh>0) && (gh<15) && (ij==0) && (kl==0))
        {
        for(i=0;i<14-gh;i++){
        for(j=0;j<30;j++)
        ax[i][j]=ax[i+gh][j];}

        for(i=14-gh;i<14;i++){
        for(j=0;j<30;j++)
        ax[i][j]=0;}



        for(i=0;i<14-gh;i++){
        for(j=0;j<50;j++)
        ay[i][j]=ay[i+gh][j];}

        for(i=14-gh;i<14;i++){
        for(j=0;j<50;j++)
        ay[i][j]=0;}


        for(i=0;i<14-gh;i++){
        for(j=0;j<167;j++)
        az[i][j]=az[i+gh][j];}

        for(i=14-gh;i<14;i++){
        for(j=0;j<167;j++)
        az[i][j]=0;}
        }

        if((gh>14) || (ij>0) || (kl>0))
        {
        for(i=0;i<14;i++)
        {for(j=0;j<30;j++)
        ax[i][j]=0;}

        for(i=0;i<14;i++)
        {for(j=0;j<50;j++)
        ay[i][j]=0;}

        for(i=0;i<14;i++)
        {for(j=0;j<167;j++)
        az[i][j]=0;}
        }



        if(l<=o)
         x=o-l;
        else
         {x=(o+30)-l;
         p=p-1;}

        if(m<=p)
         y=p-m;
        else
         {y=(p+12)-m;
         q=q-1;}

         z=q-n;



            if((x>=0) && (x<15) && (y==0) && (z==0))
            {

                int r=0,s=0,t=0;

                for(j=0;j<30;j++){
                if(ax[x][j]==0)
                 r=r+1;}

                for(j=0;j<50;j++){
                if(ay[x][j]==0)
                 s=s+1;}

                for(j=0;j<167;j++){
                if(az[x][j]==0)
                 t=t+1;}

                printf("The available seats are:\n");
                printf("1. AC (seat): %d\n",r);
                printf("2. AC (chair): %d\n",s);
                printf("3. Non-AC: %d\n",t);
                printf("4. Quit\n");

                printf("\nSelect your option (1-4): ");
                scanf("%d",&u);



                if(u==1)
                {
                    if(r>0)
                        {
                         a=0;
                        printf("\nEnter no of passenger  (adult child):  ");
                        scanf("%d %d",&c, &e);
                         b=c+e;

                        if(r>=b)
                        {

                        for(j=0;j<30;j++)
                        {if(ax[x][j]==1)
                         a=j+1;}


                        for(j=a;j<a+b;j++)
                         ax[x][j]=1;


                         g=1200;
                         h=g*0.5;
                         f= c*g+e*h;

                        printf("\nYour Ticket (Tiger Express)\n");
                        printf("- Date of Journey:  %d/%d/%d\n",o,p,q);
                        printf("- The number of seat(s):  %d\n",b);
                        printf("- Total fare= %d*%d + %d*%d =  %d Tk\n",c,g,e,h,f);
                        printf("- The seat no:  %d-%d\n",(a+1),(a+b));
                        }

                        else
                        printf("\nSorry invalid number of seats\n");
                        }
                    else
                    printf("\nSorry no seats available\n");

                    printf("\n");
                }



                if(u==2)
                {
                    if(s>0)
                        {
                        a=0;
                        printf("Enter no of passenger  (adult child):  ");
                        scanf("%d %d",&c, &e);
                         b=c+e;

                        if(s>=b)
                        {

                        for(j=0;j<50;j++)
                        {if(ay[x][j]==1)
                         a=j+1;}


                        for(j=a;j<a+b;j++)
                         ay[x][j]=1;


                         g=1200*0.75;
                         h=g*0.5;
                         f= c*g+e*h;

                        printf("\nYour Ticket (Tiger Express)\n");
                        printf("- Date of Journey:   %d/%d/%d\n",o,p,q);
                        printf("- The number of seat(s):   %d\n",b);
                        printf("- Total fare= %d*%d + %d*%d =  %d Tk\n",c,g,e,h,f);
                        printf("- The seat no:  %d-%d\n",(a+1+30),(a+b+30));
                        }

                        else
                        printf("\nSorry invalid number of seats\n");
                        }
                    else
                    printf("\nSorry no seats available\n");

                    printf("\n");
                }



                if(u==3)
                {
                    if(t>0)
                        {
                        a=0;
                        printf("Enter no of passenger  (adult child):  ");
                        scanf("%d %d",&c, &e);
                         b=c+e;

                        if(t>=b)
                        {

                        for(j=0;j<167;j++)
                        {if(az[x][j]==1)
                         a=j+1;}


                        for(j=a;j<a+b;j++)
                         az[x][j]=1;


                         g=1200*0.5;
                         h=g*0.5;
                         f= c*g+e*h;

                        printf("\nYour Ticket (Tiger Express)\n");
                        printf("- Date of Journey:  %d/%d/%d\n",o,p,q);
                        printf("- The number of seat(s):  %d\n",b);
                        printf("- Total fare= %d*%d + %d*%d =  %d Tk\n",c,g,e,h,f);
                        printf("- The seat no:  %d-%d\n",(a+1+80),(a+b+80));
                        }



                        else
                        printf("\nSorry invalid number of seats\n");
                        }
                    else
                    printf("\nSorry no seats available\n");

                    printf("\n");
                }


                if(u==4) break;


                if((u<1) || (u>4))
                {
                 printf("\ninvalid option");
                 printf("\n");
                }



            }

            else
            printf("\nTicket not Available\n");

            printf("\n\n");
    }



return 0;
}
