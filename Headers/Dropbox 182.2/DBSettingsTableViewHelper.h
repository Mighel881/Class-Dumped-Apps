//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBSettingsTableViewHelper : NSObject
{
}

+ (id)db_consumedBytesQuotaStringWithQuota:(id)arg1;
+ (id)db_bytesQuotaStringWithQuota:(id)arg1;
+ (id)db_percentQuotaStringWithQuota:(id)arg1;
+ (id)memberSpaceLimitsTeamCellLabelString;
+ (id)memberSpaceLimitsMemberCellLabelString;
+ (id)planSectionFooterForUserState:(id)arg1;
+ (id)db_overQuotaSyncingStopsFooterMessage;
+ (id)memberSpaceLimitsCellFooterForUserState:(id)arg1;
+ (id)quotaCellFooterForUserState:(id)arg1;
+ (id)quotaLabelString;
+ (_Bool)shouldShowTeamLockedStateForUserState:(id)arg1;
+ (id)lockedStateQuotaDetailTextWithQuota:(id)arg1 isNegative:(_Bool *)arg2;
+ (id)quotaDetailTextWithQuota:(id)arg1 showQuotaAsPercent:(_Bool)arg2 isNegative:(_Bool *)arg3;

@end
