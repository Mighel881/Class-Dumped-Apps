//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TTAdSplashSocketUtil : NSObject
{
    int gen_times;
}

+ (unsigned int)cryptographicallySecurePseudoRandomNumber;
+ (id)decimalStringFromHexString:(id)arg1;
+ (id)hexStringFromASCIIString:(id)arg1;
+ (id)asciiStringFromHexString:(id)arg1;
+ (id)hexStringFromData:(id)arg1;
+ (id)dataWithReverse:(id)arg1;
+ (unsigned long long)uint64FromBytes:(id)arg1;
+ (unsigned int)uint32FromBytes:(id)arg1;
+ (unsigned short)uint16FromBytes:(id)arg1;
+ (unsigned char)uint8FromBytes:(id)arg1;
+ (id)bytesFromString:(id)arg1;
+ (id)bytesFromUInt64:(unsigned long long)arg1;
+ (id)bytesFromUInt32:(unsigned int)arg1;
+ (id)bytesFromUInt16:(unsigned short)arg1;
+ (id)bytesFromUInt8:(unsigned char)arg1;
+ (id)shared;
- (unsigned int)randomSequenceOfUnique;

@end
