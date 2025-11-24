n C, storage classes define:

Scope (where the variable is accessible)

Lifetime (how long the variable exists)

Default value

Location (stack, data segment, etc.)

There are 4 main storage classes:

1. auto

Default for local variables.

Stored in stack.

Lifetime: inside the function/block.

Not accessible outside the block.

Example:

auto int x = 10;  // same as: int x = 10;

2. static

Preserves value between function calls.

Stored in data segment (not stack).

Default value = 0.

Can be:

Static local variable → survives entire program.

Static global variable → accessible only inside the file.

Example:

static int count = 0;

3. extern

Used to declare a global variable in another file.

No memory is allocated; it only references an existing global variable.

Example (in file1.c):

int x = 5;


In file2.c:

extern int x;   // use variable x from file1.c

4. register

Suggests storing variable in CPU register (fast access).

Cannot take its address using &.

Example:

register int i;
