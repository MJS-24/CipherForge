#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

void printBanner()
{
#ifdef _WIN32

  SetConsoleOutputCP(CP_UTF8);

  printf("\n");
  printf("  ██████╗██╗██████╗ ██╗  ██╗███████╗██████╗ ███████╗ ██████╗ ██████╗  ██████╗ ███████╗\n");
  printf(" ██╔════╝██║██╔══██╗██║  ██║██╔════╝██╔══██╗██╔════╝██╔═══██╗██╔══██╗██╔════╝ ██╔════╝\n");
  printf(" ██║     ██║██████╔╝███████║█████╗  ██████╔╝█████╗  ██║   ██║██████╔╝██║  ███╗█████╗  \n");
  printf(" ██║     ██║██╔═══╝ ██╔══██║██╔══╝  ██╔══██╗██╔══╝  ██║   ██║██╔══██╗██║   ██║██╔══╝  \n");
  printf(" ╚██████╗██║██║     ██║  ██║███████╗██║  ██║██║     ╚██████╔╝██║  ██║╚██████╔╝███████╗\n");
  printf("  ╚═════╝╚═╝╚═╝     ╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝╚═╝      ╚═════╝ ╚═╝  ╚═╝ ╚═════╝ ╚══════╝\n");
  printf("\n");
  printf("                 CipherForge Encryption Framework v1.0\n");
  printf("-----------------------------------------------------------------------------\n");
  printf("  A modular command-line framework for encryption and cryptographic utilities.\n");
  printf("  Type 'help' to list available commands.\n");
  printf("-----------------------------------------------------------------------------\n\n");
#else
  printf("\n");
  printf("   _____ _       _                _____                    \n");
  printf("  / ____(_)     | |              |  ___|                   \n");
  printf(" | |     _ _ __ | |__   ___ _ __ | |_ ___  _ __ __ _  ___  \n");
  printf(" | |    | | '_ \\| '_ \\ / _ \\ '__||  _/ _ \\| '__/ _` |/ _ \\ \n");
  printf(" | |____| | |_) | | | |  __/ |   | || (_) | | | (_| |  __/ \n");
  printf("  \\_____|_| .__/|_| |_|\\___|_|   \\_| \\___/|_|  \\__, |\\___| \n");
  printf("          | |                                  __/ |       \n");
  printf("          |_|                                 |___/        \n");
  printf("\n");
  printf("             CipherForge Encryption Framework v1.0\n");
  printf("-------------------------------------------------------------\n");
  printf("Type 'help' to list available commands.\n\n");

  #endif
}

