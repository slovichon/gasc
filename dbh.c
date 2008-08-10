/* $Id$ */

#define DB_COL		0
#define DB_ROW		1
#define DB_ROWS		2
#define DB_NULL		4

#define SQL_REG		0
#define SQL_WILD	1
#define SQL_REGEX	2


struct dbh {
	dbh_username
	dbh_password
	dbh_port
	dbh_host
	dbh_driver
	dbh_database
	dbh_gasc
};

int
dbh_query()
{
}

int
dbh_fetchrow()
{
}

void
dbh_throw()
{
}
