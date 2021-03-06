//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface GMUUploadFeatureFlags : NSObject <NSCopying>
{
    _Bool _shouldAllowAnalytics;
    _Bool _shouldEnableCNDEBackup;
    _Bool _shouldEnableHEIFTranscodes;
    _Bool _shouldApplyOqGuardrails;
    unsigned long long _maximumNumberOfBackgroundUploadFiles;
}

@property(nonatomic) _Bool shouldApplyOqGuardrails; // @synthesize shouldApplyOqGuardrails=_shouldApplyOqGuardrails;
@property(nonatomic) _Bool shouldEnableHEIFTranscodes; // @synthesize shouldEnableHEIFTranscodes=_shouldEnableHEIFTranscodes;
@property(nonatomic) unsigned long long maximumNumberOfBackgroundUploadFiles; // @synthesize maximumNumberOfBackgroundUploadFiles=_maximumNumberOfBackgroundUploadFiles;
@property(nonatomic) _Bool shouldEnableCNDEBackup; // @synthesize shouldEnableCNDEBackup=_shouldEnableCNDEBackup;
@property(nonatomic) _Bool shouldAllowAnalytics; // @synthesize shouldAllowAnalytics=_shouldAllowAnalytics;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

