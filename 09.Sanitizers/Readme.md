# MSVC CLANG AND GNU COMPILERS
## What is a Compiler?
A compiler is a special program that translates a programming language's source code into machine code, bytecode or another programming language. The source code is typically written in a high-level, human-readable language such as Java or C++. A programmer writes the source code in a code editor or an integrated development environment (IDE) that includes an editor, saving the source code to one or more text files. A compiler that supports the source programming language reads the files, analyzes the code, and translates it into a format suitable for the target platform.

Compilers that translate source code to machine code target specific operating systems and computer architectures. This type of output is sometimes referred to as object code (which is not related to object-oriented programming). The outputted machine code is made up entirely of binary bits -- 1s and 0s -- so it can be read and executed by the processors on the target computers. For example, a compiler might output machine code for the Linux x64 platform or Linux ARM 64-bit platform.
MSVC (Microsoft Visual C++) is a proprietary C++ compiler and development environment developed by Microsoft, while Clang and GCC (GNU Compiler Collection) are open-source C++ compilers developed by the LLVM Project and the GNU Project, respectively. Here are some key differences between these compilers:
## Differences:
Compatibility: MSVC is only compatible with Windows, while Clang and GCC are cross-platform compilers that can be used on a variety of operating systems, including Windows, Linux, and macOS.
Code generation: MSVC, Clang, and GCC use different code generation algorithms and optimizations, which can result in slightly different code execution performance.
Compatibility with C++ standards: MSVC, Clang, and GCC all support the latest C++ standards, but they may have different levels of support for older standards or experimental features.
Syntax and features: The compilers may have different syntax and features for certain language constructs, and may support different language extensions.
Development environments: MSVC is typically used with Microsoft Visual Studio, a proprietary integrated development environment (IDE), while Clang and GCC can be used with a variety of IDEs, including Eclipse, NetBeans, and Visual Studio Code.

# Sanitizers:
Tools for finding issues on run time such as memory leaks etc.
Official Documentation link : https://gcc.gnu.org/onlinedocs/gcc/Instrumentation-Options.html