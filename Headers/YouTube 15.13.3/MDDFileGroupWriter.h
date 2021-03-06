//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MDDFileGroupReader;
@protocol MDDConfigurationFlags><MDDConfigurationLogger><MDDConfigurationBundleID><MDDConfigurationInstanceID><MDDConfigurationStorageEnvironment;

@interface MDDFileGroupWriter : NSObject
{
    MDDFileGroupReader *_reader;
    id <MDDConfigurationFlags><MDDConfigurationLogger><MDDConfigurationBundleID><MDDConfigurationInstanceID><MDDConfigurationStorageEnvironment> _configuration;
    NSObject *_lock;
}

+ (id)writerWithReader:(id)arg1 configuration:(id)arg2;
- (void).cxx_destruct;
- (_Bool)writeDataFileGroup:(id)arg1;
- (_Bool)writeFileLevelMetadata:(id)arg1;
- (id)initWithReader:(id)arg1 configuration:(id)arg2;

@end

