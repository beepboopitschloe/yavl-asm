# yavl-asm

Documents YAVL assembly language. The only code in this repo is a .h file used
to define the instruction set. Its purpose is to keep the YAVL VM and compiler
in sync with each other. It also provides documentation for the instructions.

## Opcodes

```
Code:     PSH
Example:  PSH 10

Pushes the value 10 onto the stack.
```

```
Code:	 ADD

Pop the top two values on the stack, add them together, and push the value
onto the stack.
```

```
Code:  POP

Pop the stack and discard the value.
```

```
Code:     SET
Example:  SET $A, 10

Sets the register A to the value 10.
```

```
Code:  LGI

Pops the stack and prints the value as an integer.
```

```
Code:  LGC

Pops the stack and prints the value as a char.
```

```
Code:  HLT

Halts the program.
```

