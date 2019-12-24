//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TTMonitorTracker : NSObject
{
    NSMutableArray *_trackers;
}

+ (id)logTypeStrForType:(long long)arg1;
@property(retain, nonatomic) NSMutableArray *trackers; // @synthesize trackers=_trackers;
- (void).cxx_destruct;
- (void)clear;
- (void)applicationWillTerminate:(id)arg1;
- (void)debugRealEvent:(id)arg1 label:(id)arg2 traceCode:(id)arg3 userInfo:(id)arg4;
- (void)trackData:(id)arg1 logType:(id)arg2;
- (void)trackData:(id)arg1 type:(long long)arg2;
- (id)monitorTrackers;
- (unsigned long long)trackItemsCount;
- (void)addImageMonitorItems:(id)arg1;
- (void)addTrackItems:(id)arg1;
- (void)removeTrackItems:(id)arg1;
- (_Bool)isValideDataForTracks:(id)arg1;
- (id)init;
- (void)dealloc;

@end
