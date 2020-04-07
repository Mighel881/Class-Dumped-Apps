//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDatabaseQueue, NSString;

@interface AWEPOIDebugStorage : NSObject
{
    NSString *_debugDirectory;
    NSString *_storageInfoFilePath;
    FMDatabaseQueue *_dbQueue;
}

+ (id)sharedStorage;
@property(retain, nonatomic) FMDatabaseQueue *dbQueue; // @synthesize dbQueue=_dbQueue;
@property(retain, nonatomic) NSString *storageInfoFilePath; // @synthesize storageInfoFilePath=_storageInfoFilePath;
@property(retain, nonatomic) NSString *debugDirectory; // @synthesize debugDirectory=_debugDirectory;
- (void).cxx_destruct;
- (id)poiItemWithPOI:(id)arg1 type:(int)arg2;
- (id)allPoiItemsWithType:(int)arg1;
- (void)removePOI:(id)arg1 type:(int)arg2;
- (void)updatePOI:(id)arg1 type:(int)arg2 detail:(id)arg3;
- (void)setupDatabase;
- (id)init;

@end
