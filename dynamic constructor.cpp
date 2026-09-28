Please create a PDF of this paper for me, but make sure no text is left out—everything must be included in the PDF.

//dynamic constructor 
#include<iostream.h>
#include<conio.h>
class string
{
    int len;
    char *nm;
    public:
        string();
        {
            cout << "\n default dynamic constructor";
            len=0;
            nm=rew char[len+1];
        }
        string(char *s)
        {
            cout << "\n parameteriz dynamic constructor";
            len=scrlen(s);
            nm=new char[len + 1];
            strcpy(nm,s);
        }
        void put()
        {
            cout << "\n none" << nm;
        }
        friend string concate (string s1 str s2);
};
string concate (string s1, str s2)
{
    str s3;
    s3.len=s1.len+s2.len;
    s3.nm=new char [s3.len+1];
    strcpy(s3.nm,s1.nm);
    strcat(s3.nm,s2.nm);
    return(s3);
}
void main ()
{
    clrscr();
    string s1("surani"),s2("het"),s3;
    a1.put();
    a2.put();
   a3.put();
   getch ();
}
