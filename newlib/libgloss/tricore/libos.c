#include<stddef.h>
#include<stdlib.h>
#include<errno.h>
#include<stdio.h>
#include<sys/stat.h>
#include<sys/time.h>
#include<sys/times.h>

int __attribute__ ((weak)) _my_errno;
__attribute__ ((weak)) int *
__errno ()
{
    return &_my_errno;
}

/* define an empty environment */
__attribute__ ((weak)) char *__my_environ[2] = {"",0};
__attribute__ ((weak)) char **environ = __my_environ;

/*
 * implementation of not supported system calls
 */

int getpid ()
{
	return 0;
};


int isatty (int desc)
{
	if (desc==0 || desc==1 || desc==2) return 1;
	return 0;
};

int fork ()
{
	abort();
};


int wait (int *status)
{
	abort();
};


int kill (int pid, int sig)
{
	abort();
};


int link (const char *old, const char *new)
{
	abort();
};


#if 1
int stat (const char *file, struct stat *buf)
{
	abort();
};


int fstat (int fd, struct stat *buf)
{
	if (fd < 0 || fd > 2)
	{
		errno = EBADF;
		return -1;
	}
	buf->st_mode = S_IFCHR;
	buf->st_blksize = S_BLKSIZE;
	return 0;
};

int symlink (const char *path1, const char *path2)
{
  errno = ENOSYS;
  return -1;
}

int fchmod (int __fd, mode_t __mode)
{
  errno = ENOSYS;
  return -1;
}

ssize_t
readlink (const char *path, char *buf, size_t bufsiz)
{
	  errno = ENOSYS;
	  return -1;
}

int
closedir (struct DIR *dirp)
{
  errno = ENOSYS;
  return -1;
}

struct DIR *
opendir (const char *dirname)
{
  errno = ENOSYS;
  return NULL;
}

struct dirent *
readdir (struct DIR *dirp)
{
  errno = ENOSYS;
  return NULL;
}


/*
 * return 0 and baselined tv, user has to override the value
 */

int gettimeofday (struct timeval *tv, void *tz)
{
	tv->tv_sec=0;
	tv->tv_usec=0;
	return 0;
};

char *
getcwd (pt, size)
     char *pt;
     size_t size;
{
  errno = ENOSYS;
  return (char *) NULL;
}

#define LINUX_LINK_MAX	127
long int
pathconf (path, name)
     const char *path;
     int name;
{
  errno = ENOSYS;
  return LINUX_LINK_MAX;
}

int
chmod (const char *path, mode_t mode)
{
  errno = ENOSYS;
  return -1;
}

int
chdir (const char *path)
{
  errno = ENOSYS;
  return -1;
}

int
mkdir (const char *path, mode_t mode)
{
  errno = ENOSYS;
  return -1;
}


#endif

#if 0
#include "dirent.h"

int getdents(unsigned int fd, struct dirent *dirp, unsigned int count)
{
	abort();
}
#endif
