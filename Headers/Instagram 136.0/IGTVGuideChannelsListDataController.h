//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableOrderedSet;
@protocol IGTVChannelDataSourceType;

@interface IGTVGuideChannelsListDataController : NSObject
{
    NSMutableOrderedSet *_channelDataSourcesOrderedSet;
    NSArray *_channelDataSources;
    id <IGTVChannelDataSourceType> _myChannelDataSource;
}

@property(readonly, nonatomic) id <IGTVChannelDataSourceType> myChannelDataSource; // @synthesize myChannelDataSource=_myChannelDataSource;
@property(readonly, nonatomic) NSArray *channelDataSources; // @synthesize channelDataSources=_channelDataSources;
- (void).cxx_destruct;
- (void)updateWithTVGuideChannelDataSources:(id)arg1 myChannelDataSource:(id)arg2;
- (id)initWithUserSession:(id)arg1;

@end

