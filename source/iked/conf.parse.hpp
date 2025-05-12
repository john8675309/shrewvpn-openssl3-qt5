// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton interface for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


/**
 ** \file conf.parse.hpp
 ** Define the yy::parser class.
 */

// C++ LALR(1) parser skeleton written by Akim Demaille.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

#ifndef YY_YY_CONF_PARSE_HPP_INCLUDED
# define YY_YY_CONF_PARSE_HPP_INCLUDED


# include <cstdlib> // std::abort
# include <iostream>
# include <stdexcept>
# include <string>
# include <vector>

#if defined __cplusplus
# define YY_CPLUSPLUS __cplusplus
#else
# define YY_CPLUSPLUS 199711L
#endif

// Support move semantics when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_MOVE           std::move
# define YY_MOVE_OR_COPY   move
# define YY_MOVE_REF(Type) Type&&
# define YY_RVREF(Type)    Type&&
# define YY_COPY(Type)     Type
#else
# define YY_MOVE
# define YY_MOVE_OR_COPY   copy
# define YY_MOVE_REF(Type) Type&
# define YY_RVREF(Type)    const Type&
# define YY_COPY(Type)     const Type&
#endif

// Support noexcept when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_NOEXCEPT noexcept
# define YY_NOTHROW
#else
# define YY_NOEXCEPT
# define YY_NOTHROW throw ()
#endif

// Support constexpr when possible.
#if 201703 <= YY_CPLUSPLUS
# define YY_CONSTEXPR constexpr
#else
# define YY_CONSTEXPR
#endif
# include "location.hh"


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

namespace yy {
#line 182 "conf.parse.hpp"




  /// A Bison parser.
  class conf_parser
  {
  public:
#ifdef YYSTYPE
# ifdef __GNUC__
#  pragma GCC message "bison: do not #define YYSTYPE in C++, use %define api.value.type"
# endif
    typedef YYSTYPE value_type;
#else
    /// Symbol semantic values.
    union value_type
    {
#line 64 "conf.parse.yy"

	int		ival;
	BDATA *	bval;

#line 205 "conf.parse.hpp"

    };
#endif
    /// Backward compatibility (Bison 3.8).
    typedef value_type semantic_type;

    /// Symbol locations.
    typedef location location_type;

    /// Syntax errors thrown from user actions.
    struct syntax_error : std::runtime_error
    {
      syntax_error (const location_type& l, const std::string& m)
        : std::runtime_error (m)
        , location (l)
      {}

      syntax_error (const syntax_error& s)
        : std::runtime_error (s.what ())
        , location (s.location)
      {}

      ~syntax_error () YY_NOEXCEPT YY_NOTHROW;

      location_type location;
    };

    /// Token kinds.
    struct token
    {
      enum token_kind_type
      {
        YYEMPTY = -2,
    END = 0,                       // "end of file"
    YYerror = 256,                 // error
    YYUNDEF = 257,                 // "invalid token"
    BCB = 258,                     // "begin section"
    ECB = 259,                     // "end section"
    BSB = 260,                     // "begin grouping"
    ESB = 261,                     // "end grouping"
    EOS = 262,                     // "end of statement"
    SEQ = 263,                     // "sequence"
    ENABLE = 264,                  // "enable"
    DISABLE = 265,                 // "disable"
    FORCE = 266,                   // "force"
    DRAFT = 267,                   // "draft"
    RFC = 268,                     // "rfc"
    DAEMON = 269,                  // "deamon section"
    SOCK = 270,                    // "socket"
    IKE = 271,                     // "ike"
    NATT = 272,                    // "natt"
    SYSLOG = 273,                  // "syslog"
    LL_NONE = 274,                 // "none"
    LL_ERROR = 275,                // "error"
    LL_INFO = 276,                 // "info"
    LL_DEBUG = 277,                // "debug"
    LL_LOUD = 278,                 // "loud"
    LL_DECODE = 279,               // "decode"
    LOG_LEVEL = 280,               // "log level"
    LOG_FILE = 281,                // "log file"
    DHCP_FILE = 282,               // "dhcp file"
    PCAP_DECRYPT = 283,            // "decrypted ike pcap dump file"
    PCAP_ENCRYPT = 284,            // "encrypted ike pcap dump file"
    RETRY_COUNT = 285,             // "retry count"
    RETRY_DELAY = 286,             // "retry delay"
    NETGROUP = 287,                // "netgroup section"
    XAUTH_LDAP = 288,              // "xauth ldap section"
    LD_VERSION = 289,              // "version"
    LD_URL = 290,                  // "url"
    LD_BASE = 291,                 // "base"
    LD_SUBTREE = 292,              // "subtree"
    LD_BIND_DN = 293,              // "bind dn"
    LD_BIND_PW = 294,              // "bind pw"
    LD_ATTR_USER = 295,            // "user attribute"
    LD_ATTR_GROUP = 296,           // "group attribute"
    LD_ATTR_MEMBER = 297,          // "member attribute"
    XCONF_LOCAL = 298,             // "xconfig local section"
    NETWORK4 = 299,                // "network4"
    DNSS4 = 300,                   // "domain name server"
    NBNS4 = 301,                   // "nerbios name server"
    DNS_SUFFIX = 302,              // "dns suffix"
    DNS_LIST = 303,                // "dns list"
    BANNER = 304,                  // "banner"
    PFS_GROUP = 305,               // "pfs group"
    PEER = 306,                    // "peer section"
    CONTACT = 307,                 // "contact type"
    INITIATOR = 308,               // "initiator"
    RESPONDER = 309,               // "responder"
    EXCHANGE = 310,                // "exchange type"
    MAIN = 311,                    // "main"
    AGGRESSIVE = 312,              // "aggressive"
    NATT_MODE = 313,               // "natt mode"
    NATT_RATE = 314,               // "natt keepalive rate"
    DPD_MODE = 315,                // "dpd mode"
    DPD_DELAY = 316,               // "dpd notifiy delay"
    DPD_RETRY = 317,               // "dpd notifiy retries"
    FRAG_IKE_MODE = 318,           // "frag ike mode"
    FRAG_IKE_SIZE = 319,           // "frag ike size"
    FRAG_ESP_MODE = 320,           // "frag esp mode"
    FRAG_ESP_SIZE = 321,           // "frag esp size"
    PEERID = 322,                  // "peer id"
    LOCAL = 323,                   // "local"
    REMOTE = 324,                  // "remote"
    ADDR = 325,                    // "address"
    FQDN = 326,                    // "fqdn"
    UFQDN = 327,                   // "ufqdn"
    ASN1DN = 328,                  // "asn1dn"
    KEYID = 329,                   // "keyid"
    AUTHDATA = 330,                // "authdata"
    PSK = 331,                     // "psk"
    CA = 332,                      // "ca"
    CERT = 333,                    // "cert"
    PKEY = 334,                    // "pkey"
    LIFE_CHECK = 335,              // "lifetime check"
    OBEY = 336,                    // "obey"
    CLAIM = 337,                   // "claim"
    STRICT = 338,                  // "strict"
    EXACT = 339,                   // "exact"
    XAUTH_SOURCE = 340,            // "xauth source"
    XCONF_SOURCE = 341,            // "xconf source"
    PULL = 342,                    // "pull"
    PUSH = 343,                    // "push"
    LDAP = 344,                    // "ldap"
    PLCY_MODE = 345,               // "policy mode"
    CONFIG = 346,                  // "config"
    COMPAT = 347,                  // "compat"
    PLCY_LIST = 348,               // "policy list section"
    INCLUDE = 349,                 // "include"
    EXCLUDE = 350,                 // "exclude"
    PROPOSAL = 351,                // "proposal section"
    ISAKMP = 352,                  // "isakmp"
    AH = 353,                      // "ah"
    ESP = 354,                     // "esp"
    IPCOMP = 355,                  // "ipcomp"
    AUTH = 356,                    // "auth"
    HYB_XA_RSA = 357,              // "hybrid xauth rsa"
    MUT_XA_RSA = 358,              // "mutual xauth rsa"
    MUT_XA_PSK = 359,              // "mutual xauth psk"
    MUT_RSA = 360,                 // "mutual rsa"
    MUT_PSK = 361,                 // "mutual psk"
    CIPH = 362,                    // "cipher"
    KLEN = 363,                    // "klen"
    HASH = 364,                    // "hash"
    MSGA = 365,                    // "hmac"
    COMP = 366,                    // "compress"
    DHGR = 367,                    // "dh group"
    ALG_AES = 368,                 // "aes"
    ALG_BLOWFISH = 369,            // "blowfish"
    ALG_3DES = 370,                // "3des"
    ALG_CAST = 371,                // "cast"
    ALG_DES = 372,                 // "des"
    ALG_MD5 = 373,                 // "md5"
    ALG_SHA1 = 374,                // "sha1"
    ALG_SHA2_256 = 375,            // "sha2-256"
    ALG_SHA2_384 = 376,            // "sha2-384"
    ALG_SHA2_512 = 377,            // "sha2-512"
    ALG_DHGR = 378,                // "dhgr"
    ALG_DEFLATE = 379,             // "deflate"
    ALG_LZS = 380,                 // "lzs"
    LIFE_SEC = 381,                // "life sec"
    LIFE_KBS = 382,                // "life kbs"
    NUMBER = 383,                  // "number value"
    QUOTED = 384,                  // "quoted value"
    LABEL = 385,                   // "label value"
    ADDRESS = 386,                 // "address value"
    NETWORK = 387                  // "network value"
      };
      /// Backward compatibility alias (Bison 3.6).
      typedef token_kind_type yytokentype;
    };

    /// Token kind, as returned by yylex.
    typedef token::token_kind_type token_kind_type;

    /// Backward compatibility alias (Bison 3.6).
    typedef token_kind_type token_type;

    /// Symbol kinds.
    struct symbol_kind
    {
      enum symbol_kind_type
      {
        YYNTOKENS = 137, ///< Number of tokens.
        S_YYEMPTY = -2,
        S_YYEOF = 0,                             // "end of file"
        S_YYerror = 1,                           // error
        S_YYUNDEF = 2,                           // "invalid token"
        S_BCB = 3,                               // "begin section"
        S_ECB = 4,                               // "end section"
        S_BSB = 5,                               // "begin grouping"
        S_ESB = 6,                               // "end grouping"
        S_EOS = 7,                               // "end of statement"
        S_SEQ = 8,                               // "sequence"
        S_ENABLE = 9,                            // "enable"
        S_DISABLE = 10,                          // "disable"
        S_FORCE = 11,                            // "force"
        S_DRAFT = 12,                            // "draft"
        S_RFC = 13,                              // "rfc"
        S_DAEMON = 14,                           // "deamon section"
        S_SOCK = 15,                             // "socket"
        S_IKE = 16,                              // "ike"
        S_NATT = 17,                             // "natt"
        S_SYSLOG = 18,                           // "syslog"
        S_LL_NONE = 19,                          // "none"
        S_LL_ERROR = 20,                         // "error"
        S_LL_INFO = 21,                          // "info"
        S_LL_DEBUG = 22,                         // "debug"
        S_LL_LOUD = 23,                          // "loud"
        S_LL_DECODE = 24,                        // "decode"
        S_LOG_LEVEL = 25,                        // "log level"
        S_LOG_FILE = 26,                         // "log file"
        S_DHCP_FILE = 27,                        // "dhcp file"
        S_PCAP_DECRYPT = 28,                     // "decrypted ike pcap dump file"
        S_PCAP_ENCRYPT = 29,                     // "encrypted ike pcap dump file"
        S_RETRY_COUNT = 30,                      // "retry count"
        S_RETRY_DELAY = 31,                      // "retry delay"
        S_NETGROUP = 32,                         // "netgroup section"
        S_XAUTH_LDAP = 33,                       // "xauth ldap section"
        S_LD_VERSION = 34,                       // "version"
        S_LD_URL = 35,                           // "url"
        S_LD_BASE = 36,                          // "base"
        S_LD_SUBTREE = 37,                       // "subtree"
        S_LD_BIND_DN = 38,                       // "bind dn"
        S_LD_BIND_PW = 39,                       // "bind pw"
        S_LD_ATTR_USER = 40,                     // "user attribute"
        S_LD_ATTR_GROUP = 41,                    // "group attribute"
        S_LD_ATTR_MEMBER = 42,                   // "member attribute"
        S_XCONF_LOCAL = 43,                      // "xconfig local section"
        S_NETWORK4 = 44,                         // "network4"
        S_DNSS4 = 45,                            // "domain name server"
        S_NBNS4 = 46,                            // "nerbios name server"
        S_DNS_SUFFIX = 47,                       // "dns suffix"
        S_DNS_LIST = 48,                         // "dns list"
        S_BANNER = 49,                           // "banner"
        S_PFS_GROUP = 50,                        // "pfs group"
        S_PEER = 51,                             // "peer section"
        S_CONTACT = 52,                          // "contact type"
        S_INITIATOR = 53,                        // "initiator"
        S_RESPONDER = 54,                        // "responder"
        S_EXCHANGE = 55,                         // "exchange type"
        S_MAIN = 56,                             // "main"
        S_AGGRESSIVE = 57,                       // "aggressive"
        S_NATT_MODE = 58,                        // "natt mode"
        S_NATT_RATE = 59,                        // "natt keepalive rate"
        S_DPD_MODE = 60,                         // "dpd mode"
        S_DPD_DELAY = 61,                        // "dpd notifiy delay"
        S_DPD_RETRY = 62,                        // "dpd notifiy retries"
        S_FRAG_IKE_MODE = 63,                    // "frag ike mode"
        S_FRAG_IKE_SIZE = 64,                    // "frag ike size"
        S_FRAG_ESP_MODE = 65,                    // "frag esp mode"
        S_FRAG_ESP_SIZE = 66,                    // "frag esp size"
        S_PEERID = 67,                           // "peer id"
        S_LOCAL = 68,                            // "local"
        S_REMOTE = 69,                           // "remote"
        S_ADDR = 70,                             // "address"
        S_FQDN = 71,                             // "fqdn"
        S_UFQDN = 72,                            // "ufqdn"
        S_ASN1DN = 73,                           // "asn1dn"
        S_KEYID = 74,                            // "keyid"
        S_AUTHDATA = 75,                         // "authdata"
        S_PSK = 76,                              // "psk"
        S_CA = 77,                               // "ca"
        S_CERT = 78,                             // "cert"
        S_PKEY = 79,                             // "pkey"
        S_LIFE_CHECK = 80,                       // "lifetime check"
        S_OBEY = 81,                             // "obey"
        S_CLAIM = 82,                            // "claim"
        S_STRICT = 83,                           // "strict"
        S_EXACT = 84,                            // "exact"
        S_XAUTH_SOURCE = 85,                     // "xauth source"
        S_XCONF_SOURCE = 86,                     // "xconf source"
        S_PULL = 87,                             // "pull"
        S_PUSH = 88,                             // "push"
        S_LDAP = 89,                             // "ldap"
        S_PLCY_MODE = 90,                        // "policy mode"
        S_CONFIG = 91,                           // "config"
        S_COMPAT = 92,                           // "compat"
        S_PLCY_LIST = 93,                        // "policy list section"
        S_INCLUDE = 94,                          // "include"
        S_EXCLUDE = 95,                          // "exclude"
        S_PROPOSAL = 96,                         // "proposal section"
        S_ISAKMP = 97,                           // "isakmp"
        S_AH = 98,                               // "ah"
        S_ESP = 99,                              // "esp"
        S_IPCOMP = 100,                          // "ipcomp"
        S_AUTH = 101,                            // "auth"
        S_HYB_XA_RSA = 102,                      // "hybrid xauth rsa"
        S_MUT_XA_RSA = 103,                      // "mutual xauth rsa"
        S_MUT_XA_PSK = 104,                      // "mutual xauth psk"
        S_MUT_RSA = 105,                         // "mutual rsa"
        S_MUT_PSK = 106,                         // "mutual psk"
        S_CIPH = 107,                            // "cipher"
        S_KLEN = 108,                            // "klen"
        S_HASH = 109,                            // "hash"
        S_MSGA = 110,                            // "hmac"
        S_COMP = 111,                            // "compress"
        S_DHGR = 112,                            // "dh group"
        S_ALG_AES = 113,                         // "aes"
        S_ALG_BLOWFISH = 114,                    // "blowfish"
        S_ALG_3DES = 115,                        // "3des"
        S_ALG_CAST = 116,                        // "cast"
        S_ALG_DES = 117,                         // "des"
        S_ALG_MD5 = 118,                         // "md5"
        S_ALG_SHA1 = 119,                        // "sha1"
        S_ALG_SHA2_256 = 120,                    // "sha2-256"
        S_ALG_SHA2_384 = 121,                    // "sha2-384"
        S_ALG_SHA2_512 = 122,                    // "sha2-512"
        S_ALG_DHGR = 123,                        // "dhgr"
        S_ALG_DEFLATE = 124,                     // "deflate"
        S_ALG_LZS = 125,                         // "lzs"
        S_LIFE_SEC = 126,                        // "life sec"
        S_LIFE_KBS = 127,                        // "life kbs"
        S_NUMBER = 128,                          // "number value"
        S_QUOTED = 129,                          // "quoted value"
        S_LABEL = 130,                           // "label value"
        S_ADDRESS = 131,                         // "address value"
        S_NETWORK = 132,                         // "network value"
        S_133_number_ = 133,                     // "number"
        S_134_quoted_ = 134,                     // "quoted"
        S_135_label_ = 135,                      // "label"
        S_136_network_ = 136,                    // "network"
        S_YYACCEPT = 137,                        // $accept
        S_sections = 138,                        // sections
        S_section = 139,                         // section
        S_daemon_section = 140,                  // daemon_section
        S_daemon_lines = 141,                    // daemon_lines
        S_daemon_line = 142,                     // daemon_line
        S_143_1 = 143,                           // $@1
        S_144_2 = 144,                           // $@2
        S_145_3 = 145,                           // $@3
        S_146_4 = 146,                           // $@4
        S_147_5 = 147,                           // $@5
        S_148_6 = 148,                           // $@6
        S_149_7 = 149,                           // $@7
        S_150_8 = 150,                           // $@8
        S_151_9 = 151,                           // $@9
        S_152_10 = 152,                          // $@10
        S_153_11 = 153,                          // $@11
        S_154_12 = 154,                          // $@12
        S_155_13 = 155,                          // $@13
        S_156_14 = 156,                          // $@14
        S_157_15 = 157,                          // $@15
        S_158_16 = 158,                          // $@16
        S_159_17 = 159,                          // $@17
        S_netgroup_section = 160,                // netgroup_section
        S_161_18 = 161,                          // $@18
        S_netgroup_lines = 162,                  // netgroup_lines
        S_netgroup_line = 163,                   // netgroup_line
        S_164_19 = 164,                          // $@19
        S_xauth_ldap_section = 165,              // xauth_ldap_section
        S_166_20 = 166,                          // $@20
        S_xauth_ldap_lines = 167,                // xauth_ldap_lines
        S_xauth_ldap_line = 168,                 // xauth_ldap_line
        S_169_21 = 169,                          // $@21
        S_170_22 = 170,                          // $@22
        S_171_23 = 171,                          // $@23
        S_172_24 = 172,                          // $@24
        S_173_25 = 173,                          // $@25
        S_174_26 = 174,                          // $@26
        S_175_27 = 175,                          // $@27
        S_176_28 = 176,                          // $@28
        S_177_29 = 177,                          // $@29
        S_178_30 = 178,                          // $@30
        S_xconf_local_section = 179,             // xconf_local_section
        S_xconf_local_lines = 180,               // xconf_local_lines
        S_xconf_local_line = 181,                // xconf_local_line
        S_182_31 = 182,                          // $@31
        S_183_32 = 183,                          // $@32
        S_184_33 = 184,                          // $@33
        S_185_34 = 185,                          // $@34
        S_186_35 = 186,                          // $@35
        S_187_36 = 187,                          // $@36
        S_188_37 = 188,                          // $@37
        S_189_38 = 189,                          // $@38
        S_xconf_local_dns_servers = 190,         // xconf_local_dns_servers
        S_xconf_local_dns_server = 191,          // xconf_local_dns_server
        S_xconf_local_nbn_servers = 192,         // xconf_local_nbn_servers
        S_xconf_local_nbn_server = 193,          // xconf_local_nbn_server
        S_xconf_local_dns_names = 194,           // xconf_local_dns_names
        S_xconf_local_dns_name = 195,            // xconf_local_dns_name
        S_peer_section = 196,                    // peer_section
        S_197_39 = 197,                          // $@39
        S_198_40 = 198,                          // $@40
        S_peer_lines = 199,                      // peer_lines
        S_peer_line = 200,                       // peer_line
        S_201_41 = 201,                          // $@41
        S_202_42 = 202,                          // $@42
        S_203_43 = 203,                          // $@43
        S_204_44 = 204,                          // $@44
        S_205_45 = 205,                          // $@45
        S_206_46 = 206,                          // $@46
        S_207_47 = 207,                          // $@47
        S_208_48 = 208,                          // $@48
        S_209_49 = 209,                          // $@49
        S_210_50 = 210,                          // $@50
        S_211_51 = 211,                          // $@51
        S_212_52 = 212,                          // $@52
        S_213_53 = 213,                          // $@53
        S_214_54 = 214,                          // $@54
        S_215_55 = 215,                          // $@55
        S_216_56 = 216,                          // $@56
        S_217_57 = 217,                          // $@57
        S_218_58 = 218,                          // $@58
        S_219_59 = 219,                          // $@59
        S_220_60 = 220,                          // $@60
        S_221_61 = 221,                          // $@61
        S_222_62 = 222,                          // $@62
        S_223_63 = 223,                          // $@63
        S_224_64 = 224,                          // $@64
        S_225_65 = 225,                          // $@65
        S_226_66 = 226,                          // $@66
        S_227_67 = 227,                          // $@67
        S_228_68 = 228,                          // $@68
        S_229_69 = 229,                          // $@69
        S_230_70 = 230,                          // $@70
        S_231_71 = 231,                          // $@71
        S_232_72 = 232,                          // $@72
        S_233_73 = 233,                          // $@73
        S_234_74 = 234,                          // $@74
        S_235_75 = 235,                          // $@75
        S_236_76 = 236,                          // $@76
        S_237_77 = 237,                          // $@77
        S_238_78 = 238,                          // $@78
        S_239_79 = 239,                          // $@79
        S_240_80 = 240,                          // $@80
        S_241_81 = 241,                          // $@81
        S_242_82 = 242,                          // $@82
        S_243_83 = 243,                          // $@83
        S_244_84 = 244,                          // $@84
        S_245_85 = 245,                          // $@85
        S_246_86 = 246,                          // $@86
        S_247_87 = 247,                          // $@87
        S_248_88 = 248,                          // $@88
        S_249_89 = 249,                          // $@89
        S_250_90 = 250,                          // $@90
        S_251_91 = 251,                          // $@91
        S_252_92 = 252,                          // $@92
        S_253_93 = 253,                          // $@93
        S_254_94 = 254,                          // $@94
        S_255_95 = 255,                          // $@95
        S_256_96 = 256,                          // $@96
        S_257_97 = 257,                          // $@97
        S_258_98 = 258,                          // $@98
        S_259_99 = 259,                          // $@99
        S_260_100 = 260,                         // $@100
        S_261_101 = 261,                         // $@101
        S_plcy_list_lines = 262,                 // plcy_list_lines
        S_plcy_list_line = 263,                  // plcy_list_line
        S_264_102 = 264,                         // $@102
        S_265_103 = 265,                         // $@103
        S_266_104 = 266,                         // $@104
        S_267_105 = 267,                         // $@105
        S_proposal_lines_isakmp = 268,           // proposal_lines_isakmp
        S_proposal_line_isakmp = 269,            // proposal_line_isakmp
        S_270_106 = 270,                         // $@106
        S_271_107 = 271,                         // $@107
        S_272_108 = 272,                         // $@108
        S_273_109 = 273,                         // $@109
        S_274_110 = 274,                         // $@110
        S_275_111 = 275,                         // $@111
        S_276_112 = 276,                         // $@112
        S_277_113 = 277,                         // $@113
        S_278_114 = 278,                         // $@114
        S_279_115 = 279,                         // $@115
        S_280_116 = 280,                         // $@116
        S_281_117 = 281,                         // $@117
        S_282_118 = 282,                         // $@118
        S_283_119 = 283,                         // $@119
        S_284_120 = 284,                         // $@120
        S_285_121 = 285,                         // $@121
        S_286_122 = 286,                         // $@122
        S_287_123 = 287,                         // $@123
        S_288_124 = 288,                         // $@124
        S_proposal_lines_ah = 289,               // proposal_lines_ah
        S_proposal_line_ah = 290,                // proposal_line_ah
        S_291_125 = 291,                         // $@125
        S_292_126 = 292,                         // $@126
        S_293_127 = 293,                         // $@127
        S_294_128 = 294,                         // $@128
        S_295_129 = 295,                         // $@129
        S_296_130 = 296,                         // $@130
        S_297_131 = 297,                         // $@131
        S_298_132 = 298,                         // $@132
        S_proposal_lines_esp = 299,              // proposal_lines_esp
        S_proposal_line_esp = 300,               // proposal_line_esp
        S_301_133 = 301,                         // $@133
        S_302_134 = 302,                         // $@134
        S_303_135 = 303,                         // $@135
        S_304_136 = 304,                         // $@136
        S_305_137 = 305,                         // $@137
        S_306_138 = 306,                         // $@138
        S_307_139 = 307,                         // $@139
        S_308_140 = 308,                         // $@140
        S_309_141 = 309,                         // $@141
        S_310_142 = 310,                         // $@142
        S_311_143 = 311,                         // $@143
        S_312_144 = 312,                         // $@144
        S_313_145 = 313,                         // $@145
        S_314_146 = 314,                         // $@146
        S_proposal_lines_ipcomp = 315,           // proposal_lines_ipcomp
        S_proposal_line_ipcomp = 316,            // proposal_line_ipcomp
        S_317_147 = 317,                         // $@147
        S_318_148 = 318,                         // $@148
        S_319_149 = 319,                         // $@149
        S_320_150 = 320                          // $@150
      };
    };

    /// (Internal) symbol kind.
    typedef symbol_kind::symbol_kind_type symbol_kind_type;

    /// The number of tokens.
    static const symbol_kind_type YYNTOKENS = symbol_kind::YYNTOKENS;

    /// A complete symbol.
    ///
    /// Expects its Base type to provide access to the symbol kind
    /// via kind ().
    ///
    /// Provide access to semantic value and location.
    template <typename Base>
    struct basic_symbol : Base
    {
      /// Alias to Base.
      typedef Base super_type;

      /// Default constructor.
      basic_symbol () YY_NOEXCEPT
        : value ()
        , location ()
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      basic_symbol (basic_symbol&& that)
        : Base (std::move (that))
        , value (std::move (that.value))
        , location (std::move (that.location))
      {}
#endif

      /// Copy constructor.
      basic_symbol (const basic_symbol& that);
      /// Constructor for valueless symbols.
      basic_symbol (typename Base::kind_type t,
                    YY_MOVE_REF (location_type) l);

      /// Constructor for symbols with semantic value.
      basic_symbol (typename Base::kind_type t,
                    YY_RVREF (value_type) v,
                    YY_RVREF (location_type) l);

      /// Destroy the symbol.
      ~basic_symbol ()
      {
        clear ();
      }



      /// Destroy contents, and record that is empty.
      void clear () YY_NOEXCEPT
      {
        Base::clear ();
      }

      /// The user-facing name of this symbol.
      std::string name () const YY_NOEXCEPT
      {
        return conf_parser::symbol_name (this->kind ());
      }

      /// Backward compatibility (Bison 3.6).
      symbol_kind_type type_get () const YY_NOEXCEPT;

      /// Whether empty.
      bool empty () const YY_NOEXCEPT;

      /// Destructive move, \a s is emptied into this.
      void move (basic_symbol& s);

      /// The semantic value.
      value_type value;

      /// The location.
      location_type location;

    private:
#if YY_CPLUSPLUS < 201103L
      /// Assignment operator.
      basic_symbol& operator= (const basic_symbol& that);
#endif
    };

    /// Type access provider for token (enum) based symbols.
    struct by_kind
    {
      /// The symbol kind as needed by the constructor.
      typedef token_kind_type kind_type;

      /// Default constructor.
      by_kind () YY_NOEXCEPT;

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      by_kind (by_kind&& that) YY_NOEXCEPT;
#endif

      /// Copy constructor.
      by_kind (const by_kind& that) YY_NOEXCEPT;

      /// Constructor from (external) token numbers.
      by_kind (kind_type t) YY_NOEXCEPT;



      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol kind from \a that.
      void move (by_kind& that);

      /// The (internal) type number (corresponding to \a type).
      /// \a empty when empty.
      symbol_kind_type kind () const YY_NOEXCEPT;

      /// Backward compatibility (Bison 3.6).
      symbol_kind_type type_get () const YY_NOEXCEPT;

      /// The symbol kind.
      /// \a S_YYEMPTY when empty.
      symbol_kind_type kind_;
    };

    /// Backward compatibility for a private implementation detail (Bison 3.6).
    typedef by_kind by_type;

    /// "External" symbols: returned by the scanner.
    struct symbol_type : basic_symbol<by_kind>
    {};

    /// Build a parser object.
    conf_parser (IKED & iked_yyarg);
    virtual ~conf_parser ();

#if 201103L <= YY_CPLUSPLUS
    /// Non copyable.
    conf_parser (const conf_parser&) = delete;
    /// Non copyable.
    conf_parser& operator= (const conf_parser&) = delete;
#endif

    /// Parse.  An alias for parse ().
    /// \returns  0 iff parsing succeeded.
    int operator() ();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    virtual int parse ();

#if YYDEBUG
    /// The current debugging stream.
    std::ostream& debug_stream () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

    /// Report a syntax error.
    /// \param loc    where the syntax error is found.
    /// \param msg    a description of the syntax error.
    virtual void error (const location_type& loc, const std::string& msg);

    /// Report a syntax error.
    void error (const syntax_error& err);

    /// The user-facing name of the symbol whose (internal) number is
    /// YYSYMBOL.  No bounds checking.
    static std::string symbol_name (symbol_kind_type yysymbol);



    class context
    {
    public:
      context (const conf_parser& yyparser, const symbol_type& yyla);
      const symbol_type& lookahead () const YY_NOEXCEPT { return yyla_; }
      symbol_kind_type token () const YY_NOEXCEPT { return yyla_.kind (); }
      const location_type& location () const YY_NOEXCEPT { return yyla_.location; }

      /// Put in YYARG at most YYARGN of the expected tokens, and return the
      /// number of tokens stored in YYARG.  If YYARG is null, return the
      /// number of expected tokens (guaranteed to be less than YYNTOKENS).
      int expected_tokens (symbol_kind_type yyarg[], int yyargn) const;

    private:
      const conf_parser& yyparser_;
      const symbol_type& yyla_;
    };

  private:
#if YY_CPLUSPLUS < 201103L
    /// Non copyable.
    conf_parser (const conf_parser&);
    /// Non copyable.
    conf_parser& operator= (const conf_parser&);
#endif


    /// Stored state numbers (used for stacks).
    typedef short state_type;

    /// The arguments of the error message.
    int yy_syntax_error_arguments_ (const context& yyctx,
                                    symbol_kind_type yyarg[], int yyargn) const;

    /// Generate an error message.
    /// \param yyctx     the context in which the error occurred.
    virtual std::string yysyntax_error_ (const context& yyctx) const;
    /// Compute post-reduction state.
    /// \param yystate   the current state
    /// \param yysym     the nonterminal to push on the stack
    static state_type yy_lr_goto_state_ (state_type yystate, int yysym);

    /// Whether the given \c yypact_ value indicates a defaulted state.
    /// \param yyvalue   the value to check
    static bool yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT;

    /// Whether the given \c yytable_ value indicates a syntax error.
    /// \param yyvalue   the value to check
    static bool yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT;

    static const signed char yypact_ninf_;
    static const signed char yytable_ninf_;

    /// Convert a scanner token kind \a t to a symbol kind.
    /// In theory \a t should be a token_kind_type, but character literals
    /// are valid, yet not members of the token_kind_type enum.
    static symbol_kind_type yytranslate_ (int t) YY_NOEXCEPT;

    /// Convert the symbol name \a n to a form suitable for a diagnostic.
    static std::string yytnamerr_ (const char *yystr);

    /// For a symbol, its name in clear.
    static const char* const yytname_[];


    // Tables.
    // YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
    // STATE-NUM.
    static const short yypact_[];

    // YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
    // Performed when YYTABLE does not specify something else to do.  Zero
    // means the default is an error.
    static const short yydefact_[];

    // YYPGOTO[NTERM-NUM].
    static const short yypgoto_[];

    // YYDEFGOTO[NTERM-NUM].
    static const short yydefgoto_[];

    // YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
    // positive, shift that token.  If negative, reduce the rule whose
    // number is the opposite.  If YYTABLE_NINF, syntax error.
    static const short yytable_[];

    static const short yycheck_[];

    // YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
    // state STATE-NUM.
    static const short yystos_[];

    // YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.
    static const short yyr1_[];

    // YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.
    static const signed char yyr2_[];


#if YYDEBUG
    // YYRLINE[YYN] -- Source line where rule number YYN was defined.
    static const short yyrline_[];
    /// Report on the debug stream that the rule \a r is going to be reduced.
    virtual void yy_reduce_print_ (int r) const;
    /// Print the state stack on the debug stream.
    virtual void yy_stack_print_ () const;

    /// Debugging level.
    int yydebug_;
    /// Debug stream.
    std::ostream* yycdebug_;

    /// \brief Display a symbol kind, value and location.
    /// \param yyo    The output stream.
    /// \param yysym  The symbol.
    template <typename Base>
    void yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const;
#endif

    /// \brief Reclaim the memory associated to a symbol.
    /// \param yymsg     Why this token is reclaimed.
    ///                  If null, print nothing.
    /// \param yysym     The symbol.
    template <typename Base>
    void yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const;

  private:
    /// Type access provider for state based symbols.
    struct by_state
    {
      /// Default constructor.
      by_state () YY_NOEXCEPT;

      /// The symbol kind as needed by the constructor.
      typedef state_type kind_type;

      /// Constructor.
      by_state (kind_type s) YY_NOEXCEPT;

      /// Copy constructor.
      by_state (const by_state& that) YY_NOEXCEPT;

      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol kind from \a that.
      void move (by_state& that);

      /// The symbol kind (corresponding to \a state).
      /// \a symbol_kind::S_YYEMPTY when empty.
      symbol_kind_type kind () const YY_NOEXCEPT;

      /// The state number used to denote an empty symbol.
      /// We use the initial state, as it does not have a value.
      enum { empty_state = 0 };

      /// The state.
      /// \a empty when empty.
      state_type state;
    };

    /// "Internal" symbol: element of the stack.
    struct stack_symbol_type : basic_symbol<by_state>
    {
      /// Superclass.
      typedef basic_symbol<by_state> super_type;
      /// Construct an empty symbol.
      stack_symbol_type ();
      /// Move or copy construction.
      stack_symbol_type (YY_RVREF (stack_symbol_type) that);
      /// Steal the contents from \a sym to build this.
      stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) sym);
#if YY_CPLUSPLUS < 201103L
      /// Assignment, needed by push_back by some old implementations.
      /// Moves the contents of that.
      stack_symbol_type& operator= (stack_symbol_type& that);

      /// Assignment, needed by push_back by other implementations.
      /// Needed by some other old implementations.
      stack_symbol_type& operator= (const stack_symbol_type& that);
#endif
    };

    /// A stack with random access from its top.
    template <typename T, typename S = std::vector<T> >
    class stack
    {
    public:
      // Hide our reversed order.
      typedef typename S::iterator iterator;
      typedef typename S::const_iterator const_iterator;
      typedef typename S::size_type size_type;
      typedef typename std::ptrdiff_t index_type;

      stack (size_type n = 200) YY_NOEXCEPT
        : seq_ (n)
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Non copyable.
      stack (const stack&) = delete;
      /// Non copyable.
      stack& operator= (const stack&) = delete;
#endif

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      const T&
      operator[] (index_type i) const
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      T&
      operator[] (index_type i)
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Steal the contents of \a t.
      ///
      /// Close to move-semantics.
      void
      push (YY_MOVE_REF (T) t)
      {
        seq_.push_back (T ());
        operator[] (0).move (t);
      }

      /// Pop elements from the stack.
      void
      pop (std::ptrdiff_t n = 1) YY_NOEXCEPT
      {
        for (; 0 < n; --n)
          seq_.pop_back ();
      }

      /// Pop all elements from the stack.
      void
      clear () YY_NOEXCEPT
      {
        seq_.clear ();
      }

      /// Number of elements on the stack.
      index_type
      size () const YY_NOEXCEPT
      {
        return index_type (seq_.size ());
      }

      /// Iterator on top of the stack (going downwards).
      const_iterator
      begin () const YY_NOEXCEPT
      {
        return seq_.begin ();
      }

      /// Bottom of the stack.
      const_iterator
      end () const YY_NOEXCEPT
      {
        return seq_.end ();
      }

      /// Present a slice of the top of a stack.
      class slice
      {
      public:
        slice (const stack& stack, index_type range) YY_NOEXCEPT
          : stack_ (stack)
          , range_ (range)
        {}

        const T&
        operator[] (index_type i) const
        {
          return stack_[range_ - i];
        }

      private:
        const stack& stack_;
        index_type range_;
      };

    private:
#if YY_CPLUSPLUS < 201103L
      /// Non copyable.
      stack (const stack&);
      /// Non copyable.
      stack& operator= (const stack&);
#endif
      /// The wrapped container.
      S seq_;
    };


    /// Stack type.
    typedef stack<stack_symbol_type> stack_type;

    /// The stack.
    stack_type yystack_;

    /// Push a new state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param sym  the symbol
    /// \warning the contents of \a s.value is stolen.
    void yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym);

    /// Push a new look ahead token on the state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param s    the state
    /// \param sym  the symbol (for its value and location).
    /// \warning the contents of \a sym.value is stolen.
    void yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym);

    /// Pop \a n symbols from the stack.
    void yypop_ (int n = 1) YY_NOEXCEPT;

    /// Constants.
    enum
    {
      yylast_ = 446,     ///< Last index in yytable_.
      yynnts_ = 184,  ///< Number of nonterminal symbols.
      yyfinal_ = 2 ///< Termination state number.
    };


    // User arguments.
    IKED & iked;

  };


} // yy
#line 1235 "conf.parse.hpp"




#endif // !YY_YY_CONF_PARSE_HPP_INCLUDED
