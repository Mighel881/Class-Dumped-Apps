//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class DBACCOUNTAuthCredential, DBACCOUNTDeviceInfo, DBACCOUNTInitiateEmailChangeSource, NSString;

@interface DBACCOUNTInitiateEmailChangeArg : NSObject <DBSerializable, NSCopying>
{
    NSString *_email;
    DBACCOUNTInitiateEmailChangeSource *_source;
    DBACCOUNTAuthCredential *_credential;
    DBACCOUNTDeviceInfo *_deviceInfo;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) DBACCOUNTDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(readonly, nonatomic) DBACCOUNTAuthCredential *credential; // @synthesize credential=_credential;
@property(readonly, nonatomic) DBACCOUNTInitiateEmailChangeSource *source; // @synthesize source=_source;
@property(readonly, copy, nonatomic) NSString *email; // @synthesize email=_email;
- (void).cxx_destruct;
- (_Bool)isEqualToInitiateEmailChangeArg:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithEmail:(id)arg1 source:(id)arg2 credential:(id)arg3;
- (id)initWithEmail:(id)arg1 source:(id)arg2 credential:(id)arg3 deviceInfo:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
