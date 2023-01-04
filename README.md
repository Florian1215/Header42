# Header42
A header for 42 in CLion

## C Header File
```sh
#parse("42_header.h")

#[[#ifndef]]# ${INCLUDE_GUARD}
#[[# define]]# ${INCLUDE_GUARD}

#[[#endif]]#
```

## C Source File
```sh
#parse("42_header.h")

#if (${HEADER_FILENAME})
#[[#include]]# "${HEADER_FILENAME}"
#else
#[[#include]]#
#end
```

## Header Guard
Preferences -> Editor -> Code Style -> C/C++
Header Guard style should be
```sh
${FILE_NAME}_${EXT}
```
