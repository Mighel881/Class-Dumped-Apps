//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBMultiSyncResponseHandler.h"

@class DBNativeSharedLinkPasswordViewController;

@interface DBMultiSyncResponseHandlerPasswordProvidedContext : DBMultiSyncResponseHandler
{
    DBNativeSharedLinkPasswordViewController *_passwordViewController;
}

- (void).cxx_destruct;
- (void)receivedError:(id)arg1 forUserState:(id)arg2;
- (void)userMustTakeAction:(id)arg1;
- (void)notInDropbox:(id)arg1 withActionableData:(id)arg2 withLink:(id)arg3 andUserState:(id)arg4;
- (void)inDropbox:(id)arg1 withActionableData:(id)arg2 andUserState:(id)arg3;
- (id)password;
- (id)initWithPasswordViewController:(id)arg1;

@end
