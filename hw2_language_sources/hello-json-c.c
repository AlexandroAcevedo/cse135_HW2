#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    time_t now = time(NULL);
    printf("Content-Type: application/json\n\n");
    printf("{\n");
    printf("  \"message\": \"Hello from Alex\",\n");
    printf("  \"language\": \"C CGI\",\n");
    printf("  \"time\": \"%s\",\n", ctime(&now));
    printf("  \"ip\": \"%s\"\n", getenv("REMOTE_ADDR"));
    printf("}\n");
    return 0;
}
