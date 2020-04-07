//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropboxExtensions/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, NSURLRequest;

@protocol LogUploadDelegate <NSObject>
- (NSDictionary *)uploadParametersWithLogLevel:(unsigned long long)arg1;

@optional
+ (NSString *)uploadWithURLRequest:(NSURLRequest *)arg1 withData:(NSData *)arg2 forLogFilePath:(NSString *)arg3;
+ (NSString *)logPoolPathForUploadingNow:(_Bool)arg1;
@end
