#ifndef _AASERVER_CONFIG_H_
#define _AASERVER_CONFIG_H_

#define GCC_UNLIKELY(x) (x)
#define GCC_LIKELY(x) (x)

#ifdef _MSC_VER
#define GCC_ATTRIBUTE(x) /* attribute not supported */
#define INLINE __forceinline
#define DB_FASTCALL __fastcall
typedef unsigned __int64	Bit64u;
typedef   signed __int64	Bit64s;
#else
#define GCC_ATTRIBUTE(x) __attribute__((x))
#define INLINE inline
#define DB_FASTCALL
typedef unsigned long long	Bit64u;
typedef   signed long long	Bit64s;
#endif

#if defined(_MSC_VER) && (_MSC_VER >= 1400)
#pragma warning(disable : 4996)
#endif


/* The internal types */
typedef  unsigned char		Bit8u;
typedef    signed char		Bit8s;
typedef unsigned short		Bit16u;
typedef   signed short		Bit16s;
typedef  unsigned long		Bit32u;
typedef    signed long		Bit32s;
typedef unsigned int		Bitu;
typedef signed int			Bits;

typedef Bit32u PhysPt;
typedef Bit8u * HostPt;
typedef Bit32u RealPt;

typedef Bit32s MemHandle;

#define LOG_MSG printf

#endif
