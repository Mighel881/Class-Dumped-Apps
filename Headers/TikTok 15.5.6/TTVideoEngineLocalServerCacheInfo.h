//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TTVideoEngineLocalServerCacheInfo : NSObject
{
    long long _mediaSize;
    long long _cacheSizeFromZero;
    NSString *_localFilePath;
}

@property(copy, nonatomic) NSString *localFilePath; // @synthesize localFilePath=_localFilePath;
@property(nonatomic) long long cacheSizeFromZero; // @synthesize cacheSizeFromZero=_cacheSizeFromZero;
@property(nonatomic) long long mediaSize; // @synthesize mediaSize=_mediaSize;
- (void).cxx_destruct;

@end
