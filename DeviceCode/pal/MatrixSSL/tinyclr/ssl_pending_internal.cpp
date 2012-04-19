#include "ssl_functions.h"
#include "adapt/adapt.h"
extern int ssl_oldDataLength;

int ssl_pending_internal(int socket) {
	SSL* ssl = (SSL*) g_SSL_Driver.m_sslContextArray[0].SslContext;
	if (ssl == NULL) {
		return SOCK_SOCKET_ERROR;
	}

	int len = 0;
	//TODO make sure, not using rtip include
	const long fionread = (0x40000000UL|(((long)sizeof(unsigned long)&0x7fU)<<16)|(('f')<<8)|(127));
	//TODO Check for block see SSL.cpp
	int ret = SOCK_ioctl(socket, fionread, &len);
	if (ret == 0)
	{
		debug_printf("ssl_pending_internal() Bytes in ETH Buffer: %i, in SSL-Buffer: %i\n", len, ssl_oldDataLength);
		//return (len > 0);
		return (len + ssl_oldDataLength);
	}
	return 0;
}

