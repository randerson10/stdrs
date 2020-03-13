// The following defines can be found in config.h and can be adjusted based on
// need. uint32_t and uint64_t are easier to debug but not big enough for challenging
// problems. LARGEINT2X should be twice as big as LARGEINT and LARGESIGNED2X should
// hold a LARGEINT2X in its positive section (so uint256_t would need int512_t)
/* "Unsigned int type to hold original value and calculations" */
#define LARGEINT uint128_t

/* "Unsigned int twice as large as LARGEINT (bit-wise)" */
#define LARGEINT2X uint256_t

/* "Signed int made of twice the bits as LARGEINT2X" */
#define LARGESIGNED2X int512_t