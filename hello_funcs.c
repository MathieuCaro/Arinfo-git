
#include <stdio.h>
#include "hello_funs.h"

void say_hello(const char* to_who){
	printf("Hello World %s!\n",to_who);
}

void say_something_to_someone(const char* smth, const char* to_who){
	printf("%s %s!\n",smth, to_who);
}

