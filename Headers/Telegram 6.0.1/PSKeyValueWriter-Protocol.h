//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/NSObject-Protocol.h>

@protocol PSKeyValueWriter <NSObject>
- (void)deleteAllValues;
- (_Bool)deleteValueForRawKey:(CDStruct_b9c9288f *)arg1;
- (void)writeValueForRawKey:(const char *)arg1 keyLength:(unsigned long long)arg2 value:(const char *)arg3 valueLength:(unsigned long long)arg4;
@end
