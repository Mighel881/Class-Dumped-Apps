//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSURL;

@protocol BDLImageProtocol <NSObject>
+ (id)sharedInstance;
- (void)requestImage:(NSURL *)arg1 channel:(NSString *)arg2 path:(NSString *)arg3 complete:(void (^)(UIImage *, NSError *))arg4;

@optional
- (void)chooseImageWithMaxCount:(long long)arg1 sourceType:(long long)arg2 sizeType:(long long)arg3 completion:(void (^)(NSArray *))arg4;
- (void)previewImageWithURLs:(NSArray *)arg1 startImageIndex:(long long)arg2;
@end
