# IEEE Floating Point

- [Floating Point Numbers](https://floating-point-gui.de/formats/fp/).
    * A significand that contains the number’s digits. Negative significands represent negative numbers.
    * An exponent that says where the decimal (or binary) point is placed relative to the beginning of the significand. Negative exponents represent numbers that are very small (i.e. close to zero).

| Format | Total bits | Significand bits | Exponent bits | Smallest number | Largest number |
| ------ | ---------- | ---------------- | ------------- | --------------- | -------------- |
| Single precision | 32 | 23 + 1 sign | 8 | ca. 1.2 ⋅ 10^-38 | ca. 3.4 ⋅ 1038 |
Double precision | 64 | 52 + 1 sign | 11 | ca. 2.2 ⋅ 10^-308 | ca. 1.8 ⋅ 10308 |
- [IEEE Standard 754 Floating Point Numbers](https://courses.cs.washington.edu/courses/cse401/01au/details/fp.html).
    * Zero
      * As mentioned above, zero is not directly representable in the straight format, due to the assumption of a leading one (we'd need to specify a true zero mantissa to yield a value of zero). Zero is a special value denoted with an exponent field of 0 and a mantissa of 0. Note that -0 and +0 are distinct values, though they both compare as equal.
    * Denormalized
      * If the exponent is all zeros, but the mantissa is not (else it would be interpreted as zero), then the value is a denormalized number, which does not have an assumed leading one before the binary point. Thus, this represents a number (-1)^s x 0.m x 2^-126, where s is the sign bit and m is the stored mantissa. From this you can interpret zero as a special type of denormalized number.
    * Infinity
      * The values +infinity and -infinity are denoted with an exponent of all ones and a mantissa of all zeros. The sign bit distinguishes between negative infinity and positive infinity. Being able to denote infinity as a specific value is useful because it allows operations to continue past overflow situations. Operations with infinite values are well defined in IEEE.
    * Not A Number (NAN)
      * Finally, the value NaN (Not a Number) is used to represent a value that is an error of some form. This is is represented with an exponent field of all ones and a zero sign bit or a mantissa that it not 1 followed by zeros. This is a special value that might be used to denote a variable that doesn't yet hold a value.
