// Copyright David Abrahams 2002.
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
#ifndef STR_20020703_HPP
#define STR_20020703_HPP

#include <boost/python/object.hpp>

namespace boost { namespace python {

class str;

namespace detail
{
  struct str_base : object
  {

  };
}


class str : public detail::str_base
{
    typedef detail::str_base base;
 public:
    str() {} // new str

};

}}  // namespace boost::python

#endif // STR_20020703_HPP
