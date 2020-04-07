//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DBAccountInfo, NSString;

@protocol DBAccount
- (_Bool)isLinked;
@property(nonatomic, readonly) NSString *userId;
@property(nonatomic, readonly) NSString *cacheId;
@property(nonatomic, readonly) NSString *tokenSecret;
@property(nonatomic, readonly) NSString *token;
@property(nonatomic, readonly) DBAccountInfo *info;

// Remaining properties
@property(nonatomic, readonly) _Bool linked;
@end
