#include "\z\ace\addons\main\script_macros.hpp"

#define CFUNC(ARG0) EFUNC(common,ARG0)
#define QCFUNC(ARG0) QUOTE(CFUNC(ARG0))

#define ACE_PREFIX ace

#define ACEGVAR(module,var) TRIPLES(ACE_PREFIX,module,var)
#define QACEGVAR(module,var) QUOTE(ACEGVAR(module,var))

#define ACEFUNC(var1,var2) TRIPLES(DOUBLES(ACE_PREFIX,var1),fnc,var2)
#define DACEFUNC(var1,var2) TRIPLES(DOUBLES(ACE_PREFIX,var1),fnc,var2)
#define QACEFUNC(var1,var2) QUOTE(DACEFUNC(var1,var2))

#define EXIT_IF_NOT_ARCMF if !([] call CFUNC(addonActive)) exitWith {}
