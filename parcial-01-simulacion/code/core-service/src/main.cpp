#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    /*https://cybmeta.com/meta-charset-como-y-por-que-utilizarlo-siempre*/
    cout << "Content-type:text/html; charset=utf-8\r\n\r\n";
    
    cout << "<!DOCTYPE html>\n";
    cout << "<html>\n";
    cout << "<head>\n";
    cout << "<title>Hello World - Second CGI Program</title>\n";
    cout << "<meta charset='utf-8'>\n";
    cout << "</head>\n";
    cout << "<body>\n";
    cout << "<form action='/cgi-bin/main.cgi' method='post'>";
    cout << "<label>Name:</label>\n";
    cout << "<input type='text' name='name'>\n";
    cout << "<input type='submit' name='sbmt' value='enviar'>\n";
    cout << "</form>\n";

    string str = "";
    cin >> str;
    if (str != "")
    {
        cout << "<h2>Hello! your name is: " << str << "</h2>\n";
    }

    cout << "</body>\n";
    cout << "</html>\n";

    return 0;
}