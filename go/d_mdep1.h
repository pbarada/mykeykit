void mdep_hello(int argc,char **argv);
void mdep_bye(void);
int mdep_changedir(char *d);
char * mdep_currentdir(char *buff,int leng);
int mdep_lsdir(char *dir, char *exp, void (*callback)(char *,int));
long mdep_filetime(char *fn);
int mdep_fisatty(FILE *f);
long mdep_currtime(void);
long mdep_coreleft(void);
int mdep_full_or_relative_path(char *path);
int mdep_makepath(char *dirname, char *filename, char *result, int resultsize);
#ifdef OLDSTUFF
#endif
#ifdef LOCALUNLINK
int unlink(const char *path);
#endif
