/* @author page
 * @date 2017/11/14
 */

#ifndef FTP_SERVER_H
#define FTP_SERVER_H

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <unistd.h>
#include <sys/types.h>

#define IP_LEN 64
#define CMD_LEN 256
#define FTP_SERVER_CTRL_PORT 12000
#define FTP_SERVER_DATA_PORT 13000

class FTP_SERVER
{
	public:
		FTP_SERVER(char* server_ip);
		~FTP_SERVER(void);
		int ftp_server_init();
	 
	private:
		int ftp_server_ctrl_port;
		int ftp_server_data_port;

		int ctrl_sock_fd;
		int data_sock_fd;
		char server_ip[IP_LEN];
		char command[CMD_LEN];

};

#endif
