//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class HTSLiveBannerCollapse, HTSLiveImage, NSMutableArray, NSString;

@interface HTSLiveBannerContainer : GPBMessage
{
}

+ (id)descriptor;
- (id)mapToListModel;

// Remaining properties
@property(retain, nonatomic) HTSLiveImage *animationImage; // @dynamic animationImage;
@property(retain, nonatomic) NSMutableArray *bannerListArray; // @dynamic bannerListArray;
@property(readonly, nonatomic) unsigned long long bannerListArray_Count; // @dynamic bannerListArray_Count;
@property(retain, nonatomic) HTSLiveBannerCollapse *collapse; // @dynamic collapse;
@property(nonatomic) long long containerHeight; // @dynamic containerHeight;
@property(copy, nonatomic) NSString *containerURL; // @dynamic containerURL;
@property(nonatomic) long long containerWidth; // @dynamic containerWidth;
@property(nonatomic) _Bool hasAnimationImage; // @dynamic hasAnimationImage;
@property(nonatomic) _Bool hasCollapse; // @dynamic hasCollapse;

@end
