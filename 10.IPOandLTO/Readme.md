# IPO/LTO
Link Time Optimization link : https://llvm.org/docs/LinkTimeOptimization.html

## Interprocedural optimization (IPO):
Interprocedural optimization (IPO) is a collection of compiler techniques used in computer programming to improve performance in programs containing many frequently used functions of small or medium length. IPO differs from other compiler optimizations by analyzing the entire program as opposed to a single function or block of code.

IPO seeks to reduce or eliminate duplicate calculations and inefficient use of memory and to simplify iterative sequences such as loops. If a call to another routine occurs within a loop, IPO analysis may determine that it is best to inline that routine. Additionally, IPO may re-order the routines for better memory layout and locality.

IPO may also include typical compiler optimizations applied on a whole-program level, for example dead code elimination (DCE), which removes code that is never executed. IPO also tries to ensure better use of constants. Modern compilers offer IPO as an option at compile-time. The actual IPO process may occur at any step between the human-readable source code and producing a finished executable binary program.

For languages that compile on a file-by-file basis, effective IPO across translation units (module files) requires knowledge of the "entry points" of the program so that a whole program optimization (WPO) can be run. In many cases, this is implemented as a link-time optimization (LTO) pass, because the whole program is visible to the linker.