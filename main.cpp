#include <iostream>
using namespace std;

int main()
{
    
    long dlina = 0;
    char stroka[300] ;
    gets(stroka);
    dlina = strlen(stroka);
    int pol = 1;
    int cng=0;
    
    
    
    for( int i = 0 ; i<dlina ; i++)
    {
        if( stroka [i] == ';' ||  stroka[i] == ':' || stroka[i] ==  '.' ||  stroka[i] == ',' ||  stroka[i] == '?' ||  stroka[i] =='!' || stroka[i] == '-' ||  stroka[i] =='(' || stroka[i] == ')'|| stroka[i]== '\''|| stroka[i] == ' ')
        {
            cng = cng+1;
            for( int j = i; j<dlina ; j++)
            {
                stroka[j]= stroka[j+1];
            }
            i--;
            
        }
    }

       for ( int u = 0 ; u < dlina ; u++ )           
    {
        if ( tolower(stroka[u]) != stroka[u] )
        {
            stroka[u] = tolower(stroka[u]);
        }
        
    }
     
 
    if(stroka[0] == 0)
    {
        cout<< "1"<<'\n';
    }
    else
    {
        for( long l = 0 ; l < ((dlina-cng)/2); l++ )
        {
            if( stroka[l] == stroka[(dlina-cng)-l-1])
            {
                pol = pol*1 ;
            }
            else
            {
                pol = pol*0;
            }
        }
        if (pol == 1)
        {
            cout<<"1"<<'\n';
        }
        else
        {
            cout<<"0"<<'\n';
        }
    }
    cng = 0 ;
    return 0 ;
}


