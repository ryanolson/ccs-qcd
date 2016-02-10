#$Id: make.inc,v 1.1 2009/12/02 10:24:37 ishikawa Exp $

REVISION = -D_REVISION_='"$(shell cat .svnrevision)"'

#
# specify Fortran90 MPI compiler FC, compiler options FFLAGS and linker options LDFLAGS
#

FC      = ftn 
CC      = cc

FFLAGS  = 
CFLAGS  = $(FFLAGS)

ACCFLAGS = -h acc_model=fast_addr -h noomp
FFLAGS += $(ACCFLAGS)

LD = ftn
LDFLAGS = $(FFLAGS)

INCLUDE = -I./
