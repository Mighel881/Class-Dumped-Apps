//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt64Array, HTSLiveImage, HTSLiveText;

@interface HTSLiveMemberMessage_EffectConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long animAssetId; // @dynamic animAssetId;
@property(nonatomic) long long avatarPos; // @dynamic avatarPos;
@property(retain, nonatomic) HTSLiveImage *badge; // @dynamic badge;
@property(retain, nonatomic) GPBInt64Array *flexSettingArrayArray; // @dynamic flexSettingArrayArray;
@property(readonly, nonatomic) unsigned long long flexSettingArrayArray_Count; // @dynamic flexSettingArrayArray_Count;
@property(nonatomic) _Bool hasBadge; // @dynamic hasBadge;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) _Bool hasTextIcon; // @dynamic hasTextIcon;
@property(retain, nonatomic) HTSLiveImage *icon; // @dynamic icon;
@property(nonatomic) int stayTime; // @dynamic stayTime;
@property(retain, nonatomic) HTSLiveText *text; // @dynamic text;
@property(retain, nonatomic) HTSLiveImage *textIcon; // @dynamic textIcon;
@property(nonatomic) long long type; // @dynamic type;

@end

