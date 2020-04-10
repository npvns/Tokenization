
=================================
Benefit of Key Based Tokenization
=================================
Tokenization : Tokenization is a protection method where data is protected in transparent way. After protection
               datatype and length of data will be preserved.
               969995708 <====> 2109350236

Key based Tokenization : In this approach we are using combination of "key and set of codebooks" to protect the
                         data.

Key : Encryption keys may be of 128, 256, 512 bits.

Codebook : Codebook is static map table where where input character/digit/alphabet are mappded to randomized
           character/digit/alphabet.

Security : Combination of "codebook and key" making the algorithm more secure. Even if codebook is kept open,
           it is as secure as encryption methods. Unless you know the key, you can not use the codebook in
           right way.

Scalable : Codebook is a constant entity. But when it's combined with key, it becomes dynamic. Means same set
           of codebooks produce unique codebook for each unique key.

Memory Footprint : Very low. Code book size = (Length of key in bit) * (base of input) * ( sizeof int) .
                   Size of the codebook for numeric data with 128 bit key will be = (128 * 10 * 4) bytes.

Supporting multibyte characters : Algorithm supports all kinds of character. No specific handling is required
                                  for unicode.

Chaining and Rounding : If input items are very similar, there protected value will be very random.
                        It's achived via chaining and rounding.
