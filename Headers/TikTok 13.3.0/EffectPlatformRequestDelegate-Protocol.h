//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, NSURL;

@protocol EffectPlatformRequestDelegate <NSObject>
- (void)downloadFileWithURLString:(NSString *)arg1 downloadPath:(NSURL *)arg2 downloadProgress:(id *)arg3 completion:(void (^)(NSError *, NSURL *, NSDictionary *))arg4;
- (void)requestWithURLString:(NSString *)arg1 parameters:(NSDictionary *)arg2 headerFields:(NSDictionary *)arg3 httpMethod:(NSString *)arg4 completion:(void (^)(NSError *, id))arg5;
@end
