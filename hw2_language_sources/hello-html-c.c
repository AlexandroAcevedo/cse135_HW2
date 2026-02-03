#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    time_t now = time(NULL);
    printf("Content-Type: text/html\n\n");
    printf("<!doctype html><html><head><title>Hello HTML C</title></head><body>");
    printf("<h1>Hello from Alex</h1>");
    printf("<p><strong>Language:</strong> C CGI</p>");
    printf("<p><strong>Time:</strong> %s</p>", ctime(&now));
    printf("<p><strong>Your IP:</strong> %s</p>", getenv("REMOTE_ADDR"));
    printf("</body></html>");
    return 0;
}
