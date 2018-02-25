Metropolitan State University, St. Paul
Department of Information and Computer Science
ICS 462 Operating Systems
Spring 2018
Programming Assignment #1
Linux Kernel Modules
In this project, you will learn how to create a kernel module and load it into
the Linux kernel. The project can be completed using the Linux virtual machine
that is available in Materials Content Resources. Although you may use an editor
to write these C programs, you will have to use the terminal application to
compile the programs, and you will have to enter commands on the command line
to manage the modules in the kernel As you’ll discover, the advantage of
developing kernel modules is that it is a relatively easy method of interacting
with the kernel, thus allowing you to write programs that directly invoke kernel
functions. It is important for you to keep in mind that you are indeed writing
kernel code that directly interacts with the kernel. That normally means that
any errors in the code could crash the system! However, since you will be using
a virtual machine, any failures will at worst only require rebooting the system.

Part II Assignment
In the module entry point, create a linked list containing five struct birthday elements. Traverse
the linked list and output its contents to the kernel log buffer. Invoke the dmesg command to ensure
the list is properly constructed once the kernel module has been loaded. (Provide a screenshot)
In the module exit point, delete the elements from the linked list and return the free memory back
to the kernel. Again, invoke the dmesg command to check that the list has been removed once the
kernel module has been unloaded. (Provide a screenshot)
Zip your ch2 folder and upload it to D2L: Assessments  Assignments  Programming
Assignment #1
