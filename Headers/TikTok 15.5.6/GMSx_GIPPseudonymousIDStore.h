//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSRegularExpression, NSString;
@protocol OS_dispatch_queue;

@interface GMSx_GIPPseudonymousIDStore : NSObject
{
    _Bool _hasInitialized;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observers;
    NSRegularExpression *_cookieValueRegex;
}

+ (id)sharedInstance;
+ (void)disableForTest;
+ (void)enable;
+ (void)setDefaultDirectory:(id)arg1;
@property(retain, nonatomic) NSRegularExpression *cookieValueRegex; // @synthesize cookieValueRegex=_cookieValueRegex;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)setPseudonymousIDFromResponse:(id)arg1;
- (void)updateRequestWithPseudonymousID:(id)arg1;
- (_Bool)isValidPseudonymousID:(id)arg1;
- (void)setPseudonymousIDWithoutCheckingEnabledStatus:(id)arg1;
@property(retain, nonatomic) NSString *pseudonymousID;
- (id)pseudonymousIDWithoutCheckingEnabledStatus;
- (id)pseudonymousIDURL;
- (_Bool)initializeStorage;
- (id)init;

@end
