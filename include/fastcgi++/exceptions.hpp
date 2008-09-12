//! \file exceptions.hpp Defines fastcgi++ exceptions
/***************************************************************************
* Copyright (C) 2007 Eddie                                                 *
*                                                                          *
* This file is part of fastcgi++.                                          *
*                                                                          *
* fastcgi++ is free software: you can redistribute it and/or modify it     *
* under the terms of the GNU Lesser General Public License as  published   *
* by the Free Software Foundation, either version 3 of the License, or (at *
* your option) any later version.                                          *
*                                                                          *
* fastcgi++ is distributed in the hope that it will be useful, but WITHOUT *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or    *
* FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public     *
* License for more details.                                                *
*                                                                          *
* You should have received a copy of the GNU Lesser General Public License *
* along with fastcgi++.  If not, see <http://www.gnu.org/licenses/>.       *
****************************************************************************/


#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

#include <exception>

//! Topmost namespace for the fastcgi++ library
namespace Fastcgipp
{
	//! Namespace that defines fastcgi++ related exceptions
	namespace Exceptions
	{
		//! General fastcgi++ exception
		class FastcgiException: public std::exception
		{
		public:
			FastcgiException(const char* msg_): msg(msg_) { }

			virtual const char* what() const throw()
			{
				return msg;
			}
		private:
			const char* const msg;
		};
	}
}

#endif