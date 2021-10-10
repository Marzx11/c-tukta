
            }
        } 
    }


}
void sortdata(float totalaver[5],float scoreaverage[5][3],string (&idname)[5][2])
{
   int r = 5,c = 2,n = 5;
   int i,j,temp;
    for(i=0;i<n;i++)
	    {		
		    for(j=i+1;j<n;j++)
		    {
			    if(totalaver[i]>totalaver[j])