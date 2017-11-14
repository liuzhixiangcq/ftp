/* @author page
 * @date 2017/11/14
 */

#include "ftp_server.h"

FTP_SERVER::FTP_SERVER(char* server_ip)
{
	this.ftp_server_ctrl_port = FTP_SERVER_CTRL_PORT;
	this.ftp_server_data_port = FTP_SERVER_DATA_PORT;
	strcpy(this.server_ip,server_ip,strlen(server_ip));
	
}
FTP_SERVER::~FTP_SERVER()
{
}
void FTP_SERVER::ftp_server_log(char* log_info)
{
	fprintf(stderr,"log:%s\n",log_info);
}
int FTP_SERVER::ftp_server_init()
{
	struct sockaddr_int server_addr;

}
