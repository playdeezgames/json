// Copyright (c) 2014-2018 Dr. Colin Hirsch and Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/PEGTL/

#ifndef TAOCPP_JSON_PEGTL_INCLUDE_INTERNAL_IF_MUST_ELSE_HPP
#define TAOCPP_JSON_PEGTL_INCLUDE_INTERNAL_IF_MUST_ELSE_HPP

#include "../config.hpp"

#include "if_then_else.hpp"
#include "must.hpp"

namespace tao
{
   namespace TAOCPP_JSON_PEGTL_NAMESPACE
   {
      namespace internal
      {
         template< typename Cond, typename Then, typename Else >
         using if_must_else = if_then_else< Cond, must< Then >, must< Else > >;

      }  // namespace internal

   }  // namespace TAOCPP_JSON_PEGTL_NAMESPACE

}  // namespace tao

#endif
