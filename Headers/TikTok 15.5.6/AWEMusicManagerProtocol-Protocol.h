//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol AWEMusicManagerProtocol <NSObject>
+ (void)requestMusicRelatedItemsWithID:(NSString *)arg1 type:(unsigned long long)arg2 completion:(void (^)(AWEMusicDetailResponse *, NSError *))arg3;
+ (void)requestMusicItemWithID:(NSString *)arg1 completion:(void (^)(AWEMusicModel *, NSError *))arg2;
@end
