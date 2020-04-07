//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MTAesCtr : NSObject
{
    struct _CCCryptor *_cryptor;
    unsigned char _ivec[16];
    unsigned int _num;
    unsigned char _ecount[16];
}

- (void)encryptIn:(const char *)arg1 out:(char *)arg2 len:(unsigned long long)arg3;
- (void)getIv:(void *)arg1;
- (void *)ecount;
- (unsigned int)num;
- (void)dealloc;
- (id)initWithKey:(const void *)arg1 keyLength:(int)arg2 iv:(const void *)arg3 ecount:(void *)arg4 num:(unsigned int)arg5;
- (id)initWithKey:(const void *)arg1 keyLength:(int)arg2 iv:(const void *)arg3 decrypt:(_Bool)arg4;

@end
