#include "System Command.h"
#ifdef __WIN32
#ifndef __WIN64
//Win32
#include<Windows.h>
#warning "System is Win32"
int Clear(){return system("cls");}
int SetTitle(char *Title){char* Title, *Command;int __len=strlen(Title)+strlen("title ");Command=new char[__len + 5];strcpy(Command, "title ");strcat(Command, Title);return system(Command);}
#endif
#ifdef __WIN64
//Win64
#include<Windows.h>
#warning "System is Win64"
int Clear(){return system("cls");}
int SetTitle(char *Title){char* Title, *Command;int __len=strlen(Title)+strlen("title ");Command=new char[__len + 5];strcpy(Command, "title ");strcat(Command, Title);return system(Command);}
#endif
#endif
#if defined(__linux) || defined(__linux__)
//Linux
#warning "System is Linux"
int Clear(){return system("clear");}
int SetTitle(char *Title){return 0;}
#endif
//Unix
#if (defined(__unix) || defined(__unix__)) && !(defined(__linux) || defined(__linux__))
#warning "System is Unix"
int Clear(){return system("clear");}
int SetTitle(char *Title){return 0;}
#endif
