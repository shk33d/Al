#include <cstring>
#include <iostream>
#include <curl/curl.h>
using namespace std;

size_t WriteCallback(void* contents,size_t size,size_t nmemb, string*s)
{
    size_t newLenght = size * nmemb;
    s->append((char*)contents,NewLenght);
    return NewLenght;
}
int main() {
    CURL*curl;
    CURLcode res;
    string htmlContent;

    curl = curl_easy_int()
    if(curl) {
    curl_easy_setop(curl,CURLOP_URL
