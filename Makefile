CC=clang
CFLAGS=-O3 -I./
OBJ=crypt.o crypt_blowfish.o crypt_des.o crypt_md5.o crypt_r.o crypt_sha256.o crypt_sha512.o encrypt.o
TARGET=libcrypt.a

all: $(TARGET)
$(TARGET): $(OBJ)
	ar rcs $@ $^

clean:
	rm -f $(OBJ) $(TARGET)
