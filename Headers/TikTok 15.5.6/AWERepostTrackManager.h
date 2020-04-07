//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWERepostTrackManager : NSObject
{
}

+ (id)generateAttributesWithAweme:(id)arg1 fromAweme:(id)arg2 pageType:(id)arg3;
+ (id)generateParamsWithAweme:(id)arg1 fromAweme:(id)arg2 pageType:(id)arg3 enterFrom:(id)arg4 enterMethod:(id)arg5;
+ (void)trackInputWithAweme:(id)arg1 fromAweme:(id)arg2 pageType:(id)arg3 enterFrom:(id)arg4 stayTime:(long long)arg5 isEnter:(_Bool)arg6;
+ (void)trackReportCommentWithAweme:(id)arg1 fromAweme:(id)arg2 commentId:(id)arg3 pageType:(id)arg4 enterFrom:(id)arg5 enterMethod:(id)arg6 index:(long long)arg7;
+ (void)trackClickCommentAndRepostWithAweme:(id)arg1 fromAweme:(id)arg2 pageType:(id)arg3 enterFrom:(id)arg4 enterMethod:(id)arg5;
+ (void)trackPostCommentWithAweme:(id)arg1 fromAweme:(id)arg2 pageType:(id)arg3 enterFrom:(id)arg4 replyCommentID:(id)arg5 replyUid:(id)arg6 extraLog:(id)arg7;
+ (void)trackPostCommentWithAweme:(id)arg1 fromAweme:(id)arg2 pageType:(id)arg3 enterFrom:(id)arg4 replyCommentID:(id)arg5 replyUid:(id)arg6;
+ (void)trackRepostRequestWithAweme:(id)arg1 fromAweme:(id)arg2 pageType:(id)arg3 enterFrom:(id)arg4 enterMethod:(id)arg5 isSuccess:(_Bool)arg6 extraLogDict:(id)arg7;
+ (void)trackRepostReuqestWithAweme:(id)arg1 fromAweme:(id)arg2 pageType:(id)arg3 enterFrom:(id)arg4 enterMethod:(id)arg5 isSuccess:(_Bool)arg6;
+ (void)trackRepostClickWithAweme:(id)arg1 fromAweme:(id)arg2 pageType:(id)arg3 enterFrom:(id)arg4 enterMethod:(id)arg5;

@end
