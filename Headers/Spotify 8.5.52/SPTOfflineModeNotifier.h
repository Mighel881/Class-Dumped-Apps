//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPSessionObserver-Protocol.h"
#import "SPTOfflineModeState-Protocol.h"

@class NSHashTable, NSString, SPSession;

@interface SPTOfflineModeNotifier : NSObject <SPSessionObserver, SPTOfflineModeState>
{
    SPSession *_session;
    NSHashTable *_observers;
}

@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)sessionLoginModeChanged:(id)arg1;
- (void)removeOfflineModeObserver:(id)arg1;
- (void)addOfflineModeObserver:(id)arg1;
@property(readonly, nonatomic, getter=isOffline) _Bool offline;
- (void)invalidate;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
