#ifndef _YAVL_ASM_H
#define _YAVL_ASM_H

typedef enum {
	NUL,

	/**
	 * PSH $N
	 *
	 * Push the value $N onto the stack.
	 */
	PSH,

	/**
	 * POP
	 *
	 * Pop the stack and discard the value.
	 */
	POP,

	/**
	 * ADD
	 *
	 * Pop the top two values off the stack, add them, and push the result onto
	 * the stack.
	 */
	ADD,

	/**
	 * LGI
	 *
	 * Pop the stack and log the value as an integer.
	 */
	LGI,

	/**
	 * LGC
	 *
	 * Pop the stack and log the value as a char.
	 */
	LGC,

	/**
	 * HLT
	 *
	 * Halt the program and exit successfully.
	 */
	HLT,

	/**
	 * SET $R, $N
	 *
	 * Store the literal value $N in the register $R.
	 */
	SET,

	/**
	 * GET $R
	 *
	 * Get the value from register $R and store it in the stack.
	 */
	GET,

	/**
	 * JMP $N
	 *
	 * Jump unconditionally to line $N.
	 */
	JMP,

	/**
	 * JEZ $N
	 *
	 * Pop the stack and jump to line $N if the value is equal to 0.
	 */
	JEZ,

	/**
	 * JGZ $N
	 *
	 * Pop the stack and jump to line $N if the value is greater than 0.
	 */
	JGZ,

	/**
	 * JLZ $N
	 *
	 * Pop the stack and jump to line $N if the value is less than 0.
	 */
	JLZ,

	/**
	 * JEQ $N
	 *
	 * Pop the top two values off the stack and jump to line $N if they are equal.
	 */
	JEQ,
	
	/**
	 * JNQ $N
	 *
	 * Pop the twop two values off the stack and jump to line $N if they are not
	 * equal.
	 */
	JNQ
} YAVL_ASM;

#endif

