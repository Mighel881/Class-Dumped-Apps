//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PTVRankedGlobalCategoriesData;

@interface PTVChannelsAndCategories : NSObject
{
    NSArray *_channels;
    PTVRankedGlobalCategoriesData *_categories;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PTVRankedGlobalCategoriesData *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) NSArray *channels; // @synthesize channels=_channels;
@property(readonly, nonatomic) NSArray *allBroadcasts;
@property(readonly, nonatomic) unsigned long long count;

@end

