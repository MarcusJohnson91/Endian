**C2X Endian Proposal**
===================

Rationale:
--------------
* Detecting the Word/Byte/Bit order of a target machine is hacky and prone to failure.
* The compiler already knows what word/byte/bit order it's compiling the software for.
* It's kind of hard to figure out the word order, and especially hard to figure out the SIMD/Float orders.

License:
-----------
The endian.h header, this readme, and all of their contents are released into the public domain.
