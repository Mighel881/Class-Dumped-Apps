//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PDLDeviceContactsDatabaseIngestor : NSObject
{
}

+ (void)ingestContactMethodFieldTokens:(id)arg1 tokenFieldType:(unsigned long long)arg2 contactIdentifier:(id)arg3 databaseManager:(id)arg4;
+ (id)aggregateEmailAddressesForContact:(id)arg1;
+ (void)ingestProtoSerializedContact:(id)arg1 databaseManager:(id)arg2 clientConfig:(id)arg3 experimentsService:(id)arg4;
+ (_Bool)ingestFromDeviceContactsService:(id)arg1 databaseManager:(id)arg2 metricsLogger:(id)arg3 clientConfig:(id)arg4 experimentsService:(id)arg5;

@end

