//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol AWESyncToDuoshanProtocol <NSObject>
+ (void)recordShowDuoshanGuide;
+ (void)recordGuideCloseClick;
+ (_Bool)needShowSyncToDuoshanGuide;
+ (NSString *)syncToDuoshanGuideBubble;
+ (NSString *)syncToDuoshanGuideLinkString;
+ (NSString *)syncToDuoshanGuideTitle;
+ (void)syncToDuoshanGuideLinkClickWithSuccessBlock:(void (^)(void))arg1 cancelIsRequesting:(void (^)(void))arg2;
+ (_Bool)showSyncToDuoshanAlertViewWhileOpenProfileIfNeeded;
+ (_Bool)showSyncToDuoshanAlertViewWhilePublishSuccessIfNeededWithItemID:(NSString *)arg1;
@end
