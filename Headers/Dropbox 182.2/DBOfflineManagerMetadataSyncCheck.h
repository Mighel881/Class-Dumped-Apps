//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBOfflineServingMetadataResetAtLaunchChecking-Protocol.h"

@class NSNumber, NSString;

@interface DBOfflineManagerMetadataSyncCheck : NSObject <DBOfflineServingMetadataResetAtLaunchChecking>
{
    NSString *_userId;
    _Bool _didMetadataDatabaseExistAtLaunch;
    long long _deltaSyncHash;
    NSNumber *_storedDeltaSyncHash;
}

- (void).cxx_destruct;
- (void)didResetMetadataTrackingDataAtLaunch;
- (_Bool)shouldResetMetadataTrackingDataAtLaunch;
- (id)initWithUserId:(id)arg1 didMetadataDatabaseExistAtLaunch:(_Bool)arg2 deltaConfig:(id)arg3;

@end

