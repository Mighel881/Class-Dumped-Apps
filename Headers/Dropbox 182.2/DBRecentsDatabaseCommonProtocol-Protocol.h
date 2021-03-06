//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropboxExtensions/NSObject-Protocol.h>

@class DBDropboxPath, DBRecentActionInfo, DBRecentsCursorState, NSArray;

@protocol DBRecentsDatabaseCommonProtocol <NSObject>
@property(readonly, nonatomic) unsigned long long databaseMode;
- (void)updateFirstPageActions:(NSArray *)arg1 cursorState:(DBRecentsCursorState *)arg2 completion:(void (^)(void))arg3;
- (void)getActionsAndLastUpdateDateWithCompletion:(void (^)(NSArray *, NSDate *))arg1;
- (DBRecentActionInfo *)getMostRecentActionInfoForPathSync:(DBDropboxPath *)arg1;
@end

