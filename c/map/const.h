#ifndef SS_CONST_H
#define SS_CONST_H

// Define the programs standard exit codes..
// The lower bit determines if the code is
// an error or not. 0 for none error (odd
// number), and 1 gor error (even).
// 0 to 255 are general 256 and up are 
// explicit.


// General success.
#ifndef EXIT_SUCCESS
#define EXIT_SUCCESS		(0xb0000000)
#endif

// General failure (undetermined cause).
#ifndef EXIT_FAILURE
#define EXIT_FAILURE		(0xb00000001)
#endif

// True if exit code is an error, else
// false.
#define IS_ERROR(code)	(code & EXIT_FAILURE)

// Generic memory allocation failure.
#define ERROR_MALLOC		(0xb00010001)

#endif
