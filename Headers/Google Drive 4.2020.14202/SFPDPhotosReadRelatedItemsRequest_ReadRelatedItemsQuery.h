//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSString, PhotosMCCollectionId;

@interface SFPDPhotosReadRelatedItemsRequest_ReadRelatedItemsQuery : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *authKey; // @dynamic authKey;
@property(nonatomic) int dismissType; // @dynamic dismissType;
@property(nonatomic) _Bool hasAuthKey; // @dynamic hasAuthKey;
@property(nonatomic) _Bool hasDismissType; // @dynamic hasDismissType;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasMaxItems; // @dynamic hasMaxItems;
@property(nonatomic) _Bool hasQueryType; // @dynamic hasQueryType;
@property(retain, nonatomic) PhotosMCCollectionId *id_p; // @dynamic id_p;
@property(nonatomic) int maxItems; // @dynamic maxItems;
@property(nonatomic) int queryType; // @dynamic queryType;

@end

