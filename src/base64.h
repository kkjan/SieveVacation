/* 
 * File:   base64.h
 * Author: janschml
 *
 * Created on Streda, 2010, apríl 28, 13:08
 */

#ifndef _BASE64_H
#define	_BASE64_H

#include <string>

std::string base64_encode(unsigned char const* , unsigned int len);
std::string base64_decode(std::string const& s);


#endif	/* _BASE64_H */

