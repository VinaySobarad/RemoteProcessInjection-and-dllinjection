# RemoteProcessInjection and dll injection

Here's a basic remote process injection and dll injection

Make sure to write the proper pid 

And before seeing remoteprocessinjection, make sure to see Opening program and message box, because it might help you to understand the code better

LPVOID data types are defined as being a "pointer to a void object". 
This may seem strange to some people, but the ANSI-C standard allows 
for generic pointers to be defined as "void*" types. 
This means that LPVOID pointers can be used to point to any type of object, 
without creating a compiler error.
