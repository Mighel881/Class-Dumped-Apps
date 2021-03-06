//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBPaymentsAlertDelegate-Protocol.h"
#import "DBUserStateManagerAccountObserver-Protocol.h"

@class NSString;
@protocol DBUserStateManagerProtocol;

@interface DBPaymentsAlertManager : NSObject <DBPaymentsAlertDelegate, DBUserStateManagerAccountObserver>
{
    id <DBUserStateManagerProtocol> _userStateManager;
}

- (void).cxx_destruct;
- (void)userStateManager:(id)arg1 didAddUserWithUserId:(id)arg2;
- (void)payments:(id)arg1 presentAlertWithTitle:(id)arg2 message:(id)arg3;
- (void)db_setAsAlertDelegates;
- (id)initWithUserStateManager:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

