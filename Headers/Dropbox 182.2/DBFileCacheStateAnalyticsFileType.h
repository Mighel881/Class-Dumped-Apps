//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DBFileCacheStateAnalyticsFileType : NSObject
{
    NSString *_extension;
    long long _totalFileSize;
    unsigned long long _numberOfFiles;
}

@property(nonatomic) unsigned long long numberOfFiles; // @synthesize numberOfFiles=_numberOfFiles;
@property(nonatomic) long long totalFileSize; // @synthesize totalFileSize=_totalFileSize;
@property(copy, nonatomic) NSString *extension; // @synthesize extension=_extension;
- (void).cxx_destruct;

@end
