//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;
@protocol OfflineDependencyProvider, OfflineRecordProtocol;

@interface OfflineDeactivator : NSObject
{
    struct NSObject *_record;
    id <OfflineDependencyProvider> _provider;
    CDUnknownBlockType _completion;
    NSData *_challenge;
    NSData *_appCert;
    NSData *_secureStopData;
}

@property(retain) NSData *secureStopData; // @synthesize secureStopData=_secureStopData;
@property(retain) NSData *appCert; // @synthesize appCert=_appCert;
@property(retain) NSData *challenge; // @synthesize challenge=_challenge;
@property(copy) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain) id <OfflineDependencyProvider> provider; // @synthesize provider=_provider;
@property(retain) NSObject<OfflineRecordProtocol> *record; // @synthesize record=_record;
- (void).cxx_destruct;
- (void)_retrieveFPSCert;
- (void)_syncChallenge;
- (void)_deactivate;
- (id)_pboRequestForDeactivate:(id)arg1;
- (void)_invalidatePersistableKey:(id)arg1;
- (void)_finishDeactivation:(id)arg1;
- (void)deactivate;
- (id)initWithDependencyProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithOfflineRecord:(struct NSObject *)arg1 dependencyProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

