//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRPlus_Activity_Object_Attachments_Item_Embed, GTLRPlus_Activity_Object_Attachments_Item_FullImage, GTLRPlus_Activity_Object_Attachments_Item_Image, NSArray, NSString;

@interface GTLRPlus_Activity_Object_Attachments_Item : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;
+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(copy, nonatomic) NSString *content; // @dynamic content;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(retain, nonatomic) GTLRPlus_Activity_Object_Attachments_Item_Embed *embed; // @dynamic embed;
@property(retain, nonatomic) GTLRPlus_Activity_Object_Attachments_Item_FullImage *fullImage; // @dynamic fullImage;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) GTLRPlus_Activity_Object_Attachments_Item_Image *image; // @dynamic image;
@property(copy, nonatomic) NSString *objectType; // @dynamic objectType;
@property(retain, nonatomic) NSArray *thumbnails; // @dynamic thumbnails;
@property(copy, nonatomic) NSString *url; // @dynamic url;

@end

