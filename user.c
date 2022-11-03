#include <libc.h>

char buff[24];

int pid;

int __attribute__ ((__section__(".text.main")))
  main(void)
{
    /* Next line, tries to move value 0 to CR3 register. This register is a privileged one, and so it will raise an exception */
     /* __asm__ __volatile__ ("mov %0, %%cr3"::"r" (0) ); */

  
  /*
  char c;
  int n = get_key(&c);
  write(1,&c,1);

  itoa(n,buff);
  write(1,buff,strlen(buff));
  perror();

  
  write(1,"\n",strlen(buff));

  n = get_key(&c);
  write(1,&c,1);

  itoa(n,buff);
  write(1,buff,strlen(buff));
  */

  while(1) {  
  }
}
