/*  DO NOT EDIT THIS FILE.

    It has been auto-edited by fixincludes from:

	"fixinc/tests/inc/sys/wait.h"

    This had to be done to correct non-standard usages in the
    original, manufacturer supplied header file.  */



#if defined( AIX_SYSWAIT_CHECK )
/* bos325, */
struct rusage;
extern pid_t wait3();
	/* pid_t wait3(int *, int, struct rusage *); */
#endif  /* AIX_SYSWAIT_CHECK */


#if defined( NEXT_WAIT_UNION_CHECK )
extern pid_d wait(void*);
#endif  /* NEXT_WAIT_UNION_CHECK */
