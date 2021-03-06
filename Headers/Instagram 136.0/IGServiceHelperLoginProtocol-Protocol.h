//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGGroupedTableViewCell, IGServiceLoginTableViewController, NSIndexPath, NSString;

@protocol IGServiceHelperLoginProtocol <NSObject>
- (void)prepareCell:(IGGroupedTableViewCell *)arg1 forIndexPath:(NSIndexPath *)arg2;
- (NSString *)loginFooterMessage;
- (NSString *)loginErrorMessage;
- (long long)numberOfExtraRowsForLogin;
- (IGServiceLoginTableViewController *)loginViewController;
- (void)doAuthWithUsername:(NSString *)arg1 password:(NSString *)arg2;
- (void)setLoginPending:(_Bool)arg1;
- (_Bool)loginPending;
@end

