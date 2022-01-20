#ifndef CRYPT_H
#define CRYPT_H

#define hidden __attribute__((__visibility__("hidden")))

#ifdef __cplusplus
extern "C" {
#endif

struct crypt_data {
	int initialized;
	char __buf[256];
};

char *crypt(const char *, const char *);
char *crypt_r(const char *, const char *, struct crypt_data *);

#ifdef __cplusplus
}
#endif

hidden char *__crypt_r(const char *, const char *, struct crypt_data *);

hidden char *__crypt_des(const char *, const char *, char *);
hidden char *__crypt_md5(const char *, const char *, char *);
hidden char *__crypt_blowfish(const char *, const char *, char *);
hidden char *__crypt_sha256(const char *, const char *, char *);
hidden char *__crypt_sha512(const char *, const char *, char *);

#endif
