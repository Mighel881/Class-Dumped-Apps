//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, UrlStruct;

@interface RoomTypeStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) UrlStruct *coverURL; // @dynamic coverURL;
@property(copy, nonatomic) NSString *detailURL; // @dynamic detailURL;
@property(nonatomic) _Bool hasCoverURL; // @dynamic hasCoverURL;
@property(nonatomic) _Bool hasDetailURL; // @dynamic hasDetailURL;
@property(nonatomic) _Bool hasHotelId; // @dynamic hasHotelId;
@property(nonatomic) _Bool hasHotelName; // @dynamic hasHotelName;
@property(nonatomic) _Bool hasPrice; // @dynamic hasPrice;
@property(nonatomic) _Bool hasRoomtypeId; // @dynamic hasRoomtypeId;
@property(nonatomic) _Bool hasRoomtypeName; // @dynamic hasRoomtypeName;
@property(nonatomic) long long hotelId; // @dynamic hotelId;
@property(copy, nonatomic) NSString *hotelName; // @dynamic hotelName;
@property(nonatomic) long long price; // @dynamic price;
@property(nonatomic) long long roomtypeId; // @dynamic roomtypeId;
@property(copy, nonatomic) NSString *roomtypeName; // @dynamic roomtypeName;

@end
