
module data_types
use nrtype, integerMissing=>nr_integerMissing

  implicit none
  
 ! ***********************************************************************************************************
 ! Define variable metadata
 ! ***********************************************************************************************************
 ! define derived type for model variables, including name, description, and units
 type,public :: var_info
  character(len=64)                      :: varname   = 'empty'         ! variable name
  integer(i4b)                           :: vartype   = integerMissing  ! variable type
  logical(lgt)                           :: varDesire = .false.         ! flag to denote if the variable is desired for model output
 end type var_info
  
 type, public 	:: flagVec
  logical(lgt), allocatable            	:: dat(:)
 end type flagVec
  
  type, public 	:: var_i
    integer(i4b), allocatable 			:: var(:)
  end type var_i
  
 type, public :: var_i8
  integer(8), allocatable              	:: var(:) 
 endtype var_i8
  
  type, public :: var_d
    real(dp), allocatable 			   	:: var(:)
  end type var_d

 type, public :: ilength
  integer(i4b), allocatable            	:: dat(:)    
 end type ilength
 
 type, public :: i8length
  integer(8), allocatable              	:: dat(:)    
 end type i8length
   
  type, public :: dlength
  	real(dp), allocatable   		   	:: dat(:)   
  end type dlength
  
 type, public :: var_flagVec
  type(flagVec),allocatable            	:: var(:)   
 end type var_flagVec

 type, public :: var_ilength
  type(ilength), allocatable           	:: var(:)  
 end type var_ilength
 
 type, public :: var_i8length
  type(i8length),allocatable           	:: var(:)
 end type var_i8length
   
  type, public :: var_dlength
  	type(dlength), allocatable	 	   	:: var(:)
  end type var_dlength

end module data_types


