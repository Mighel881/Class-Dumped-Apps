//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface CRPTKeyPair : NSObject
{
    NSData *_publicKey;
}

@property(readonly, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
- (void).cxx_destruct;
- (id)signData:(id)arg1 error:(id *)arg2;
- (id)encodedUserPublicKey;
- (id)initWithKeyType:(int)arg1 keyData:(id)arg2 keyHandle:(id)arg3;

@end

